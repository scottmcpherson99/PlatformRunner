// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shooter.h"
#include "DetectorShooter.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API ADetectorShooter : public AShooter
{
	GENERATED_BODY()
protected:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ADetectorShooter>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </ADetectorShooter>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Spawn>
	//timer to delay the spawning of the arrow
	FTimerHandle spawnTimer;
	
	// reset the do once loop
	void ResetDoOnce();

	// the boolean to ensure only 1 arrow is shot at one time
	bool bDoOnce;
	// </Spawn>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
