// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor_Test.generated.h"

UCLASS()
class UNREALENGINEC_API AMyActor_Test : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor_Test();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Ejemplo de uan variable instancia publica
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor_Test")
	float MyFloatVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor_Test")
	int32 edad;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor_Test")
	bool esInstructor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor_Test")
	FString nombre;

	// Ejemplo de una funcion publica
	UFUNCTION(BlueprintCallable, Category = "MyActor_Test")
	void DemostrateFundamentals();
};
