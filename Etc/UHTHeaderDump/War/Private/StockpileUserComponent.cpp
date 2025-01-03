#include "StockpileUserComponent.h"
#include "Net/UnrealNetwork.h"

UStockpileUserComponent::UStockpileUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStockpileUserComponent::OnRep_Vehicles() {
}

void UStockpileUserComponent::OnRep_VehicleCrates() {
}

void UStockpileUserComponent::OnRep_Structures() {
}

void UStockpileUserComponent::OnRep_StructureCrates() {
}

void UStockpileUserComponent::OnRep_ReservableItemCrates() {
}

void UStockpileUserComponent::OnRep_Items() {
}

void UStockpileUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStockpileUserComponent, Items);
    DOREPLIFETIME(UStockpileUserComponent, ReservableItemCrates);
    DOREPLIFETIME(UStockpileUserComponent, Vehicles);
    DOREPLIFETIME(UStockpileUserComponent, VehicleCrates);
    DOREPLIFETIME(UStockpileUserComponent, Structures);
    DOREPLIFETIME(UStockpileUserComponent, StructureCrates);
}


