// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"

#include "ZBSGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class ZBS_API AZBSGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
protected:

	virtual bool Initialize();
};
