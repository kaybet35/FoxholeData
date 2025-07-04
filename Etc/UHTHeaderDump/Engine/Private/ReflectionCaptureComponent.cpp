#include "ReflectionCaptureComponent.h"

UReflectionCaptureComponent::UReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->CaptureOffsetComponent = NULL;
    this->ReflectionSourceType = EReflectionSourceType::CapturedScene;
    this->CubeMap = NULL;
    this->SourceCubemapAngle = 0.00f;
    this->Brightness = 1.00f;
}


