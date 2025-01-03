#include "HammerComponent.h"
#include "Templates/SubclassOf.h"

UHammerComponent::UHammerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageType = NULL;
    this->ImpactEffectClass = NULL;
    this->bCanBuild = false;
    this->ResourceLevel = 0;
    this->GatherXPMultiplier = 1;
}

void UHammerComponent::MulticastPlayImpactFX_Implementation() {
}

void UHammerComponent::MulticastOnGather_Implementation(AResource* Resource, TSubclassOf<AImpactEffect> ImpactEffect, const FGatherResult& GatherResult) {
}


