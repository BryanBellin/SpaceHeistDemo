// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpaceHeistDemoGameMode.h"
#include "SpaceHeistDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpaceHeistDemoGameMode::ASpaceHeistDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
