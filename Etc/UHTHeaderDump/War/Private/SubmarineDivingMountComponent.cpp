#include "SubmarineDivingMountComponent.h"

USubmarineDivingMountComponent::USubmarineDivingMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USubmarineDivingMountComponent::ServerSetDivingPlaneInput_Implementation(int8 Input) {
}
bool USubmarineDivingMountComponent::ServerSetDivingPlaneInput_Validate(int8 Input) {
    return true;
}


