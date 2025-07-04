#include "InstancedStaticMeshComponent.h"

UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisallowMeshPaintPerInstance = true;
    this->InstancingRandomSeed = 0;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
    this->NumPendingLightmaps = 0;
}

bool UInstancedStaticMeshComponent::UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return false;
}

void UInstancedStaticMeshComponent::SetCullDistances(int32 StartCullDistance, int32 EndCullDistance) {
}

bool UInstancedStaticMeshComponent::RemoveInstance(int32 InstanceIndex) {
    return false;
}

bool UInstancedStaticMeshComponent::GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const {
    return false;
}

TArray<int32> UInstancedStaticMeshComponent::GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const {
    return TArray<int32>();
}

TArray<int32> UInstancedStaticMeshComponent::GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const {
    return TArray<int32>();
}

int32 UInstancedStaticMeshComponent::GetInstanceCount() const {
    return 0;
}

void UInstancedStaticMeshComponent::ClearInstances() {
}

bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return false;
}

bool UInstancedStaticMeshComponent::BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return false;
}

int32 UInstancedStaticMeshComponent::AddInstanceWorldSpace(const FTransform& WorldTransform) {
    return 0;
}

int32 UInstancedStaticMeshComponent::AddInstance(const FTransform& InstanceTransform) {
    return 0;
}


