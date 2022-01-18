// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Platforms.generated.h"

UCLASS()
class HUMANMINIGOLF_V1_API APlatforms : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatforms();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mechanics)
		UMaterial* ghostMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mechanics)
		UMaterial* solidMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mechanics)
		class UStaticMeshComponent* MyMesh;

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* MyBoxComponent;
	bool hereToStay = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CreatePlaform();
};


