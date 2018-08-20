// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "GomerGame.h"
#include "GomerGameGameMode.h"
#include "Engine.h"

AGomerGameGameMode::AGomerGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FObjectFinder<UClass> PlayerPawnObject(TEXT("Blueprint'/Game/GomerContent/Blueprints/BP_GomerCharacter.BP_GomerCharacter_C'"));
	if (PlayerPawnObject.Object != NULL)
	{
		DefaultPawnClass = PlayerPawnObject.Object;
	}
}
