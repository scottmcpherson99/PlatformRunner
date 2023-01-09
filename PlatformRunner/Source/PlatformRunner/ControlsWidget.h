// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ControlsWidget.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API UControlsWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Anti-Aliasing>
	// button that will set the anti aliasing quality to minimum
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* AntiAliasing_Minimum_Button;

	// button that will set the anti aliasing quality to low
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* AntiAliasing_Low_Button;

	// button that will set the anti aliasing quality to medium
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* AntiAliasing_Medium_Button;

	// button that will set the anti aliasing quality to high
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* AntiAliasing_High_Button;

	// set the anti aliasing quality to minimum
	UFUNCTION()
		void OnAntiAliasingMinimumClicked();

	// set the anti aliasing quality to low
	UFUNCTION()
		void OnAntiAliasingLowClicked();

	// set the anti aliasing quality to medium
	UFUNCTION()
		void OnAntiAliasingMediumClicked();

	// set the anti aliasing quality to high
	UFUNCTION()
		void OnAntiAliasingHighClicked();
	// </Anti-Aliasing>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Buttons>
	// button to return to the mainmenu widget
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* BackButton;

	// display the main menu widget
	UFUNCTION()
		void OnBackButtonClicked();
	
	// <Buttons> 
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UControlsWidget>
	virtual void NativeConstruct() override;
	// </UControlsWidget>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
