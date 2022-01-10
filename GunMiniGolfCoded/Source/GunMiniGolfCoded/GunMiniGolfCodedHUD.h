// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GunMiniGolfCodedHUD.generated.h"

UCLASS()
class AGunMiniGolfCodedHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGunMiniGolfCodedHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

