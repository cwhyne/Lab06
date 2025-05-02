// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyKeyWin.generated.h"

class UMyUserWidget2;

UCLASS()
class LAB06_API AMyKeyWin : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyKeyWin();

	//UI Properties
	UPROPERTY()
	UMyUserWidget2* HUD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UMyUserWidget2> widgetClass;

	//Sphere Mesh for Collisions
	UStaticMeshComponent* SphereMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//function for detecting collision
	UFUNCTION()
	void OnOverlapBegin(
		class UPrimitiveComponent* OverlappedComp,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);


};
