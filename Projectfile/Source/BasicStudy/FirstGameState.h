// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FirstGameState.generated.h"

/**
 * 
 */
UCLASS()
class BASICSTUDY_API AFirstGameState : public AGameState
{
	GENERATED_BODY()

public:

	AFirstGameState();

private:

	UPROPERTY()
	int32 CurrentScore;
	
public:

	UFUNCTION()
	void SetScore(int32 NewScore);

	UFUNCTION()
	int32 GetScore();
};
