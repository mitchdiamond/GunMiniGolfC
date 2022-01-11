// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DilationGrenade.generated.h"

UCLASS()
class GUNMINIGOLFCODED_API ADilationGrenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADilationGrenade();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TimeEffect)
		class USphereComponent* RadiusMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TimeEffect)
		UCurveFloat* ScaleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TimeEffect)
		float RadiusScale;

	UPROPERTY(VisibleAnywhere, Category = "Trigger Sphere")
		class USphereComponent* TriggerSphere;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// declare overlap end function
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
