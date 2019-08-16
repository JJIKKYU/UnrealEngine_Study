// Fill out your copyright notice in the Description page of Project Settings.


#include "OnConstructionActor.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AOnConstructionActor::AOnConstructionActor()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cone.Cone'"));
	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	bShowStaticMesh = true;
}

void AOnConstructionActor::OnConstruction(const FTransform& Transform)
{
	GetStaticMeshComponent()->SetVisibility(bShowStaticMesh);
}