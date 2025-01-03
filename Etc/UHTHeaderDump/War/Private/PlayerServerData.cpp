#include "PlayerServerData.h"

FPlayerServerData::FPlayerServerData() {
    this->FactionId = EFactionId::Colonials;
    this->RegionId = EWorldConquestMapId::Invalid;
    this->PermissionLevel = EPermissionLevel::None;
}

