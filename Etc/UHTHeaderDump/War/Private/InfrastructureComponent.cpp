#include "InfrastructureComponent.h"

UInfrastructureComponent::UInfrastructureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FilteredTypes[0] = EFortModificationType::Default;
    this->FilteredTypes[1] = EFortModificationType::Default;
    this->FilteredTypes[2] = EFortModificationType::Default;
    this->FilteredTypes[3] = EFortModificationType::Default;
    this->Effectiveness = 1.00f;
}


