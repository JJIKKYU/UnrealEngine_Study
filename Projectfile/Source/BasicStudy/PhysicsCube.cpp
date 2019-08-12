// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicsCube.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
APhysicsCube::APhysicsCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("Static Mesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object) Mesh->SetStaticMesh(MeshAsset.Object);

	Mesh->SetMobility(EComponentMobility::Movable);
	Mesh->SetSimulatePhysics(true);
	SetActorEnableCollision(true);
}

// Called when the game starts or when spawned
void APhysicsCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhysicsCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

