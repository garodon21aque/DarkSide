// Fill out your copyright notice in the Description page of Project Settings.

#include "Net/UnrealNetwork.h"
#include "Engine/ActorChannel.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "AttributeComponent.h"

// Sets default values for this component's properties
UAttributeComponent::UAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAttributeComponent::BeginPlay()
{
	Super::BeginPlay();
	SetIsReplicated(true);
	// ...
	
}

void UAttributeComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAttributeComponent, Health);
	DOREPLIFETIME(UAttributeComponent, MaxHealth);
	

}

// Called every frame
void UAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UAttributeComponent::ModifyHealth(const float Delta)
{
	const float OldHealth = Health;
	Health = FMath::Clamp<float>(Health + Delta, 0.f, MaxHealth);
	return Health - OldHealth;
}

void UAttributeComponent::OnRep_Health(float OldHealth)
{
	OnHealthModified(Health - OldHealth);
}
