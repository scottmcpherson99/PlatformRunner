// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameUserSettings.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->SetUsingAbsoluteRotation(true);
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = true;

	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <APlayerCharacter>
// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// set the default attributes
	SetActivePowerup(EPowerup::ENone);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// set the anti-aliasing to high
	UGameUserSettings* gameUserSettings = UGameUserSettings::GetGameUserSettings();
	if (gameUserSettings != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::FormatAsNumber(gameUserSettings->GetAntiAliasingQuality()));
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Setters and Getters
void APlayerCharacter::SetActivePowerup(EPowerup newPowerup)
{
	// update the active powerup and apply the effects
	activePowerup = newPowerup;
	HandleNewPowerup();
}

EPowerup APlayerCharacter::GetActivePowerup()
{
	return activePowerup;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <PlayerInput>
// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);


	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::StopJumping);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Movement>
void APlayerCharacter::Jump()
{
	Super::Jump();

	// play the jumping sound if the player is not currently in the air
	if (GetCharacterMovement()->IsFalling() == false)
	{
		if (jumpSound != nullptr)
		{
			UGameplayStatics::PlaySound2D(GetWorld(), jumpSound);
		}
	}
}

void APlayerCharacter::StopJumping()
{
	Super::StopJumping();
}

void APlayerCharacter::MoveRight(float movementValue_)
{
	//move the player along the x axis in the direction based of the player's input
	if (Controller && (movementValue_ != 0.0f))
	{
		AddMovementInput(FVector(1.0f * movementValue_, 0.0f, 0.0f));
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Powerup>
void APlayerCharacter::HandleNewPowerup()
{
	// apply changes based on the new powerup
	switch (activePowerup)
	{
		// no active powerup
	case EPowerup::ENone:
		GetCharacterMovement()->JumpZVelocity = baseJumpVelocity;
		GetCharacterMovement()->MaxWalkSpeed = baseWalkSpeed;
		break;

		// jump boost powerup
	case EPowerup::EJumpBoost:
		GetCharacterMovement()->JumpZVelocity = baseJumpVelocity * 1.5;
		GetCharacterMovement()->MaxWalkSpeed = baseWalkSpeed;
		break;

		// spped boost powerup
	case EPowerup::ESpeedBoost:
		GetCharacterMovement()->JumpZVelocity = baseJumpVelocity;
		GetCharacterMovement()->MaxWalkSpeed = baseWalkSpeed * 1.5;
		break;

		// jetpack powerup
	case EPowerup::EJetPack:
		break;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////