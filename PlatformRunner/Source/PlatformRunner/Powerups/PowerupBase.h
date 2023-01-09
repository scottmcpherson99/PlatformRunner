// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformRunner/PlayerCharacter/PlayerCharacter.h"
#include "PowerupBase.generated.h"

UCLASS()
class PLATFORMRUNNER_API APowerupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerupBase();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <APowerupBase>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </APowerupBase>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	// The root component
	class USceneComponent* sceneComp;

	// The box collision component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UBoxComponent* triggerBox;

	//the powerup Mesh
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UStaticMeshComponent*  powerupMesh;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Powerup>
	// set the powerup
	virtual void SetPowerUp();

	// the active players powerup
	EPowerup activePowerup;
	// </Powerup>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


};
