// Fill out your copyright notice in the Description page of Project Settings.


#include "YYSCharacter.h"

// Sets default values
AYYSCharacter::AYYSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlayerName = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
}

// Called when the game starts or when spawned
void AYYSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AYYSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AYYSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

