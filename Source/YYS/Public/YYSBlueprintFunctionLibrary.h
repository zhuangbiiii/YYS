// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "YYSBlueprintFunctionLibrary.generated.h"

/**
 * Static function|enum|struct
 */

UENUM()
enum FTeam {
	Goose,
	Duck,
	Neutral,
	Ghost,
	Visiter
};

UENUM()
enum FJobs {
	e,
	rouzhi,
	tongling,
	zhengyishizhe,
	jingzhang,
	jianadae,
	mofangzhe,
	zhentan,
	guanniaozhe,
	zhengzhijia,
	suojiang,
	bingyiyuan,
	wanghong,
	fuchouzhe,
	xingjie,
	gongchengshi,
	lianren,
	baobiao,
	chaonengli,
	yazi,
	shiniaoya,
	bianxingya,
	yinshen,
	zhuanyeshashou,
	jiandie,
	jingyin,
	cike,
	gaomi,
	paidui,
	baozhawang,
	lianhuanshashou,
	renzhe,
	sangzhangbanlizhe,
	daidainiao,
	juedoudaidainiao,
	gezi,
	lieying,
	tujiu,
};

USTRUCT(BlueprintType)
struct FJob {
	GENERATED_BODY()

	FTeam Team;
	FName JobName;

};

USTRUCT(BlueprintType)
struct FMemberSetting {
	GENERATED_BODY()
	int8 DuckMin = 1;
	int8 DuckMax = 1;
	int8 NeutralMin = 2;
	int8 NeutralMax = 2;
	int8 PlayerNum;
};




UCLASS()
class YYS_API UYYSBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

};
