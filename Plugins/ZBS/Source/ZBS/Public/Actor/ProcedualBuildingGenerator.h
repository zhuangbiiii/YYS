// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actor/ZBSActorBase.h"
#include "Components/SplineComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

#include "ProcedualBuildingGenerator.generated.h"

/**
 * 
 */
UCLASS()
class ZBS_API AProcedualBuildingGenerator : public AZBSActorBase
{
	GENERATED_BODY()
	
public:

	AProcedualBuildingGenerator();

	//样条线组件，根组件，用来手动指定展厅外围
	UPROPERTY(BlueprintReadOnly)
	USplineComponent* WallPath;
	//层级实例化静态网格体组件
	UPROPERTY(BlueprintReadOnly)
	UHierarchicalInstancedStaticMeshComponent* DoorHISM;
	UPROPERTY(BlueprintReadOnly)
	UHierarchicalInstancedStaticMeshComponent* DecoHISM;
	UPROPERTY(BlueprintReadOnly)
	UHierarchicalInstancedStaticMeshComponent* WallHISM;
	UPROPERTY(BlueprintReadOnly)
	UHierarchicalInstancedStaticMeshComponent* CornerHISM;
	UPROPERTY(BlueprintReadOnly)
	UHierarchicalInstancedStaticMeshComponent* WindowsHISM;

	//全局随机流送种子，种子可以复现展厅
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	int Seed;

	//长边，180cm-50000cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float X;
	//宽边，180cm-50000cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float Y;
	//走廊宽，50cm-80cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float Interval;
	//墙宽，1cm-200cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float WallDepth;

	//墙角立柱模型数组，至少一个
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> CornerSMARR;
	//墙模型数组，至少一个
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> WallSMARR;
	//门模型数组，可以没有
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> DoorSMARR;
	//装饰模型数组，可以没有
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> DecoSMARR;
	//窗户模型数组，可以没有
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> WindowsSMARR;

	//是否生成墙面
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowWall = true;
	//是否生成窗户
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowWindows = true;
	//是否生成墙饰
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowWallDeco = true;
	//是否生成门
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowDoor = true;
	//是否生成内饰
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowDeco = true;

protected:
	//单个装饰块长，限制在80cm-150cm
	float DecoX;
	//块宽
	float DecoY;
	//保留区块，两个坐标之间的矩形区域用来生成类似超市低价商品区域
	FVector StartPoint;
	FVector EndPoint;

	//随机流送池
	FRandomStream RandomStream;

private:


};
