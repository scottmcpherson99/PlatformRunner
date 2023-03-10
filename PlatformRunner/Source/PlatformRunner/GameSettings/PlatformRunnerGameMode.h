// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlatformRunnerGameMode.generated.h"

UCLASS(minimalapi)
class APlatformRunnerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// sets the default values
	APlatformRunnerGameMode();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <APlatformRunnerGameMode>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// </APlatformRunnerGameMode>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Tiles>
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<class APlatformBase> startingPlatform;
	// </Tiles>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

};



