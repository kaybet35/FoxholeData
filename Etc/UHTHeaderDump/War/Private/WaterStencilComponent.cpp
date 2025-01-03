#include "WaterStencilComponent.h"

UWaterStencilComponent::UWaterStencilComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRayTracing = false;
    this->bRenderInMainPass = false;
    this->bRenderInDepthPass = false;
    this->bReceivesDecals = false;
    this->bUseAsOccluder = false;
    this->CastShadow = false;
    this->bRenderCustomDepth = true;
}


