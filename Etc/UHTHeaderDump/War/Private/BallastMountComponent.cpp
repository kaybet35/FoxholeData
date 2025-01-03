#include "BallastMountComponent.h"
#include "Net/UnrealNetwork.h"

UBallastMountComponent::UBallastMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BallastType = EBallastType::Main;
    this->TargetFloodPercent = -1.00f;
}

void UBallastMountComponent::ServerSetTargetFloodPercent_Implementation(float InTargetFloodPercent) {
}

void UBallastMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBallastMountComponent, TargetFloodPercent);
}


