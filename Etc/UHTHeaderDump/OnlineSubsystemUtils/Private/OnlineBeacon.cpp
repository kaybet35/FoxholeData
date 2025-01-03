#include "OnlineBeacon.h"

AOnlineBeacon::AOnlineBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForNetworkReplays = false;
    this->NetDriverName = TEXT("BeaconDriver");
    this->BeaconConnectionInitialTimeout = 30.00f;
    this->BeaconConnectionTimeout = 45.00f;
    this->NetDriver = NULL;
}


