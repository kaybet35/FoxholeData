#include "BulkheadDoor.h"
#include "Net/UnrealNetwork.h"

UBulkheadDoor::UBulkheadDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->DoorState = EDynamicState::Open;
    this->bAllowsShippableTransfer = false;
    this->Index = 0;
    this->InteractionVolume = NULL;
    this->ObstructionVolume = NULL;
    this->WaterSpreadFXInstance = NULL;
}

void UBulkheadDoor::OnRep_DoorState() {
}

void UBulkheadDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBulkheadDoor, DoorState);
}


