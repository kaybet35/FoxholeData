#include "WarBeaconJoinRequestData.h"

FWarBeaconJoinRequestData::FWarBeaconJoinRequestData() {
    this->TeamId = EFactionId::Colonials;
    this->ServerTravelOrigin = EServerTravelOriginType::Client;
    this->bConsumeSelfServeFactionUnlock = false;
    this->QueueType = EQueueType::Regular;
    this->bSpawnAtOfflineCharacter = false;
}

