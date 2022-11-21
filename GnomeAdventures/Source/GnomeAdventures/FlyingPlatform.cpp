// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingPlatform.h"

// Sets default values
AFlyingPlatform::AFlyingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFlyingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartPosition = GetActorLocation();


	
}

// Called every frame
void AFlyingPlatform::Tick(float DeltaTime)
{


	Super::Tick(DeltaTime);
	FVector CurrentLocation = GetActorLocation();

	CurrentLocation += PlatformVelocity * DeltaTime;

	SetActorLocation(CurrentLocation);


	//Chceck how far platform moved
	PositionDistance = FVector::Dist(StartPosition, CurrentLocation);

	if (PositionDistance > EndPosition){
		PlatformVelocity = -PlatformVelocity;
		StartPosition = CurrentLocation;
	}

	

}

