// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TransformModifierActor.generated.h"

UCLASS()
class UNREALENGINEC_API ATransformModifierActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATransformModifierActor();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, category = "Transform")
	void ModifyTargetTransform(float DeltaTime);

	UFUNCTION(BlueprintCallable, category = "Transform")
	void MoveToNextPosition();

	UFUNCTION(BlueprintCallable, category = "Transform")
	void ChangeMaterial();

	void DrawDSphere() const;

public:
	// Una variable que almacene a Target Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	AActor* TargetActor;

	// Variable to hold the new transform
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	FTransform NewTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	TArray<FVector> Positions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	TArray<UMaterialInterface*> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Transform")
	int32 CurrentPositionIndex;
};
