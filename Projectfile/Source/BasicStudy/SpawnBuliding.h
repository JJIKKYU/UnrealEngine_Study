// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnBuliding.generated.h"

UCLASS()
class BASICSTUDY_API ASpawnBuliding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnBuliding();

	UPROPERTY()
	UStaticMeshComponent* BulidingMesh;

	UPROPERTY()
	class UParticleSystemComponent* SpawnPoint;

	UPROPERTY()
	UClass* UnitToSpawn;

	UPROPERTY()
	float SpawnInterval;

	UPROPERTY()
	FTimerHandle SpawnTimerHandle;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void SpawnUnit();

	UFUNCTION()
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

};
