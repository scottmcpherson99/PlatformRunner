// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedBoost.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// sets the default values
ASpeedBoost::ASpeedBoost()
{
	// set the powerup
	SetPowerUp();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Powerup>
void ASpeedBoost::SetPowerUp()
{
	activePowerup = EPowerup::ESpeedBoost;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////