// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter.h"
#include "PlatformRunner/PlayerCharacter/PlayerCharacter.h"
#include "Arrow.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AShooter::AShooter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the shooter mesh
	shooterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("shooterMesh"));
	shooterMesh->SetupAttachment(RootComponent);

	//create the arrow source component
	arrowSource = CreateDefaultSubobject<USceneComponent>(TEXT("arrowSource"));
	arrowSource->SetupAttachment(shooterMesh);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AShooter>
// Called when the game starts or when spawned
void AShooter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Gameplay>
void AShooter::ShootArrow()
{
	//set the spawn parameters for the drop
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();
	FTransform spawnTransform = arrowSource->GetComponentTransform();

	// spawn the arrow if the arrow has been set
	if (arrowDrop != nullptr)
	{
		//spawn an arrow
		GetWorld()->SpawnActor<AArrow>(arrowDrop, spawnTransform, SpawnParams);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////