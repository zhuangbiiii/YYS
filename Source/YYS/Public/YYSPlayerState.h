// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"

#include "YYSPlayerState.generated.h"

/**
 * 
 */
UENUM()
enum FTeam {
	Goose,
	Duck,
	Neutral,
	Ghost,
	Visiter
};


UCLASS()
class YYS_API AYYSPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:

	AYYSPlayerState();

	//~ Begin IAbilitySystemInterface /** Returns our Ability System Component. */ 
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// //~ End IAbilitySystemInterface

	UAttributeSet* GetAttributeSet() const;

	UFUNCTION(BlueprintCallable)
	bool isPlayerAlive() const;

	UFUNCTION(BlueprintCallable)
	void Initialize(FTeam SetTeam);

protected:

	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	UAttributeSet* AttributeSet;

private:

	//Player live state
	bool Alive;

	//Player team
	FTeam TeamType;
};
