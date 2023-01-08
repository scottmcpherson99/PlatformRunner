// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObstacleBase.h"
#include "ChasingWall.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMRUNNER_API AChasingWall : public AObstacleBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AChasingWall();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AChasingWall>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </AChasingWall>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Attributes>
		// the base jump velocity for the player
	UPROPERTY(EditAnywhere, Category = "Movement")
		float baseWallSpeed;
	// </Attributes>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
