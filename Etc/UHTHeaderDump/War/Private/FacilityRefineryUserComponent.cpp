#include "FacilityRefineryUserComponent.h"
#include "Net/UnrealNetwork.h"

UFacilityRefineryUserComponent::UFacilityRefineryUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PendingOrderCount = 0;
    this->OrderCount = 0;
    this->ItemInputBuffer = 0;
}

void UFacilityRefineryUserComponent::ServerSubmitResources_Implementation(const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount) {
}

void UFacilityRefineryUserComponent::ServerStartNewOrderWithResources_Implementation(const uint8 Index, const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount) {
}

void UFacilityRefineryUserComponent::ServerSetConversionInfo_Implementation(const int8 Index) {
}

void UFacilityRefineryUserComponent::ServerSetAccessLevel_Implementation(const EAccessLevel AccessLevel) {
}

void UFacilityRefineryUserComponent::ServerRetrieveResources_Implementation(const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount, const bool bRetrieveAsCrates, const bool bSubmitToStockpile) {
}

void UFacilityRefineryUserComponent::OnRep_PendingOrderCount() {
}

void UFacilityRefineryUserComponent::OnRep_OrderCount() {
}

void UFacilityRefineryUserComponent::OnRep_Order() {
}

void UFacilityRefineryUserComponent::OnRep_ItemInputBuffer() {
}

void UFacilityRefineryUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFacilityRefineryUserComponent, Order);
    DOREPLIFETIME(UFacilityRefineryUserComponent, PendingOrderCount);
    DOREPLIFETIME(UFacilityRefineryUserComponent, OrderCount);
    DOREPLIFETIME(UFacilityRefineryUserComponent, ItemInputBuffer);
}


