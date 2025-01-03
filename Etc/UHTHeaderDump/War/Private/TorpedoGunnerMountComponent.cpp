#include "TorpedoGunnerMountComponent.h"
#include "Net/UnrealNetwork.h"

UTorpedoGunnerMountComponent::UTorpedoGunnerMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileClass = NULL;
    this->MinDepth = 0.00f;
    this->MaxDepth = 5000.00f;
    this->RangeIncrement = 1000.00f;
    this->Ammo = 0;
    this->RangeIndex = 0;
}

void UTorpedoGunnerMountComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange, FVector2D TargetDirection, float TargetDepth) {
}
bool UTorpedoGunnerMountComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange, FVector2D TargetDirection, float TargetDepth) {
    return true;
}

void UTorpedoGunnerMountComponent::ServerCycleRange_Implementation() {
}
bool UTorpedoGunnerMountComponent::ServerCycleRange_Validate() {
    return true;
}

void UTorpedoGunnerMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTorpedoGunnerMountComponent, Ammo);
    DOREPLIFETIME(UTorpedoGunnerMountComponent, RangeIndex);
}


