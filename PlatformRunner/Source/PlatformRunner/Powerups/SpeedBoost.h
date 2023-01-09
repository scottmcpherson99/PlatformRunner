// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerupBase.h"
#include "SpeedBoost.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API ASpeedBoost : public APowerupBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpeedBoost();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Powerup>
	// set the powerup
	void SetPowerUp();
	// </Powerup>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
