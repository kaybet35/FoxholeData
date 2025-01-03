#include "FortFirePit.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AFortFirePit::AFortFirePit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Trench;
}

void AFortFirePit::OnRep_FuelTankDiesel() {
}

void AFortFirePit::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortFirePit, FuelTankDiesel);
}


