// Fill out your copyright notice in the Description page of Project Settings.


#include "PostEditChangePropertyActor.h"
#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

APostEditChangePropertyActor::APostEditChangePropertyActor()
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

void APostEditChangePropertyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property)
	{
		FString PropertyName = PropertyChangedEvent.Property->GetName();

		if (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(APostEditChangePropertyActor, bShowStaticMesh))
		{
			if (GetStaticMeshComponent())
			{
				GetStaticMeshComponent()->SetVisibility(bShowStaticMesh);
			}
		}
	}
	Super::PostEditChangeProperty(PropertyChangedEvent);
}