#include "BinocularsItemComponent.h"
#include "EEquippedWeaponGripType.h"
#include "Net/UnrealNetwork.h"

UBinocularsItemComponent::UBinocularsItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->EquippedGripType = EEquippedWeaponGripType::Pistol;
    this->CameraArmLengthCurve = NULL;
    this->SkeletalMesh = NULL;
    this->bIsEquipped = false;
}

void UBinocularsItemComponent::ServerStartStopScope_Implementation(bool IsStartScope, FActivityStateChange ActivityStateChange) {
}
bool UBinocularsItemComponent::ServerStartStopScope_Validate(bool IsStartScope, FActivityStateChange ActivityStateChange) {
    return true;
}

void UBinocularsItemComponent::OnRep_IsEquipped() {
}

void UBinocularsItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBinocularsItemComponent, bIsEquipped);
}


