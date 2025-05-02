// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCoins.h"

// Sets default values
AMyCoins::AMyCoins()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCoins::BeginPlay()
{
	Super::BeginPlay();
	
	//finds the sphere mesh and adds the sphere mesh to the key
	//makes the sphere mesh have overlap 
	SphereMesh = FindComponentByClass<UStaticMeshComponent>();
	SphereMesh->OnComponentBeginOverlap.AddDynamic(this, &AMyCoins::OnOverlapBegin);
	SphereMesh->SetGenerateOverlapEvents(true);
}

// Called every frame
void AMyCoins::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyCoins::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	
	//UE_LOG(LogTemp, Warning, TEXT("COLLISION DETECTED"));

	//destroys the actor
	this->Destroy();
}