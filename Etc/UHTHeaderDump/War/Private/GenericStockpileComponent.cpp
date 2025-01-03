#include "GenericStockpileComponent.h"
#include "Net/UnrealNetwork.h"

UGenericStockpileComponent::UGenericStockpileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RetrieveDurationModifier = 1.00f;
    this->bAllowWaterVehicles = false;
    this->bCloseUIWhenRetrieving = false;
    this->bRequireFullItemStockpileToSubmit = false;
    this->bAllowNeutralSubmissions = false;
    this->bAllowDirectRetrievals = true;
    this->bAllowContainerSubmission = false;
    this->bAllowTrainPassengerSubmission = true;
    this->bIsRestrictedByClaimStatus = false;
    this->bAreCratesDisassembled = false;
}

void UGenericStockpileComponent::OnRep_Items() {
}

void UGenericStockpileComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGenericStockpileComponent, Items);
}


