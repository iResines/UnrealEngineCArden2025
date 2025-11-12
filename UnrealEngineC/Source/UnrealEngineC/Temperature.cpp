// Fill out your copyright notice in the Description page of Project Settings.


#include "Temperature.h"

// Sets default values
ATemperature::ATemperature()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TemperatureCelcius = 25.0f; // Default temperature in Celsius
}

// Called when the game starts or when spawned
void ATemperature::BeginPlay()
{
	Super::BeginPlay();
	
}

float ATemperature::GetTemperatureFahrenheit() const
{
	return (TemperatureCelcius * 9.0f / 5.0f) + 32.0f;
}

float ATemperature::CalculateTemperatureDifference(float Temp1, float Temp2)
{
	return FMath::Abs(Temp1 - Temp2);
}

float ATemperature::CalculateStaticTemperatureDifference(float Temp1, float Temp2)
{
	return Temp1 - Temp2;
}

float ATemperature::ConvertKelvinToCelcius(float Kelvin)
{
	return Kelvin - 273.15f;
}

float ATemperature::CalculateAverageTemperature(float Temp1, float Temp2)
{
	return (Temp1 + Temp2) / 2.0f;
}

// Called every frame
void ATemperature::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

