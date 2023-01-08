// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformSpawner.h"
#include "PlatformBase.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APlatformSpawner::APlatformSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <APlatformSpawner>
// Called when the game starts or when spawned
void APlatformSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	// set the initial tiles position and location
	FVector spawnLocation = (FVector(0.f, 0.f, 0.f));
	FRotator spawnRotation = (FRotator(0.f, 0.f, 0.f));
	//set the spawn parameters for the drop
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	for (int i = 0; i < numberOfStartingTiles; i++)
	{
		if (startingPlatform != nullptr)
		{
			GetWorld()->SpawnActor<APlatformBase>(startingPlatform, spawnLocation, spawnRotation, SpawnParams);
			spawnLocation.X += platformSize;
		}
	}
}

// Called every frame
void APlatformSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Gameplay>
void APlatformSpawner::SpawnNextTile(FVector tileLocation)
{
	// set the spawn location to be the location of the tile passed by the player plus the distance of the number of tiles spawned in
	FVector spawnLocation = tileLocation + FVector(platformSize * numberOfStartingTiles, 0, 0);
	FRotator spawnRotation = (FRotator(0.f, 0.f, 0.f));

	//set the spawn parameters for the drop
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	// select which tile to spawn
	int tileToSpawn = rand() % 4 + 1;

	switch (tileToSpawn)
	{
		// spawn platform 1
	case 1:
		// if platform 1 is not a nullptr, spawn the platform
		if (platform1 != nullptr)
		{
			GetWorld()->SpawnActor<APlatformBase>(platform1, spawnLocation, spawnRotation, SpawnParams);
		}
		break;

		// spawn platform 2
	case 2:
		// if platform 2 is not a nullptr, spawn the platform
		if (platform2 != nullptr)
		{
			GetWorld()->SpawnActor<APlatformBase>(platform2, spawnLocation, spawnRotation, SpawnParams);
		}
		break;

		// spawn platform 3
	case 3:
		// if platform 3 is not a nullptr, spawn the platform
		if (platform3 != nullptr)
		{
			GetWorld()->SpawnActor<APlatformBase>(platform3, spawnLocation, spawnRotation, SpawnParams);
		}
		break;

		// spawn platform 4
	case 4:
		// if platform 4 is not a nullptr, spawn the platform
		if (platform4 != nullptr)
		{
			GetWorld()->SpawnActor<APlatformBase>(platform4, spawnLocation, spawnRotation, SpawnParams);
		}
		break;

	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////