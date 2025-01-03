#include "DecayPreventionUserComponent.h"
#include "Net/UnrealNetwork.h"

UDecayPreventionUserComponent::UDecayPreventionUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDecayPreventionUserComponent::ServerUpdateStructureCount_Implementation() {
}

void UDecayPreventionUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDecayPreventionUserComponent, StructureCounts);
}


