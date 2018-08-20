// Fill out your copyright notice in the Description page of Project Settings.

#include "GomerGame.h"
#include "MainMenuGameModeBase.h"

AMainMenuGameModeBase::AMainMenuGameModeBase()
{
	// set HUD class to our Blueprinted HUD
	static ConstructorHelpers::FObjectFinder<UClass> HudObject(TEXT("Blueprint'/Game/GomerContent/UMG/MainMenuHUD.MainMenuHUD_C'"));
	if (HudObject.Object != NULL)
	{
		HUDClass = HudObject.Object;
	}

	// set Player Controller class to our Blueprinted Virtual Player Controller
	static ConstructorHelpers::FObjectFinder<UClass> PlayerControllerObject(TEXT("Blueprint'/Game/GomerContent/Blueprints/VirtualPlayerController.VirtualPlayerController_C'"));
	if (PlayerControllerObject.Object != NULL)
	{
		PlayerControllerClass = PlayerControllerObject.Object;
	}
}


