#include "SpawnPointInfo.h"

FSpawnPointInfo::FSpawnPointInfo() {
    this->MapId = EWorldConquestMapId::Invalid;
    this->SpawnPointType = 0;
    this->bIsAvailable = false;
    this->SpawnCharges = 0;
}

