// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "MyKey1.h"


// Sets default values
AMyKey1::AMyKey1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyKey1::BeginPlay()
{
	Super::BeginPlay();
	
	//adds the widget to the screen
	if (widgetClass) {
		HUD = CreateWidget<UMyUserWidget>(GetWorld(), widgetClass);
		if (HUD) {
			HUD->AddToViewport();
		}
	}

	//finds the sphere mesh and adds the sphere mesh to the key
	//makes the sphere mesh have overlap 
	SphereMesh = FindComponentByClass<UStaticMeshComponent>();
	SphereMesh->OnComponentBeginOverlap.AddDynamic(this, &AMyKey1::OnOverlapBegin);
	SphereMesh->SetGenerateOverlapEvents(true);
}

// Called every frame
void AMyKey1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyKey1::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	//UE_LOG(LogTemp, Warning, TEXT("COLLISION DETECTED"));

	//destroys the key mesh after collision
	this->Destroy();

	//calls the change text function
	HUD->ChangeText();
}

