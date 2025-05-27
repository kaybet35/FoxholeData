#include "PipelineUserComponent.h"
#include "Net/UnrealNetwork.h"

UPipelineUserComponent::UPipelineUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPipelineUserComponent::ServerSetLiquidType_Implementation(const FName DesiredCodeName) {
}

void UPipelineUserComponent::OnRep_System() {
}

void UPipelineUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPipelineUserComponent, RepPipelineSystem);
}


