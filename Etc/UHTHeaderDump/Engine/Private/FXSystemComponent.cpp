#include "FXSystemComponent.h"

UFXSystemComponent::UFXSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFXSystemComponent::SetVectorParameter(FName ParameterName, FVector Param) {
}

void UFXSystemComponent::SetUseAutoManageAttachment(bool bAutoManage) {
}

void UFXSystemComponent::SetFloatParameter(FName ParameterName, float Param) {
}

void UFXSystemComponent::SetEmitterEnable(FName EmitterName, bool bNewEnableState) {
}

void UFXSystemComponent::SetColorParameter(FName ParameterName, FLinearColor Param) {
}

void UFXSystemComponent::SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule) {
}

void UFXSystemComponent::SetActorParameter(FName ParameterName, AActor* Param) {
}

void UFXSystemComponent::ReleaseToPool() {
}

UFXSystemAsset* UFXSystemComponent::GetFXSystemAsset() const {
    return NULL;
}


