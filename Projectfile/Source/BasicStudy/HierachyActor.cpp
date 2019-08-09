// Fill out your copyright notice in the Description page of Project Settings.


#include "HierachyActor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AHierachyActor::AHierachyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");
	ChildSceneComponent = CreateDefaultSubobject<USceneComponent>("ChildSceneComponent");
	BoxOne = CreateDefaultSubobject<UStaticMeshComponent>("BoxOne");
	BoxTwo = CreateDefaultSubobject<UStaticMeshComponent>("BoxTwo");

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object)
	{
		BoxOne->SetStaticMesh(MeshAsset.Object);
		BoxTwo->SetStaticMesh(MeshAsset.Object);
	}
	RootComponent = Root;
	BoxOne->AttachTo(Root);
	BoxTwo->AttachTo(ChildSceneComponent);
	ChildSceneComponent->AttachTo(Root);
	ChildSceneComponent->SetRelativeTransform(FTransform(FRotator(0, 0, 0), FVector(250, 0, 0), FVector(0.1f)));
}

// Called when the game starts or when spawned
void AHierachyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHierachyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

