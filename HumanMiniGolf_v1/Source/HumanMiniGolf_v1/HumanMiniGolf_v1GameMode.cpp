// Copyright Epic Games, Inc. All Rights Reserved.

#include "HumanMiniGolf_v1GameMode.h"
#include "HumanMiniGolf_v1HUD.h"
#include "HumanMiniGolf_v1Character.h"
#include "UObject/ConstructorHelpers.h"

AHumanMiniGolf_v1GameMode::AHumanMiniGolf_v1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHumanMiniGolf_v1HUD::StaticClass();
}
