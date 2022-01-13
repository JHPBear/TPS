// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterDefines.h"
#include "TPSAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TPS_API UTPSAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = "true"))
		float Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = "true"))
		int State;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, meta = (AllowPrivateAccess = "true"))
		bool IsAttack;
public:
	UTPSAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	void SetState(int set_State) { State = set_State; };
	void SetIsAttack(bool set_Attack) { IsAttack = set_Attack; };


};