#pragma once
#include "CoreMinimal.h"
#include "ESceneCaptureSource.generated.h"

UENUM(BlueprintType)
enum ESceneCaptureSource {
    SCS_SceneColorHDR,
    SCS_SceneColorHDRNoAlpha,
    SCS_FinalColorLDR,
    SCS_SceneColorSceneDepth,
    SCS_SceneDepth,
    SCS_DeviceDepth,
    SCS_Normal,
    SCS_BaseColor,
    SCS_FinalColorHDR,
};

