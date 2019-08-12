// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AntiGravityVolme.generated.h"

UCLASS()
class BASICSTUDY_API AAntiGravityVolme : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAntiGravityVolme();

	UPROPERTY()
	class UBoxComponent* CollisionComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

};
