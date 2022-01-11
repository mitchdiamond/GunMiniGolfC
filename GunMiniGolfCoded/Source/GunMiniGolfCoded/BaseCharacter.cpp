// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Size of Capsule Collider
	GetCapsuleComponent()->InitCapsuleSize(CapsuleHalfHeight,CapsuleRadius);

	//Create Camera Component
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	//CameraOffset.Set(-39.56f, 1.75f, 64.0f);
	CameraComponent->SetRelativeLocation(CameraOffset);
	CameraComponent->bUsePawnControlRotation = true;



}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	CameraComponent->AddLocalOffset(CameraOffset);

	//Size of Capsule Collider
	GetCapsuleComponent()->SetCapsuleHalfHeight(CapsuleHalfHeight);
	GetCapsuleComponent()->SetCapsuleRadius(CapsuleRadius);
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	//Mouse Binding
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

	//WASD Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveHorizontal", this, &ABaseCharacter::MoveHorizontal);

	//
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABaseCharacter::Jump);

}

void ABaseCharacter::MoveForward(float Val)
{
	if (Val != 0)
	{
		AddMovementInput(GetActorForwardVector(), Val);
	}
}

void ABaseCharacter::MoveHorizontal(float Val)
{
	if (Val != 0)
	{
		AddMovementInput(GetActorRightVector(), Val);
	}
}

void ABaseCharacter::Jump()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Jump!"));
}


