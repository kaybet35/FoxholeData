#include "LiquidTransferStation.h"
#include "LiquidTransferStationBuildSite.h"

ALiquidTransferStation::ALiquidTransferStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildSiteClass = ALiquidTransferStationBuildSite::StaticClass();
    this->InputSocket = NULL;
    this->OutputSocket = NULL;
}


