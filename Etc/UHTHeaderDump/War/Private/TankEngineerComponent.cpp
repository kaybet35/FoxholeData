#include "TankEngineerComponent.h"

UTankEngineerComponent::UTankEngineerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Engineer"));
    this->TargetMountIndex = 0;
    this->RepairAmount = 1;
}

void UTankEngineerComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UTankEngineerComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UTankEngineerComponent::ServerRepair_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UTankEngineerComponent::ServerRepair_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}


