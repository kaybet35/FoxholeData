#pragma once
#include "CoreMinimal.h"
#include "ERendererStencilMask.generated.h"

UENUM(BlueprintType)
enum class ERendererStencilMask : uint8 {
    ERSM_Default,
    ERSM_255,
    ERSM_1,
    ERSM_2,
    ERSM_4,
    ERSM_8,
    ERSM_16,
    ERSM_32,
    ERSM_64,
    ERSM_128,
    ERSM_128_SortLast,
    ERSM_127_TestDepth,
};

