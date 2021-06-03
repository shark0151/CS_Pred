// Copyright Epic Games, Inc. All Rights Reserved.

#include "CS_PredGameMode.h"
#include "CS_PredCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACS_PredGameMode::ACS_PredGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
