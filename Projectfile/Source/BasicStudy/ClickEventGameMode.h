// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ClickEventGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BASICSTUDY_API AClickEventGameMode : public AGameMode
{
	GENERATED_BODY()
		
private:
	TSharedPtr<class SVerticalBox> Widget;
	TSharedPtr<class STextBlock> ButtonLabel;

public:

	virtual void BeginPlay() override;
	FReply ButtonClicked();
	
};
