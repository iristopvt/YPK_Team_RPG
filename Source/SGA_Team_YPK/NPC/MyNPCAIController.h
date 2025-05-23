// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyNPCAIController.generated.h"

/**
 * 
 */
UCLASS()
class SGA_TEAM_YPK_API AMyNPCAIController : public AAIController
{
	GENERATED_BODY()
public:
	AMyNPCAIController();

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	void RandMove();

//private:
	UPROPERTY()
	class UBlackboardData* _bb;

	UPROPERTY()
	class UBehaviorTree* _bt;

};
