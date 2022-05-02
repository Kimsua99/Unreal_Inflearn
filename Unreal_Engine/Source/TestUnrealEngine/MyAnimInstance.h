// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TESTUNREALENGINE_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Pawn, Meta=(AllowPrivateAccess=true))
	float Speed;//멈춰있다가 움직임 구현

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
	bool isFalling;
};
