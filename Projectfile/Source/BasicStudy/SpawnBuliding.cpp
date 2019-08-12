// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnBuliding.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/CollisionProfile.h"
#include "Particles/ParticleSystemComponent.h"
#include "TimerManager.h"

// Sets default values
ASpawnBuliding::ASpawnBuliding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulidingMesh = CreateDefaultSubobject<UStaticMeshComponent>("BuldingMesh");
	SpawnPoint = CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");
	SpawnInterval = 10.f;

	auto MeshAsset =
		ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object)
	{
		BulidingMesh->SetStaticMesh(MeshAsset.Object);
		BulidingMesh->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	}

	auto ParticleSystem =
		ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Engine/Tutorial/SubEditors/TutorialAssets/TutorialParticleSystem.TutorialParticleSystem'"));
	if (ParticleSystem.Object)
	{
		SpawnPoint->SetTemplate(ParticleSystem.Object);
	}
	SpawnPoint->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	UnitToSpawn = ASpawnBuliding::StaticClass();
}

// Called when the game starts or when spawned
void ASpawnBuliding::BeginPlay()
{
	Super::BeginPlay();
	
	FVector SpawnLocation = SpawnPoint->GetComponentLocation();
	GetWorld()->SpawnActor(UnitToSpawn, &SpawnLocation);
}

// Called every frame
void ASpawnBuliding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnBuliding::SpawnUnit()
{
}

void ASpawnBuliding::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
}

