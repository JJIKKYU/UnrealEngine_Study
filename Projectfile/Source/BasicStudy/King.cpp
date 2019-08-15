// Fill out your copyright notice in the Description page of Project Settings.


#include "King.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AKing::AKing()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
}

void AKing::Die()
{
	OnKingDeath.Broadcast(this);
}