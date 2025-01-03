#include "VehicleBuildSite.h"
#include "Net/UnrealNetwork.h"

AVehicleBuildSite::AVehicleBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SquadId = 0;
}

void AVehicleBuildSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVehicleBuildSite, VehicleCodeName);
}


