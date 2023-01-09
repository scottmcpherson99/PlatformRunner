// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerupBase.h"
#include "JetPackBoost.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API AJetPackBoost : public APowerupBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AJetPackBoost();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Powerup>
	// set the powerup
	void SetPowerUp();
	// </Powerup>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
