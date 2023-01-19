// Fill out your copyright notice in the Description page of Project Settings.


#include "YYSGameStateBase.h"

AYYSGameStateBase::AYYSGameStateBase()
{
}

bool AYYSGameStateBase::Initialize()
{
	return false;
}

void AYYSGameStateBase::GeneratePlayerTeam(int8 Duck, int8 Neutral)
{
	Duck = Duck > 0 ? Duck : 1;
	Neutral = Neutral > 0 ? Neutral : 1;
	//
	//for (int i = 1; i++; i <= Duck)
	//{
	//	PlayerArray.Num();
	//}

}
