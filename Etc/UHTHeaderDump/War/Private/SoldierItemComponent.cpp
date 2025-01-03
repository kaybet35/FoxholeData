#include "SoldierItemComponent.h"
#include "Net/UnrealNetwork.h"

USoldierItemComponent::USoldierItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoldierVisualsPacked = 0;
}

void USoldierItemComponent::OnRep_SoldierVisuals() {
}

void USoldierItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USoldierItemComponent, SoldierVisualsPacked);
}


