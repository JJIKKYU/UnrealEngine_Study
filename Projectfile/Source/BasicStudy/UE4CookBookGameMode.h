// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "UE4CookBookGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BASICSTUDY_API AUE4CookBookGameMode : public AGameMode
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;
	
	UPROPERTY()
	class AMyFirstActor* SpawnedActor;

	UFUNCTION()
	void DestroyActorFunction();
};
