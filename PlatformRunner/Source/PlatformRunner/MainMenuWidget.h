// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Buttons>
	// button to start a new game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* StartGameButton;

	// start a new game
	UFUNCTION()
		void OnStartGameButtonClicked();

	// button to display the settings widget
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* SettingsButton;

	// display the settings widget
	UFUNCTION()
		void OnSettingsButtonClicked();

	// button to exit the application
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ExitButton;

	// exit the application
	UFUNCTION()
		void OnExitButtonClicked();

	// <Buttons> 
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UMainMenuWidget>
	virtual void NativeConstruct() override;
	// </UMainMenuWidget>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
