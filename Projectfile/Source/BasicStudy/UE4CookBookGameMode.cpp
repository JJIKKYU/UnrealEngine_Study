// Fill out your copyright notice in the Description page of Project Settings.


#include "UE4CookBookGameMode.h"
#include "Engine/Engine.h"
#include "MyFirstActor.h"
#include "Public/TimerManager.h"

void AUE4CookBookGameMode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Actor Spawning!"));

	FVector SpawnLocation;
	GetWorld()->SpawnActor<AMyFirstActor>(AMyFirstActor::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	
	SpawnedActor = GetWorld()->SpawnActor<AMyFirstActor>(AMyFirstActor::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &AUE4CookBookGameMode::DestroyActorFunction, 10);
}

void AUE4CookBookGameMode::DestroyActorFunction()
{
	if (SpawnedActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor Destroy!"))
		SpawnedActor->Destroy();
	}
}