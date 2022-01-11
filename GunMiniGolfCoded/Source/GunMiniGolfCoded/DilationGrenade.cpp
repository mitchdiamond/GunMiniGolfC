// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/TimelineComponent.h"
#include "Components/SphereComponent.h"
#include "DilationGrenade.h"

// Sets default values
ADilationGrenade::ADilationGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//if (RadiusMesh == nullptr)
	//{
	//	RadiusMesh = CreateDefaultSubobject<USphereComponent>(TEXT("BallMesh"));
	//	RadiusMesh->InitSphereRadius(RadiusScale);
	//	RadiusMesh->AddToRoot();
	//}



	TriggerSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger Sphere"));
	TriggerSphere->InitSphereRadius(RadiusScale);
	TriggerSphere->SetCollisionProfileName(TEXT("Trigger"));
	TriggerSphere->SetupAttachment(RootComponent);



}

// Called when the game starts or when spawned
void ADilationGrenade::BeginPlay()
{
	//if (ScaleCurve)
	//	MyTimeline.PlayFromStart();
	
}


// Called every frame
void ADilationGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADilationGrenade::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void ADilationGrenade::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}



