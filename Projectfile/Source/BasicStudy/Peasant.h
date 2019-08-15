// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Peasant.generated.h"

/**
 * 
 */
UCLASS()
class BASICSTUDY_API APeasant : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:

	APeasant();

	UFUNCTION(BlueprintCallable, Category = "Peasant")
	void Flee(class AKing* DeadKing);
};
