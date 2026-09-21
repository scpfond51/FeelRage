// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"

#include "UObject/ObjectMacros.h"

UHealth::UHealth()
{
	Health = 100;
	MaxHealth = 100;
}

void UHealth::AddHealth(int Amount)
{
	Health += Amount;
	if (Health > MaxHealth)
	{
		Health = MaxHealth;
	}
}

void UHealth::SubtractHealth(int Amount)
{
	Health -= Amount;
	if (Health < 0)
	{
		Health = 0;
	}
}
