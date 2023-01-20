// Fill out your copyright notice in the Description page of Project Settings.


#include "YYSPlayerController.h"

AYYSPlayerController::AYYSPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	UWorld* World = GetWorld();
	if (World)
	{
		YYSGameState = Cast<AYYSGameStateBase>(World->GetGameState());
	}
	if (!YYSGameState)
	{
		UE_LOG(LogTemp, Error, TEXT("GameState were not find,please try again later"));
	}
}

bool AYYSPlayerController::NotifyGameStart()
{
	if (YYSGameState)
	{

	}
	return false;
}

void AYYSPlayerController::OnPlayerReady()
{
	//YYSGameState->
}
