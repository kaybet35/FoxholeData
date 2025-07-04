#include "StereoLayerComponent.h"

UStereoLayerComponent::UStereoLayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLiveTexture = false;
    this->bSupportsDepth = false;
    this->bNoAlphaChannel = false;
    this->Texture = NULL;
    this->LeftTexture = NULL;
    this->bQuadPreserveTextureRatio = false;
    this->CylinderRadius = 100.00f;
    this->CylinderOverlayArc = 100.00f;
    this->CylinderHeight = 50;
    this->StereoLayerType = SLT_FaceLocked;
    this->StereoLayerShape = SLSH_QuadLayer;
    this->Priority = 0;
}

void UStereoLayerComponent::SetUVRect(FBox2D InUVRect) {
}

void UStereoLayerComponent::SetTexture(UTexture* InTexture) {
}

void UStereoLayerComponent::SetQuadSize(FVector2D InQuadSize) {
}

void UStereoLayerComponent::SetPriority(int32 InPriority) {
}

void UStereoLayerComponent::SetLeftTexture(UTexture* InTexture) {
}

void UStereoLayerComponent::SetEquirectProps(FEquirectProps InScaleBiases) {
}

void UStereoLayerComponent::MarkTextureForUpdate() {
}

FBox2D UStereoLayerComponent::GetUVRect() const {
    return FBox2D{};
}

UTexture* UStereoLayerComponent::GetTexture() const {
    return NULL;
}

FVector2D UStereoLayerComponent::GetQuadSize() const {
    return FVector2D{};
}

int32 UStereoLayerComponent::GetPriority() const {
    return 0;
}

UTexture* UStereoLayerComponent::GetLeftTexture() const {
    return NULL;
}


