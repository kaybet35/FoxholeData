#include "LargeMaterialComponent.h"
#include "ECharacterActivityState.h"
#include "ETaskItemTargetCheckMethod.h"

ULargeMaterialComponent::ULargeMaterialComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TaskActivityState = ECharacterActivityState::DoWork;
    this->TargetCheckMethod = ETaskItemTargetCheckMethod::DualTrace;
    this->ImpactEffect = NULL;
}

void ULargeMaterialComponent::MulticastPlayFX_Implementation() {
}


