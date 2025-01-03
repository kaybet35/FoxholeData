#include "SoulstoneComponent.h"
#include "Net/UnrealNetwork.h"

USoulstoneComponent::USoulstoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->TransformExplosionEffect = NULL;
    this->bIsEquipped = false;
}

void USoulstoneComponent::ServerUseSoulstone_Implementation(FActivityStateChange ActivityStateChange) {
}
bool USoulstoneComponent::ServerUseSoulstone_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void USoulstoneComponent::OnRep_IsEquipped() {
}

void USoulstoneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USoulstoneComponent, bIsEquipped);
}


