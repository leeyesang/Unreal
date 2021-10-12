// Copyright Epic Games, Inc. All Rights Reserved.

#include "My_projectGameMode.h"
#include "My_projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMy_projectGameMode::AMy_projectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
