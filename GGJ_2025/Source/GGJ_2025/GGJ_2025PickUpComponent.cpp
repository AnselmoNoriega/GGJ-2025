// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ_2025PickUpComponent.h"

UGGJ_2025PickUpComponent::UGGJ_2025PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UGGJ_2025PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UGGJ_2025PickUpComponent::OnSphereBeginOverlap);
}

void UGGJ_2025PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AGGJ_2025Character* Character = Cast<AGGJ_2025Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
