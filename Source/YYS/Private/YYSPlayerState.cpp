// Fill out your copyright notice in the Description page of Project Settings.


#include "YYSPlayerState.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "Net/UnrealNetwork.h"

AYYSPlayerState::AYYSPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSet = CreateDefaultSubobject<UYYSAttributeSet>(TEXT("AttributeSet"));

	NetUpdateFrequency = 100.0f;

}

UAbilitySystemComponent* AYYSPlayerState::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

UYYSAttributeSet* AYYSPlayerState::GetAttributeSet() const
{
	return AttributeSet;
}

void AYYSPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(AYYSPlayerState, Ready, COND_None, REPNOTIFY_Always);
}

bool AYYSPlayerState::isPlayerAlive() const
{
	return Alive;
}

bool AYYSPlayerState::isPlayerReady() const
{
	return Ready;
}

void AYYSPlayerState::SetPlayerReady(bool isReady)
{
	Ready = isReady;
}

bool AYYSPlayerState::isHomeowner() const
{
	return Homeowner;
}

void AYYSPlayerState::SetHomeowner(bool isHomeowner)
{
	Homeowner = isHomeowner;
}

FTeam AYYSPlayerState::GetTeam() const
{
	return TeamType;
}

void AYYSPlayerState::Initialize(FTeam SetTeam, FJobs SetJob)
{
	TeamType = SetTeam;
	PlayerJob = SetJob;
}

void AYYSPlayerState::Initialize()
{
	Alive = true;
	Ready = false;
	TeamType = Visiter;
	PlayerJob = e;
}
