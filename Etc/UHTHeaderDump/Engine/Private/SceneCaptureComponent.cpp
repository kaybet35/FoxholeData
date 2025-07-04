#include "SceneCaptureComponent.h"

USceneCaptureComponent::USceneCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture;
    this->CaptureSource = SCS_SceneColorHDR;
    this->bCaptureEveryFrame = true;
    this->bCaptureOnMovement = true;
    this->bAlwaysPersistRenderingState = false;
    this->LODDistanceFactor = 1.00f;
    this->MaxViewDistanceOverride = -1.00f;
    this->CaptureSortPriority = 0;
}

void USceneCaptureComponent::ShowOnlyComponent(UPrimitiveComponent* InComponent) {
}

void USceneCaptureComponent::ShowOnlyActorComponents(AActor* InActor) {
}

void USceneCaptureComponent::SetCaptureSortPriority(int32 NewCaptureSortPriority) {
}

void USceneCaptureComponent::RemoveShowOnlyComponent(UPrimitiveComponent* InComponent) {
}

void USceneCaptureComponent::RemoveShowOnlyActorComponents(AActor* InActor) {
}

void USceneCaptureComponent::HideComponent(UPrimitiveComponent* InComponent) {
}

void USceneCaptureComponent::HideActorComponents(AActor* InActor) {
}

void USceneCaptureComponent::ClearShowOnlyComponents() {
}

void USceneCaptureComponent::ClearHiddenComponents() {
}


