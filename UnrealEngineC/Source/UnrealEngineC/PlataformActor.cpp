// Fill out your copyright notice in the Description page of Project Settings.


#include "PlataformActor.h"
#include "Components/BoxComponent.h"

// Sets default values
APlataformActor::APlataformActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create and set up the static mesh component
	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	RootComponent = PlatformMesh;

	// Initialize variables
	MovementSpeed = 100.0f;
	MovementAmplitud = 500.0f;
	bMovingRight = true;
	
	// Establecer colisiones
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(RootComponent);
	CollisionComponent->SetBoxExtent(FVector(1.0f, 1.0f, 1.0f));
	CollisionComponent->SetCollisionProfileName("BlockAllDynamic");
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this,
														   &APlataformActor::OnOverlapBegin);
}

// Called when the game starts or when spawned
void APlataformActor::BeginPlay()
{
	Super::BeginPlay();
	InitialLocation = GetActorLocation();
	ChangeMaterial(PlatformMaterial);
}

// Called every frame
void APlataformActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector CurrentLocation = GetActorLocation();
	float DeltaMovement = MovementSpeed * DeltaTime;

	// Validar el mov en la dirección deseada
	if (bMovingRight)
	{
		CurrentLocation.Y += DeltaMovement;
		if (CurrentLocation.Y >= InitialLocation.Y + MovementAmplitud)
		{
			bMovingRight = false;
		}
	}
	else
	{
		CurrentLocation.Y -= DeltaMovement;
		if (CurrentLocation.Y <= InitialLocation.Y - MovementAmplitud)
		{
			bMovingRight = true;
		}
	}

	SetActorLocation(CurrentLocation);

	// DrawDebugLine(GetWorld(),
						// InitialLocation, 
						// CurrentLocation, 
						// FColor::White, 
						// false, 
						// -1.0f, 
						// 0, 
						// 5.0f);

	DrawDebugLine(GetWorld(),
					InitialLocation - FVector(0, MovementAmplitud, 0),
					InitialLocation + FVector(0, MovementAmplitud, 0),
					FColor::White,
					false,
					-1.0f,
					0,
					5.0f);
}

void
APlataformActor::ChangeMaterial(UMaterialInterface* NewMaterial) {
	if (NewMaterial && PlatformMesh) {
		PlatformMesh->SetMaterial(0, NewMaterial);
	}
}

void
APlataformActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
								AActor* OtherActor,
								UPrimitiveComponent* OtherComp,
								int32 OtherBodyIndex,
								bool bFromSweep, const FHitResult& SweepResult) {
	if (OtherActor && (OtherActor != this) && OtherComp) {
		Destroy();
	}
}

