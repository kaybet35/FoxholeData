#pragma once
#include "CoreMinimal.h"
#include "ETransformGizmoSubElements.generated.h"

UENUM()
enum class ETransformGizmoSubElements {
    None,
    TranslateAxisX,
    TranslateAxisY,
    TranslateAxisZ = 4,
    TranslateAllAxes = 7,
    TranslatePlaneXY,
    TranslatePlaneXZ = 16,
    TranslatePlaneYZ = 32,
    TranslateAllPlanes = 56,
    RotateAxisX = 64,
    RotateAxisY = 128,
    RotateAxisZ = 256,
    RotateAllAxes = 448,
    StanedardTranslateRotate = 511,
};

