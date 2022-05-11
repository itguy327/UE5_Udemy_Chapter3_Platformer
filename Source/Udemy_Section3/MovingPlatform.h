// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UDEMY_SECTION3_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector CalculateVelocity(float deltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FString categoryName = "Moving Platform";

	UPROPERTY(EditAnywhere, Category=categoryName) double maximumDistance;

	UPROPERTY(EditAnywhere, Category=categoryName) FVector startLocation;

	UPROPERTY(EditAnywhere, Category=categoryName) FVector velocity;
};
