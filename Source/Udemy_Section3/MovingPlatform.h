// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere) int32 testInt = 99;
	UPROPERTY(EditAnywhere) bool isTest = true;
	UPROPERTY(EditAnywhere) float inputFloat1 = 2.5;
	UPROPERTY(EditAnywhere) float inputFloat2 = 16.163;
	UPROPERTY(EditAnywhere) float inputFloat3 = 85.11;
	UPROPERTY(EditAnywhere) float AplusBplusC = 0;
};
