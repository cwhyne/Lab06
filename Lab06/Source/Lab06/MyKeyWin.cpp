// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget2.h"
#include "MyKeyWin.h"


// Sets default values
AMyKeyWin::AMyKeyWin()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyKeyWin::BeginPlay()
{
	Super::BeginPlay();

	//adds the widget to the screen
	if (widgetClass) {
		HUD = CreateWidget<UMyUserWidget2>(GetWorld(), widgetClass);
		if (HUD) {
			HUD->AddToViewport();
		}
	}

	//finds the sphere mesh and adds the sphere mesh to the key
	//makes the sphere mesh have overlap 
	SphereMesh = FindComponentByClass<UStaticMeshComponent>();
	SphereMesh->OnComponentBeginOverlap.AddDynamic(this, &AMyKeyWin::OnOverlapBegin);
	SphereMesh->SetGenerateOverlapEvents(true);
}

// Called every frame
void AMyKeyWin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyKeyWin::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	//UE_LOG(LogTemp, Warning, TEXT("COLLISION DETECTED"));

	//destroys the key mesh
	this->Destroy();

	//calls the change text function
	HUD->ChangeText();
}

