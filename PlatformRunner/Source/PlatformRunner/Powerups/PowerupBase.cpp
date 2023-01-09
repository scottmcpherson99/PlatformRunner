// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerupBase.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APowerupBase::APowerupBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the triggerBox component
	triggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("triggerBox"));
	triggerBox->SetupAttachment(RootComponent);

	//create the powerup mesh
	powerupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("powerupMesh"));
	powerupMesh->SetupAttachment(RootComponent);

	// set the powerup
	SetPowerUp();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <APowerupBase>
// Called when the game starts or when spawned
void APowerupBase::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	triggerBox->OnComponentBeginOverlap.AddDynamic(this, &APowerupBase::OnTriggerBoxOverlap);
}

// Called every frame
void APowerupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void APowerupBase::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// check to see if the powerup has overlapped with the player character, if it is, update the player's active powerup
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		playerCharacter->SetActivePowerup(activePowerup);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Powerup>
void APowerupBase::SetPowerUp()
{
	activePowerup = EPowerup::ENone;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
