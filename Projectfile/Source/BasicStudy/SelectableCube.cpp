// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectableCube.h"

ASelectableCube::ASelectableCube() : Super()
{
	
}

void ASelectableCube::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	if (Super::IsSelectable())
	{
		TrySelect();
	}
}
