// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehicle.h"

// Sets default values
AVehicle::AVehicle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VehicleColor = FColor::Blue;
	Speed = 100.0f;
}

// Called when the game starts or when spawned
void AVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

void AVehicle::Move()
{
	//Implement movement logic here
	UE_LOG(LogTemp, Warning, TEXT("The vehicle is moving at speed: %f"), Speed);
}

