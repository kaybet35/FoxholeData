#include "WarBeaconHost.h"
#include "WarBeaconClient.h"

AWarBeaconHost::AWarBeaconHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeaconTypeName = TEXT("WarBeaconClient");
    this->ClientBeaconActorClass = AWarBeaconClient::StaticClass();
}


