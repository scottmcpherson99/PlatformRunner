// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerupBase.h"
#include "JumpBoost.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API AJumpBoost : public APowerupBase
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AJumpBoost();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Powerup>
	// set the powerup
	void SetPowerUp();
	// </Powerup>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
