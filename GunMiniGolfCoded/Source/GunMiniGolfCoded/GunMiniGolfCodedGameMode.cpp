// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunMiniGolfCodedGameMode.h"
#include "GunMiniGolfCodedHUD.h"
#include "GunMiniGolfCodedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGunMiniGolfCodedGameMode::AGunMiniGolfCodedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGunMiniGolfCodedHUD::StaticClass();
}
