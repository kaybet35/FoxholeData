#pragma once
#include "CoreMinimal.h"
#include "EMaterialProperty.generated.h"

UENUM(BlueprintType)
enum EMaterialProperty {
    MP_EmissiveColor,
    MP_Opacity,
    MP_OpacityMask,
    MP_DiffuseColor,
    MP_SpecularColor,
    MP_BaseColor,
    MP_Metallic,
    MP_Specular,
    MP_Roughness,
    MP_Normal,
    MP_WorldPositionOffset,
    MP_WorldDisplacement,
    MP_TessellationMultiplier,
    MP_SubsurfaceColor,
    MP_CustomData0,
    MP_CustomData1,
    MP_AmbientOcclusion,
    MP_Refraction,
    MP_CustomizedUVs0,
    MP_CustomizedUVs1,
    MP_CustomizedUVs2,
    MP_CustomizedUVs3,
    MP_CustomizedUVs4,
    MP_CustomizedUVs5,
    MP_CustomizedUVs6,
    MP_CustomizedUVs7,
    MP_PixelDepthOffset,
    MP_ShadingModel,
    MP_MaterialAttributes,
    MP_CustomOutput,
};

