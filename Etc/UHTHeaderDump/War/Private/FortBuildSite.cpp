#include "FortBuildSite.h"
#include "Net/UnrealNetwork.h"

AFortBuildSite::AFortBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanPassThroughPower = false;
}

void AFortBuildSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortBuildSite, bCanPassThroughPower);
}


