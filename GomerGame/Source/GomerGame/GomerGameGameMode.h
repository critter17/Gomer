// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameModeBase.h"
#include "GomerGameGameMode.generated.h"

UCLASS(minimalapi)
class AGomerGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = DefaultPawnClass, meta = (AllowPrivateAccess = "true"))
	UClass* bpClass;

public:
	AGomerGameGameMode();
};



