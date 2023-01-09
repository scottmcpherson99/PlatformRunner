// Fill out your copyright notice in the Description page of Project Settings.


#include "TimedShooter.h"


void ATimedShooter::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(spawnTimer, this, &AShooter::ShootArrow, 2.f, true);
}

void ATimedShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
