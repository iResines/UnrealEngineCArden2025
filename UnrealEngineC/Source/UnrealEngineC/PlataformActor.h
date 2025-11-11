// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlataformActor.generated.h"
class UBoxComponent;

UCLASS()
class UNREALENGINEC_API APlataformActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataformActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Platform Functions")
	void ChangeMaterial(UMaterialInterface* NewMaterial);

	UFUNCTION()
	void
		OnOverlapBegin(class UPrimitiveComponent* OverLappedComp,
													class AActor* OtherActor,
													class UPrimitiveComponent* OtherComp,
													int32 OtherBodyIndex,
													bool bFromSweep,
													const FHitResult& SweepResult);

public:
	//components
	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform Settings")
	UStaticMeshComponent* PlatformMesh;

	//variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	UMaterialInterface* PlatformMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	float MovementAmplitud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	FVector InitialLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Settings")
	bool bMovingRight;

};
