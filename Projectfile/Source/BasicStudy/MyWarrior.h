// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserProfile.h"
#include "MyWarrior.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class BASICSTUDY_API UMyWarrior : public UUserProfile
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BLueprintReadWrite, Category = Stats)
	FString Name;
};
