// Copyright Epic Games, Inc. All Rights Reserved.



#include "HumanMiniGolf_v1Character.h"
#include "DrawDebugHelpers.h"
#include "HumanMiniGolf_v1Projectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AHumanMiniGolf_v1Character

AHumanMiniGolf_v1Character::AHumanMiniGolf_v1Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
}

void AHumanMiniGolf_v1Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}

//////////////////////////////////////////////////////////////////////////
// Input

void AHumanMiniGolf_v1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AHumanMiniGolf_v1Character::OnFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AHumanMiniGolf_v1Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHumanMiniGolf_v1Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AHumanMiniGolf_v1Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AHumanMiniGolf_v1Character::LookUpAtRate);

	// Bind fire event
	PlayerInputComponent->BindAction("PlatformPreview", IE_Pressed, this, &AHumanMiniGolf_v1Character::PreviewPlatform);
	PlayerInputComponent->BindAction("PlatformPreview", IE_Released, this, &AHumanMiniGolf_v1Character::StopPreviewPlatform);

	PlayerInputComponent->BindAction("ConfirmPlatform", IE_Released, this, &AHumanMiniGolf_v1Character::CreatePlatform);

}

void AHumanMiniGolf_v1Character::StopPreviewPlatform()
{
	canCreatePlatform = false;
	isCreatingPlatform = false;
	if (tempPlatform != nullptr && tempPlatform->hereToStay == false)
	{
		tempPlatform->Destroy();
	}
}

void AHumanMiniGolf_v1Character::CreatePlatform()
{
	if (tempPlatform != nullptr)
	{
		isCreatingPlatform = false;
		tempPlatform->CreatePlaform();
	}
}

void AHumanMiniGolf_v1Character::PreviewPlatform()
{

	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Button Pressed")));
	isCreatingPlatform = true;
	canCreatePlatform = true;
	if (PlatformClass != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Platform Not Null")));
		UWorld* const World = GetWorld();
		if(World!= nullptr)
		{ 
			FRotator SpawnRotation = GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			//const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			//Having the platform spawn on ground instead.
			const FVector StartLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			FVector_NetQuantize ForwardVector = SpawnRotation.Vector();

			FVector End = ((ForwardVector * 1000.f) + StartLocation);

			FVector_NetQuantize SpawnLocation = StartLocation;

			FCollisionQueryParams CollisionParams;

			FHitResult OutHit;

			//if (ActorLineTraceSingle(OutHit, StartLocation, End, ECC_WorldStatic, CollisionParams))
			//{
			//	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, FString::Printf(TEXT("Hitting")));
			//	SpawnLocation = OutHit.Location;
			//}

			DrawDebugLine(GetWorld(), StartLocation, End, FColor::Green, false, 1, 0, 1);

			if (GetWorld()->LineTraceSingleByChannel(OutHit, StartLocation, End, ECC_Visibility, CollisionParams))
			{
				if (OutHit.bBlockingHit)
				{
					if (GEngine) {

						GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("You are hitting: %s"), *OutHit.GetActor()->GetName()));
						GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Impact Point: %s"), *OutHit.ImpactPoint.ToString()));
						GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Red, FString::Printf(TEXT("Normal Point: %s"), *OutHit.ImpactNormal.ToString()));

						SpawnLocation = OutHit.ImpactPoint;

						StartPlatformPosition = SpawnLocation;

						SpawnRotation = OutHit.ImpactNormal.Rotation();

					}
				}
			}

			//Set Spawn Collision Handling Override
			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			// spawn the projectile at the muzzle
			tempPlatform = (APlatforms*)World->SpawnActor<APlatforms>(PlatformClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

		}
	}
}

void AHumanMiniGolf_v1Character::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (isCreatingPlatform && PlatformClass != nullptr)
	{
		FRotator SpawnRotation = GetControlRotation();
		const FVector StartLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);
		FHitResult OutHit;
		FVector_NetQuantize ForwardVector = SpawnRotation.Vector();
		FVector End = ((ForwardVector * 1000.f) + StartLocation);
		FCollisionQueryParams CollisionParams;

		//DrawDebugLine(GetWorld(), StartLocation, End, FColor::Green, false, 1, 0, 1);

		if (GetWorld()->LineTraceSingleByChannel(OutHit, StartLocation, End, ECC_Visibility, CollisionParams))
		{
			if (OutHit.bBlockingHit)
			{
					FVector Difference = OutHit.ImpactPoint;
					//if (isCreatingPlatform)
					//	tempPlatform->UpdateTransform(Difference);
			}
		}

	}



}


void AHumanMiniGolf_v1Character::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AHumanMiniGolf_v1Projectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}

	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void AHumanMiniGolf_v1Character::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AHumanMiniGolf_v1Character::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AHumanMiniGolf_v1Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AHumanMiniGolf_v1Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}