#include "MultiAmmoStructureMountComponent.h"
#include "Net/UnrealNetwork.h"

UMultiAmmoStructureMountComponent::UMultiAmmoStructureMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Turret"));
}

void UMultiAmmoStructureMountComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UMultiAmmoStructureMountComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UMultiAmmoStructureMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMultiAmmoStructureMountComponent, MultiAmmo);
}


