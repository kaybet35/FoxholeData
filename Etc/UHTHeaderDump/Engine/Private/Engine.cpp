#include "Engine.h"

UEngine::UEngine() {
    this->TinyFont = NULL;
    this->SmallFont = NULL;
    this->MediumFont = NULL;
    this->LargeFont = NULL;
    this->SubtitleFont = NULL;
    this->ConsoleClass = NULL;
    this->GameViewportClientClass = NULL;
    this->LocalPlayerClass = NULL;
    this->WorldSettingsClass = NULL;
    this->NavigationSystemClass = NULL;
    this->NavigationSystemConfigClass = NULL;
    this->AvoidanceManagerClass = NULL;
    this->PhysicsCollisionHandlerClass = NULL;
    this->GameUserSettingsClass = NULL;
    this->GameUserSettings = NULL;
    this->LevelScriptActorClass = NULL;
    this->GameSingleton = NULL;
    this->AssetManager = NULL;
    this->DefaultTexture = NULL;
    this->DefaultDiffuseTexture = NULL;
    this->DefaultBSPVertexTexture = NULL;
    this->HighFrequencyNoiseTexture = NULL;
    this->DefaultBokehTexture = NULL;
    this->DefaultBloomKernelTexture = NULL;
    this->WireframeMaterial = NULL;
    this->WireframeMaterialName = TEXT("/Engine/EngineDebugMaterials/WireframeMaterial.WireframeMaterial");
    this->HairDefaultMaterial = NULL;
    this->HairDefaultMaterialName = TEXT("/Engine/EngineMaterials/HairDefaultMaterial.HairDefaultMaterial");
    this->HairDebugMaterial = NULL;
    this->HairDebugMaterialName = TEXT("/Engine/EngineMaterials/HairDebugMaterial.HairDebugMaterial");
    this->DebugMeshMaterial = NULL;
    this->EmissiveMeshMaterial = NULL;
    this->LevelColorationLitMaterial = NULL;
    this->LevelColorationLitMaterialName = TEXT("/Engine/EngineDebugMaterials/LevelColorationLitMaterial.LevelColorationLitMaterial");
    this->LevelColorationUnlitMaterial = NULL;
    this->LevelColorationUnlitMaterialName = TEXT("/Engine/EngineDebugMaterials/LevelColorationUnlitMaterial.LevelColorationUnlitMaterial");
    this->LightingTexelDensityMaterial = NULL;
    this->LightingTexelDensityName = TEXT("/Engine/EngineDebugMaterials/MAT_LevelColorationLitLightmapUV.MAT_LevelColorationLitLightmapUV");
    this->ShadedLevelColorationLitMaterial = NULL;
    this->ShadedLevelColorationLitMaterialName = TEXT("/Engine/EngineDebugMaterials/ShadedLevelColorationLitMaterial.ShadedLevelColorationLitMaterial");
    this->ShadedLevelColorationUnlitMaterial = NULL;
    this->ShadedLevelColorationUnlitMaterialName = TEXT("/Engine/EngineDebugMaterials/ShadedLevelColorationUnlitMateri.ShadedLevelColorationUnlitMateri");
    this->RemoveSurfaceMaterial = NULL;
    this->VertexColorMaterial = NULL;
    this->VertexColorMaterialName = TEXT("/Engine/EngineDebugMaterials/VertexColorMaterial.VertexColorMaterial");
    this->VertexColorViewModeMaterial_ColorOnly = NULL;
    this->VertexColorViewModeMaterialName_ColorOnly = TEXT("/Engine/EngineDebugMaterials/VertexColorViewMode_ColorOnly.VertexColorViewMode_ColorOnly");
    this->VertexColorViewModeMaterial_AlphaAsColor = NULL;
    this->VertexColorViewModeMaterialName_AlphaAsColor = TEXT("/Engine/EngineDebugMaterials/VertexColorViewMode_AlphaAsColor.VertexColorViewMode_AlphaAsColor");
    this->VertexColorViewModeMaterial_RedOnly = NULL;
    this->VertexColorViewModeMaterialName_RedOnly = TEXT("/Engine/EngineDebugMaterials/VertexColorViewMode_RedOnly.VertexColorViewMode_RedOnly");
    this->VertexColorViewModeMaterial_GreenOnly = NULL;
    this->VertexColorViewModeMaterialName_GreenOnly = TEXT("/Engine/EngineDebugMaterials/VertexColorViewMode_GreenOnly.VertexColorViewMode_GreenOnly");
    this->VertexColorViewModeMaterial_BlueOnly = NULL;
    this->VertexColorViewModeMaterialName_BlueOnly = TEXT("/Engine/EngineDebugMaterials/VertexColorViewMode_BlueOnly.VertexColorViewMode_BlueOnly");
    this->ConstraintLimitMaterial = NULL;
    this->ConstraintLimitMaterialX = NULL;
    this->ConstraintLimitMaterialXAxis = NULL;
    this->ConstraintLimitMaterialY = NULL;
    this->ConstraintLimitMaterialYAxis = NULL;
    this->ConstraintLimitMaterialZ = NULL;
    this->ConstraintLimitMaterialZAxis = NULL;
    this->ConstraintLimitMaterialPrismatic = NULL;
    this->InvalidLightmapSettingsMaterial = NULL;
    this->PreviewShadowsIndicatorMaterial = NULL;
    this->ArrowMaterial = NULL;
    this->ArrowMaterialYellow = NULL;
    this->ShaderComplexityColors.AddDefaulted(9);
    this->QuadComplexityColors.AddDefaulted(11);
    this->LightComplexityColors.AddDefaulted(11);
    this->StationaryLightOverlapColors.AddDefaulted(9);
    this->LODColorationColors.AddDefaulted(8);
    this->HLODColorationColors.AddDefaulted(7);
    this->StreamingAccuracyColors.AddDefaulted(5);
    this->MaxPixelShaderAdditiveComplexityCount = 2000.00f;
    this->MaxES2PixelShaderAdditiveComplexityCount = 600.00f;
    this->MaxES3PixelShaderAdditiveComplexityCount = 800.00f;
    this->MinLightMapDensity = 0.00f;
    this->IdealLightMapDensity = 0.20f;
    this->MaxLightMapDensity = 0.80f;
    this->bRenderLightMapDensityGrayscale = false;
    this->RenderLightMapDensityGrayscaleScale = 1.00f;
    this->RenderLightMapDensityColorScale = 1.00f;
    this->StatColorMappings.AddDefaulted(3);
    this->DefaultPhysMaterial = NULL;
    this->PreIntegratedSkinBRDFTexture = NULL;
    this->BlueNoiseTexture = NULL;
    this->MiniFontTexture = NULL;
    this->WeightMapPlaceholderTexture = NULL;
    this->LightMapDensityTexture = NULL;
    this->GameViewport = NULL;
    this->TickCycles = 0;
    this->GameCycles = 0;
    this->ClientCycles = 0;
    this->NearClipPlane = 10.00f;
    this->bHardwareSurveyEnabled = false;
    this->bSubtitlesEnabled = true;
    this->bSubtitlesForcedOff = false;
    this->MaximumLoopIterationCount = 1000000;
    this->bCanBlueprintsTickByDefault = true;
    this->bOptimizeAnimBlueprintMemberVariableAccess = true;
    this->bAllowMultiThreadedAnimationUpdate = true;
    this->bEnableEditorPSysRealtimeLOD = false;
    this->bSmoothFrameRate = true;
    this->bUseFixedFrameRate = false;
    this->FixedFrameRate = 30.00f;
    this->DefaultCustomTimeStep = NULL;
    this->CurrentCustomTimeStep = NULL;
    this->DefaultTimecodeProvider = NULL;
    this->CustomTimecodeProvider = NULL;
    this->bCheckForMultiplePawnsSpawnedInAFrame = false;
    this->NumPawnsAllowedToBeSpawnedInAFrame = 2;
    this->bShouldGenerateLowQualityLightmaps = false;
    this->StreamingDistanceFactor = 0.00f;
    this->TransitionType = ETransitionType::None;
    this->MeshLODRange = 0.00f;
    this->bAllowMatureLanguage = false;
    this->CameraRotationThreshold = 45.00f;
    this->CameraTranslationThreshold = 10000.00f;
    this->PrimitiveProbablyVisibleTime = 8.00f;
    this->MaxOcclusionPixelsFraction = 0.10f;
    this->bPauseOnLossOfFocus = false;
    this->MaxParticleResize = 0;
    this->MaxParticleResizeWarn = 0;
    this->NetClientTicksPerSecond = 200.00f;
    this->DisplayGamma = 2.20f;
    this->MinDesiredFrameRate = 35.00f;
    this->bIsOverridingSelectedColor = false;
    this->bEnableOnScreenDebugMessages = true;
    this->bEnableOnScreenDebugMessagesDisplay = false;
    this->bSuppressMapWarnings = false;
    this->bDisableAILogging = false;
    this->bEnableVisualLogRecordingOnStart = 0;
    this->ScreenSaverInhibitorSemaphore = 0;
    this->bLockReadOnlyLevels = false;
    this->ParticleEventManagerClassPath = TEXT("/Script/Engine.ParticleEventManager");
    this->SelectionHighlightIntensity = 0.00f;
    this->BSPSelectionHighlightIntensity = 0.00f;
    this->SelectionHighlightIntensityBillboards = 0.25f;
    this->NetDriverDefinitions.AddDefaulted(2);
    this->NetErrorLogInterval = 1.00f;
    this->bStartedLoadMapMovie = false;
    this->NextWorldContextHandle = 0;
}


