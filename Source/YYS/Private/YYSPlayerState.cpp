// Fill out your copyright notice in the Description page of Project Settings.


#include "YYSPlayerState.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"

AYYSPlayerState::AYYSPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSet = CreateDefaultSubobject<UAttributeSet>(TEXT("AttributeSet"));

}

UAbilitySystemComponent* AYYSPlayerState::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

UAttributeSet* AYYSPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}

bool AYYSPlayerState::isPlayerAlive() const
{
	return Alive;
}

void AYYSPlayerState::Initialize(FTeam SetTeam)
{
	Alive = true;
	TeamType = SetTeam;
}
