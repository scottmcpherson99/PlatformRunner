// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstacleBase.generated.h"

UCLASS()
class PLATFORMRUNNER_API AObstacleBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacleBase();

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AObstacleBase>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// </AObstacleBase>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	// The root component
	class USceneComponent* sceneComp;
	
	// The box collision component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UBoxComponent* triggerBox;

	//the Obstacle Mesh
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
		class UStaticMeshComponent* obstacleMesh;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Collision>
	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	// </Collision>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
