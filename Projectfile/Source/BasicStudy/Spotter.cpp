// Fill out your copyright notice in the Description page of Project Settings.


#include "Spotter.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"


ASpotter::ASpotter()
{
	PrimaryActorTick.bCanEverTick = true;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->SetGenerateOverlapEvents(true);
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
}

void ASpotter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto EndLocation = GetActorLocation() + ActorToWorld().TransformVector(FVector(0.f, 0.f, -200.f));
	FHitResult HitResult;

	GetWorld()->SweepSingleByChannel(HitResult, GetActorLocation(), EndLocation, FQuat::Identity, ECC_Camera, FCollisionShape::MakeSphere(25), FCollisionQueryParams("Spot", true, this));
	APawn* SpottedPlayer = Cast<APawn>(HitResult.Actor.Get());

	if (SpottedPlayer)
	{
		OnPlayerSpotted(SpottedPlayer);
	}
	DrawDebugLine(GetWorld(), GetActorLocation(), EndLocation, FColor::Red);
}