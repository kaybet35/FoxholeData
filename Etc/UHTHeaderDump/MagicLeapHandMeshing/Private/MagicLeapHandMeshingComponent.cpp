#include "MagicLeapHandMeshingComponent.h"

UMagicLeapHandMeshingComponent::UMagicLeapHandMeshingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UMagicLeapHandMeshingComponent::DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
    return false;
}

bool UMagicLeapHandMeshingComponent::ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
    return false;
}


