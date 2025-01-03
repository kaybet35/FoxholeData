#include "PipelineUserComponent.h"
#include "Net/UnrealNetwork.h"

UPipelineUserComponent::UPipelineUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Amount = 0.00f;
}

void UPipelineUserComponent::ServerSetLiquidType_Implementation(const FName DesiredCodeName) {
}

void UPipelineUserComponent::OnRep_CodeName() {
}

void UPipelineUserComponent::OnRep_Amount() {
}

void UPipelineUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPipelineUserComponent, CodeName);
    DOREPLIFETIME(UPipelineUserComponent, Amount);
}


