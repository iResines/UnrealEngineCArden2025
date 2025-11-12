// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temperature.generated.h"

UCLASS()
class UNREALENGINEC_API ATemperature : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemperature();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Método para obtener la temperatura en Fahrenheit
	UFUNCTION(BlueprintCallable, Category = "Temperature")
	float GetTemperatureFahrenheit() const;

	UFUNCTION(BlueprintCallable, Category = "Temperature")
	static float CalculateTemperatureDifference(float Temp1, float Temp2);
	
	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float CalculateStaticTemperatureDifference(float Temp1, float Temp2);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float ConvertKelvinToCelcius(float Kelvin);

	UFUNCTION(BlueprintPure, Category = "Temperature")
	static float CalculateAverageTemperature(float Temp1, float Temp2);

	// Evento para checar temperatura
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Temperature")
	void OnTemperatureCheck(float CurrentTemperature);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Función para obtener la temperatura actual en celcius
	UPROPERTY(BlueprintReadWrite, EditAnywhere,  Category = "Temperature")
	float TemperatureCelcius;


};
