// Fill out your copyright notice in the Description page of Project Settings.


#include "TransformModifierActor.h"

// Sets default values
ATransformModifierActor::ATransformModifierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATransformModifierActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	DrawDSphere();
}

// Called when the game starts or when spawned
void ATransformModifierActor::BeginPlay()
{
	Super::BeginPlay();
	// Vincular al Actor seleccionado con el transform
	if (TargetActor) {
		NewTransform = TargetActor->GetActorTransform();
	}
	else {
		TargetActor = nullptr;
	}
	// Inicializar el indice de la pocision actual
	if (Positions.Num() > 0) {
		MoveToNextPosition();
	}
}

// Called every frame
void ATransformModifierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ModifyTargetTransform(DeltaTime);
}

void ATransformModifierActor::ModifyTargetTransform(float DeltaTime)
{
	//if (TargetActor) {
	//	TargetActor->SetActorTransform(NewTransform);
	//}

	if (Positions.Num() == 0) {
		return;
	}
	FVector CurrentPosition = TargetActor->GetActorLocation();
	FVector TargetPosition = Positions[CurrentPositionIndex];

	// Move towards the target
	FVector Direction = (TargetPosition - CurrentPosition).GetSafeNormal();
	FVector NewPosition = CurrentPosition + Direction * 100 * GetWorld()->GetDeltaSeconds();

	TargetActor->SetActorLocation(NewPosition);

	// Check if we are close enough to the target position to consider we reached it
	if (FVector::Dist(NewPosition, TargetPosition) < 10.0f) {
		CurrentPositionIndex++;
		ChangeMaterial();
		if (CurrentPositionIndex >= Positions.Num()) {
			CurrentPositionIndex = 0; // Reset to the first position
		}
	}
}

void ATransformModifierActor::MoveToNextPosition()
{
	if (TargetActor && Positions.IsValidIndex(CurrentPositionIndex)) {
		FVector TargetPosition = Positions[CurrentPositionIndex];
		TargetActor->SetActorLocation(TargetPosition);
	}
}

void ATransformModifierActor::ChangeMaterial()
{
	/*if (TargetActor && Materials.IsValidIndex(CurrentPositionIndex)) {
		UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponents>(TargetActor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
		if (MeshComponent) {
			MeshComponent->SetMaterial(0, Materials[CurrentPositionIndex]);
		}
	}*/
}

void ATransformModifierActor::DrawDSphere() const
{
	for (const FVector& Position : Positions) {
		DrawDebugSphere(
			GetWorld(), 
			Position, 
			50.0f, // Radius
			12, // Segments
			FColor::Blue, 
			false, // Persistent (will stay for a while)
			-1.0f, // Lifetime (Negative means persistent)
			0, // Depth Priority
			1.0f // Thickness
		);
	}
}

