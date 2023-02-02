// Fill out your copyright notice in the Description page of Project Settings.


#include "Common/ZBSMeshData.h"

UZBSMeshData::UZBSMeshData()
{
	RandomStream.Initialize(0);
}

bool UZBSMeshData::IsValid()
{
	if (CornorMesh.Num() && WallMesh.Num())
	{
		return true;
	}
	else
	{
		return false;
	}
}

UStaticMesh* UZBSMeshData::RandomizeCornorMesh()
{
	return CornorMesh[RandomStream.RandRange(0, CornorMesh.Num() - 1)];
}

UStaticMesh* UZBSMeshData::RandomizeWallMesh()
{
	return WallMesh[RandomStream.RandRange(0, WallMesh.Num() - 1)];
}
