#include "PlayerCharacterMovementComponent.h"

UPlayerCharacterMovementComponent::UPlayerCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldApplyFluidZBraking = false;
    this->MaxWalkSpeedProne = 80.00f;
    this->MaxLadderClimbingSpeed = 0.00f;
    this->ImmersionDepthHeightBias = 25.00f;
    this->WaterFrictionCoefficient = 0.10f;
}

void UPlayerCharacterMovementComponent::CapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPlayerCharacterMovementComponent::CapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


