#include "BandagesComponent.h"
#include "Net/UnrealNetwork.h"

UBandagesComponent::UBandagesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->BandagesMesh = NULL;
    this->BanadagesSoundCue = NULL;
    this->bIsEquipped = false;
}

void UBandagesComponent::ServerUseBandages_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UBandagesComponent::ServerUseBandages_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UBandagesComponent::OnRep_IsEquipped() {
}

void UBandagesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBandagesComponent, bIsEquipped);
}


