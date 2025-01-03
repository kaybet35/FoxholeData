#include "SensorOperatorMountComponent.h"

USensorOperatorMountComponent::USensorOperatorMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElectricityCost = 1.00f;
}

void USensorOperatorMountComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange, bool bIsOmnidirectional) {
}
bool USensorOperatorMountComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange, bool bIsOmnidirectional) {
    return true;
}


