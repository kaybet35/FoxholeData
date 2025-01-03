#include "RefineryUserComponent.h"
#include "Net/UnrealNetwork.h"

URefineryUserComponent::URefineryUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URefineryUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URefineryUserComponent, OrderInfo);
}


