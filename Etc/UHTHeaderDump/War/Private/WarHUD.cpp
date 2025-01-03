#include "WarHUD.h"

AWarHUD::AWarHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->HudMode = EHUDMode::Visible;
    this->LevelPostVolume = NULL;
    this->LocalMapImage = NULL;
}


