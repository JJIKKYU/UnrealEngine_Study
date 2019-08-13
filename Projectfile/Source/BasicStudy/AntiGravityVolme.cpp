// Fill out your copyright notice in the Description page of Project Settings.


#include "AntiGravityVolme.h"
#include "GravityObject.h"
#include "Components/BoxComponent.h"

// Sets default values
AAntiGravityVolme::AAntiGravityVolme()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Component"));
	CollisionComponent->SetBoxExtent(FVector(200, 200, 400));
	RootComponent = CollisionComponent;

}

// Called when the game starts or when spawned
void AAntiGravityVolme::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAntiGravityVolme::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAntiGravityVolme::NotifyActorBeginOverlap(AActor* OtherActor)
{
	IGravityObject* GravityObject = Cast<IGravityObject>(OtherActor);
	if (GravityObject)
	{
		GravityObject->DisableGravity();
	}
}

void AAntiGravityVolme::NotifyActorEndOverlap(AActor* OtherActor)
{
	IGravityObject* GravityObject = Cast<IGravityObject>(OtherActor);
	if (GravityObject)
	{
		GravityObject->EnableGravity();
	}
}

