// Fill out your copyright notice in the Description page of Project Settings.


#include "ScalingUIPlayerController.h"
#include "SlateBasics.h"
#include "SButton.h"
#include "STextBlock.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"

void AScalingUIPlayerController::BeginPlay()
{
	Super::BeginPlay();

	TSharedRef<SVerticalBox> widget = SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SButton)
			.Content()
		[
			SNew(STextBlock)
			.Text(FText::FromString(TEXT("Test Button")))
		]
		];
	GEngine->GameViewport->AddViewportWidgetForPlayer(GetLocalPlayer(), widget, 1);
}