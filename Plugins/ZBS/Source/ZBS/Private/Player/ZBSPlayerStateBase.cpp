// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ZBSPlayerStateBase.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"


AZBSPlayerStateBase::AZBSPlayerStateBase()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSet = CreateDefaultSubobject<UAttributeSet>(TEXT("AttributeSet"));
}

UAbilitySystemComponent* AZBSPlayerStateBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* AZBSPlayerStateBase::GetAttributeSet() const
{
	return AttributeSet;
}

bool AZBSPlayerStateBase::Initialize()
{
    return false;
}
