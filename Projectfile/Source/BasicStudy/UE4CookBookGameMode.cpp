// Fill out your copyright notice in the Description page of Project Settings.


#include "UE4CookBookGameMode.h"
#include "Engine/Engine.h"
#include "MyFirstActor.h"

void AUE4CookBookGameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Actor Spawning!"));

	FVector SpawnLocation;
	GetWorld()->SpawnActor<AMyFirstActor>(AMyFirstActor::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
}

void AUE4CookBookGameMode::DestroyActorFunction()
{
	
}