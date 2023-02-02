// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "ZBSGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ZBS_API AZBSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AZBSGameModeBase();

protected:

	virtual bool Initialize();

};
