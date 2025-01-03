#include "FloodableComponent.h"

UFloodableComponent::UFloodableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeakRepairCostMultiplier = 1.00f;
    this->LeakWaterPerSecondMultiplier = 1.00f;
    this->WaterSpreadFX = NULL;
    this->MaxWaterLevel = 100.00f;
    this->MaxWaterHeight = 280.00f;
}


