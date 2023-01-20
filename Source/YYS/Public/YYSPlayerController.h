// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "YYSGameStateBase.h"

#include "YYSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class YYS_API AYYSPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AYYSPlayerController();

	UFUNCTION(BlueprintCallable, Category = "YYSGameplay")
	bool NotifyGameStart();

private:
	AYYSGameStateBase* YYSGameState;

	void OnPlayerReady();
};
