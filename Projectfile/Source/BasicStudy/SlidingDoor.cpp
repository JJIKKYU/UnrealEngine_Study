
// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingDoor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

ASlidingDoor::ASlidingDoor()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cube.Cube'"));

	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetWorldScale3D(FVector(0.3f, 2.f, 3.f));
	SetActorEnableCollision(true);
	bIsOpen = false;

	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

void ASlidingDoor::Open()
{
	TargetLocation = ActorToWorld().TransformPositionNoScale(FVector(0, 0, 200.f));
	bIsOpen = true;
}

void ASlidingDoor::Tick(float DeltaSeconds)
{
	if (bIsOpen)
	{
		SetActorLocation(FMath::Lerp(GetActorLocation(), TargetLocation, 0.05f));
	}
}