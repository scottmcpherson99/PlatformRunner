// Fill out your copyright notice in the Description page of Project Settings.


#include "DetectorShooter.h"
#include "PlatformRunner/PlayerCharacter/PlayerCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

void ADetectorShooter::BeginPlay()
{
	Super::BeginPlay();

	bDoOnce = true;

}

void ADetectorShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> ignoredActors;
	FHitResult outHit;
	UKismetSystemLibrary::SphereTraceSingle(this, arrowSource->GetComponentLocation(), (arrowSource->GetForwardVector() * 3000) + arrowSource->GetComponentLocation(), 10.f, ETraceTypeQuery::TraceTypeQuery11, false, ignoredActors, EDrawDebugTrace::None, outHit, true);

	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);


	if (outHit.Actor == playerCharacter)
	{
		if (bDoOnce == true)
		{
			bDoOnce = false;
			ShootArrow();
			GetWorldTimerManager().SetTimer(spawnTimer, this, &ADetectorShooter::ResetDoOnce, 2.f, true);
		}
	}
}

void ADetectorShooter::ResetDoOnce()
{
	GetWorldTimerManager().ClearTimer(spawnTimer);
	bDoOnce = true;
}