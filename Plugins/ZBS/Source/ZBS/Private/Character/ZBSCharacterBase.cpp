// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ZBSCharacterBase.h"

// Sets default values
AZBSCharacterBase::AZBSCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZBSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

bool AZBSCharacterBase::Initialize()
{
	return false;
}

// Called every frame
void AZBSCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AZBSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

