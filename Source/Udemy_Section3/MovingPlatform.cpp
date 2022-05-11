// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	startLocation = FVector(0, 0, 0);
	velocity = FVector(0, 0, 0);
	maximumDistance = 200.0f;
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	SetActorLocation(startLocation);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(CalculateVelocity(DeltaTime));

	double totalMovement = FVector::Dist(startLocation, GetActorLocation());

	if (totalMovement > maximumDistance) 
	{
		velocity = -velocity;
	}
}

FVector AMovingPlatform::CalculateVelocity(float deltaTime)
{
	return GetActorLocation() + (velocity * deltaTime);
}

