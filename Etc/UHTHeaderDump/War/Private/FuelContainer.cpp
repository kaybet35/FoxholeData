#include "FuelContainer.h"
#include "Net/UnrealNetwork.h"
#include "ReplicatedGenericStockpileComponent.h"

AFuelContainer::AFuelContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}

void AFuelContainer::OnRep_FuelTankerInfo() {
}

void AFuelContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelContainer, FuelTankerInfo);
}


