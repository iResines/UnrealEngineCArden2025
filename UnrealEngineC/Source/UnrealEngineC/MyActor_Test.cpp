// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_Test.h"
#include "Engine/Engine.h"

// Sets default values
AMyActor_Test::AMyActor_Test()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyFloatVariable = 50.0f;
	edad = 23;
	esInstructor = false;
	nombre = "Isabel Resines";
}

// Called when the game starts or when spawned
void AMyActor_Test::BeginPlay()
{
	Super::BeginPlay();

	DemostrateFundamentals();
	
}

// Called every frame
void AMyActor_Test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor_Test::DemostrateFundamentals(){
	// Operadores aritméticos
	int32 sum = edad + 30;
	float product = MyFloatVariable * 2.5f;

	// Estructuras de control
	if (esInstructor) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("EsInstructor is True"));
	} 
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("EsInstructor is False"));
	}

	// Bucles o ciclos
	for (int32 i = 0; i < 5; i++) {
		FString DEbugMessage = FString::Printf(TEXT("loop integration: %d"), i);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DEbugMessage);
	}

	// Bucle While
	int32 count = 0;
	while (count < 3) {
		FString WhileMessage = FString::Printf(TEXT("While loop count: %d"), count);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, WhileMessage);
		count++;
	}
}

