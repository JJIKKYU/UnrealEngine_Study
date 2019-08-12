// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnCharacter.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "SpawnBuliding.h"

// Sets default values
ASpawnCharacter::ASpawnCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VisualRepresentation = CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");
	auto ParticleSystem =
		ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Engine/Tutorial/SubEditors/TutorialAssets/TutorialParticleSystem.TutorialParticleSystem'"));
	if (ParticleSystem.Object)
	{
		VisualRepresentation->SetTemplate(ParticleSystem.Object);
	}
	VisualRepresentation->SetRelativeScale3D(FVector(0.f, 0.f, 0.f));
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
}

// Called when the game starts or when spawned
void ASpawnCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	VisualRepresentation->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ASpawnCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + FVector(10.f, 0.f, 0.f));
}

// Called to bind functionality to input
void ASpawnCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

