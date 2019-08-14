// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Interactable.h"
#include "DoorBell.generated.h"

UCLASS()
class BASICSTUDY_API ADoorBell : public AStaticMeshActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorBell();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* DoorToOpen;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual bool CanInteract_Implementation() override;
	virtual void PerformInteract_Implementation() override;
	bool bHasBeenPushed;

	
	
};
