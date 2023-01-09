// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "PlatformRunner/MainMenuWidget.h"
#include "PlatformRunner/ControlsWidget.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetLayoutLibrary.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sets the default values
AMainMenuGameModeBase::AMainMenuGameModeBase()
{

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// AMainMenuGameModeBase Interface
// Called when the game starts or when spawned
void AMainMenuGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	// set the input to UI only
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	playerController->SetInputMode(FInputModeUIOnly::FInputModeUIOnly());
	playerController->SetShowMouseCursor(true);

	// set the initial widget to be the main menu
	SwitchWidget(EDisplayWidget::EMainMenuWidget);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Widgets
void AMainMenuGameModeBase::SwitchWidget(EDisplayWidget displayWidget_)
{

	UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());

	// switch the widget to be displayed to be the widget specified
	switch (displayWidget_)
	{
		// when no widget is specified
	case EDisplayWidget::ENone:

		break;

		// when the main menu widget is specified
	case EDisplayWidget::EMainMenuWidget:
		//check the heads up display widget has been set, if it has, add it to the viewport
		if (IsValid(MainMenuWidget))
		{
			UMainMenuWidget* HUDWidget = Cast<UMainMenuWidget>(CreateWidget(GetWorld(), MainMenuWidget));
			HUDWidget->AddToViewport();
		}
		break;

		// when the controls widget has been specified
	case EDisplayWidget::EControlsWidget:
		//check the heads up display widget has been set, if it has, add it to the viewport
		if (IsValid(ControlsWidget))
		{
			UControlsWidget* HUDWidget = Cast<UControlsWidget>(CreateWidget(GetWorld(), ControlsWidget));
			HUDWidget->AddToViewport();
		}
		break;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////