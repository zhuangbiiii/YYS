// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "YYSPlayerController.h"

#include "YYSUserWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class YYS_API UYYSUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//When create widget send some data to this widget.
	UFUNCTION(BlueprintCallable)
	virtual void Setup();

	//When data is change,update the UMG.
	UFUNCTION(BlueprintCallable)
	virtual void Updatevisual();

private:
	//void NotifyPlayerReady();
};
