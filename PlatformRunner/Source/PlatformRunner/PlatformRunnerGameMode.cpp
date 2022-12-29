// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlatformRunnerGameMode.h"
#include "PlatformBase.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// sets the default values
APlatformRunnerGameMode::APlatformRunnerGameMode()
{

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Obstacle Base Interface
// Called when the game starts or when spawned
void APlatformRunnerGameMode::BeginPlay()
{
	Super::BeginPlay();

	// set the initial tiles position and location
	FVector spawnLocation = (FVector(0.f, 0.f, 0.f));
	FRotator spawnRotation = (FRotator(0.f, 0.f, 0.f));
	//set the spawn parameters for the drop
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	for (int i = 0; i < 3; i++)
	{
		if (startingPlatform != nullptr)
		{
			GetWorld()->SpawnActor<APlatformBase>(startingPlatform, spawnLocation, spawnRotation, SpawnParams);
			spawnLocation.X += 500;
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay
void APlatformRunnerGameMode::SpawnNextTile(FVector tileLocation)
{
	// set the spawn location to be the location of the tile passed by the player plus the distance of the number of tiles spawned in
	FVector spawnLocation = tileLocation + FVector(1500, 0, 0);
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
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////