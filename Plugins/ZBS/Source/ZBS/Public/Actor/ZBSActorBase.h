// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ZBSActorBase.generated.h"

UCLASS()
class ZBS_API AZBSActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZBSActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual bool Initialize();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
