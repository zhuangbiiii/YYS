// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "YYSBlueprintFunctionLibrary.h"
#include "YYSAttributeSet.h"

#include "YYSPlayerState.generated.h"

/**
 * 
 */


UCLASS()
class YYS_API AYYSPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:

	AYYSPlayerState();

	//~ Begin IAbilitySystemInterface /** Returns our Ability System Component. */ 
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// //~ End IAbilitySystemInterface

	UYYSAttributeSet* GetAttributeSet() const;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	bool isPlayerAlive() const;

	UFUNCTION(BlueprintCallable)
	bool isPlayerReady() const;

	UFUNCTION(BlueprintCallable)
	void SetPlayerReady(bool isReady);

	UFUNCTION(BlueprintCallable)
	FTeam GetTeam() const;

	UFUNCTION(BlueprintCallable)
	void Initialize(FTeam SetTeam,FJobs SetJob);

protected:

	UPROPERTY()
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	UYYSAttributeSet* AttributeSet;

private:
	//When play travel to lobby,reset player state.
	void Initialize();

	//Player live state
	bool Alive = true;

	//Ready or not
	UPROPERTY(Replicated)
	bool Ready = false;

	//Player team
	FTeam TeamType = Visiter;

	//Player job
	FJobs PlayerJob = e;


};
