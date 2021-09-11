// Copyright Epic Games, Inc. All Rights Reserved.

#include "JTestGameMode.h"
#include "JTestHUD.h"
#include "JTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJTestGameMode::AJTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJTestHUD::StaticClass();
}
