#include "LandingCraft.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EServerAnimTickMode.h"
#include "EVehicleBuildType.h"
#include "Net/UnrealNetwork.h"

ALandingCraft::ALandingCraft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInterpolatePitch = true;
    this->VehicleBuildType = EVehicleBuildType::VehicleFactory;
    this->bRestrictMovementFromItems = true;
    this->ServerAnimTickMode = EServerAnimTickMode::TickWhenOccupied;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bBackHatchOpen = false;
    this->StashedAmmo = 0;
    this->KillVolume->SetupAttachment(RootComponent);
}

bool ALandingCraft::GetBackHatchOpen() const {
    return false;
}

void ALandingCraft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALandingCraft, bBackHatchOpen);
}


