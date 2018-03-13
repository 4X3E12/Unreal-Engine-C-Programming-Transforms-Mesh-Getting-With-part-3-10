// Fill out your copyright notice in the Description page of Project Settings.

#include "AChreter.h"
#include "Components/StaticMeshComponent.h" 

// Sets default values
AAChreter::AAChreter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
Root = CreateDefaultSubobject <USceneComponent > (TEXT ("Root"));

RootComponent = Root;


Mesh = CreateDefaultSubobject <UStaticMeshComponent >(TEXT ("Mesh"));

Mesh -> AttachTo(Root);

}

// Called when the game starts or when spawned
void AAChreter::BeginPlay()
{
	Super::BeginPlay();

	mCurrentLocation = Mesh->GetRelativeTransform().GetLocation();
	
}

// Called every frame
void AAChreter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float dist = this->GetDistanceTo(player);		
	FVector distA = mCurrentLocation;

	if (dist < 250){
		distA.Z += 80;
	}
	Mesh->SetRelativeLocation(distA);

}

