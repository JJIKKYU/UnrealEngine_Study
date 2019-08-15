// Fill out your copyright notice in the Description page of Project Settings.


#include "Peasant.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "King.h"

APeasant::APeasant()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
}

void APeasant::Flee(AKing* DeadKing)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Waily Waily!"));
	FVector FleeVector = GetActorLocation() - DeadKing->GetActorLocation();
	FleeVector.Normalize();
	FleeVector *= 500;
	SetActorLocation(GetActorLocation() + FleeVector);
}