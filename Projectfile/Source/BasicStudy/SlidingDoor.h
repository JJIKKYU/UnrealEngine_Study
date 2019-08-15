// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SlidingDoor.generated.h"

/**
 * 
 */
UCLASS()
class BASICSTUDY_API ASlidingDoor : public AStaticMeshActor
{
	GENERATED_BODY()

public:

	ASlidingDoor();

	virtual void Tick(float DeltaSeconds);

	UFUNCTION(BlueprintCallable, Category = "Door")
	void Open();

	UPROPERTY()
	bool bIsOpen;

	UPROPERTY()
	FVector TargetLocation;
	
};
