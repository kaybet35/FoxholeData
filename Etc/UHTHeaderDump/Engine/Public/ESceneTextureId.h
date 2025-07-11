#pragma once
#include "CoreMinimal.h"
#include "ESceneTextureId.generated.h"

UENUM(BlueprintType)
enum ESceneTextureId {
    PPI_SceneColor,
    PPI_SceneDepth,
    PPI_DiffuseColor,
    PPI_SpecularColor,
    PPI_SubsurfaceColor,
    PPI_BaseColor,
    PPI_Specular,
    PPI_Metallic,
    PPI_WorldNormal,
    PPI_SeparateTranslucency,
    PPI_Opacity,
    PPI_Roughness,
    PPI_MaterialAO,
    PPI_CustomDepth,
    PPI_PostProcessInput0,
    PPI_PostProcessInput1,
    PPI_PostProcessInput2,
    PPI_PostProcessInput3,
    PPI_PostProcessInput4,
    PPI_PostProcessInput5,
    PPI_PostProcessInput6,
    PPI_DecalMask,
    PPI_ShadingModelColor,
    PPI_ShadingModelID,
    PPI_AmbientOcclusion,
    PPI_CustomStencil,
    PPI_StoredBaseColor,
    PPI_StoredSpecular,
    PPI_Velocity,
};

