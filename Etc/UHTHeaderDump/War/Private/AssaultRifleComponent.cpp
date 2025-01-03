#include "AssaultRifleComponent.h"
#include "Net/UnrealNetwork.h"

UAssaultRifleComponent::UAssaultRifleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChangeShootingModeSoundCue = NULL;
    this->SingleShotScopeRange = 2500.00f;
    this->bIsInSingleShotMode = false;
}

void UAssaultRifleComponent::ServerToggleFireMode_Implementation() {
}
bool UAssaultRifleComponent::ServerToggleFireMode_Validate() {
    return true;
}

void UAssaultRifleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAssaultRifleComponent, bIsInSingleShotMode);
}


