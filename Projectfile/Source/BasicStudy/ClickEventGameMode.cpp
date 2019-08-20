// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickEventGameMode.h"
#include "SlateBasics.h"
#include "SButton.h"
#include "STextBlock.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "Framework/SlateDelegates.h"

void AClickEventGameMode::BeginPlay()
{
	Super::BeginPlay();

	Widget = SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateUObject(this, &AClickEventGameMode::ButtonClicked)).Content()
				[
					SAssignNew(ButtonLabel, STextBlock).Text(FText::FromString(TEXT("Click me!")))
				]
		];
	GEngine->GameViewport->AddViewportWidgetForPlayer(GetWorld()->GetFirstLocalPlayerFromController(), Widget.ToSharedRef(), 1);
	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;
	GEngine->GetFirstLocalPlayerController(GetWorld())->SetInputMode(FInputModeUIOnly().SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock).SetWidgetToFocus(Widget));
}

FReply AClickEventGameMode::ButtonClicked()
{
	ButtonLabel->SetText(FString(TEXT("Clicked!")));
	return FReply::Handled();
}
