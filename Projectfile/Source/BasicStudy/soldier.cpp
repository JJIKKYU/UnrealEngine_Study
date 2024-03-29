// Fill out your copyright notice in the Description page of Project Settings.


#include "soldier.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
Asoldier::Asoldier()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMeshComponent"));
	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

	if (MeshAsset.Object)
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void Asoldier::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Asoldier::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString Asoldier::ToString()
{
	return FString::Printf(TEXT("An instance of UProfile : %s"), *Name);
}
