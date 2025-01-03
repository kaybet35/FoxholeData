#include "PayloadStaticMeshComponent.h"

UPayloadStaticMeshComponent::UPayloadStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroupIndex = 0;
    this->bLinkToSpecificGunnerIndex = false;
    this->GunnerIndex = 0;
}


