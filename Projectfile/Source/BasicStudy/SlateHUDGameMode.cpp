// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomHUDPlayerController.h"
#include "SlateHUDGameMode.h"

ASlateHUDGameMode::ASlateHUDGameMode()
{
	PlayerControllerClass = ACustomHUDPlayerController::StaticClass();
}