// Copyright Epic Games, Inc. All Rights Reserved.

#include "RenderTestGameMode.h"
#include "RenderTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARenderTestGameMode::ARenderTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
