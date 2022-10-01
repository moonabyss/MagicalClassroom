// Copyright Epic Games, Inc. All Rights Reserved.

#include "MagicalClassroomGameMode.h"
#include "MagicalClassroomHUD.h"
#include "MagicalClassroomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagicalClassroomGameMode::AMagicalClassroomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMagicalClassroomHUD::StaticClass();
}
