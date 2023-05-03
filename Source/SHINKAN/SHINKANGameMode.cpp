// Copyright Epic Games, Inc. All Rights Reserved.

#include "SHINKANGameMode.h"
#include "SHINKANCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASHINKANGameMode::ASHINKANGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
