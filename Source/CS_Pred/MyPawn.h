// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Kismet/KismetMathLibrary.h"

#include "MyPawn.generated.h"


USTRUCT()
struct FMoveData
{
	GENERATED_BODY()

	UPROPERTY()
	float TimeStamp;
	UPROPERTY()
	float DeltaTime;
	UPROPERTY()
	FVector_NetQuantize100 Location;
	UPROPERTY()
	FRotator Rotation;
	UPROPERTY()
	FVector_NetQuantize10 Velocity;
	UPROPERTY()
	FVector_NetQuantizeNormal Input;
	UPROPERTY()
	FRotator ControllRotation;	

};

UCLASS()
class CS_PRED_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	TArray<FMoveData> SavedMoves;
	TArray<FMoveData> NetSavedMoves;
	TArray<FMoveData> ToSend;
	TArray<float> AckMove;
	float LastServerTick;
	FMoveData NewMove;
	FMoveData ServerState;
	FVector PrevPos = FVector{ 0, 0, 0 };
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate = 45;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate = 45;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement)
		float BaseSpeed = 2000;

	bool bPressedJump = false;
	float JumpKeyHoldTime = 0.0f;

	FMoveData PackData();
	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	void MoveCharacter(float DeltaSeconds);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	void Jump();
	void StopJumping();

	UFUNCTION(Unreliable, Server, WithValidation)
		void ServerMovePacked(const FMoveData PackedBits);
	void ServerMovePacked_Implementation(const FMoveData PackedBits);
	bool ServerMovePacked_Validate(const FMoveData PackedBits);

	UFUNCTION(Unreliable, Client, WithValidation)
		void ClientMoveResponsePacked(float LastTick);
	void ClientMoveResponsePacked_Implementation(float LastTick);
	bool ClientMoveResponsePacked_Validate(float LastTick);

	UFUNCTION(Unreliable, NetMulticast, WithValidation)
		void ReplicateOnClients(const FMoveData PackedBits);
	void ReplicateOnClients_Implementation(const FMoveData PackedBits);
	bool ReplicateOnClients_Validate(const FMoveData PackedBits);

	//////////////////////////////////////////////////////////////////////////
	// Client RPC that passes through to CharacterMovement (avoids RPC overhead for components). // Pass through RPC call to character on server, there is less RPC bandwidth overhead when used on an Actor rather than a Component.
	//////////////////////////////////////////////////////////////////////////

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
