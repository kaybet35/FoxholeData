#include "MapIntelligenceSourceComponent.h"

UMapIntelligenceSourceComponent::UMapIntelligenceSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionRadius = 8000.00f;
    this->DefaultViewDirectionOffset = 0.00f;
    this->HalfDetectionAngle = 0.00f;
    this->OverlapCheckInterval = 4.00f;
}


