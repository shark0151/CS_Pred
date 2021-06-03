// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "GameFramework/GameStateBase.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
}

FMoveData AMyPawn::PackData()
{
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	FMoveData x = FMoveData{
	GetWorld()->GetWorld()->GetGameState()->GetServerWorldTimeSeconds(),
	GetWorld()->DeltaTimeSeconds, //deltatime speedhack
	GetActorLocation(),
	GetActorRotation(),
	GetVelocity(),
	FVector(GetInputAxisValue("MoveForward"),GetInputAxisValue("MoveRight"),0),
	YawRotation
	};

	return x;
}

void AMyPawn::ServerMovePacked_Implementation(const FMoveData PackedBits)
{
	//buffer and sort input updates from the client. perhaps it would make more sonse to store them in SavedMoves but anyway
	// 
	//for now there is no way to handle dropped packets. some say to continuously send the input until an ok from the server
	//just sending the timestamp back would probably be enough to signal a stop. I might need another buffer though.. and to check for duplicates
	//It's what causes the overshooting sometimes so don't look elsewhere
	
	//ClientMoveResponsePacked(PackedBits.TimeStamp);
	
	if (AckMove.Find(PackedBits.TimeStamp) == INDEX_NONE)
	{
		AckMove.Add(PackedBits.TimeStamp);
		//NetSavedMoves.RemoveAll([PackedBits](const FMoveData& a) { return a.TimeStamp == PackedBits.TimeStamp; });
		NetSavedMoves.Add(PackedBits);
		NetSavedMoves.Sort([](const FMoveData& a, const FMoveData& b) { return a.TimeStamp < b.TimeStamp; });
	}

	if (AckMove.Num() > 200)
		AckMove.RemoveAt(0);
}

bool AMyPawn::ServerMovePacked_Validate(const FMoveData PackedBits)
{
	return true;
}


void AMyPawn::ReplicateOnClients_Implementation(const FMoveData PackedBits)
{
	//buffer and sort updates from the server. obviously we don't need to store them if we're on the server
	if (GetLocalRole() == ROLE_SimulatedProxy || GetLocalRole() == ROLE_AutonomousProxy)
	{
		NetSavedMoves.Add(PackedBits);
		NetSavedMoves.Sort([](const FMoveData& a, const FMoveData& b) { return a.TimeStamp < b.TimeStamp; });
	}
}

bool AMyPawn::ReplicateOnClients_Validate(const FMoveData PackedBits)
{
	return true;
}


void AMyPawn::ClientMoveResponsePacked_Implementation(float LastTick)
{
	//don't I already send back the moves with timestamps?
	ToSend.RemoveAll([LastTick](const FMoveData& a) { return a.TimeStamp == LastTick; });
	//replaced by ReplicateOnClients
	// 
	//NetSavedMoves.Add(PackedBits);
	//NetSavedMoves.Sort([](const FMoveData& a, const FMoveData& b) { return a.TimeStamp < b.TimeStamp; });
	//ServerState = PackedBits;
}

bool AMyPawn::ClientMoveResponsePacked_Validate(float LastTick)
{
	return true;
}


