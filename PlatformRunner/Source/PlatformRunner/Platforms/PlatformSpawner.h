// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformSpawner.generated.h"

UCLASS()
class PLATFORMRUNNER_API APlatformSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformSpawner();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Gameplay>
	void SpawnNextTile(FVector tileLocation);
	// </Gameplay>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////



	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Tiles>
	UPROPERTY(EditAnywhere, Category = "Platforms")
		TSubclassOf<class APlatformBase> startingPlatform;

	UPROPERTY(EditAnywhere, Category = "Platforms")
		TSubclassOf<class APlatformBase> platform1;

	UPROPERTY(EditAnywhere, Category = "Platforms")
		TSubclassOf<class APlatformBase> platform2;

	UPROPERTY(EditAnywhere, Category = "Platforms")
		TSubclassOf<class APlatformBase> platform3;

	UPROPERTY(EditAnywhere, Category = "Platforms")
		TSubclassOf<class APlatformBase> platform4;
	// </Tiles>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <APlatformSpawner>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </APlatformSpawner>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Attributes>
	UPROPERTY(EditAnywhere, Category = "Tiles", meta = (ClampMin = 3, ClampMax = 10))
		int numberOfStartingTiles;

	const int platformSize = 2000;
	// </Attributes>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

};
