// Fill out your copyright notice in the Description page of Project Settings.



#include "Arrow.h"
#include "PlatformRunner/PlayerCharacter/PlayerCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Gameframework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AArrow::AArrow()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	RootComponent = sphereComp;

	//create the platform mesh
	arrowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("arrowMesh"));
	arrowMesh->SetupAttachment(RootComponent);

	//create projectile movement
	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("projectileMovementComponent"));
	projectileMovement->InitialSpeed = 800.f;
	projectileMovement->MaxSpeed = 800.f;
	projectileMovement->bRotationFollowsVelocity = true;
	projectileMovement->ProjectileGravityScale = 0.f;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AArrow>
// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();

	// turn on collision checks for the collision sphere
	sphereComp->OnComponentBeginOverlap.AddDynamic(this, &AArrow::OnOverlapBegin);
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void AArrow::OnOverlapBegin(UPrimitiveComponent* newComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, destroy the tile
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		//exit the application
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);

		Destroy();
	}
	else
	{
		GetWorldTimerManager().SetTimer(destroyTimer, this, &AArrow::DestroyArrow, 1.5f, false);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Gameplay>
void AArrow::DestroyArrow()
{
	Destroy();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