void AMyPawn::MoveCharacter(float DeltaSeconds)
{
	if (GetLocalRole() == ROLE_SimulatedProxy)
	{
		//apply input from the server immediately, since with a buffer of 10 it's a noticeable delay
		//also it's less important if it stutters slightly due to out of order packets
		if (NetSavedMoves.Num() > 0)
		{
			FMoveData PlayMove = NetSavedMoves[0];
			NewMove = PlayMove;
			const FVector DirectionX = FRotationMatrix(PlayMove.ControllRotation).GetUnitAxis(EAxis::X);
			const FVector DirectionY = FRotationMatrix(PlayMove.ControllRotation).GetUnitAxis(EAxis::Y);
			AddActorWorldOffset(DirectionX * PlayMove.Input.X * BaseSpeed * PlayMove.DeltaTime);
			AddActorWorldOffset(DirectionY * PlayMove.Input.Y * BaseSpeed * PlayMove.DeltaTime);
			SetActorRotation(UKismetMathLibrary::RInterpTo(GetActorRotation(), PlayMove.ControllRotation, PlayMove.DeltaTime, 20));

			NetSavedMoves.RemoveAt(0, 1, true);
		}
		if ((NewMove.Location - GetActorLocation()).SizeSquared() > 0.00001f)
		{
			SetActorLocation(UKismetMathLibrary::VInterpTo(GetActorLocation(), NewMove.Location, DeltaSeconds, 10));
		}
	}

	else if (GetLocalRole() == ROLE_Authority)
	{
		//apply input from the player and send back results. slight buffer used to keep the inputs in order
		if (!IsLocallyControlled())
		{
			if (NetSavedMoves.Num() > 2) //I wouldn't go higher that 10
			{
				//should do something when getting an update older than the current one.
				FMoveData PlayMove = NetSavedMoves[0];
				const FVector DirectionX = FRotationMatrix(PlayMove.ControllRotation).GetUnitAxis(EAxis::X);
				const FVector DirectionY = FRotationMatrix(PlayMove.ControllRotation).GetUnitAxis(EAxis::Y);
				AddActorWorldOffset(DirectionX * PlayMove.Input.X * BaseSpeed * PlayMove.DeltaTime);
				AddActorWorldOffset(DirectionY * PlayMove.Input.Y * BaseSpeed * PlayMove.DeltaTime);
				SetActorRotation(UKismetMathLibrary::RInterpTo(GetActorRotation(), PlayMove.ControllRotation, PlayMove.DeltaTime, 20));
				FMoveData UpdatedMove = PlayMove;
				UpdatedMove.Location = GetActorLocation();
				UpdatedMove.Rotation = GetActorRotation();
				UpdatedMove.TimeStamp = UpdatedMove.TimeStamp + UpdatedMove.DeltaTime;
				ReplicateOnClients(UpdatedMove); //moved here instead of ServerMove since proxies will recieve the updated and accurate position instead of the prediction
				NetSavedMoves.RemoveAt(0);
			}
		}
		else
		{
			//only used if the player is also the host
			NetSavedMoves.Empty();
			ReplicateOnClients(PackData());
		}

	}

	else if (GetLocalRole() == ROLE_AutonomousProxy && IsNetMode(NM_Client))
	{
		if (NetSavedMoves.Num() > 2)
		{
			ServerState = NetSavedMoves[NetSavedMoves.Num() - 1]; //only use the latest update
			NetSavedMoves.RemoveAt(0);
		}
		if (ServerState.DeltaTime != 0) //if deltaTime is 0 then something is really wrong
		{
			float bufferTime = 999;
			int bufferindex = 0;

			for (int currentindex = 0; currentindex < SavedMoves.Num(); currentindex++)
			{
				//get the buffered move closest to the last server update
				float delta = FMath::Abs(SavedMoves[currentindex].TimeStamp - ServerState.TimeStamp);
				if (delta < bufferTime)
				{
					bufferTime = delta;
					bufferindex = currentindex;
				}
			}
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Green, ServerState.Location.ToString());
				GEngine->AddOnScreenDebugMessage(-1, 0.0f, FColor::Red, SavedMoves[bufferindex].Location.ToString());
			}
			if ((ServerState.Location - SavedMoves[bufferindex].Location).SizeSquared() > 0.00001f) //probably too tight since net locations only have two decimals
			{
				PrevPos = GetActorLocation();
				SetActorLocation(ServerState.Location); 
				SetActorRotation(ServerState.Rotation);
				int i = bufferindex;
				while (i < SavedMoves.Num()) //replay all the moves from the last server update until the present
				{
					FMoveData RewindMove = SavedMoves[i];
					const FVector DirectionX = FRotationMatrix(RewindMove.ControllRotation).GetUnitAxis(EAxis::X);
					const FVector DirectionY = FRotationMatrix(RewindMove.ControllRotation).GetUnitAxis(EAxis::Y);
					AddActorWorldOffset(DirectionX * RewindMove.Input.X * BaseSpeed * RewindMove.DeltaTime);
					AddActorWorldOffset(DirectionY * RewindMove.Input.Y * BaseSpeed * RewindMove.DeltaTime);
					SetActorRotation(UKismetMathLibrary::RInterpTo(GetActorRotation(), RewindMove.ControllRotation, RewindMove.DeltaTime, 20));
					i++;
				}
				PrevPos = PrevPos - GetActorLocation(); //used for smoothing

			}

			SavedMoves.RemoveAt(0, bufferindex, true); //remove inputs that are older than the server update
		}
		if (PrevPos.Size() < 200.f) //here is the smoothing
		{
			PrevPos = UKismetMathLibrary::VInterpTo(PrevPos, FVector::ZeroVector, DeltaSeconds, 20);
			AddActorWorldOffset(PrevPos);
		}
		else
			PrevPos = FVector{ 0,0,0 };

	}
	else
	{
		//probably never happens but might prevent a memory leak
		SavedMoves.Empty();
		NetSavedMoves.Empty();
	}

}


// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	if (GetLocalRole() > ROLE_SimulatedProxy && IsLocallyControlled())
	{
		FMoveData Move = PackData();
		
		
		SavedMoves.Add(Move);
		ServerMovePacked(Move);
		
		/*
		ToSend.Add(Move);
		for (int i = 0; i < ToSend.Num(); i++)
		{
			ServerMovePacked(ToSend[i]);
		}
		*/
	}
	MoveCharacter(DeltaTime);

	
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyPawn::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMyPawn::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyPawn::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyPawn::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyPawn::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AMyPawn::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AMyPawn::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AMyPawn::OnResetVR);
}

void AMyPawn::Jump()
{
	bPressedJump = true;
	JumpKeyHoldTime = 0.0f;
}

void AMyPawn::StopJumping()
{
	bPressedJump = false;
	//ResetJumpState();
}

void AMyPawn::OnResetVR()
{
	// If CS_Pred is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in CS_Pred.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	//UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AMyPawn::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void AMyPawn::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void AMyPawn::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyPawn::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMyPawn::MoveForward(float Value)
{

	// find out which way is forward
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	// get forward vector
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddActorWorldOffset(Direction * Value * BaseSpeed * GetWorld()->GetDeltaSeconds());

}

void AMyPawn::MoveRight(float Value)
{

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	// get right vector 
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	// add movement in that direction
	AddActorWorldOffset(Direction * Value * BaseSpeed * GetWorld()->GetDeltaSeconds());

}


