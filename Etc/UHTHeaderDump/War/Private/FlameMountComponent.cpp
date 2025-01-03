#include "FlameMountComponent.h"
#include "Net/UnrealNetwork.h"

UFlameMountComponent::UFlameMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlameStreamFX = NULL;
    this->FlameBurstFX = NULL;
    this->AttachedFlameComponent = NULL;
    this->ImpactBurstFXComponent = NULL;
    this->FuelReloadAmount = 10.00f;
    this->FlameSpeedPredictionFactor = 3000.00f;
    this->FlameStreamFXParam = 0.00f;
}

void UFlameMountComponent::OnRep_FlameStreamFXParam() {
}

void UFlameMountComponent::OnRep_FlameImpactFXInfo() {
}

void UFlameMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlameMountComponent, FlameStreamFXParam);
    DOREPLIFETIME(UFlameMountComponent, FlameImpactFXInfo);
}


