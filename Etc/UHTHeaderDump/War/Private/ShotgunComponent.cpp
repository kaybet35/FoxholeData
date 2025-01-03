#include "ShotgunComponent.h"
#include "Net/UnrealNetwork.h"

UShotgunComponent::UShotgunComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShotRadius = 15.00f;
}

void UShotgunComponent::OnRep_SimulatedHitNotifies() {
}

void UShotgunComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UShotgunComponent, SimulatedHitNotifies);
}


