// Copyright Epic Games, Inc. All Rights Reserved.

#include "MinecraftGameMode.h"
#include "MinecraftCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMinecraftGameMode::AMinecraftGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
