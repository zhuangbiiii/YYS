// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "ZBSUserWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class ZBS_API UZBSUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	virtual bool Initialize();

};
