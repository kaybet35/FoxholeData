#include "WaterMineItemComponent.h"

UWaterMineItemComponent::UWaterMineItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterMineClass = NULL;
    this->DetonationDepthToggleIncrement = 100.00f;
    this->MinDeploymentDepth = 500.00f;
    this->MaxDeploymentDepth = 3000.00f;
    this->MinDistanceBetweenMines = 500.00f;
    this->MaxDeploymentRange = 2000.00f;
    this->DeployDuration = 2.00f;
}

void UWaterMineItemComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange, const FVector MouseTraceStart, const FVector MouseTraceEnd, const float InDetonationDepth) {
}
bool UWaterMineItemComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange, const FVector MouseTraceStart, const FVector MouseTraceEnd, const float InDetonationDepth) {
    return true;
}


