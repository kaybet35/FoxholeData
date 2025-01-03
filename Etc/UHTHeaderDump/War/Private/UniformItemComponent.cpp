#include "UniformItemComponent.h"
#include "Net/UnrealNetwork.h"

UUniformItemComponent::UUniformItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->UniformType = EUniformType::Default;
}

void UUniformItemComponent::OnRep_UniformType() {
}

void UUniformItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUniformItemComponent, UniformType);
}


