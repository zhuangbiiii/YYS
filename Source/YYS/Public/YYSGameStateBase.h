// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "YYSPlayerController.h"
#include "YYSPlayerState.h"

#include "YYSGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class YYS_API AYYSGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	AYYSGameStateBase();

	virtual bool Initialize();
	/*
	* Generate every team member
	* @param Duck number at least 1,
	* @param Neutral number at least 1,
	*/
	void GeneratePlayerTeam(int8 Duck = 1,int8 Neutral = 1);

private:
	
	TMap<FTeam, TArray<FString>> Memberpool;
	//TArray<
};
