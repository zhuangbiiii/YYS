// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "ZBSMeshData.generated.h"

/**
 * 
 */
UCLASS()
class ZBS_API UZBSMeshData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UZBSMeshData();

	bool IsValid();
	UFUNCTION(BlueprintCallable)
	UStaticMesh* RandomizeCornorMesh();
	UFUNCTION(BlueprintCallable)
	UStaticMesh* RandomizeWallMesh();


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<UStaticMesh*> CornorMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<UStaticMesh*> WallMesh;

protected:
	FRandomStream RandomStream;
};
