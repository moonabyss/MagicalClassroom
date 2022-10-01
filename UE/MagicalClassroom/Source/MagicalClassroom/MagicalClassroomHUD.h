// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MagicalClassroomHUD.generated.h"

UCLASS()
class AMagicalClassroomHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMagicalClassroomHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

