// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FEELRAGE_API UHealth : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHealth();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Health;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MaxHealth;
	
	UFUNCTION(BlueprintCallable)
	void AddHealth(int Amount);
	
	UFUNCTION(BlueprintCallable)
	void SubtractHealth(int Amount);
};
