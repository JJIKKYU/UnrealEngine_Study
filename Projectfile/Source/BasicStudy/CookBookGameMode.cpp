// Fill out your copyright notice in the Description page of Project Settings.


#include "CookBookGameMode.h"
#include "Engine/Engine.h"
#include "MyFirstActor.h"

// Sets default values
ACookBookGameMode::ACookBookGameMode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACookBookGameMode::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void ACookBookGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

