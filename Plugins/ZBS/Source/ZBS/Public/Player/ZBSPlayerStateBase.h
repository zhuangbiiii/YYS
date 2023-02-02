// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"

#include "ZBSPlayerStateBase.generated.h"

/**
 * 
 */
UCLASS()
class ZBS_API AZBSPlayerStateBase : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AZBSPlayerStateBase();

	//~ Begin IAbilitySystemInterface /** Returns our Ability System Component. */ 
	UFUNCTION(BlueprintCallable)
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// //~ End IAbilitySystemInterface

	UAttributeSet* GetAttributeSet() const;

protected:

	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	UAttributeSet* AttributeSet;

	virtual bool Initialize();

};
