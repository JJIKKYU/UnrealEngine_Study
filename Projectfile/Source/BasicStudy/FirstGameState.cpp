// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstGameState.h"

AFirstGameState::AFirstGameState()
{
	CurrentScore = 0;
}

void AFirstGameState::SetScore(int32 NewScore)
{
	CurrentScore = NewScore;
}

int32 AFirstGameState::GetScore()
{
	return CurrentScore;
}