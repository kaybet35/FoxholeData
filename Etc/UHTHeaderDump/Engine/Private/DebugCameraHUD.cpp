#include "DebugCameraHUD.h"

ADebugCameraHUD::ADebugCameraHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = false;
    this->DebugDisplay.AddDefaulted(1);
}


