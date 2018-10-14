// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HodunkGameMode.h"
#include "HodunkHUD.h"
#include "HodunkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHodunkGameMode::AHodunkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHodunkHUD::StaticClass();
}
