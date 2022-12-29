// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformBase.h"
#include "PlatformRunner/PlayerCharacter/PlayerCharacter.h"
#include "PlatformRunnerGameMode.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APlatformBase::APlatformBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the triggerBox component
	triggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("triggerBox"));
	triggerBox->SetupAttachment(RootComponent);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Obstacle Base Interface
// Called when the game starts or when spawned
void APlatformBase::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	triggerBox->OnComponentBeginOverlap.AddDynamic(this, &APlatformBase::OnTriggerBoxOverlap);
}

// Called every frame
void APlatformBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void APlatformBase::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, spawn the next tile platform
	if (playerCharacter != nullptr)
	{
		//find the current gamemode and spawn the next tile
		APlatformRunnerGameMode* gameMode = Cast<APlatformRunnerGameMode>((APlatformRunnerGameMode*)GetWorld()->GetAuthGameMode());
		if (gameMode != nullptr)
		{
			gameMode->SpawnNextTile(sceneComp->GetComponentLocation());
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////