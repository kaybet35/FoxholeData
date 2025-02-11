#include "TrainPassengerMountComponent.h"

UTrainPassengerMountComponent::UTrainPassengerMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowItemSubmission = false;
}

void UTrainPassengerMountComponent::ServerSubmitItems_Implementation(AActor* TargetActor) {
}
bool UTrainPassengerMountComponent::ServerSubmitItems_Validate(AActor* TargetActor) {
    return true;
}


