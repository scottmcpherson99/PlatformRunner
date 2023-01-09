// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "PlatformRunner/GameSettings/MainMenuGameModeBase.h"
#include "Kismet/GameplayStatics.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Buttons>
void UMainMenuWidget::OnStartGameButtonClicked()
{
	// open the game level
	UGameplayStatics::OpenLevel(GetWorld(), FName("GameLevel"));
}

void UMainMenuWidget::OnSettingsButtonClicked()
{
	// display the main menu widget
	AMainMenuGameModeBase* mainMenuGameMode = Cast<AMainMenuGameModeBase>((AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode());
	if (mainMenuGameMode != nullptr)
	{
		mainMenuGameMode->SwitchWidget(EDisplayWidget::EControlsWidget);
	}
}

void UMainMenuWidget::OnExitButtonClicked()
{
	//exit the application
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UMainMenuWidget>
void UMainMenuWidget::NativeConstruct()
{
	//if the start game button has been clicked
	if (StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartGameButtonClicked);
	}

	//if the settings button has been clicked
	if (SettingsButton)
	{
		SettingsButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnSettingsButtonClicked);
	}

	//if the exit button has been clicked
	if (ExitButton)
	{
		ExitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnExitButtonClicked);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////