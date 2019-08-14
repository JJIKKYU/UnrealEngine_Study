// Fill out your copyright notice in the Description page of Project Settings.


#include "TalkingPawn.h"
#include "Components/BoxComponent.h"

ATalkingPawn::ATalkingPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	TalkCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("TalkColider"));
	TalkCollider->SetBoxExtent(FVector(200.f, 200.f, 100.f));
	TalkCollider->OnComponentBeginOverlap.AddDynamic(this, &ATalkingPawn::OnOverlapBegin);
	TalkCollider->AttachTo(RootComponent);
}

void ATalkingPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ITalker::Execute_StartTalking(OtherActor);
}
