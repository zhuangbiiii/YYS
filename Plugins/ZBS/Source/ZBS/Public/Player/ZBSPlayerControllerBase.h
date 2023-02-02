// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "ZBSPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class ZBS_API AZBSPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

protected:

	virtual bool Initialize();
	
};
