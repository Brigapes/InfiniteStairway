// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "InfiniteStairwayGameMode.h"
#include "InfiniteStairwayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInfiniteStairwayGameMode::AInfiniteStairwayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
