#include "MiniMapCapturer.h"

AMiniMapCapturer::AMiniMapCapturer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bIsEditorOnlyActor = true;
    this->SceneCapture = NULL;
    this->ResultTexture = NULL;
    this->CameraAngleCorrection = 0.00f;
    this->TargetGamma = 2.20f;
}


