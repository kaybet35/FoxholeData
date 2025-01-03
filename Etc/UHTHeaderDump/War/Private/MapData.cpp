#include "MapData.h"

FMapData::FMapData() {
    this->WorldConquestMapId = EWorldConquestMapId::Invalid;
    this->Image = NULL;
    this->bIsInHexGrid = false;
    this->bIsIsland = false;
    this->bCanOceanTravel = false;
}

