#pragma once
#include "CoreMinimal.h"
#include "EMaterialShadingModel.generated.h"

UENUM(BlueprintType)
enum EMaterialShadingModel {
    MSM_Unlit,
    MSM_DefaultLit,
    MSM_Subsurface,
    MSM_PreintegratedSkin,
    MSM_ClearCoat,
    MSM_SubsurfaceProfile,
    MSM_TwoSidedFoliage,
    MSM_Hair,
    MSM_Cloth,
    MSM_Eye,
    MSM_SingleLayerWater,
    MSM_NUM,
    MSM_FromMaterialExpression,
};

