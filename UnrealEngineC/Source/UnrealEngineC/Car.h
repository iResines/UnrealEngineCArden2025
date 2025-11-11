// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Vehicle.h"
#include "Car.generated.h"

UENUM()
enum class ECarBrand
{
	Toyota		UMETA(DisplayName = "Toyota"),
	Ford		UMETA(DisplayName = "Ford"),
	Honda		UMETA(DisplayName = "Honda"),
	BMW			UMETA(DisplayName = "BMW"),
	Audi		UMETA(DisplayName = "Audi"),
	Mercedes 	UMETA(DisplayName = "Mercedes"),
	Volkswagen	UMETA(DisplayName = "Volkswagen"),
	Tesla		UMETA(DisplayName = "Tesla"),
	Hyundai		UMETA(DisplayName = "Hyundai"),
	Nissan 		UMETA(DisplayName = "Nissan"),
};

/**
 * 
 */
UCLASS()
class UNREALENGINEC_API ACar : public AVehicle
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ACar();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Move() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	ECarBrand CarBrand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	FString CarModel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	FString LicensePlate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car")
	AVehicle* Camper;
};
