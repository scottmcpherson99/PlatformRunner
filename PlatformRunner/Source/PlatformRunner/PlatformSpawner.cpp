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
			spawnLocation.X += 500;
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
	FVector spawnLocation = tileLocation + FVector(500 * numberOfStartingTiles, 0, 0);
	FRotator spawnRotation = (FRotator(0.f, 0.f, 0.f));

	//set the spawn parameters for the drop
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();
	if (startingPlatform != nullptr)
	{
		GetWorld()->SpawnActor<APlatformBase>(startingPlatform, spawnLocation, spawnRotation, SpawnParams);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////