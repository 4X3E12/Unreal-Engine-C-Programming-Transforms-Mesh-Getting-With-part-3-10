// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AChreter.generated.h"

UCLASS()
class CPLUSTHIREDBOOKNEW_API AAChreter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAChreter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	 
UPROPERTY(EditAnywhere)
    USceneComponent * Root; 


UPROPERTY(EditAnywhere)
 UStaticMeshComponent * Mesh; 

 //Transforms
 UPROPERTY (EditAnywhere)
	AActor* player;
	
private:
 FVector mCurrentLocation;
};
