// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "MainMenuGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GOMERGAME_API AMainMenuGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = HUDClass, meta = (AllowPrivateAccess = "true"))
	UClass* bpClass1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = PlayerControllerClass, meta = (AllowPrivateAccess = "true"))
	UClass* bpClass2;
	
	public:
		AMainMenuGameModeBase();
};
