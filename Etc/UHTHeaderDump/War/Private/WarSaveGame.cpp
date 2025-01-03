#include "WarSaveGame.h"

UWarSaveGame::UWarSaveGame() {
    this->NextSpawnPointId = 0;
    this->bUprisingStarted = false;
    this->WarPhase = EWarPhase::PreConquest;
    this->IceTaskListIndex = -1;
    this->DryingDuration = 0.00f;
    this->bIsWeatherManual = false;
    this->bIsAutoSave = false;
}


