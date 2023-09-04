// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaserReflectionGameMode.h"
#include "LaserReflectionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaserReflectionGameMode::ALaserReflectionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
