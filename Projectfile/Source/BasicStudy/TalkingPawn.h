// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "talker.h"
#include "TalkingPawn.generated.h"

/**
 * 
 */
UCLASS()
class BASICSTUDY_API ATalkingPawn : public ADefaultPawn, public ITalker
{
	GENERATED_BODY()
	
public:

	ATalkingPawn();

	UPROPERTY()
	class UBoxComponent* TalkCollider;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
