#include "SpecializedFactoryUserComponent.h"
#include "Net/UnrealNetwork.h"

USpecializedFactoryUserComponent::USpecializedFactoryUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USpecializedFactoryUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpecializedFactoryUserComponent, Queues);
}


