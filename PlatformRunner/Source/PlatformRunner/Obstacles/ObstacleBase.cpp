// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstacleBase.h"
#include "PlatformRunner/PlayerCharacter/PlayerCharacter.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AObstacleBase::AObstacleBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the triggerBox component
	triggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("triggerBox"));
	triggerBox->SetupAttachment(RootComponent);

	//create the obstacle mesh
	obstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("obstacleMesh"));
	obstacleMesh->SetupAttachment(RootComponent);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Obstacle Base Interface
// Called when the game starts or when spawned
void AObstacleBase::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	triggerBox->OnComponentBeginOverlap.AddDynamic(this, &AObstacleBase::OnTriggerBoxOverlap);
}

// Called every frame
void AObstacleBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Collision
void AObstacleBase::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, display the death screen
	if (playerCharacter != nullptr)
	{
		//exit the application
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);		
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////