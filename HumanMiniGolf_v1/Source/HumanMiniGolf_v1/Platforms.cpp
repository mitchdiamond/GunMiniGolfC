// Fill out your copyright notice in the Description page of Project Settings.


#include "Platforms.h"
#include "Components/BoxComponent.h"

// Sets default values
APlatforms::APlatforms()
{
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APlatforms::BeginPlay()
{
	MyMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	MyMesh->SetMaterial(0, ghostMat);
	Super::BeginPlay();
	
}

void APlatforms::CreatePlaform()
{
	hereToStay = true;
	MyMesh->SetMaterial(0, solidMat);
	MyMesh->SetCollisionObjectType(ECollisionChannel::ECC_MAX);

}

void APlatforms::UpdateTransform(FVector Difference)
{
	//this->SetActorLocation(Difference);
}
