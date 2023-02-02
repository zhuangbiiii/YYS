// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/ProcedualBuildingGenerator.h"

AProcedualBuildingGenerator::AProcedualBuildingGenerator()
{
	WallPath = CreateDefaultSubobject<USplineComponent>(TEXT("WallPath"));
	RootComponent = WallPath;
	WallHISM = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Wall"));
	WallHISM->SetupAttachment(RootComponent);
	DoorHISM = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Door"));
	DoorHISM->SetupAttachment(RootComponent);
	DecoHISM = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Deco"));
	DecoHISM->SetupAttachment(RootComponent);
	CornerHISM = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Corner"));
	CornerHISM->SetupAttachment(RootComponent);
	WindowsHISM = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Windows"));
	WindowsHISM->SetupAttachment(RootComponent);

	RandomStream.Initialize(Seed);

	DecoX = X - WallDepth * 2;
	DecoY = Y - WallDepth * 2;

	if (CornerSMARR.Num() == 0 || WallSMARR.Num() == 0 )
	{
		UE_LOG(LogTemp, Error, TEXT("CornerAMARR or WallSMARR must have a valid item!"));
	}
	else
	{
		CornerHISM->SetStaticMesh(CornerSMARR[RandomStream.RandRange(0, CornerSMARR.Num() - 1)]);
		WallHISM->SetStaticMesh(WallSMARR[RandomStream.RandRange(0, WallSMARR.Num() - 1)]);
	}
}
