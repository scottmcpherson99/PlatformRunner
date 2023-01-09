// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameModeBase.generated.h"

UENUM(BlueprintType)
enum class EDisplayWidget : uint8 {
	ENone UMETA(DisplayName = "None"),
	EMainMenuWidget UMETA(DisplayName = "MainMenuWidget"),
	EControlsWidget UMETA(DisplayName = "EControlsWidget")
};
/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API AMainMenuGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	// sets the default values
	AMainMenuGameModeBase();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <APlatformRunnerGameMode>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// </APlatformRunnerGameMode>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Widgets>
	// switch the widget displayed
	void SwitchWidget(EDisplayWidget displayWidget_);
	// </Widgets>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Widgets>
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> MainMenuWidget;

	//widget class to use for our control screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> ControlsWidget;
	// </Widgets>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
