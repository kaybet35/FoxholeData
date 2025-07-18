#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureMaterialType.generated.h"

UENUM(BlueprintType)
enum class ERuntimeVirtualTextureMaterialType : uint8 {
    BaseColor,
    BaseColor_Normal_DEPRECATED,
    BaseColor_Normal_Specular,
    BaseColor_Normal_Specular_YCoCg,
    WorldHeight,
    Count,
};

