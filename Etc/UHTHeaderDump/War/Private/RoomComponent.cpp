#include "RoomComponent.h"
#include "Net/UnrealNetwork.h"

URoomComponent::URoomComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->Index = 0;
    this->bIsSpawnRoom = false;
    this->SimScreenOverride = ESimScreen::None;
    this->MaxLeakZ = 200.00f;
    this->MinLeakZ = 50.00f;
    this->MaxLeakRadius = 100.00f;
    this->MinLeakRadius = 30.00f;
    this->HullThickness = 30.00f;
    this->HullThicknessCurve = NULL;
    this->MinWaterSpreadThreshold = 6.00f;
    this->BoundMinExtension = 0.00f;
    this->BoundMaxExtension = 0.00f;
    this->BoundWidthExtension = 0.00f;
    this->AboveWaterLeakFX = NULL;
    this->MinLeakFXSize = 1.00f;
    this->MaxLeakFXSize = 3.00f;
    this->PatchedLargeLeakFXScale = 0.50f;
    this->Floodable = NULL;
    this->WaterLevel = 0.00f;
    this->FloodedSFXLoop = NULL;
}

void URoomComponent::OnRep_WaterLevel() {
}

void URoomComponent::MulticastPlayLeakFX_Implementation(FVector LocalLocation) {
}

void URoomComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URoomComponent, WaterLevel);
}


