// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorBell.h"
#include "Openable.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ADoorBell::ADoorBell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bHasBeenPushed = false;
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cube.Cube'"));
	
	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
	SetActorEnableCollision(true);
	DoorToOpen = nullptr;

}

// Called when the game starts or when spawned
void ADoorBell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorBell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ADoorBell::CanInteract_Implementation()
{
	return !bHasBeenPushed;
}

void ADoorBell::PerformInteract_Implementation()
{
	bHasBeenPushed = true;
	if (DoorToOpen->GetClass()->ImplementsInterface(UOpenable::StaticClass()))
	{
		IOpenable::Execute_Open(DoorToOpen);
	}
}
