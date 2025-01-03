#include "MaterialOverrideBoxComponent.h"

UMaterialOverrideBoxComponent::UMaterialOverrideBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = NULL;
}

void UMaterialOverrideBoxComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void UMaterialOverrideBoxComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


