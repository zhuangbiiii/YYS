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

	//�����������������������ֶ�ָ��չ����Χ
	UPROPERTY(BlueprintReadOnly)
	USplineComponent* WallPath;
	//�㼶ʵ������̬���������
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

	//ȫ������������ӣ����ӿ��Ը���չ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	int Seed;

	//���ߣ�180cm-50000cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float X;
	//��ߣ�180cm-50000cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float Y;
	//���ȿ�50cm-80cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float Interval;
	//ǽ��1cm-200cm
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	float WallDepth;

	//ǽ������ģ�����飬����һ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> CornerSMARR;
	//ǽģ�����飬����һ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> WallSMARR;
	//��ģ�����飬����û��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> DoorSMARR;
	//װ��ģ�����飬����û��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> DecoSMARR;
	//����ģ�����飬����û��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	TArray<UStaticMesh*> WindowsSMARR;

	//�Ƿ�����ǽ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowWall = true;
	//�Ƿ����ɴ���
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowWindows = true;
	//�Ƿ�����ǽ��
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowWallDeco = true;
	//�Ƿ�������
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowDoor = true;
	//�Ƿ���������
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PBG")
	bool bShowDeco = true;

protected:
	//����װ�ο鳤��������80cm-150cm
	float DecoX;
	//���
	float DecoY;
	//�������飬��������֮��ľ������������������Ƴ��еͼ���Ʒ����
	FVector StartPoint;
	FVector EndPoint;

	//������ͳ�
	FRandomStream RandomStream;

private:


};
