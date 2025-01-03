#include "WatchTowerMountComponent.h"

UWatchTowerMountComponent::UWatchTowerMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWatchTowerMountComponent::ServerSetRotationDirection_Implementation(const ERotationDirection Direction) {
}
bool UWatchTowerMountComponent::ServerSetRotationDirection_Validate(const ERotationDirection Direction) {
    return true;
}


