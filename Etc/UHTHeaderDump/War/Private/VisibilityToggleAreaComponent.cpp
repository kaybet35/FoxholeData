#include "VisibilityToggleAreaComponent.h"

UVisibilityToggleAreaComponent::UVisibilityToggleAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->ToggleableComponentsTag = TEXT("VToggle");
    this->bBlockVehicles = true;
}

void UVisibilityToggleAreaComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UVisibilityToggleAreaComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


