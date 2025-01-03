#include "MaintenanceTunnelUserComponent.h"
#include "Net/UnrealNetwork.h"

UMaintenanceTunnelUserComponent::UMaintenanceTunnelUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMaintenanceTunnelUserComponent::ServerUpdateStructureCounts_Implementation(float Range, uint16 Filter) {
}
bool UMaintenanceTunnelUserComponent::ServerUpdateStructureCounts_Validate(float Range, uint16 Filter) {
    return true;
}

void UMaintenanceTunnelUserComponent::ServerApplySettings_Implementation(float Range, uint16 Filter) {
}
bool UMaintenanceTunnelUserComponent::ServerApplySettings_Validate(float Range, uint16 Filter) {
    return true;
}

void UMaintenanceTunnelUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMaintenanceTunnelUserComponent, StructureCounts);
}


