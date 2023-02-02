// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/ZBSActorBase.h"

// Sets default values
AZBSActorBase::AZBSActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZBSActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

bool AZBSActorBase::Initialize()
{
	return false;
}

// Called every frame
void AZBSActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

