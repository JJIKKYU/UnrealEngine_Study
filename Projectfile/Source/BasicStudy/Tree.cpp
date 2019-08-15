// Fill out your copyright notice in the Description page of Project Settings.


#include "Tree.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

ATree::ATree()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cylinder.Cylinder'"));

	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
}