// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlyingPlatform.generated.h"

UCLASS()
class GNOMEADVENTURES_API AFlyingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlyingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	FVector StartPosition;


	//Velocity Variable
	UPROPERTY(EditAnywhere)
	int32 XVelocity = 100;
	UPROPERTY(EditAnywhere)
	int32 YVelocity = 0;
	UPROPERTY(EditAnywhere)
	int32 ZVelocity = 0;


	UPROPERTY(EditAnywhere)
	float EndPosition = 100;


	UPROPERTY(EditAnywhere)
	int32 Speed = 20;


	UPROPERTY(EditAnywhere)
	FVector PlatformVelocity = FVector(XVelocity *Speed, YVelocity *Speed, ZVelocity *Speed);

	UPROPERTY(VisibleAnywhere)
	float PositionDistance;

	



};
