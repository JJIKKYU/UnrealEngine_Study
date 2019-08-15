// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileType.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class BASICSTUDY_API UTileType : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY()
	int32 MovemntCost;

	UPROPERTY()
	bool bCanBeBuiltOn;

	UPROPERTY()
	FString TileName;
	
};

