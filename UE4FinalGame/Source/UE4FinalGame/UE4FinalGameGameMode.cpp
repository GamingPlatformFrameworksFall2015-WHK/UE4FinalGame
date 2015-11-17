// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UE4FinalGame.h"
#include "UE4FinalGameGameMode.h"
#include "UE4FinalGameHUD.h"
#include "UE4FinalGameCharacter.h"

AUE4FinalGameGameMode::AUE4FinalGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4FinalGameHUD::StaticClass();
}
