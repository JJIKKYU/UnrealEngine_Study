// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"

ADoor::ADoor()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cube.Cube'"));

	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
	SetActorEnableCollision(true);
}

void ADoor::PerformInteract_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("The door refuses to budge. Perhaps there is a hidden switch nearby?"));
}

void ADoor::Open_Implementation()
{
	AddActorLocalOffset(FVector(0.f, 0.f, 200.f));
}