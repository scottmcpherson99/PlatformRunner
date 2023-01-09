// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlsWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameUserSettings.h"
#include "PlatformRunner/GameSettings/MainMenuGameModeBase.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Anti-Aliasing>
void UControlsWidget::OnAntiAliasingMinimumClicked()
{
	// set the anti-aliasing to minimum
	UGameUserSettings* gameUserSettings = UGameUserSettings::GetGameUserSettings();
	if (gameUserSettings != nullptr)
	{
		int32 minValue = 0;
		gameUserSettings->SetAntiAliasingQuality(0);
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::FormatAsNumber(gameUserSettings->GetAntiAliasingQuality()));
	}
}

void UControlsWidget::OnAntiAliasingLowClicked()
{
	// set the anti-aliasing to low
	UGameUserSettings* gameUserSettings = UGameUserSettings::GetGameUserSettings();
	if (gameUserSettings != nullptr)
	{
		int32 lowValue = 1;
		gameUserSettings->SetAntiAliasingQuality(1);
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, FString::FormatAsNumber(gameUserSettings->GetAntiAliasingQuality()));
	}
}

void UControlsWidget::OnAntiAliasingMediumClicked()
{
	// set the anti-aliasing to medium
	UGameUserSettings* gameUserSettings = UGameUserSettings::GetGameUserSettings();
	if (gameUserSettings != nullptr)
	{
		int32 mediumValue = 2;
		gameUserSettings->SetAntiAliasingQuality(2);
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::FormatAsNumber(gameUserSettings->GetAntiAliasingQuality()));
	}
}

void UControlsWidget::OnAntiAliasingHighClicked()
{
	// set the anti-aliasing to high
	UGameUserSettings* gameUserSettings = UGameUserSettings::GetGameUserSettings();
	if (gameUserSettings != nullptr)
	{
		int32 highValue = 3;
		gameUserSettings->SetAntiAliasingQuality(3);
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::FormatAsNumber(gameUserSettings->GetAntiAliasingQuality()));
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Buttons>
void UControlsWidget::OnBackButtonClicked()
{
	// display the main menu widget
	AMainMenuGameModeBase* mainMenuGameMode = Cast<AMainMenuGameModeBase>((AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode());
	if (mainMenuGameMode != nullptr)
	{
		mainMenuGameMode->SwitchWidget(EDisplayWidget::EMainMenuWidget);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UControlsWidget>
void UControlsWidget::NativeConstruct()
{
	//if the anti-aliasing_minumum button has been clicked
	if (AntiAliasing_Minimum_Button)
	{
		AntiAliasing_Minimum_Button->OnClicked.AddDynamic(this, &UControlsWidget::OnAntiAliasingMinimumClicked);
	}

	//if the anti-aliasing_low button has been clicked
	if (AntiAliasing_Low_Button)
	{
		AntiAliasing_Low_Button->OnClicked.AddDynamic(this, &UControlsWidget::OnAntiAliasingLowClicked);
	}

	//if the anti-aliasing_medium button has been clicked
	if (AntiAliasing_Medium_Button)
	{
		AntiAliasing_Medium_Button->OnClicked.AddDynamic(this, &UControlsWidget::OnAntiAliasingMediumClicked);
	}

	//if the anti-aliasing_maximum button has been clicked
	if (AntiAliasing_High_Button)
	{
		AntiAliasing_High_Button->OnClicked.AddDynamic(this, &UControlsWidget::OnAntiAliasingHighClicked);
	}


	// if the back button has been clicked
	if (BackButton)
	{
		BackButton->OnClicked.AddDynamic(this, &UControlsWidget::OnBackButtonClicked);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////