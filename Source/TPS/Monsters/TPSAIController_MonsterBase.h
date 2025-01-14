// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CommonDefines.h"
#include "AIController.h"
#include "TPSAIController_MonsterBase.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API ATPSAIController_MonsterBase : public AAIController
{
	GENERATED_BODY()

public:
	ATPSAIController_MonsterBase();

	static const FName StartPosKey;
	static const FName NextPosKey;
	static const FName TargetKey;
	static const FName IsAttackableKey;

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

	void RunAI();
	void StopAI();

private:

	UPROPERTY()
	class UBlackboardData* BBAsset;

	UPROPERTY()
	class UBehaviorTree* BTAsset;
	
};
