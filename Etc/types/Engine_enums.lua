---@enum AnimPhysCollisionType
local AnimPhysCollisionType = {
    CoM = 0,
    CustomSphere = 1,
    InnerSphere = 2,
    OuterSphere = 3,
    AnimPhysCollisionType_MAX = 4,
}

---@enum AnimPhysTwistAxis
local AnimPhysTwistAxis = {
    AxisX = 0,
    AxisY = 1,
    AxisZ = 2,
    AnimPhysTwistAxis_MAX = 3,
}

---@enum AnimationCompressionFormat
local AnimationCompressionFormat = {
    ACF_None = 0,
    ACF_Float96NoW = 1,
    ACF_Fixed48NoW = 2,
    ACF_IntervalFixed32NoW = 3,
    ACF_Fixed32NoW = 4,
    ACF_Float32NoW = 5,
    ACF_Identity = 6,
    ACF_MAX = 7,
}

---@enum AnimationKeyFormat
local AnimationKeyFormat = {
    AKF_ConstantKeyLerp = 0,
    AKF_VariableKeyLerp = 1,
    AKF_PerTrackCompression = 2,
    AKF_MAX = 3,
}

---@enum Beam2SourceTargetMethod
local Beam2SourceTargetMethod = {
    PEB2STM_Default = 0,
    PEB2STM_UserSet = 1,
    PEB2STM_Emitter = 2,
    PEB2STM_Particle = 3,
    PEB2STM_Actor = 4,
    PEB2STM_MAX = 5,
}

---@enum Beam2SourceTargetTangentMethod
local Beam2SourceTargetTangentMethod = {
    PEB2STTM_Direct = 0,
    PEB2STTM_UserSet = 1,
    PEB2STTM_Distribution = 2,
    PEB2STTM_Emitter = 3,
    PEB2STTM_MAX = 4,
}

---@enum BeamModifierType
local BeamModifierType = {
    PEB2MT_Source = 0,
    PEB2MT_Target = 1,
    PEB2MT_MAX = 2,
}

---@enum CylinderHeightAxis
local CylinderHeightAxis = {
    PMLPC_HEIGHTAXIS_X = 0,
    PMLPC_HEIGHTAXIS_Y = 1,
    PMLPC_HEIGHTAXIS_Z = 2,
    PMLPC_HEIGHTAXIS_MAX = 3,
}

---@enum Default__UserDefinedEnum
local Default__UserDefinedEnum = {
}

---@enum DistributionParamMode
local DistributionParamMode = {
    DPM_Normal = 0,
    DPM_Abs = 1,
    DPM_Direct = 2,
    DPM_MAX = 3,
}

---@enum EActorUpdateOverlapsMethod
local EActorUpdateOverlapsMethod = {
    UseConfigDefault = 0,
    AlwaysUpdate = 1,
    OnlyUpdateMovable = 2,
    NeverUpdate = 3,
    EActorUpdateOverlapsMethod_MAX = 4,
}

---@enum EAdManagerDelegate
local EAdManagerDelegate = {
    AMD_ClickedBanner = 0,
    AMD_UserClosedAd = 1,
    AMD_MAX = 2,
}

---@enum EAdditiveAnimationType
local EAdditiveAnimationType = {
    AAT_None = 0,
    AAT_LocalSpaceBase = 1,
    AAT_RotationOffsetMeshSpace = 2,
    AAT_MAX = 3,
}

---@enum EAdditiveBasePoseType
local EAdditiveBasePoseType = {
    ABPT_None = 0,
    ABPT_RefPose = 1,
    ABPT_AnimScaled = 2,
    ABPT_AnimFrame = 3,
    ABPT_MAX = 4,
}

---@enum EAirAbsorptionMethod
local EAirAbsorptionMethod = {
    Linear = 0,
    CustomCurve = 1,
    EAirAbsorptionMethod_MAX = 2,
}

---@enum EAlphaBlendOption
local EAlphaBlendOption = {
    Linear = 0,
    Cubic = 1,
    HermiteCubic = 2,
    Sinusoidal = 3,
    QuadraticInOut = 4,
    CubicInOut = 5,
    QuarticInOut = 6,
    QuinticInOut = 7,
    CircularIn = 8,
    CircularOut = 9,
    CircularInOut = 10,
    ExpIn = 11,
    ExpOut = 12,
    ExpInOut = 13,
    Custom = 14,
    EAlphaBlendOption_MAX = 15,
}

---@enum EAlphaChannelMode
local EAlphaChannelMode = {
    Disabled = 0,
    LinearColorSpaceOnly = 1,
    AllowThroughTonemapper = 2,
    EAlphaChannelMode_MAX = 3,
}

---@enum EAngularConstraintMotion
local EAngularConstraintMotion = {
    ACM_Free = 0,
    ACM_Limited = 1,
    ACM_Locked = 2,
    ACM_MAX = 3,
}

---@enum EAngularDriveMode
local EAngularDriveMode = {
    SLERP = 0,
    TwistAndSwing = 1,
    EAngularDriveMode_MAX = 2,
}

---@enum EAnimAlphaInputType
local EAnimAlphaInputType = {
    Float = 0,
    Bool = 1,
    Curve = 2,
    EAnimAlphaInputType_MAX = 3,
}

---@enum EAnimAssetCurveFlags
local EAnimAssetCurveFlags = {
    AACF_NONE = 0,
    AACF_DriveMorphTarget_DEPRECATED = 1,
    AACF_DriveAttribute_DEPRECATED = 2,
    AACF_Editable = 4,
    AACF_DriveMaterial_DEPRECATED = 8,
    AACF_Metadata = 16,
    AACF_DriveTrack = 32,
    AACF_Disabled = 64,
    AACF_MAX = 65,
}

---@enum EAnimCurveType
local EAnimCurveType = {
    AttributeCurve = 0,
    MaterialCurve = 1,
    MorphTargetCurve = 2,
    MaxAnimCurveType = 3,
    EAnimCurveType_MAX = 4,
}

---@enum EAnimGroupRole
local EAnimGroupRole = {
    CanBeLeader = 0,
    AlwaysFollower = 1,
    AlwaysLeader = 2,
    TransitionLeader = 3,
    TransitionFollower = 4,
    EAnimGroupRole_MAX = 5,
}

---@enum EAnimInterpolationType
local EAnimInterpolationType = {
    Linear = 0,
    Step = 1,
    EAnimInterpolationType_MAX = 2,
}

---@enum EAnimLinkMethod
local EAnimLinkMethod = {
    Absolute = 0,
    Relative = 1,
    Proportional = 2,
    EAnimLinkMethod_MAX = 3,
}

---@enum EAnimNotifyEventType
local EAnimNotifyEventType = {
    Begin = 0,
    End = 1,
    EAnimNotifyEventType_MAX = 2,
}

---@enum EAnimationMode
local EAnimationMode = {
    AnimationBlueprint = 0,
    AnimationSingleNode = 1,
    AnimationCustomMode = 2,
    EAnimationMode_MAX = 3,
}

---@enum EAntiAliasingMethod
local EAntiAliasingMethod = {
    AAM_None = 0,
    AAM_FXAA = 1,
    AAM_TemporalAA = 2,
    AAM_MSAA = 3,
    AAM_MAX = 4,
}

---@enum EApplicationState
local EApplicationState = {
    Unknown = 0,
    Inactive = 1,
    Background = 2,
    Active = 3,
    EApplicationState_MAX = 4,
}

---@enum EAspectRatioAxisConstraint
local EAspectRatioAxisConstraint = {
    AspectRatio_MaintainYFOV = 0,
    AspectRatio_MaintainXFOV = 1,
    AspectRatio_MajorAxisFOV = 2,
    AspectRatio_MAX = 3,
}

---@enum EAttachLocation
local EAttachLocation = {
    KeepRelativeOffset = 0,
    KeepWorldPosition = 1,
    SnapToTarget = 2,
    SnapToTargetIncludingScale = 3,
    EAttachLocation_MAX = 4,
}

---@enum EAttachmentRule
local EAttachmentRule = {
    KeepRelative = 0,
    KeepWorld = 1,
    SnapToTarget = 2,
    EAttachmentRule_MAX = 3,
}

---@enum EAttenuationDistanceModel
local EAttenuationDistanceModel = {
    Linear = 0,
    Logarithmic = 1,
    Inverse = 2,
    LogReverse = 3,
    NaturalSound = 4,
    Custom = 5,
    EAttenuationDistanceModel_MAX = 6,
}

---@enum EAttenuationShape
local EAttenuationShape = {
    Sphere = 0,
    Capsule = 1,
    Box = 2,
    Cone = 3,
    EAttenuationShape_MAX = 4,
}

---@enum EAttractorParticleSelectionMethod
local EAttractorParticleSelectionMethod = {
    EAPSM_Random = 0,
    EAPSM_Sequential = 1,
    EAPSM_MAX = 2,
}

---@enum EAudioComponentPlayState
local EAudioComponentPlayState = {
    Playing = 0,
    Stopped = 1,
    Paused = 2,
    FadingIn = 3,
    FadingOut = 4,
    Count = 5,
    EAudioComponentPlayState_MAX = 6,
}

---@enum EAudioFaderCurve
local EAudioFaderCurve = {
    Linear = 0,
    Logarithmic = 1,
    SCurve = 2,
    Sin = 3,
    Count = 4,
    EAudioFaderCurve_MAX = 5,
}

---@enum EAudioOutputTarget
local EAudioOutputTarget = {
    Speaker = 0,
    Controller = 1,
    ControllerFallbackToSpeaker = 2,
    EAudioOutputTarget_MAX = 3,
}

---@enum EAudioRecordingExportType
local EAudioRecordingExportType = {
    SoundWave = 0,
    WavFile = 1,
    EAudioRecordingExportType_MAX = 2,
}

---@enum EAutoExposureMethod
local EAutoExposureMethod = {
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3,
}

---@enum EAutoExposureMethodUI
local EAutoExposureMethodUI = {
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3,
}

---@enum EAutoPossessAI
local EAutoPossessAI = {
    Disabled = 0,
    PlacedInWorld = 1,
    Spawned = 2,
    PlacedInWorldOrSpawned = 3,
    EAutoPossessAI_MAX = 4,
}

---@enum EAutoReceiveInput
local EAutoReceiveInput = {
    Disabled = 0,
    Player0 = 1,
    Player1 = 2,
    Player2 = 3,
    Player3 = 4,
    Player4 = 5,
    Player5 = 6,
    Player6 = 7,
    Player7 = 8,
    EAutoReceiveInput_MAX = 9,
}

---@enum EAxisOption
local EAxisOption = {
    X = 0,
    Y = 1,
    Z = 2,
    X_Neg = 3,
    Y_Neg = 4,
    Z_Neg = 5,
    Custom = 6,
    EAxisOption_MAX = 7,
}

---@enum EBeam2Method
local EBeam2Method = {
    PEB2M_Distance = 0,
    PEB2M_Target = 1,
    PEB2M_Branch = 2,
    PEB2M_MAX = 3,
}

---@enum EBeamTaperMethod
local EBeamTaperMethod = {
    PEBTM_None = 0,
    PEBTM_Full = 1,
    PEBTM_Partial = 2,
    PEBTM_MAX = 3,
}

---@enum EBlendMode
local EBlendMode = {
    BLEND_Opaque = 0,
    BLEND_Masked = 1,
    BLEND_Translucent = 2,
    BLEND_Additive = 3,
    BLEND_Modulate = 4,
    BLEND_AlphaComposite = 5,
    BLEND_AlphaHoldout = 6,
    BLEND_MAX = 7,
}

---@enum EBlendSpaceAxis
local EBlendSpaceAxis = {
    BSA_None = 0,
    BSA_X = 1,
    BSA_Y = 2,
    BSA_Max = 3,
}

---@enum EBlendableLocation
local EBlendableLocation = {
    BL_AfterTonemapping = 0,
    BL_BeforeTonemapping = 1,
    BL_BeforeTranslucency = 2,
    BL_ReplacingTonemapper = 3,
    BL_SSRInput = 4,
    BL_MAX = 5,
}

---@enum EBloomMethod
local EBloomMethod = {
    BM_SOG = 0,
    BM_FFT = 1,
    BM_MAX = 2,
}

---@enum EBlueprintCompileMode
local EBlueprintCompileMode = {
    Default = 0,
    Development = 1,
    FinalRelease = 2,
    EBlueprintCompileMode_MAX = 3,
}

---@enum EBlueprintNativizationFlag
local EBlueprintNativizationFlag = {
    Disabled = 0,
    Dependency = 1,
    ExplicitlyEnabled = 2,
    EBlueprintNativizationFlag_MAX = 3,
}

---@enum EBlueprintPinStyleType
local EBlueprintPinStyleType = {
    BPST_Original = 0,
    BPST_VariantA = 1,
    BPST_MAX = 2,
}

---@enum EBlueprintStatus
local EBlueprintStatus = {
    BS_Unknown = 0,
    BS_Dirty = 1,
    BS_Error = 2,
    BS_UpToDate = 3,
    BS_BeingCreated = 4,
    BS_UpToDateWithWarnings = 5,
    BS_MAX = 6,
}

---@enum EBlueprintType
local EBlueprintType = {
    BPTYPE_Normal = 0,
    BPTYPE_Const = 1,
    BPTYPE_MacroLibrary = 2,
    BPTYPE_Interface = 3,
    BPTYPE_LevelScript = 4,
    BPTYPE_FunctionLibrary = 5,
    BPTYPE_MAX = 6,
}

---@enum EBodyCollisionResponse
local EBodyCollisionResponse = {
    BodyCollision_Enabled = 0,
    BodyCollision_Disabled = 1,
    BodyCollision_MAX = 2,
}

---@enum EBoneAxis
local EBoneAxis = {
    BA_X = 0,
    BA_Y = 1,
    BA_Z = 2,
    BA_MAX = 3,
}

---@enum EBoneControlSpace
local EBoneControlSpace = {
    BCS_WorldSpace = 0,
    BCS_ComponentSpace = 1,
    BCS_ParentBoneSpace = 2,
    BCS_BoneSpace = 3,
    BCS_MAX = 4,
}

---@enum EBoneFilterActionOption
local EBoneFilterActionOption = {
    Remove = 0,
    Keep = 1,
    Invalid = 2,
    EBoneFilterActionOption_MAX = 3,
}

---@enum EBoneRotationSource
local EBoneRotationSource = {
    BRS_KeepComponentSpaceRotation = 0,
    BRS_KeepLocalSpaceRotation = 1,
    BRS_CopyFromTarget = 2,
    BRS_MAX = 3,
}

---@enum EBoneSpaces
local EBoneSpaces = {
    WorldSpace = 0,
    ComponentSpace = 1,
    EBoneSpaces_MAX = 2,
}

---@enum EBoneTranslationRetargetingMode
local EBoneTranslationRetargetingMode = {
    Animation = 0,
    Skeleton = 1,
    AnimationScaled = 2,
    AnimationRelative = 3,
    OrientAndScale = 4,
    EBoneTranslationRetargetingMode_MAX = 5,
}

---@enum EBoneVisibilityStatus
local EBoneVisibilityStatus = {
    BVS_HiddenByParent = 0,
    BVS_Visible = 1,
    BVS_ExplicitlyHidden = 2,
    BVS_MAX = 3,
}

---@enum EBrushType
local EBrushType = {
    Brush_Default = 0,
    Brush_Add = 1,
    Brush_Subtract = 2,
    Brush_MAX = 3,
}

---@enum ECameraAlphaBlendMode
local ECameraAlphaBlendMode = {
    CABM_Linear = 0,
    CABM_Cubic = 1,
    CABM_MAX = 2,
}

---@enum ECameraAnimPlaySpace
local ECameraAnimPlaySpace = {
    CameraLocal = 0,
    World = 1,
    UserDefined = 2,
    ECameraAnimPlaySpace_MAX = 3,
}

---@enum ECameraProjectionMode
local ECameraProjectionMode = {
    Perspective = 0,
    Orthographic = 1,
    ECameraProjectionMode_MAX = 2,
}

---@enum ECanBeCharacterBase
local ECanBeCharacterBase = {
    ECB_No = 0,
    ECB_Yes = 1,
    ECB_Owner = 2,
    ECB_MAX = 3,
}

---@enum ECanCreateConnectionResponse
local ECanCreateConnectionResponse = {
    CONNECT_RESPONSE_MAKE = 0,
    CONNECT_RESPONSE_DISALLOW = 1,
    CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
    CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
    CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
    CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
    CONNECT_RESPONSE_MAX = 6,
}

---@enum EChannelMaskParameterColor
local EChannelMaskParameterColor = {
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    EChannelMaskParameterColor_MAX = 4,
}

---@enum EClampMode
local EClampMode = {
    CMODE_Clamp = 0,
    CMODE_ClampMin = 1,
    CMODE_ClampMax = 2,
    CMODE_MAX = 3,
}

---@enum EClearSceneOptions
local EClearSceneOptions = {
    NoClear = 0,
    HardwareClear = 1,
    QuadAtMaxZ = 2,
    EClearSceneOptions_MAX = 3,
}

---@enum EClothMassMode
local EClothMassMode = {
    UniformMass = 0,
    TotalMass = 1,
    Density = 2,
    MaxClothMassMode = 3,
    EClothMassMode_MAX = 4,
}

---@enum ECloudStorageDelegate
local ECloudStorageDelegate = {
    CSD_KeyValueReadComplete = 0,
    CSD_KeyValueWriteComplete = 1,
    CSD_ValueChanged = 2,
    CSD_DocumentQueryComplete = 3,
    CSD_DocumentReadComplete = 4,
    CSD_DocumentWriteComplete = 5,
    CSD_DocumentConflictDetected = 6,
    CSD_MAX = 7,
}

---@enum ECollisionChannel
local ECollisionChannel = {
    ECC_WorldStatic = 0,
    ECC_WorldDynamic = 1,
    ECC_Pawn = 2,
    ECC_Visibility = 3,
    ECC_Camera = 4,
    ECC_PhysicsBody = 5,
    ECC_Vehicle = 6,
    ECC_Destructible = 7,
    ECC_EngineTraceChannel1 = 8,
    ECC_EngineTraceChannel2 = 9,
    ECC_EngineTraceChannel3 = 10,
    ECC_EngineTraceChannel4 = 11,
    ECC_EngineTraceChannel5 = 12,
    ECC_EngineTraceChannel6 = 13,
    ECC_GameTraceChannel1 = 14,
    ECC_GameTraceChannel2 = 15,
    ECC_GameTraceChannel3 = 16,
    ECC_GameTraceChannel4 = 17,
    ECC_GameTraceChannel5 = 18,
    ECC_GameTraceChannel6 = 19,
    ECC_GameTraceChannel7 = 20,
    ECC_GameTraceChannel8 = 21,
    ECC_GameTraceChannel9 = 22,
    ECC_GameTraceChannel10 = 23,
    ECC_GameTraceChannel11 = 24,
    ECC_GameTraceChannel12 = 25,
    ECC_GameTraceChannel13 = 26,
    ECC_GameTraceChannel14 = 27,
    ECC_GameTraceChannel15 = 28,
    ECC_GameTraceChannel16 = 29,
    ECC_GameTraceChannel17 = 30,
    ECC_GameTraceChannel18 = 31,
    ECC_OverlapAll_Deprecated = 32,
    ECC_MAX = 33,
}

---@enum ECollisionEnabled
local ECollisionEnabled = {
    NoCollision = 0,
    QueryOnly = 1,
    PhysicsOnly = 2,
    QueryAndPhysics = 3,
    ECollisionEnabled_MAX = 4,
}

---@enum ECollisionResponse
local ECollisionResponse = {
    ECR_Ignore = 0,
    ECR_Overlap = 1,
    ECR_Block = 2,
    ECR_MAX = 3,
}

---@enum ECollisionTraceFlag
local ECollisionTraceFlag = {
    CTF_UseDefault = 0,
    CTF_UseSimpleAndComplex = 1,
    CTF_UseSimpleAsComplex = 2,
    CTF_UseComplexAsSimple = 3,
    CTF_MAX = 4,
}

---@enum EComponentCreationMethod
local EComponentCreationMethod = {
    Native = 0,
    SimpleConstructionScript = 1,
    UserConstructionScript = 2,
    Instance = 3,
    EComponentCreationMethod_MAX = 4,
}

---@enum EComponentMobility
local EComponentMobility = {
    Static = 0,
    Stationary = 1,
    Movable = 2,
    EComponentMobility_MAX = 3,
}

---@enum EComponentSocketType
local EComponentSocketType = {
    Invalid = 0,
    Bone = 1,
    Socket = 2,
    EComponentSocketType_MAX = 3,
}

---@enum EComponentType
local EComponentType = {
    None = 0,
    TranslationX = 1,
    TranslationY = 2,
    TranslationZ = 3,
    RotationX = 4,
    RotationY = 5,
    RotationZ = 6,
    Scale = 7,
    ScaleX = 8,
    ScaleY = 9,
    ScaleZ = 10,
    EComponentType_MAX = 11,
}

---@enum ECompositeTextureMode
local ECompositeTextureMode = {
    CTM_Disabled = 0,
    CTM_NormalRoughnessToRed = 1,
    CTM_NormalRoughnessToGreen = 2,
    CTM_NormalRoughnessToBlue = 3,
    CTM_NormalRoughnessToAlpha = 4,
    CTM_MAX = 5,
}

---@enum ECompositingSampleCount
local ECompositingSampleCount = {
    One = 1,
    Two = 2,
    Four = 4,
    Eight = 8,
    ECompositingSampleCount_MAX = 9,
}

---@enum EConstraintFrame
local EConstraintFrame = {
    Frame1 = 0,
    Frame2 = 1,
    EConstraintFrame_MAX = 2,
}

---@enum EConstraintTransform
local EConstraintTransform = {
    Absolute = 0,
    Relative = 1,
    EConstraintTransform_MAX = 2,
}

---@enum EControlConstraint
local EControlConstraint = {
    Orientation = 0,
    Translation = 1,
    MAX = 2,
}

---@enum EControllerAnalogStick
local EControllerAnalogStick = {
    CAS_LeftStick = 0,
    CAS_RightStick = 1,
    CAS_MAX = 2,
}

---@enum ECopyType
local ECopyType = {
    MemCopy = 0,
    BoolProperty = 1,
    StructProperty = 2,
    ObjectProperty = 3,
    ECopyType_MAX = 4,
}

---@enum ECsgOper
local ECsgOper = {
    CSG_Active = 0,
    CSG_Add = 1,
    CSG_Subtract = 2,
    CSG_Intersect = 3,
    CSG_Deintersect = 4,
    CSG_None = 5,
    CSG_MAX = 6,
}

---@enum ECurveBlendOption
local ECurveBlendOption = {
    MaxWeight = 0,
    NormalizeByWeight = 1,
    BlendByWeight = 2,
    ECurveBlendOption_MAX = 3,
}

---@enum ECurveTableMode
local ECurveTableMode = {
    Empty = 0,
    SimpleCurves = 1,
    RichCurves = 2,
    ECurveTableMode_MAX = 3,
}

---@enum ECustomDepthStencil
local ECustomDepthStencil = {
    Disabled = 0,
    Enabled = 1,
    EnabledOnDemand = 2,
    EnabledWithStencil = 3,
    ECustomDepthStencil_MAX = 4,
}

---@enum ECustomMaterialOutputType
local ECustomMaterialOutputType = {
    CMOT_Float1 = 0,
    CMOT_Float2 = 1,
    CMOT_Float3 = 2,
    CMOT_Float4 = 3,
    CMOT_MAX = 4,
}

---@enum ECustomTimeStepSynchronizationState
local ECustomTimeStepSynchronizationState = {
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ECustomTimeStepSynchronizationState_MAX = 4,
}

---@enum EDOFMode
local EDOFMode = {
    Default = 0,
    SixDOF = 1,
    YZPlane = 2,
    XZPlane = 3,
    XYPlane = 4,
    CustomPlane = 5,
    None = 6,
    EDOFMode_MAX = 7,
}

---@enum EDecalBlendMode
local EDecalBlendMode = {
    DBM_Translucent = 0,
    DBM_Stain = 1,
    DBM_Normal = 2,
    DBM_Emissive = 3,
    DBM_DBuffer_ColorNormalRoughness = 4,
    DBM_DBuffer_Color = 5,
    DBM_DBuffer_ColorNormal = 6,
    DBM_DBuffer_ColorRoughness = 7,
    DBM_DBuffer_Normal = 8,
    DBM_DBuffer_NormalRoughness = 9,
    DBM_DBuffer_Roughness = 10,
    DBM_DBuffer_Emissive = 11,
    DBM_DBuffer_AlphaComposite = 12,
    DBM_DBuffer_EmissiveAlphaComposite = 13,
    DBM_Volumetric_DistanceFunction = 14,
    DBM_AlphaComposite = 15,
    DBM_AmbientOcclusion = 16,
    DBM_MAX = 17,
}

---@enum EDecompressionType
local EDecompressionType = {
    DTYPE_Setup = 0,
    DTYPE_Invalid = 1,
    DTYPE_Preview = 2,
    DTYPE_Native = 3,
    DTYPE_RealTime = 4,
    DTYPE_Procedural = 5,
    DTYPE_Xenon = 6,
    DTYPE_Streaming = 7,
    DTYPE_MAX = 8,
}

---@enum EDefaultBackBufferPixelFormat
local EDefaultBackBufferPixelFormat = {
    DBBPF_B8G8R8A8 = 0,
    DBBPF_A16B16G16R16_DEPRECATED = 1,
    DBBPF_FloatRGB_DEPRECATED = 2,
    DBBPF_FloatRGBA = 3,
    DBBPF_A2B10G10R10 = 4,
    DBBPF_MAX = 5,
}

---@enum EDemoPlayFailure
local EDemoPlayFailure = {
    Generic = 0,
    DemoNotFound = 1,
    Corrupt = 2,
    InvalidVersion = 3,
    InitBase = 4,
    GameSpecificHeader = 5,
    ReplayStreamerInternal = 6,
    LoadMap = 7,
    Serialization = 8,
    EDemoPlayFailure_MAX = 9,
}

---@enum EDepthOfFieldFunctionValue
local EDepthOfFieldFunctionValue = {
    TDOF_NearAndFarMask = 0,
    TDOF_NearMask = 1,
    TDOF_FarMask = 2,
    TDOF_CircleOfConfusionRadius = 3,
    TDOF_MAX = 4,
}

---@enum EDepthOfFieldMethod
local EDepthOfFieldMethod = {
    DOFM_BokehDOF = 0,
    DOFM_Gaussian = 1,
    DOFM_CircleDOF = 2,
    DOFM_MAX = 3,
}

---@enum EDetachmentRule
local EDetachmentRule = {
    KeepRelative = 0,
    KeepWorld = 1,
    EDetachmentRule_MAX = 2,
}

---@enum EDetailMode
local EDetailMode = {
    DM_Low = 0,
    DM_Medium = 1,
    DM_High = 2,
    DM_MAX = 3,
}

---@enum EDistributionVectorLockFlags
local EDistributionVectorLockFlags = {
    EDVLF_None = 0,
    EDVLF_XY = 1,
    EDVLF_XZ = 2,
    EDVLF_YZ = 3,
    EDVLF_XYZ = 4,
    EDVLF_MAX = 5,
}

---@enum EDistributionVectorMirrorFlags
local EDistributionVectorMirrorFlags = {
    EDVMF_Same = 0,
    EDVMF_Different = 1,
    EDVMF_Mirror = 2,
    EDVMF_MAX = 3,
}

---@enum EDrawDebugItemType
local EDrawDebugItemType = {
    DirectionalArrow = 0,
    Sphere = 1,
    Line = 2,
    OnScreenMessage = 3,
    CoordinateSystem = 4,
    EDrawDebugItemType_MAX = 5,
}

---@enum EDrawDebugTrace
local EDrawDebugTrace = {
    None = 0,
    ForOneFrame = 1,
    ForDuration = 2,
    Persistent = 3,
    EDrawDebugTrace_MAX = 4,
}

---@enum EDynamicForceFeedbackAction
local EDynamicForceFeedbackAction = {
    Start = 0,
    Update = 1,
    Stop = 2,
    EDynamicForceFeedbackAction_MAX = 3,
}

---@enum EEarlyZPass
local EEarlyZPass = {
    None = 0,
    OpaqueOnly = 1,
    OpaqueAndMasked = 2,
    Auto = 3,
    EEarlyZPass_MAX = 4,
}

---@enum EEasingFunc
local EEasingFunc = {
    Linear = 0,
    Step = 1,
    SinusoidalIn = 2,
    SinusoidalOut = 3,
    SinusoidalInOut = 4,
    EaseIn = 5,
    EaseOut = 6,
    EaseInOut = 7,
    ExpoIn = 8,
    ExpoOut = 9,
    ExpoInOut = 10,
    CircularIn = 11,
    CircularOut = 12,
    CircularInOut = 13,
    EEasingFunc_MAX = 14,
}

---@enum EEdGraphPinDirection
local EEdGraphPinDirection = {
    EGPD_Input = 0,
    EGPD_Output = 1,
    EGPD_MAX = 2,
}

---@enum EEmitterDynamicParameterValue
local EEmitterDynamicParameterValue = {
    EDPV_UserSet = 0,
    EDPV_AutoSet = 1,
    EDPV_VelocityX = 2,
    EDPV_VelocityY = 3,
    EDPV_VelocityZ = 4,
    EDPV_VelocityMag = 5,
    EDPV_MAX = 6,
}

---@enum EEmitterNormalsMode
local EEmitterNormalsMode = {
    ENM_CameraFacing = 0,
    ENM_Spherical = 1,
    ENM_Cylindrical = 2,
    ENM_MAX = 3,
}

---@enum EEmitterRenderMode
local EEmitterRenderMode = {
    ERM_Normal = 0,
    ERM_Point = 1,
    ERM_Cross = 2,
    ERM_LightsOnly = 3,
    ERM_None = 4,
    ERM_MAX = 5,
}

---@enum EEndPlayReason
local EEndPlayReason = {
    Destroyed = 0,
    LevelTransition = 1,
    EndPlayInEditor = 2,
    RemovedFromWorld = 3,
    Quit = 4,
    EEndPlayReason_MAX = 5,
}

---@enum EEvaluateCurveTableResult
local EEvaluateCurveTableResult = {
    RowFound = 0,
    RowNotFound = 1,
    EEvaluateCurveTableResult_MAX = 2,
}

---@enum EEvaluatorDataSource
local EEvaluatorDataSource = {
    EDS_SourcePose = 0,
    EDS_DestinationPose = 1,
    EDS_MAX = 2,
}

---@enum EEvaluatorMode
local EEvaluatorMode = {
    EM_Standard = 0,
    EM_Freeze = 1,
    EM_DelayedFreeze = 2,
    EM_MAX = 3,
}

---@enum EFastArraySerializerDeltaFlags
local EFastArraySerializerDeltaFlags = {
    None = 0,
    HasBeenSerialized = 1,
    HasDeltaBeenRequested = 2,
    IsUsingDeltaSerialization = 4,
    EFastArraySerializerDeltaFlags_MAX = 5,
}

---@enum EFilterInterpolationType
local EFilterInterpolationType = {
    BSIT_Average = 0,
    BSIT_Linear = 1,
    BSIT_Cubic = 2,
    BSIT_MAX = 3,
}

---@enum EFontCacheType
local EFontCacheType = {
    Offline = 0,
    Runtime = 1,
    EFontCacheType_MAX = 2,
}

---@enum EFontImportCharacterSet
local EFontImportCharacterSet = {
    FontICS_Default = 0,
    FontICS_Ansi = 1,
    FontICS_Symbol = 2,
    FontICS_MAX = 3,
}

---@enum EFormatArgumentType
local EFormatArgumentType = {
    Int = 0,
    UInt = 1,
    Float = 2,
    Double = 3,
    Text = 4,
    Gender = 5,
    EFormatArgumentType_MAX = 6,
}

---@enum EFrictionCombineMode
local EFrictionCombineMode = {
    Average = 0,
    Min = 1,
    Multiply = 2,
    Max = 3,
}

---@enum EFullyLoadPackageType
local EFullyLoadPackageType = {
    FULLYLOAD_Map = 0,
    FULLYLOAD_Game_PreLoadClass = 1,
    FULLYLOAD_Game_PostLoadClass = 2,
    FULLYLOAD_Always = 3,
    FULLYLOAD_Mutator = 4,
    FULLYLOAD_MAX = 5,
}

---@enum EFunctionInputType
local EFunctionInputType = {
    FunctionInput_Scalar = 0,
    FunctionInput_Vector2 = 1,
    FunctionInput_Vector3 = 2,
    FunctionInput_Vector4 = 3,
    FunctionInput_Texture2D = 4,
    FunctionInput_TextureCube = 5,
    FunctionInput_Texture2DArray = 6,
    FunctionInput_VolumeTexture = 7,
    FunctionInput_StaticBool = 8,
    FunctionInput_MaterialAttributes = 9,
    FunctionInput_TextureExternal = 10,
    FunctionInput_MAX = 11,
}

---@enum EGBufferFormat
local EGBufferFormat = {
    Force8BitsPerChannel = 0,
    Default = 1,
    HighPrecisionNormals = 3,
    Force16BitsPerChannel = 5,
    EGBufferFormat_MAX = 6,
}

---@enum EGrammaticalGender
local EGrammaticalGender = {
    Neuter = 0,
    Masculine = 1,
    Feminine = 2,
    Mixed = 3,
    EGrammaticalGender_MAX = 4,
}

---@enum EGrammaticalNumber
local EGrammaticalNumber = {
    Singular = 0,
    Plural = 1,
    EGrammaticalNumber_MAX = 2,
}

---@enum EGraphAxisStyle
local EGraphAxisStyle = {
    Lines = 0,
    Notches = 1,
    Grid = 2,
    EGraphAxisStyle_MAX = 3,
}

---@enum EGraphDataStyle
local EGraphDataStyle = {
    Lines = 0,
    Filled = 1,
    EGraphDataStyle_MAX = 2,
}

---@enum EGraphType
local EGraphType = {
    GT_Function = 0,
    GT_Ubergraph = 1,
    GT_Macro = 2,
    GT_Animation = 3,
    GT_StateMachine = 4,
    GT_MAX = 5,
}

---@enum EHasCustomNavigableGeometry
local EHasCustomNavigableGeometry = {
    No = 0,
    Yes = 1,
    EvenIfNotCollidable = 2,
    DontExport = 3,
    EHasCustomNavigableGeometry_MAX = 4,
}

---@enum EHorizTextAligment
local EHorizTextAligment = {
    EHTA_Left = 0,
    EHTA_Center = 1,
    EHTA_Right = 2,
    EHTA_MAX = 3,
}

---@enum EImportanceLevel
local EImportanceLevel = {
    IL_Off = 0,
    IL_Lowest = 1,
    IL_Low = 2,
    IL_Normal = 3,
    IL_High = 4,
    IL_Highest = 5,
    TEMP_BROKEN2 = 6,
    EImportanceLevel_MAX = 7,
}

---@enum EImportanceWeight
local EImportanceWeight = {
    Luminance = 0,
    Red = 1,
    Green = 2,
    Blue = 3,
    Alpha = 4,
    EImportanceWeight_MAX = 5,
}

---@enum EIndirectLightingCacheQuality
local EIndirectLightingCacheQuality = {
    ILCQ_Off = 0,
    ILCQ_Point = 1,
    ILCQ_Volume = 2,
    ILCQ_MAX = 3,
}

---@enum EInertializationBoneState
local EInertializationBoneState = {
    Invalid = 0,
    Valid = 1,
    Excluded = 2,
    EInertializationBoneState_MAX = 3,
}

---@enum EInertializationSpace
local EInertializationSpace = {
    Default = 0,
    WorldSpace = 1,
    WorldRotation = 2,
    EInertializationSpace_MAX = 3,
}

---@enum EInertializationState
local EInertializationState = {
    Inactive = 0,
    Pending = 1,
    Active = 2,
    EInertializationState_MAX = 3,
}

---@enum EInitialOscillatorOffset
local EInitialOscillatorOffset = {
    EOO_OffsetRandom = 0,
    EOO_OffsetZero = 1,
    EOO_MAX = 2,
}

---@enum EInputEvent
local EInputEvent = {
    IE_Pressed = 0,
    IE_Released = 1,
    IE_Repeat = 2,
    IE_DoubleClick = 3,
    IE_Axis = 4,
    IE_MAX = 5,
}

---@enum EInterpMoveAxis
local EInterpMoveAxis = {
    AXIS_TranslationX = 0,
    AXIS_TranslationY = 1,
    AXIS_TranslationZ = 2,
    AXIS_RotationX = 3,
    AXIS_RotationY = 4,
    AXIS_RotationZ = 5,
    AXIS_MAX = 6,
}

---@enum EInterpToBehaviourType
local EInterpToBehaviourType = {
    OneShot = 0,
    OneShot_Reverse = 1,
    Loop_Reset = 2,
    PingPong = 3,
    EInterpToBehaviourType_MAX = 4,
}

---@enum EInterpTrackMoveRotMode
local EInterpTrackMoveRotMode = {
    IMR_Keyframed = 0,
    IMR_LookAtGroup = 1,
    IMR_Ignore = 2,
    IMR_MAX = 3,
}

---@enum EKinematicBonesUpdateToPhysics
local EKinematicBonesUpdateToPhysics = {
    SkipSimulatingBones = 0,
    SkipAllBones = 1,
    EKinematicBonesUpdateToPhysics_MAX = 2,
}

---@enum ELandscapeCullingPrecision
local ELandscapeCullingPrecision = {
    High = 0,
    Medium = 1,
    Low = 2,
    ELandscapeCullingPrecision_MAX = 3,
}

---@enum ELegendPosition
local ELegendPosition = {
    Outside = 0,
    Inside = 1,
    ELegendPosition_MAX = 2,
}

---@enum ELerpInterpolationMode
local ELerpInterpolationMode = {
    QuatInterp = 0,
    EulerInterp = 1,
    DualQuatInterp = 2,
    ELerpInterpolationMode_MAX = 3,
}

---@enum ELightMapPaddingType
local ELightMapPaddingType = {
    LMPT_NormalPadding = 0,
    LMPT_PrePadding = 1,
    LMPT_NoPadding = 2,
    LMPT_MAX = 3,
}

---@enum ELightUnits
local ELightUnits = {
    Unitless = 0,
    Candelas = 1,
    Lumens = 2,
    ELightUnits_MAX = 3,
}

---@enum ELightingBuildQuality
local ELightingBuildQuality = {
    Quality_Preview = 0,
    Quality_Medium = 1,
    Quality_High = 2,
    Quality_Production = 3,
    Quality_MAX = 4,
}

---@enum ELightmapType
local ELightmapType = {
    Default = 0,
    ForceSurface = 1,
    ForceVolumetric = 2,
    ELightmapType_MAX = 3,
}

---@enum ELinearConstraintMotion
local ELinearConstraintMotion = {
    LCM_Free = 0,
    LCM_Limited = 1,
    LCM_Locked = 2,
    LCM_MAX = 3,
}

---@enum ELocationBoneSocketSelectionMethod
local ELocationBoneSocketSelectionMethod = {
    BONESOCKETSEL_Sequential = 0,
    BONESOCKETSEL_Random = 1,
    BONESOCKETSEL_MAX = 2,
}

---@enum ELocationBoneSocketSource
local ELocationBoneSocketSource = {
    BONESOCKETSOURCE_Bones = 0,
    BONESOCKETSOURCE_Sockets = 1,
    BONESOCKETSOURCE_MAX = 2,
}

---@enum ELocationEmitterSelectionMethod
local ELocationEmitterSelectionMethod = {
    ELESM_Random = 0,
    ELESM_Sequential = 1,
    ELESM_MAX = 2,
}

---@enum ELocationSkelVertSurfaceSource
local ELocationSkelVertSurfaceSource = {
    VERTSURFACESOURCE_Vert = 0,
    VERTSURFACESOURCE_Surface = 1,
    VERTSURFACESOURCE_MAX = 2,
}

---@enum EMaterialAttributeBlend
local EMaterialAttributeBlend = {
    Blend = 0,
    UseA = 1,
    UseB = 2,
    EMaterialAttributeBlend_MAX = 3,
}

---@enum EMaterialDecalResponse
local EMaterialDecalResponse = {
    MDR_None = 0,
    MDR_ColorNormalRoughness = 1,
    MDR_Color = 2,
    MDR_ColorNormal = 3,
    MDR_ColorRoughness = 4,
    MDR_Normal = 5,
    MDR_NormalRoughness = 6,
    MDR_Roughness = 7,
    MDR_MAX = 8,
}

---@enum EMaterialDomain
local EMaterialDomain = {
    MD_Surface = 0,
    MD_DeferredDecal = 1,
    MD_LightFunction = 2,
    MD_Volume = 3,
    MD_PostProcess = 4,
    MD_UI = 5,
    MD_RuntimeVirtualTexture = 6,
    MD_MAX = 7,
}

---@enum EMaterialExposedTextureProperty
local EMaterialExposedTextureProperty = {
    TMTM_TextureSize = 0,
    TMTM_TexelSize = 1,
    TMTM_MAX = 2,
}

---@enum EMaterialExposedViewProperty
local EMaterialExposedViewProperty = {
    MEVP_BufferSize = 0,
    MEVP_FieldOfView = 1,
    MEVP_TanHalfFieldOfView = 2,
    MEVP_ViewSize = 3,
    MEVP_WorldSpaceViewPosition = 4,
    MEVP_WorldSpaceCameraPosition = 5,
    MEVP_ViewportOffset = 6,
    MEVP_TemporalSampleCount = 7,
    MEVP_TemporalSampleIndex = 8,
    MEVP_TemporalSampleOffset = 9,
    MEVP_RuntimeVirtualTextureOutputLevel = 10,
    MEVP_RuntimeVirtualTextureOutputDerivative = 11,
    MEVP_PreExposure = 12,
    MEVP_MAX = 13,
}

---@enum EMaterialFunctionUsage
local EMaterialFunctionUsage = {
    Default = 0,
    MaterialLayer = 1,
    MaterialLayerBlend = 2,
    EMaterialFunctionUsage_MAX = 3,
}

---@enum EMaterialMergeType
local EMaterialMergeType = {
    MaterialMergeType_Default = 0,
    MaterialMergeType_Simplygon = 1,
    MaterialMergeType_MAX = 2,
}

---@enum EMaterialParameterAssociation
local EMaterialParameterAssociation = {
    LayerParameter = 0,
    BlendParameter = 1,
    GlobalParameter = 2,
    EMaterialParameterAssociation_MAX = 3,
}

---@enum EMaterialPositionTransformSource
local EMaterialPositionTransformSource = {
    TRANSFORMPOSSOURCE_Local = 0,
    TRANSFORMPOSSOURCE_World = 1,
    TRANSFORMPOSSOURCE_TranslatedWorld = 2,
    TRANSFORMPOSSOURCE_View = 3,
    TRANSFORMPOSSOURCE_Camera = 4,
    TRANSFORMPOSSOURCE_Particle = 5,
    TRANSFORMPOSSOURCE_MAX = 6,
}

---@enum EMaterialProperty
local EMaterialProperty = {
    MP_EmissiveColor = 0,
    MP_Opacity = 1,
    MP_OpacityMask = 2,
    MP_DiffuseColor = 3,
    MP_SpecularColor = 4,
    MP_BaseColor = 5,
    MP_Metallic = 6,
    MP_Specular = 7,
    MP_Roughness = 8,
    MP_Normal = 9,
    MP_WorldPositionOffset = 10,
    MP_WorldDisplacement = 11,
    MP_TessellationMultiplier = 12,
    MP_SubsurfaceColor = 13,
    MP_CustomData0 = 14,
    MP_CustomData1 = 15,
    MP_AmbientOcclusion = 16,
    MP_Refraction = 17,
    MP_CustomizedUVs0 = 18,
    MP_CustomizedUVs1 = 19,
    MP_CustomizedUVs2 = 20,
    MP_CustomizedUVs3 = 21,
    MP_CustomizedUVs4 = 22,
    MP_CustomizedUVs5 = 23,
    MP_CustomizedUVs6 = 24,
    MP_CustomizedUVs7 = 25,
    MP_PixelDepthOffset = 26,
    MP_ShadingModel = 27,
    MP_MaterialAttributes = 28,
    MP_CustomOutput = 29,
    MP_MAX = 30,
}

---@enum EMaterialSamplerType
local EMaterialSamplerType = {
    SAMPLERTYPE_Color = 0,
    SAMPLERTYPE_Grayscale = 1,
    SAMPLERTYPE_Alpha = 2,
    SAMPLERTYPE_Normal = 3,
    SAMPLERTYPE_Masks = 4,
    SAMPLERTYPE_DistanceFieldFont = 5,
    SAMPLERTYPE_LinearColor = 6,
    SAMPLERTYPE_LinearGrayscale = 7,
    SAMPLERTYPE_Data = 8,
    SAMPLERTYPE_External = 9,
    SAMPLERTYPE_VirtualColor = 10,
    SAMPLERTYPE_VirtualGrayscale = 11,
    SAMPLERTYPE_VirtualAlpha = 12,
    SAMPLERTYPE_VirtualNormal = 13,
    SAMPLERTYPE_VirtualMasks = 14,
    SAMPLERTYPE_VirtualLinearColor = 15,
    SAMPLERTYPE_VirtualLinearGrayscale = 16,
    SAMPLERTYPE_MAX = 17,
}

---@enum EMaterialSceneAttributeInputMode
local EMaterialSceneAttributeInputMode = {
    Coordinates = 0,
    OffsetFraction = 1,
    EMaterialSceneAttributeInputMode_MAX = 2,
}

---@enum EMaterialShadingModel
local EMaterialShadingModel = {
    MSM_Unlit = 0,
    MSM_DefaultLit = 1,
    MSM_Subsurface = 2,
    MSM_PreintegratedSkin = 3,
    MSM_ClearCoat = 4,
    MSM_SubsurfaceProfile = 5,
    MSM_TwoSidedFoliage = 6,
    MSM_Hair = 7,
    MSM_Cloth = 8,
    MSM_Eye = 9,
    MSM_SingleLayerWater = 10,
    MSM_NUM = 11,
    MSM_FromMaterialExpression = 12,
    MSM_MAX = 13,
}

---@enum EMaterialStencilCompare
local EMaterialStencilCompare = {
    MSC_Less = 0,
    MSC_LessEqual = 1,
    MSC_Greater = 2,
    MSC_GreaterEqual = 3,
    MSC_Equal = 4,
    MSC_NotEqual = 5,
    MSC_Never = 6,
    MSC_Always = 7,
    MSC_Count = 8,
    MSC_MAX = 9,
}

---@enum EMaterialTessellationMode
local EMaterialTessellationMode = {
    MTM_NoTessellation = 0,
    MTM_FlatTessellation = 1,
    MTM_PNTriangles = 2,
    MTM_MAX = 3,
}

---@enum EMaterialUsage
local EMaterialUsage = {
    MATUSAGE_SkeletalMesh = 0,
    MATUSAGE_ParticleSprites = 1,
    MATUSAGE_BeamTrails = 2,
    MATUSAGE_MeshParticles = 3,
    MATUSAGE_StaticLighting = 4,
    MATUSAGE_MorphTargets = 5,
    MATUSAGE_SplineMesh = 6,
    MATUSAGE_InstancedStaticMeshes = 7,
    MATUSAGE_GeometryCollections = 8,
    MATUSAGE_Clothing = 9,
    MATUSAGE_NiagaraSprites = 10,
    MATUSAGE_NiagaraRibbons = 11,
    MATUSAGE_NiagaraMeshParticles = 12,
    MATUSAGE_GeometryCache = 13,
    MATUSAGE_Water = 14,
    MATUSAGE_HairStrands = 15,
    MATUSAGE_MAX = 16,
}

---@enum EMaterialVectorCoordTransform
local EMaterialVectorCoordTransform = {
    TRANSFORM_Tangent = 0,
    TRANSFORM_Local = 1,
    TRANSFORM_World = 2,
    TRANSFORM_View = 3,
    TRANSFORM_Camera = 4,
    TRANSFORM_ParticleWorld = 5,
    TRANSFORM_MAX = 6,
}

---@enum EMaterialVectorCoordTransformSource
local EMaterialVectorCoordTransformSource = {
    TRANSFORMSOURCE_Tangent = 0,
    TRANSFORMSOURCE_Local = 1,
    TRANSFORMSOURCE_World = 2,
    TRANSFORMSOURCE_View = 3,
    TRANSFORMSOURCE_Camera = 4,
    TRANSFORMSOURCE_ParticleWorld = 5,
    TRANSFORMSOURCE_MAX = 6,
}

---@enum EMatrixColumns
local EMatrixColumns = {
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    EMatrixColumns_MAX = 4,
}

---@enum EMaxConcurrentResolutionRule
local EMaxConcurrentResolutionRule = {
    PreventNew = 0,
    StopOldest = 1,
    StopFarthestThenPreventNew = 2,
    StopFarthestThenOldest = 3,
    StopLowestPriority = 4,
    StopQuietest = 5,
    StopLowestPriorityThenPreventNew = 6,
    EMaxConcurrentResolutionRule_MAX = 7,
}

---@enum EMeshBufferAccess
local EMeshBufferAccess = {
    Default = 0,
    ForceCPUAndGPU = 1,
    EMeshBufferAccess_MAX = 2,
}

---@enum EMeshCameraFacingOptions
local EMeshCameraFacingOptions = {
    XAxisFacing_NoUp = 0,
    XAxisFacing_ZUp = 1,
    XAxisFacing_NegativeZUp = 2,
    XAxisFacing_YUp = 3,
    XAxisFacing_NegativeYUp = 4,
    LockedAxis_ZAxisFacing = 5,
    LockedAxis_NegativeZAxisFacing = 6,
    LockedAxis_YAxisFacing = 7,
    LockedAxis_NegativeYAxisFacing = 8,
    VelocityAligned_ZAxisFacing = 9,
    VelocityAligned_NegativeZAxisFacing = 10,
    VelocityAligned_YAxisFacing = 11,
    VelocityAligned_NegativeYAxisFacing = 12,
    EMeshCameraFacingOptions_MAX = 13,
}

---@enum EMeshCameraFacingUpAxis
local EMeshCameraFacingUpAxis = {
    CameraFacing_NoneUP = 0,
    CameraFacing_ZUp = 1,
    CameraFacing_NegativeZUp = 2,
    CameraFacing_YUp = 3,
    CameraFacing_NegativeYUp = 4,
    CameraFacing_MAX = 5,
}

---@enum EMeshFeatureImportance
local EMeshFeatureImportance = {
    Off = 0,
    Lowest = 1,
    Low = 2,
    Normal = 3,
    High = 4,
    Highest = 5,
    EMeshFeatureImportance_MAX = 6,
}

---@enum EMeshInstancingReplacementMethod
local EMeshInstancingReplacementMethod = {
    RemoveOriginalActors = 0,
    KeepOriginalActorsAsEditorOnly = 1,
    EMeshInstancingReplacementMethod_MAX = 2,
}

---@enum EMeshLODSelectionType
local EMeshLODSelectionType = {
    AllLODs = 0,
    SpecificLOD = 1,
    CalculateLOD = 2,
    LowestDetailLOD = 3,
    EMeshLODSelectionType_MAX = 4,
}

---@enum EMeshMergeType
local EMeshMergeType = {
    MeshMergeType_Default = 0,
    MeshMergeType_MergeActor = 1,
    MeshMergeType_MAX = 2,
}

---@enum EMeshScreenAlignment
local EMeshScreenAlignment = {
    PSMA_MeshFaceCameraWithRoll = 0,
    PSMA_MeshFaceCameraWithSpin = 1,
    PSMA_MeshFaceCameraWithLockedAxis = 2,
    PSMA_MAX = 3,
}

---@enum EMicroTransactionDelegate
local EMicroTransactionDelegate = {
    MTD_PurchaseQueryComplete = 0,
    MTD_PurchaseComplete = 1,
    MTD_MAX = 2,
}

---@enum EMicroTransactionResult
local EMicroTransactionResult = {
    MTR_Succeeded = 0,
    MTR_Failed = 1,
    MTR_Canceled = 2,
    MTR_RestoredFromServer = 3,
    MTR_MAX = 4,
}

---@enum EMobileMSAASampleCount
local EMobileMSAASampleCount = {
    One = 1,
    Two = 2,
    Four = 4,
    Eight = 8,
    EMobileMSAASampleCount_MAX = 9,
}

---@enum EModuleType
local EModuleType = {
    EPMT_General = 0,
    EPMT_TypeData = 1,
    EPMT_Beam = 2,
    EPMT_Trail = 3,
    EPMT_Spawn = 4,
    EPMT_Required = 5,
    EPMT_Event = 6,
    EPMT_Light = 7,
    EPMT_SubUV = 8,
    EPMT_MAX = 9,
}

---@enum EMonoChannelUpmixMethod
local EMonoChannelUpmixMethod = {
    Linear = 0,
    EqualPower = 1,
    FullVolume = 2,
    EMonoChannelUpmixMethod_MAX = 3,
}

---@enum EMontageNotifyTickType
local EMontageNotifyTickType = {
    Queued = 0,
    BranchingPoint = 1,
    EMontageNotifyTickType_MAX = 2,
}

---@enum EMontagePlayReturnType
local EMontagePlayReturnType = {
    MontageLength = 0,
    Duration = 1,
    EMontagePlayReturnType_MAX = 2,
}

---@enum EMontageSubStepResult
local EMontageSubStepResult = {
    Moved = 0,
    NotMoved = 1,
    InvalidSection = 2,
    InvalidMontage = 3,
    EMontageSubStepResult_MAX = 4,
}

---@enum EMouseCaptureMode
local EMouseCaptureMode = {
    NoCapture = 0,
    CapturePermanently = 1,
    CapturePermanently_IncludingInitialMouseDown = 2,
    CaptureDuringMouseDown = 3,
    CaptureDuringRightMouseDown = 4,
    EMouseCaptureMode_MAX = 5,
}

---@enum EMouseLockMode
local EMouseLockMode = {
    DoNotLock = 0,
    LockOnCapture = 1,
    LockAlways = 2,
    LockInFullscreen = 3,
    EMouseLockMode_MAX = 4,
}

---@enum EMoveComponentAction
local EMoveComponentAction = {
    Move = 0,
    Stop = 1,
    Return = 2,
    EMoveComponentAction_MAX = 3,
}

---@enum EMovementMode
local EMovementMode = {
    MOVE_None = 0,
    MOVE_Walking = 1,
    MOVE_NavWalking = 2,
    MOVE_Falling = 3,
    MOVE_Swimming = 4,
    MOVE_Flying = 5,
    MOVE_Custom = 6,
    MOVE_MAX = 7,
}

---@enum ENavDataGatheringMode
local ENavDataGatheringMode = {
    Default = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringMode_MAX = 3,
}

---@enum ENavDataGatheringModeConfig
local ENavDataGatheringModeConfig = {
    Invalid = 0,
    Instant = 1,
    Lazy = 2,
    ENavDataGatheringModeConfig_MAX = 3,
}

---@enum ENavLinkDirection
local ENavLinkDirection = {
    BothWays = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    ENavLinkDirection_MAX = 3,
}

---@enum ENavPathEvent
local ENavPathEvent = {
    Cleared = 0,
    NewPath = 1,
    UpdatedDueToGoalMoved = 2,
    UpdatedDueToNavigationChanged = 3,
    Invalidated = 4,
    RePathFailed = 5,
    MetaPathUpdate = 6,
    Custom = 7,
    ENavPathEvent_MAX = 8,
}

---@enum ENavigationOptionFlag
local ENavigationOptionFlag = {
    Default = 0,
    Enable = 1,
    Disable = 2,
    MAX = 3,
}

---@enum ENavigationQueryResult
local ENavigationQueryResult = {
    Invalid = 0,
    Error = 1,
    Fail = 2,
    Success = 3,
    ENavigationQueryResult_MAX = 4,
}

---@enum ENetDormancy
local ENetDormancy = {
    DORM_Never = 0,
    DORM_Awake = 1,
    DORM_DormantAll = 2,
    DORM_DormantPartial = 3,
    DORM_Initial = 4,
    DORM_MAX = 5,
}

---@enum ENetRole
local ENetRole = {
    ROLE_None = 0,
    ROLE_SimulatedProxy = 1,
    ROLE_AutonomousProxy = 2,
    ROLE_Authority = 3,
    ROLE_MAX = 4,
}

---@enum ENetworkFailure
local ENetworkFailure = {
    NetDriverAlreadyExists = 0,
    NetDriverCreateFailure = 1,
    NetDriverListenFailure = 2,
    ConnectionLost = 3,
    ConnectionTimeout = 4,
    FailureReceived = 5,
    OutdatedClient = 6,
    OutdatedServer = 7,
    PendingConnectionFailure = 8,
    NetGuidMismatch = 9,
    NetChecksumMismatch = 10,
    ENetworkFailure_MAX = 11,
}

---@enum ENetworkLagState
local ENetworkLagState = {
    NotLagging = 0,
    Lagging = 1,
    ENetworkLagState_MAX = 2,
}

---@enum ENetworkSmoothingMode
local ENetworkSmoothingMode = {
    Disabled = 0,
    Linear = 1,
    Exponential = 2,
    Replay = 3,
    ENetworkSmoothingMode_MAX = 4,
}

---@enum ENodeAdvancedPins
local ENodeAdvancedPins = {
    NoPins = 0,
    Shown = 1,
    Hidden = 2,
    ENodeAdvancedPins_MAX = 3,
}

---@enum ENodeEnabledState
local ENodeEnabledState = {
    Enabled = 0,
    Disabled = 1,
    DevelopmentOnly = 2,
    ENodeEnabledState_MAX = 3,
}

---@enum ENodeTitleType
local ENodeTitleType = {
    FullTitle = 0,
    ListView = 1,
    EditableTitle = 2,
    MenuTitle = 3,
    MAX_TitleTypes = 4,
    ENodeTitleType_MAX = 5,
}

---@enum ENoiseFunction
local ENoiseFunction = {
    NOISEFUNCTION_SimplexTex = 0,
    NOISEFUNCTION_GradientTex = 1,
    NOISEFUNCTION_GradientTex3D = 2,
    NOISEFUNCTION_GradientALU = 3,
    NOISEFUNCTION_ValueALU = 4,
    NOISEFUNCTION_VoronoiALU = 5,
    NOISEFUNCTION_MAX = 6,
}

---@enum ENormalMode
local ENormalMode = {
    NM_PreserveSmoothingGroups = 0,
    NM_RecalculateNormals = 1,
    NM_RecalculateNormalsSmooth = 2,
    NM_RecalculateNormalsHard = 3,
    TEMP_BROKEN = 4,
    ENormalMode_MAX = 5,
}

---@enum ENotifyFilterType
local ENotifyFilterType = {
    NoFiltering = 0,
    LOD = 1,
    ENotifyFilterType_MAX = 2,
}

---@enum ENotifyTriggerMode
local ENotifyTriggerMode = {
    AllAnimations = 0,
    HighestWeightedAnimation = 1,
    None = 2,
    ENotifyTriggerMode_MAX = 3,
}

---@enum EObjectTypeQuery
local EObjectTypeQuery = {
    ObjectTypeQuery1 = 0,
    ObjectTypeQuery2 = 1,
    ObjectTypeQuery3 = 2,
    ObjectTypeQuery4 = 3,
    ObjectTypeQuery5 = 4,
    ObjectTypeQuery6 = 5,
    ObjectTypeQuery7 = 6,
    ObjectTypeQuery8 = 7,
    ObjectTypeQuery9 = 8,
    ObjectTypeQuery10 = 9,
    ObjectTypeQuery11 = 10,
    ObjectTypeQuery12 = 11,
    ObjectTypeQuery13 = 12,
    ObjectTypeQuery14 = 13,
    ObjectTypeQuery15 = 14,
    ObjectTypeQuery16 = 15,
    ObjectTypeQuery17 = 16,
    ObjectTypeQuery18 = 17,
    ObjectTypeQuery19 = 18,
    ObjectTypeQuery20 = 19,
    ObjectTypeQuery21 = 20,
    ObjectTypeQuery22 = 21,
    ObjectTypeQuery23 = 22,
    ObjectTypeQuery24 = 23,
    ObjectTypeQuery25 = 24,
    ObjectTypeQuery26 = 25,
    ObjectTypeQuery27 = 26,
    ObjectTypeQuery28 = 27,
    ObjectTypeQuery29 = 28,
    ObjectTypeQuery30 = 29,
    ObjectTypeQuery31 = 30,
    ObjectTypeQuery32 = 31,
    ObjectTypeQuery_MAX = 32,
    EObjectTypeQuery_MAX = 33,
}

---@enum EOcclusionCombineMode
local EOcclusionCombineMode = {
    OCM_Minimum = 0,
    OCM_Multiply = 1,
    OCM_MAX = 2,
}

---@enum EOpacitySourceMode
local EOpacitySourceMode = {
    OSM_Alpha = 0,
    OSM_ColorBrightness = 1,
    OSM_RedChannel = 2,
    OSM_GreenChannel = 3,
    OSM_BlueChannel = 4,
    OSM_MAX = 5,
}

---@enum EOptimizationType
local EOptimizationType = {
    OT_NumOfTriangles = 0,
    OT_MaxDeviation = 1,
    OT_MAX = 2,
}

---@enum EOrbitChainMode
local EOrbitChainMode = {
    EOChainMode_Add = 0,
    EOChainMode_Scale = 1,
    EOChainMode_Link = 2,
    EOChainMode_MAX = 3,
}

---@enum EOscillatorWaveform
local EOscillatorWaveform = {
    SineWave = 0,
    PerlinNoise = 1,
    EOscillatorWaveform_MAX = 2,
}

---@enum EOverlapFilterOption
local EOverlapFilterOption = {
    OverlapFilter_All = 0,
    OverlapFilter_DynamicOnly = 1,
    OverlapFilter_StaticOnly = 2,
    OverlapFilter_MAX = 3,
}

---@enum EPSCPoolMethod
local EPSCPoolMethod = {
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
    EPSCPoolMethod_MAX = 5,
}

---@enum EPanningMethod
local EPanningMethod = {
    Linear = 0,
    EqualPower = 1,
    EPanningMethod_MAX = 2,
}

---@enum EParticleAxisLock
local EParticleAxisLock = {
    EPAL_NONE = 0,
    EPAL_X = 1,
    EPAL_Y = 2,
    EPAL_Z = 3,
    EPAL_NEGATIVE_X = 4,
    EPAL_NEGATIVE_Y = 5,
    EPAL_NEGATIVE_Z = 6,
    EPAL_ROTATE_X = 7,
    EPAL_ROTATE_Y = 8,
    EPAL_ROTATE_Z = 9,
    EPAL_MAX = 10,
}

---@enum EParticleBurstMethod
local EParticleBurstMethod = {
    EPBM_Instant = 0,
    EPBM_Interpolated = 1,
    EPBM_MAX = 2,
}

---@enum EParticleCameraOffsetUpdateMethod
local EParticleCameraOffsetUpdateMethod = {
    EPCOUM_DirectSet = 0,
    EPCOUM_Additive = 1,
    EPCOUM_Scalar = 2,
    EPCOUM_MAX = 3,
}

---@enum EParticleCollisionComplete
local EParticleCollisionComplete = {
    EPCC_Kill = 0,
    EPCC_Freeze = 1,
    EPCC_HaltCollisions = 2,
    EPCC_FreezeTranslation = 3,
    EPCC_FreezeRotation = 4,
    EPCC_FreezeMovement = 5,
    EPCC_MAX = 6,
}

---@enum EParticleCollisionMode
local EParticleCollisionMode = {
    SceneDepth = 0,
    DistanceField = 1,
    EParticleCollisionMode_MAX = 2,
}

---@enum EParticleCollisionResponse
local EParticleCollisionResponse = {
    Bounce = 0,
    Stop = 1,
    Kill = 2,
    EParticleCollisionResponse_MAX = 3,
}

---@enum EParticleDetailMode
local EParticleDetailMode = {
    PDM_Low = 0,
    PDM_Medium = 1,
    PDM_High = 2,
    PDM_MAX = 3,
}

---@enum EParticleEventType
local EParticleEventType = {
    EPET_Any = 0,
    EPET_Spawn = 1,
    EPET_Death = 2,
    EPET_Collision = 3,
    EPET_Burst = 4,
    EPET_Blueprint = 5,
    EPET_MAX = 6,
}

---@enum EParticleScreenAlignment
local EParticleScreenAlignment = {
    PSA_FacingCameraPosition = 0,
    PSA_Square = 1,
    PSA_Rectangle = 2,
    PSA_Velocity = 3,
    PSA_AwayFromCenter = 4,
    PSA_TypeSpecific = 5,
    PSA_FacingCameraDistanceBlend = 6,
    PSA_MAX = 7,
}

---@enum EParticleSignificanceLevel
local EParticleSignificanceLevel = {
    Low = 0,
    Medium = 1,
    High = 2,
    Critical = 3,
    Num = 4,
    EParticleSignificanceLevel_MAX = 5,
}

---@enum EParticleSortMode
local EParticleSortMode = {
    PSORTMODE_None = 0,
    PSORTMODE_ViewProjDepth = 1,
    PSORTMODE_DistanceToView = 2,
    PSORTMODE_Age_OldestFirst = 3,
    PSORTMODE_Age_NewestFirst = 4,
    PSORTMODE_MAX = 5,
}

---@enum EParticleSourceSelectionMethod
local EParticleSourceSelectionMethod = {
    EPSSM_Random = 0,
    EPSSM_Sequential = 1,
    EPSSM_MAX = 2,
}

---@enum EParticleSubUVInterpMethod
local EParticleSubUVInterpMethod = {
    PSUVIM_None = 0,
    PSUVIM_Linear = 1,
    PSUVIM_Linear_Blend = 2,
    PSUVIM_Random = 3,
    PSUVIM_Random_Blend = 4,
    PSUVIM_MAX = 5,
}

---@enum EParticleSysParamType
local EParticleSysParamType = {
    PSPT_None = 0,
    PSPT_Scalar = 1,
    PSPT_ScalarRand = 2,
    PSPT_Vector = 3,
    PSPT_VectorRand = 4,
    PSPT_Color = 5,
    PSPT_Actor = 6,
    PSPT_Material = 7,
    PSPT_VectorUnitRand = 8,
    PSPT_MAX = 9,
}

---@enum EParticleSystemInsignificanceReaction
local EParticleSystemInsignificanceReaction = {
    Auto = 0,
    Complete = 1,
    DisableTick = 2,
    DisableTickAndKill = 3,
    Num = 4,
    EParticleSystemInsignificanceReaction_MAX = 5,
}

---@enum EParticleSystemOcclusionBoundsMethod
local EParticleSystemOcclusionBoundsMethod = {
    EPSOBM_None = 0,
    EPSOBM_ParticleBounds = 1,
    EPSOBM_CustomBounds = 2,
    EPSOBM_MAX = 3,
}

---@enum EParticleSystemUpdateMode
local EParticleSystemUpdateMode = {
    EPSUM_RealTime = 0,
    EPSUM_FixedTime = 1,
    EPSUM_MAX = 2,
}

---@enum EParticleUVFlipMode
local EParticleUVFlipMode = {
    None = 0,
    FlipUV = 1,
    FlipUOnly = 2,
    FlipVOnly = 3,
    RandomFlipUV = 4,
    RandomFlipUOnly = 5,
    RandomFlipVOnly = 6,
    RandomFlipUVIndependent = 7,
    EParticleUVFlipMode_MAX = 8,
}

---@enum EPhysBodyOp
local EPhysBodyOp = {
    PBO_None = 0,
    PBO_Term = 1,
    PBO_MAX = 2,
}

---@enum EPhysicalSurface
local EPhysicalSurface = {
    SurfaceType_Default = 0,
    SurfaceType1 = 1,
    SurfaceType2 = 2,
    SurfaceType3 = 3,
    SurfaceType4 = 4,
    SurfaceType5 = 5,
    SurfaceType6 = 6,
    SurfaceType7 = 7,
    SurfaceType8 = 8,
    SurfaceType9 = 9,
    SurfaceType10 = 10,
    SurfaceType11 = 11,
    SurfaceType12 = 12,
    SurfaceType13 = 13,
    SurfaceType14 = 14,
    SurfaceType15 = 15,
    SurfaceType16 = 16,
    SurfaceType17 = 17,
    SurfaceType18 = 18,
    SurfaceType19 = 19,
    SurfaceType20 = 20,
    SurfaceType21 = 21,
    SurfaceType22 = 22,
    SurfaceType23 = 23,
    SurfaceType24 = 24,
    SurfaceType25 = 25,
    SurfaceType26 = 26,
    SurfaceType27 = 27,
    SurfaceType28 = 28,
    SurfaceType29 = 29,
    SurfaceType30 = 30,
    SurfaceType31 = 31,
    SurfaceType32 = 32,
    SurfaceType33 = 33,
    SurfaceType34 = 34,
    SurfaceType35 = 35,
    SurfaceType36 = 36,
    SurfaceType37 = 37,
    SurfaceType38 = 38,
    SurfaceType39 = 39,
    SurfaceType40 = 40,
    SurfaceType41 = 41,
    SurfaceType42 = 42,
    SurfaceType43 = 43,
    SurfaceType44 = 44,
    SurfaceType45 = 45,
    SurfaceType46 = 46,
    SurfaceType47 = 47,
    SurfaceType48 = 48,
    SurfaceType49 = 49,
    SurfaceType50 = 50,
    SurfaceType51 = 51,
    SurfaceType52 = 52,
    SurfaceType53 = 53,
    SurfaceType54 = 54,
    SurfaceType55 = 55,
    SurfaceType56 = 56,
    SurfaceType57 = 57,
    SurfaceType58 = 58,
    SurfaceType59 = 59,
    SurfaceType60 = 60,
    SurfaceType61 = 61,
    SurfaceType62 = 62,
    SurfaceType_Max = 63,
    EPhysicalSurface_MAX = 64,
}

---@enum EPhysicsTransformUpdateMode
local EPhysicsTransformUpdateMode = {
    SimulationUpatesComponentTransform = 0,
    ComponentTransformIsKinematic = 1,
    EPhysicsTransformUpdateMode_MAX = 2,
}

---@enum EPhysicsType
local EPhysicsType = {
    PhysType_Default = 0,
    PhysType_Kinematic = 1,
    PhysType_Simulated = 2,
    PhysType_MAX = 3,
}

---@enum EPinContainerType
local EPinContainerType = {
    None = 0,
    Array = 1,
    Set = 2,
    Map = 3,
    EPinContainerType_MAX = 4,
}

---@enum EPinHidingMode
local EPinHidingMode = {
    NeverAsPin = 0,
    PinHiddenByDefault = 1,
    PinShownByDefault = 2,
    AlwaysAsPin = 3,
    EPinHidingMode_MAX = 4,
}

---@enum EPlaneConstraintAxisSetting
local EPlaneConstraintAxisSetting = {
    Custom = 0,
    X = 1,
    Y = 2,
    Z = 3,
    UseGlobalPhysicsSetting = 4,
    EPlaneConstraintAxisSetting_MAX = 5,
}

---@enum EPlatformInterfaceDataType
local EPlatformInterfaceDataType = {
    PIDT_None = 0,
    PIDT_Int = 1,
    PIDT_Float = 2,
    PIDT_String = 3,
    PIDT_Object = 4,
    PIDT_Custom = 5,
    PIDT_MAX = 6,
}

---@enum EPostCopyOperation
local EPostCopyOperation = {
    None = 0,
    LogicalNegateBool = 1,
    EPostCopyOperation_MAX = 2,
}

---@enum EPreviewAnimationBlueprintApplicationMethod
local EPreviewAnimationBlueprintApplicationMethod = {
    LinkedLayers = 0,
    LinkedAnimGraph = 1,
    EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
}

---@enum EPrimaryAssetCookRule
local EPrimaryAssetCookRule = {
    Unknown = 0,
    NeverCook = 1,
    DevelopmentCook = 2,
    DevelopmentAlwaysCook = 3,
    AlwaysCook = 4,
    EPrimaryAssetCookRule_MAX = 5,
}

---@enum EProxyNormalComputationMethod
local EProxyNormalComputationMethod = {
    AngleWeighted = 0,
    AreaWeighted = 1,
    EqualWeighted = 2,
    EProxyNormalComputationMethod_MAX = 3,
}

---@enum EQuitPreference
local EQuitPreference = {
    Quit = 0,
    Background = 1,
    EQuitPreference_MAX = 2,
}

---@enum ERadialImpulseFalloff
local ERadialImpulseFalloff = {
    RIF_Constant = 0,
    RIF_Linear = 1,
    RIF_MAX = 2,
}

---@enum ERawCurveTrackTypes
local ERawCurveTrackTypes = {
    RCT_Float = 0,
    RCT_Vector = 1,
    RCT_Transform = 2,
    RCT_MAX = 3,
}

---@enum ERayTracingGlobalIlluminationType
local ERayTracingGlobalIlluminationType = {
    Disabled = 0,
    BruteForce = 1,
    FinalGather = 2,
    ERayTracingGlobalIlluminationType_MAX = 3,
}

---@enum EReflectedAndRefractedRayTracedShadows
local EReflectedAndRefractedRayTracedShadows = {
    Disabled = 0,
    Hard_shadows = 1,
    Area_shadows = 2,
    EReflectedAndRefractedRayTracedShadows_MAX = 3,
}

---@enum EReflectionSourceType
local EReflectionSourceType = {
    CapturedScene = 0,
    SpecifiedCubemap = 1,
    EReflectionSourceType_MAX = 2,
}

---@enum EReflectionsType
local EReflectionsType = {
    ScreenSpace = 0,
    RayTracing = 1,
    EReflectionsType_MAX = 2,
}

---@enum ERefractionMode
local ERefractionMode = {
    RM_IndexOfRefraction = 0,
    RM_PixelNormalOffset = 1,
    RM_MAX = 2,
}

---@enum ERelativeTransformSpace
local ERelativeTransformSpace = {
    RTS_World = 0,
    RTS_Actor = 1,
    RTS_Component = 2,
    RTS_ParentBoneSpace = 3,
    RTS_MAX = 4,
}

---@enum ERenderFocusRule
local ERenderFocusRule = {
    Always = 0,
    NonPointer = 1,
    NavigationOnly = 2,
    Never = 3,
    ERenderFocusRule_MAX = 4,
}

---@enum ERendererStencilMask
local ERendererStencilMask = {
    ERSM_Default = 0,
    ERSM_255 = 1,
    ERSM_1 = 2,
    ERSM_2 = 3,
    ERSM_4 = 4,
    ERSM_8 = 5,
    ERSM_16 = 6,
    ERSM_32 = 7,
    ERSM_64 = 8,
    ERSM_128 = 9,
    ERSM_128_SortLast = 10,
    ERSM_127_TestDepth = 11,
    ERSM_MAX = 12,
}

---@enum EReporterLineStyle
local EReporterLineStyle = {
    Line = 0,
    Dash = 1,
    EReporterLineStyle_MAX = 2,
}

---@enum EReverbSendMethod
local EReverbSendMethod = {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    EReverbSendMethod_MAX = 3,
}

---@enum ERichCurveCompressionFormat
local ERichCurveCompressionFormat = {
    RCCF_Empty = 0,
    RCCF_Constant = 1,
    RCCF_Linear = 2,
    RCCF_Cubic = 3,
    RCCF_Mixed = 4,
    RCCF_MAX = 5,
}

---@enum ERichCurveExtrapolation
local ERichCurveExtrapolation = {
    RCCE_Cycle = 0,
    RCCE_CycleWithOffset = 1,
    RCCE_Oscillate = 2,
    RCCE_Linear = 3,
    RCCE_Constant = 4,
    RCCE_None = 5,
    RCCE_MAX = 6,
}

---@enum ERichCurveInterpMode
local ERichCurveInterpMode = {
    RCIM_Linear = 0,
    RCIM_Constant = 1,
    RCIM_Cubic = 2,
    RCIM_None = 3,
    RCIM_MAX = 4,
}

---@enum ERichCurveKeyTimeCompressionFormat
local ERichCurveKeyTimeCompressionFormat = {
    RCKTCF_uint16 = 0,
    RCKTCF_float32 = 1,
    RCKTCF_MAX = 2,
}

---@enum ERichCurveTangentMode
local ERichCurveTangentMode = {
    RCTM_Auto = 0,
    RCTM_User = 1,
    RCTM_Break = 2,
    RCTM_None = 3,
    RCTM_MAX = 4,
}

---@enum ERichCurveTangentWeightMode
local ERichCurveTangentWeightMode = {
    RCTWM_WeightedNone = 0,
    RCTWM_WeightedArrive = 1,
    RCTWM_WeightedLeave = 2,
    RCTWM_WeightedBoth = 3,
    RCTWM_MAX = 4,
}

---@enum ERootMotionAccumulateMode
local ERootMotionAccumulateMode = {
    Override = 0,
    Additive = 1,
    ERootMotionAccumulateMode_MAX = 2,
}

---@enum ERootMotionFinishVelocityMode
local ERootMotionFinishVelocityMode = {
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
    ERootMotionFinishVelocityMode_MAX = 3,
}

---@enum ERootMotionMode
local ERootMotionMode = {
    NoRootMotionExtraction = 0,
    IgnoreRootMotion = 1,
    RootMotionFromEverything = 2,
    RootMotionFromMontagesOnly = 3,
    ERootMotionMode_MAX = 4,
}

---@enum ERootMotionRootLock
local ERootMotionRootLock = {
    RefPose = 0,
    AnimFirstFrame = 1,
    Zero = 2,
    ERootMotionRootLock_MAX = 3,
}

---@enum ERootMotionSourceSettingsFlags
local ERootMotionSourceSettingsFlags = {
    UseSensitiveLiftoffCheck = 1,
    DisablePartialEndTick = 2,
    ERootMotionSourceSettingsFlags_MAX = 3,
}

---@enum ERootMotionSourceStatusFlags
local ERootMotionSourceStatusFlags = {
    Prepared = 1,
    Finished = 2,
    MarkedForRemoval = 4,
    ERootMotionSourceStatusFlags_MAX = 5,
}

---@enum ERotatorQuantization
local ERotatorQuantization = {
    ByteComponents = 0,
    ShortComponents = 1,
    ERotatorQuantization_MAX = 2,
}

---@enum ERoundingMode
local ERoundingMode = {
    HalfToEven = 0,
    HalfFromZero = 1,
    HalfToZero = 2,
    FromZero = 3,
    ToZero = 4,
    ToNegativeInfinity = 5,
    ToPositiveInfinity = 6,
    ERoundingMode_MAX = 7,
}

---@enum ERuntimeVirtualTextureDebugType
local ERuntimeVirtualTextureDebugType = {
    None = 0,
    Debug = 1,
    ERuntimeVirtualTextureDebugType_MAX = 2,
}

---@enum ERuntimeVirtualTextureMainPassType
local ERuntimeVirtualTextureMainPassType = {
    Never = 0,
    Exclusive = 1,
    Always = 2,
    ERuntimeVirtualTextureMainPassType_MAX = 3,
}

---@enum ERuntimeVirtualTextureMaterialType
local ERuntimeVirtualTextureMaterialType = {
    BaseColor = 0,
    BaseColor_Normal_DEPRECATED = 1,
    BaseColor_Normal_Specular = 2,
    BaseColor_Normal_Specular_YCoCg = 3,
    WorldHeight = 4,
    Count = 5,
    ERuntimeVirtualTextureMaterialType_MAX = 6,
}

---@enum ERuntimeVirtualTextureMipValueMode
local ERuntimeVirtualTextureMipValueMode = {
    RVTMVM_None = 0,
    RVTMVM_MipLevel = 1,
    RVTMVM_MipBias = 2,
    RVTMVM_MAX = 3,
}

---@enum ESamplerSourceMode
local ESamplerSourceMode = {
    SSM_FromTextureAsset = 0,
    SSM_Wrap_WorldGroupSettings = 1,
    SSM_Clamp_WorldGroupSettings = 2,
    SSM_MAX = 3,
}

---@enum ESceneCaptureCompositeMode
local ESceneCaptureCompositeMode = {
    SCCM_Overwrite = 0,
    SCCM_Additive = 1,
    SCCM_Composite = 2,
    SCCM_MAX = 3,
}

---@enum ESceneCapturePrimitiveRenderMode
local ESceneCapturePrimitiveRenderMode = {
    PRM_LegacySceneCapture = 0,
    PRM_RenderScenePrimitives = 1,
    PRM_UseShowOnlyList = 2,
    PRM_MAX = 3,
}

---@enum ESceneCaptureSource
local ESceneCaptureSource = {
    SCS_SceneColorHDR = 0,
    SCS_SceneColorHDRNoAlpha = 1,
    SCS_FinalColorLDR = 2,
    SCS_SceneColorSceneDepth = 3,
    SCS_SceneDepth = 4,
    SCS_DeviceDepth = 5,
    SCS_Normal = 6,
    SCS_BaseColor = 7,
    SCS_FinalColorHDR = 8,
    SCS_MAX = 9,
}

---@enum ESceneDepthPriorityGroup
local ESceneDepthPriorityGroup = {
    SDPG_World = 0,
    SDPG_Foreground = 1,
    SDPG_MAX = 2,
}

---@enum ESceneTextureId
local ESceneTextureId = {
    PPI_SceneColor = 0,
    PPI_SceneDepth = 1,
    PPI_DiffuseColor = 2,
    PPI_SpecularColor = 3,
    PPI_SubsurfaceColor = 4,
    PPI_BaseColor = 5,
    PPI_Specular = 6,
    PPI_Metallic = 7,
    PPI_WorldNormal = 8,
    PPI_SeparateTranslucency = 9,
    PPI_Opacity = 10,
    PPI_Roughness = 11,
    PPI_MaterialAO = 12,
    PPI_CustomDepth = 13,
    PPI_PostProcessInput0 = 14,
    PPI_PostProcessInput1 = 15,
    PPI_PostProcessInput2 = 16,
    PPI_PostProcessInput3 = 17,
    PPI_PostProcessInput4 = 18,
    PPI_PostProcessInput5 = 19,
    PPI_PostProcessInput6 = 20,
    PPI_DecalMask = 21,
    PPI_ShadingModelColor = 22,
    PPI_ShadingModelID = 23,
    PPI_AmbientOcclusion = 24,
    PPI_CustomStencil = 25,
    PPI_StoredBaseColor = 26,
    PPI_StoredSpecular = 27,
    PPI_Velocity = 28,
    PPI_MAX = 29,
}

---@enum EScreenOrientation
local EScreenOrientation = {
    Unknown = 0,
    Portrait = 1,
    PortraitUpsideDown = 2,
    LandscapeLeft = 3,
    LandscapeRight = 4,
    FaceUp = 5,
    FaceDown = 6,
    EScreenOrientation_MAX = 7,
}

---@enum ESendLevelControlMethod
local ESendLevelControlMethod = {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESendLevelControlMethod_MAX = 3,
}

---@enum ESettingsDOF
local ESettingsDOF = {
    Full3D = 0,
    YZPlane = 1,
    XZPlane = 2,
    XYPlane = 3,
    ESettingsDOF_MAX = 4,
}

---@enum ESettingsLockedAxis
local ESettingsLockedAxis = {
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    Invalid = 4,
    ESettingsLockedAxis_MAX = 5,
}

---@enum EShadowMapFlags
local EShadowMapFlags = {
    SMF_None = 0,
    SMF_Streamed = 1,
    SMF_MAX = 2,
}

---@enum ESkeletalMeshGeoImportVersions
local ESkeletalMeshGeoImportVersions = {
    Before_Versionning = 0,
    SkeletalMeshBuildRefactor = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
    ESkeletalMeshGeoImportVersions_MAX = 3,
}

---@enum ESkeletalMeshSkinningImportVersions
local ESkeletalMeshSkinningImportVersions = {
    Before_Versionning = 0,
    SkeletalMeshBuildRefactor = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
    ESkeletalMeshSkinningImportVersions_MAX = 3,
}

---@enum ESkyLightSourceType
local ESkyLightSourceType = {
    SLS_CapturedScene = 0,
    SLS_SpecifiedCubemap = 1,
    SLS_MAX = 2,
}

---@enum ESlateGesture
local ESlateGesture = {
    None = 0,
    Scroll = 1,
    Magnify = 2,
    Swipe = 3,
    Rotate = 4,
    LongPress = 5,
    ESlateGesture_MAX = 6,
}

---@enum ESleepFamily
local ESleepFamily = {
    Normal = 0,
    Sensitive = 1,
    Custom = 2,
    ESleepFamily_MAX = 3,
}

---@enum ESoundDistanceCalc
local ESoundDistanceCalc = {
    SOUNDDISTANCE_Normal = 0,
    SOUNDDISTANCE_InfiniteXYPlane = 1,
    SOUNDDISTANCE_InfiniteXZPlane = 2,
    SOUNDDISTANCE_InfiniteYZPlane = 3,
    SOUNDDISTANCE_MAX = 4,
}

---@enum ESoundGroup
local ESoundGroup = {
    SOUNDGROUP_Default = 0,
    SOUNDGROUP_Effects = 1,
    SOUNDGROUP_UI = 2,
    SOUNDGROUP_Music = 3,
    SOUNDGROUP_Voice = 4,
    SOUNDGROUP_GameSoundGroup1 = 5,
    SOUNDGROUP_GameSoundGroup2 = 6,
    SOUNDGROUP_GameSoundGroup3 = 7,
    SOUNDGROUP_GameSoundGroup4 = 8,
    SOUNDGROUP_GameSoundGroup5 = 9,
    SOUNDGROUP_GameSoundGroup6 = 10,
    SOUNDGROUP_GameSoundGroup7 = 11,
    SOUNDGROUP_GameSoundGroup8 = 12,
    SOUNDGROUP_GameSoundGroup9 = 13,
    SOUNDGROUP_GameSoundGroup10 = 14,
    SOUNDGROUP_GameSoundGroup11 = 15,
    SOUNDGROUP_GameSoundGroup12 = 16,
    SOUNDGROUP_GameSoundGroup13 = 17,
    SOUNDGROUP_GameSoundGroup14 = 18,
    SOUNDGROUP_GameSoundGroup15 = 19,
    SOUNDGROUP_GameSoundGroup16 = 20,
    SOUNDGROUP_GameSoundGroup17 = 21,
    SOUNDGROUP_GameSoundGroup18 = 22,
    SOUNDGROUP_GameSoundGroup19 = 23,
    SOUNDGROUP_GameSoundGroup20 = 24,
    SOUNDGROUP_MAX = 25,
}

---@enum ESoundSpatializationAlgorithm
local ESoundSpatializationAlgorithm = {
    SPATIALIZATION_Default = 0,
    SPATIALIZATION_HRTF = 1,
    SPATIALIZATION_MAX = 2,
}

---@enum ESoundWaveFFTSize
local ESoundWaveFFTSize = {
    VerySmall_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    VeryLarge_2048 = 4,
    ESoundWaveFFTSize_MAX = 5,
}

---@enum ESoundWaveLoadingBehavior
local ESoundWaveLoadingBehavior = {
    Inherited = 0,
    RetainOnLoad = 1,
    PrimeOnLoad = 2,
    LoadOnDemand = 3,
    ForceInline = 4,
    Uninitialized = 255,
    ESoundWaveLoadingBehavior_MAX = 256,
}

---@enum ESourceBusChannels
local ESourceBusChannels = {
    Mono = 0,
    Stereo = 1,
    ESourceBusChannels_MAX = 2,
}

---@enum ESourceBusSendLevelControlMethod
local ESourceBusSendLevelControlMethod = {
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
    ESourceBusSendLevelControlMethod_MAX = 3,
}

---@enum ESpawnActorCollisionHandlingMethod
local ESpawnActorCollisionHandlingMethod = {
    Undefined = 0,
    AlwaysSpawn = 1,
    AdjustIfPossibleButAlwaysSpawn = 2,
    AdjustIfPossibleButDontSpawnIfColliding = 3,
    DontSpawnIfColliding = 4,
    ESpawnActorCollisionHandlingMethod_MAX = 5,
}

---@enum ESpeedTreeGeometryType
local ESpeedTreeGeometryType = {
    STG_Branch = 0,
    STG_Frond = 1,
    STG_Leaf = 2,
    STG_FacingLeaf = 3,
    STG_Billboard = 4,
    STG_MAX = 5,
}

---@enum ESpeedTreeLODType
local ESpeedTreeLODType = {
    STLOD_Pop = 0,
    STLOD_Smooth = 1,
    STLOD_MAX = 2,
}

---@enum ESpeedTreeWindType
local ESpeedTreeWindType = {
    STW_None = 0,
    STW_Fastest = 1,
    STW_Fast = 2,
    STW_Better = 3,
    STW_Best = 4,
    STW_Palm = 5,
    STW_BestPlus = 6,
    STW_MAX = 7,
}

---@enum ESplineCoordinateSpace
local ESplineCoordinateSpace = {
    Local = 0,
    World = 1,
    ESplineCoordinateSpace_MAX = 2,
}

---@enum ESplineMeshAxis
local ESplineMeshAxis = {
    X = 0,
    Y = 1,
    Z = 2,
    ESplineMeshAxis_MAX = 3,
}

---@enum ESplinePointType
local ESplinePointType = {
    Linear = 0,
    Curve = 1,
    Constant = 2,
    CurveClamped = 3,
    CurveCustomTangent = 4,
    ESplinePointType_MAX = 5,
}

---@enum EStandbyType
local EStandbyType = {
    STDBY_Rx = 0,
    STDBY_Tx = 1,
    STDBY_BadPing = 2,
    STDBY_MAX = 3,
}

---@enum EStaticMeshReductionTerimationCriterion
local EStaticMeshReductionTerimationCriterion = {
    Triangles = 0,
    Vertices = 1,
    Any = 2,
    EStaticMeshReductionTerimationCriterion_MAX = 3,
}

---@enum EStereoLayerShape
local EStereoLayerShape = {
    SLSH_QuadLayer = 0,
    SLSH_CylinderLayer = 1,
    SLSH_CubemapLayer = 2,
    SLSH_EquirectLayer = 3,
    SLSH_MAX = 4,
}

---@enum EStereoLayerType
local EStereoLayerType = {
    SLT_WorldLocked = 0,
    SLT_TrackerLocked = 1,
    SLT_FaceLocked = 2,
    SLT_MAX = 3,
}

---@enum EStreamingVolumeUsage
local EStreamingVolumeUsage = {
    SVB_Loading = 0,
    SVB_LoadingAndVisibility = 1,
    SVB_VisibilityBlockingOnLoad = 2,
    SVB_BlockingOnLoad = 3,
    SVB_LoadingNotVisible = 4,
    SVB_MAX = 5,
}

---@enum ESubUVBoundingVertexCount
local ESubUVBoundingVertexCount = {
    BVC_FourVertices = 0,
    BVC_EightVertices = 1,
    BVC_MAX = 2,
}

---@enum ESubmixChannelFormat
local ESubmixChannelFormat = {
    Device = 0,
    Stereo = 1,
    Quad = 2,
    FiveDotOne = 3,
    SevenDotOne = 4,
    Ambisonics = 5,
    Count = 6,
    ESubmixChannelFormat_MAX = 7,
}

---@enum ESuggestProjVelocityTraceOption
local ESuggestProjVelocityTraceOption = {
    DoNotTrace = 0,
    TraceFullPath = 1,
    OnlyTraceWhileAscending = 2,
    ESuggestProjVelocityTraceOption_MAX = 3,
}

---@enum ETeleportType
local ETeleportType = {
    None = 0,
    TeleportPhysics = 1,
    ResetPhysics = 2,
    ETeleportType_MAX = 3,
}

---@enum ETemperatureSeverityType
local ETemperatureSeverityType = {
    Unknown = 0,
    Good = 1,
    Bad = 2,
    Serious = 3,
    Critical = 4,
    NumSeverities = 5,
    ETemperatureSeverityType_MAX = 6,
}

---@enum ETextGender
local ETextGender = {
    Masculine = 0,
    Feminine = 1,
    Neuter = 2,
    ETextGender_MAX = 3,
}

---@enum ETextureColorChannel
local ETextureColorChannel = {
    TCC_Red = 0,
    TCC_Green = 1,
    TCC_Blue = 2,
    TCC_Alpha = 3,
    TCC_MAX = 4,
}

---@enum ETextureCompressionQuality
local ETextureCompressionQuality = {
    TCQ_Default = 0,
    TCQ_Lowest = 1,
    TCQ_Low = 2,
    TCQ_Medium = 3,
    TCQ_High = 4,
    TCQ_Highest = 5,
    TCQ_MAX = 6,
}

---@enum ETextureLossyCompressionAmount
local ETextureLossyCompressionAmount = {
    TLCA_Default = 0,
    TLCA_None = 1,
    TLCA_Lowest = 2,
    TLCA_Low = 3,
    TLCA_Medium = 4,
    TLCA_High = 5,
    TLCA_Highest = 6,
    TLCA_MAX = 7,
}

---@enum ETextureMipCount
local ETextureMipCount = {
    TMC_ResidentMips = 0,
    TMC_AllMips = 1,
    TMC_AllMipsBiased = 2,
    TMC_MAX = 3,
}

---@enum ETextureMipLoadOptions
local ETextureMipLoadOptions = {
    Default = 0,
    AllMips = 1,
    OnlyFirstMip = 2,
    ETextureMipLoadOptions_MAX = 3,
}

---@enum ETextureMipValueMode
local ETextureMipValueMode = {
    TMVM_None = 0,
    TMVM_MipLevel = 1,
    TMVM_MipBias = 2,
    TMVM_Derivative = 3,
    TMVM_MAX = 4,
}

---@enum ETexturePowerOfTwoSetting
local ETexturePowerOfTwoSetting = {
    None = 0,
    PadToPowerOfTwo = 1,
    PadToSquarePowerOfTwo = 2,
    ETexturePowerOfTwoSetting_MAX = 3,
}

---@enum ETextureRenderTargetFormat
local ETextureRenderTargetFormat = {
    RTF_R8 = 0,
    RTF_RG8 = 1,
    RTF_RGBA8 = 2,
    RTF_RGBA8_SRGB = 3,
    RTF_R16f = 4,
    RTF_RG16f = 5,
    RTF_RGBA16f = 6,
    RTF_R32f = 7,
    RTF_RG32f = 8,
    RTF_RGBA32f = 9,
    RTF_RGB10A2 = 10,
    RTF_MAX = 11,
}

---@enum ETextureSamplerFilter
local ETextureSamplerFilter = {
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    AnisotropicPoint = 3,
    AnisotropicLinear = 4,
    ETextureSamplerFilter_MAX = 5,
}

---@enum ETextureSizingType
local ETextureSizingType = {
    TextureSizingType_UseSingleTextureSize = 0,
    TextureSizingType_UseAutomaticBiasedSizes = 1,
    TextureSizingType_UseManualOverrideTextureSize = 2,
    TextureSizingType_UseSimplygonAutomaticSizing = 3,
    TextureSizingType_MAX = 4,
}

---@enum ETextureSourceArtType
local ETextureSourceArtType = {
    TSAT_Uncompressed = 0,
    TSAT_PNGCompressed = 1,
    TSAT_DDSFile = 2,
    TSAT_MAX = 3,
}

---@enum ETextureSourceFormat
local ETextureSourceFormat = {
    TSF_Invalid = 0,
    TSF_G8 = 1,
    TSF_BGRA8 = 2,
    TSF_BGRE8 = 3,
    TSF_RGBA16 = 4,
    TSF_RGBA16F = 5,
    TSF_RGBA8 = 6,
    TSF_RGBE8 = 7,
    TSF_G16 = 8,
    TSF_MAX = 9,
}

---@enum ETickingGroup
local ETickingGroup = {
    TG_PrePhysics = 0,
    TG_StartPhysics = 1,
    TG_DuringPhysics = 2,
    TG_EndPhysics = 3,
    TG_PostPhysics = 4,
    TG_PostUpdateWork = 5,
    TG_LastDemotable = 6,
    TG_NewlySpawned = 7,
    TG_MAX = 8,
}

---@enum ETimeStretchCurveMapping
local ETimeStretchCurveMapping = {
    T_Original = 0,
    T_TargetMin = 1,
    T_TargetMax = 2,
    MAX = 3,
}

---@enum ETimecodeProviderSynchronizationState
local ETimecodeProviderSynchronizationState = {
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
    ETimecodeProviderSynchronizationState_MAX = 4,
}

---@enum ETimelineDirection
local ETimelineDirection = {
    Forward = 0,
    Backward = 1,
    ETimelineDirection_MAX = 2,
}

---@enum ETimelineLengthMode
local ETimelineLengthMode = {
    TL_TimelineLength = 0,
    TL_LastKeyFrame = 1,
    TL_MAX = 2,
}

---@enum ETimelineSigType
local ETimelineSigType = {
    ETS_EventSignature = 0,
    ETS_FloatSignature = 1,
    ETS_VectorSignature = 2,
    ETS_LinearColorSignature = 3,
    ETS_InvalidSignature = 4,
    ETS_MAX = 5,
}

---@enum ETraceTypeQuery
local ETraceTypeQuery = {
    TraceTypeQuery1 = 0,
    TraceTypeQuery2 = 1,
    TraceTypeQuery3 = 2,
    TraceTypeQuery4 = 3,
    TraceTypeQuery5 = 4,
    TraceTypeQuery6 = 5,
    TraceTypeQuery7 = 6,
    TraceTypeQuery8 = 7,
    TraceTypeQuery9 = 8,
    TraceTypeQuery10 = 9,
    TraceTypeQuery11 = 10,
    TraceTypeQuery12 = 11,
    TraceTypeQuery13 = 12,
    TraceTypeQuery14 = 13,
    TraceTypeQuery15 = 14,
    TraceTypeQuery16 = 15,
    TraceTypeQuery17 = 16,
    TraceTypeQuery18 = 17,
    TraceTypeQuery19 = 18,
    TraceTypeQuery20 = 19,
    TraceTypeQuery21 = 20,
    TraceTypeQuery22 = 21,
    TraceTypeQuery23 = 22,
    TraceTypeQuery24 = 23,
    TraceTypeQuery25 = 24,
    TraceTypeQuery26 = 25,
    TraceTypeQuery27 = 26,
    TraceTypeQuery28 = 27,
    TraceTypeQuery29 = 28,
    TraceTypeQuery30 = 29,
    TraceTypeQuery31 = 30,
    TraceTypeQuery32 = 31,
    TraceTypeQuery_MAX = 32,
    ETraceTypeQuery_MAX = 33,
}

---@enum ETrackActiveCondition
local ETrackActiveCondition = {
    ETAC_Always = 0,
    ETAC_GoreEnabled = 1,
    ETAC_GoreDisabled = 2,
    ETAC_MAX = 3,
}

---@enum ETrackToggleAction
local ETrackToggleAction = {
    ETTA_Off = 0,
    ETTA_On = 1,
    ETTA_Toggle = 2,
    ETTA_Trigger = 3,
    ETTA_MAX = 4,
}

---@enum ETrail2SourceMethod
local ETrail2SourceMethod = {
    PET2SRCM_Default = 0,
    PET2SRCM_Particle = 1,
    PET2SRCM_Actor = 2,
    PET2SRCM_MAX = 3,
}

---@enum ETrailWidthMode
local ETrailWidthMode = {
    ETrailWidthMode_FromCentre = 0,
    ETrailWidthMode_FromFirst = 1,
    ETrailWidthMode_FromSecond = 2,
    ETrailWidthMode_MAX = 3,
}

---@enum ETrailsRenderAxisOption
local ETrailsRenderAxisOption = {
    Trails_CameraUp = 0,
    Trails_SourceUp = 1,
    Trails_WorldUp = 2,
    Trails_MAX = 3,
}

---@enum ETransitionBlendMode
local ETransitionBlendMode = {
    TBM_Linear = 0,
    TBM_Cubic = 1,
    TBM_MAX = 2,
}

---@enum ETransitionLogicType
local ETransitionLogicType = {
    TLT_StandardBlend = 0,
    TLT_Inertialization = 1,
    TLT_Custom = 2,
    TLT_MAX = 3,
}

---@enum ETransitionType
local ETransitionType = {
    None = 0,
    Paused = 1,
    Loading = 2,
    Saving = 3,
    Connecting = 4,
    Precaching = 5,
    WaitingToConnect = 6,
    MAX = 7,
}

---@enum ETranslucencyLightingMode
local ETranslucencyLightingMode = {
    TLM_VolumetricNonDirectional = 0,
    TLM_VolumetricDirectional = 1,
    TLM_VolumetricPerVertexNonDirectional = 2,
    TLM_VolumetricPerVertexDirectional = 3,
    TLM_Surface = 4,
    TLM_SurfacePerPixelLighting = 5,
    TLM_MAX = 6,
}

---@enum ETranslucencyType
local ETranslucencyType = {
    Raster = 0,
    RayTracing = 1,
    ETranslucencyType_MAX = 2,
}

---@enum ETranslucentSortPolicy
local ETranslucentSortPolicy = {
    SortByDistance = 0,
    SortByProjectedZ = 1,
    SortAlongAxis = 2,
    ETranslucentSortPolicy_MAX = 3,
}

---@enum ETravelFailure
local ETravelFailure = {
    NoLevel = 0,
    LoadMapFailure = 1,
    InvalidURL = 2,
    PackageMissing = 3,
    PackageVersion = 4,
    NoDownload = 5,
    TravelFailure = 6,
    CheatCommands = 7,
    PendingNetGameCreateFailure = 8,
    CloudSaveFailure = 9,
    ServerTravelFailure = 10,
    ClientTravelFailure = 11,
    ETravelFailure_MAX = 12,
}

---@enum ETravelType
local ETravelType = {
    TRAVEL_Absolute = 0,
    TRAVEL_Partial = 1,
    TRAVEL_Relative = 2,
    TRAVEL_MAX = 3,
}

---@enum ETwitterIntegrationDelegate
local ETwitterIntegrationDelegate = {
    TID_AuthorizeComplete = 0,
    TID_TweetUIComplete = 1,
    TID_RequestComplete = 2,
    TID_MAX = 3,
}

---@enum ETwitterRequestMethod
local ETwitterRequestMethod = {
    TRM_Get = 0,
    TRM_Post = 1,
    TRM_Delete = 2,
    TRM_MAX = 3,
}

---@enum ETypeAdvanceAnim
local ETypeAdvanceAnim = {
    ETAA_Default = 0,
    ETAA_Finished = 1,
    ETAA_Looped = 2,
    ETAA_MAX = 3,
}

---@enum EUIScalingRule
local EUIScalingRule = {
    ShortestSide = 0,
    LongestSide = 1,
    Horizontal = 2,
    Vertical = 3,
    Custom = 4,
    EUIScalingRule_MAX = 5,
}

---@enum EUVOutput
local EUVOutput = {
    DoNotOutputChannel = 0,
    OutputChannel = 1,
    EUVOutput_MAX = 2,
}

---@enum EUpdateRateShiftBucket
local EUpdateRateShiftBucket = {
    ShiftBucket0 = 0,
    ShiftBucket1 = 1,
    ShiftBucket2 = 2,
    ShiftBucket3 = 3,
    ShiftBucket4 = 4,
    ShiftBucket5 = 5,
    ShiftBucketMax = 6,
    EUpdateRateShiftBucket_MAX = 7,
}

---@enum EUserDefinedStructureStatus
local EUserDefinedStructureStatus = {
    UDSS_UpToDate = 0,
    UDSS_Dirty = 1,
    UDSS_Error = 2,
    UDSS_Duplicate = 3,
    UDSS_MAX = 4,
}

---@enum EVectorFieldConstructionOp
local EVectorFieldConstructionOp = {
    VFCO_Extrude = 0,
    VFCO_Revolve = 1,
    VFCO_MAX = 2,
}

---@enum EVectorNoiseFunction
local EVectorNoiseFunction = {
    VNF_CellnoiseALU = 0,
    VNF_VectorALU = 1,
    VNF_GradientALU = 2,
    VNF_CurlALU = 3,
    VNF_VoronoiALU = 4,
    VNF_MAX = 5,
}

---@enum EVectorQuantization
local EVectorQuantization = {
    RoundWholeNumber = 0,
    RoundOneDecimal = 1,
    RoundTwoDecimals = 2,
    EVectorQuantization_MAX = 3,
}

---@enum EVertexPaintAxis
local EVertexPaintAxis = {
    X = 0,
    Y = 1,
    Z = 2,
    EVertexPaintAxis_MAX = 3,
}

---@enum EVerticalTextAligment
local EVerticalTextAligment = {
    EVRTA_TextTop = 0,
    EVRTA_TextCenter = 1,
    EVRTA_TextBottom = 2,
    EVRTA_QuadTop = 3,
    EVRTA_MAX = 4,
}

---@enum EViewModeIndex
local EViewModeIndex = {
    VMI_BrushWireframe = 0,
    VMI_Wireframe = 1,
    VMI_Unlit = 2,
    VMI_Lit = 3,
    VMI_Lit_DetailLighting = 4,
    VMI_LightingOnly = 5,
    VMI_LightComplexity = 6,
    VMI_ShaderComplexity = 8,
    VMI_LightmapDensity = 9,
    VMI_LitLightmapDensity = 10,
    VMI_ReflectionOverride = 11,
    VMI_VisualizeBuffer = 12,
    VMI_StationaryLightOverlap = 14,
    VMI_CollisionPawn = 15,
    VMI_CollisionVisibility = 16,
    VMI_LODColoration = 18,
    VMI_QuadOverdraw = 19,
    VMI_PrimitiveDistanceAccuracy = 20,
    VMI_MeshUVDensityAccuracy = 21,
    VMI_ShaderComplexityWithQuadOverdraw = 22,
    VMI_HLODColoration = 23,
    VMI_GroupLODColoration = 24,
    VMI_MaterialTextureScaleAccuracy = 25,
    VMI_RequiredTextureResolution = 26,
    VMI_PathTracing = 27,
    VMI_RayTracingDebug = 28,
    VMI_Max = 29,
    VMI_Unknown = 255,
}

---@enum EViewTargetBlendFunction
local EViewTargetBlendFunction = {
    VTBlend_Linear = 0,
    VTBlend_Cubic = 1,
    VTBlend_EaseIn = 2,
    VTBlend_EaseOut = 3,
    VTBlend_EaseInOut = 4,
    VTBlend_MAX = 5,
}

---@enum EVirtualizationMode
local EVirtualizationMode = {
    Disabled = 0,
    PlayWhenSilent = 1,
    Restart = 2,
    EVirtualizationMode_MAX = 3,
}

---@enum EVisibilityAggressiveness
local EVisibilityAggressiveness = {
    VIS_LeastAggressive = 0,
    VIS_ModeratelyAggressive = 1,
    VIS_MostAggressive = 2,
    VIS_Max = 3,
}

---@enum EVisibilityBasedAnimTickOption
local EVisibilityBasedAnimTickOption = {
    AlwaysTickPoseAndRefreshBones = 0,
    AlwaysTickPose = 1,
    OnlyTickMontagesWhenNotRendered = 2,
    OnlyTickPoseWhenRendered = 3,
    EVisibilityBasedAnimTickOption_MAX = 4,
}

---@enum EVisibilityTrackAction
local EVisibilityTrackAction = {
    EVTA_Hide = 0,
    EVTA_Show = 1,
    EVTA_Toggle = 2,
    EVTA_MAX = 3,
}

---@enum EVisibilityTrackCondition
local EVisibilityTrackCondition = {
    EVTC_Always = 0,
    EVTC_GoreEnabled = 1,
    EVTC_GoreDisabled = 2,
    EVTC_MAX = 3,
}

---@enum EVoiceSampleRate
local EVoiceSampleRate = {
    Low16000Hz = 16000,
    Normal24000Hz = 24000,
    EVoiceSampleRate_MAX = 24001,
}

---@enum EVolumeLightingMethod
local EVolumeLightingMethod = {
    VLM_VolumetricLightmap = 0,
    VLM_SparseVolumeLightingSamples = 1,
    VLM_MAX = 2,
}

---@enum EWalkableSlopeBehavior
local EWalkableSlopeBehavior = {
    WalkableSlope_Default = 0,
    WalkableSlope_Increase = 1,
    WalkableSlope_Decrease = 2,
    WalkableSlope_Unwalkable = 3,
    WalkableSlope_Max = 4,
}

---@enum EWindSourceType
local EWindSourceType = {
    Directional = 0,
    Point = 1,
    EWindSourceType_MAX = 2,
}

---@enum EWindowMode
local EWindowMode = {
    Fullscreen = 0,
    WindowedFullscreen = 1,
    Windowed = 2,
    EWindowMode_MAX = 3,
}

---@enum EWindowTitleBarMode
local EWindowTitleBarMode = {
    Overlay = 0,
    VerticalBox = 1,
    EWindowTitleBarMode_MAX = 2,
}

---@enum EWorldPositionIncludedOffsets
local EWorldPositionIncludedOffsets = {
    WPT_Default = 0,
    WPT_ExcludeAllShaderOffsets = 1,
    WPT_CameraRelative = 2,
    WPT_CameraRelativeNoOffsets = 3,
    WPT_MAX = 4,
}

---@enum FNavigationSystemRunMode
local FNavigationSystemRunMode = {
    InvalidMode = 0,
    GameMode = 1,
    EditorMode = 2,
    SimulationMode = 3,
    PIEMode = 4,
    FNavigationSystemRunMode_MAX = 5,
}

---@enum ModulationParamMode
local ModulationParamMode = {
    MPM_Normal = 0,
    MPM_Abs = 1,
    MPM_Direct = 2,
    MPM_MAX = 3,
}

---@enum ParticleReplayState
local ParticleReplayState = {
    PRS_Disabled = 0,
    PRS_Capturing = 1,
    PRS_Replaying = 2,
    PRS_MAX = 3,
}

---@enum ParticleSystemLODMethod
local ParticleSystemLODMethod = {
    PARTICLESYSTEMLODMETHOD_Automatic = 0,
    PARTICLESYSTEMLODMETHOD_DirectSet = 1,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
    PARTICLESYSTEMLODMETHOD_MAX = 3,
}

---@enum ReverbPreset
local ReverbPreset = {
    REVERB_Default = 0,
    REVERB_Bathroom = 1,
    REVERB_StoneRoom = 2,
    REVERB_Auditorium = 3,
    REVERB_ConcertHall = 4,
    REVERB_Cave = 5,
    REVERB_Hallway = 6,
    REVERB_StoneCorridor = 7,
    REVERB_Alley = 8,
    REVERB_Forest = 9,
    REVERB_City = 10,
    REVERB_Mountains = 11,
    REVERB_Quarry = 12,
    REVERB_Plain = 13,
    REVERB_ParkingLot = 14,
    REVERB_SewerPipe = 15,
    REVERB_Underwater = 16,
    REVERB_SmallRoom = 17,
    REVERB_MediumRoom = 18,
    REVERB_LargeRoom = 19,
    REVERB_MediumHall = 20,
    REVERB_LargeHall = 21,
    REVERB_Plate = 22,
    REVERB_MAX = 23,
}

---@enum SkeletalMeshOptimizationImportance
local SkeletalMeshOptimizationImportance = {
    SMOI_Off = 0,
    SMOI_Lowest = 1,
    SMOI_Low = 2,
    SMOI_Normal = 3,
    SMOI_High = 4,
    SMOI_Highest = 5,
    SMOI_MAX = 6,
}

---@enum SkeletalMeshOptimizationType
local SkeletalMeshOptimizationType = {
    SMOT_NumOfTriangles = 0,
    SMOT_MaxDeviation = 1,
    SMOT_TriangleOrDeviation = 2,
    SMOT_MAX = 3,
}

---@enum SkeletalMeshTerminationCriterion
local SkeletalMeshTerminationCriterion = {
    SMTC_NumOfTriangles = 0,
    SMTC_NumOfVerts = 1,
    SMTC_TriangleOrVert = 2,
    SMTC_AbsNumOfTriangles = 3,
    SMTC_AbsNumOfVerts = 4,
    SMTC_AbsTriangleOrVert = 5,
    SMTC_MAX = 6,
}

---@enum TextureAddress
local TextureAddress = {
    TA_Wrap = 0,
    TA_Clamp = 1,
    TA_Mirror = 2,
    TA_MAX = 3,
}

---@enum TextureCompressionSettings
local TextureCompressionSettings = {
    TC_Default = 0,
    TC_Normalmap = 1,
    TC_Masks = 2,
    TC_Grayscale = 3,
    TC_Displacementmap = 4,
    TC_VectorDisplacementmap = 5,
    TC_HDR = 6,
    TC_EditorIcon = 7,
    TC_Alpha = 8,
    TC_DistanceFieldFont = 9,
    TC_HDR_Compressed = 10,
    TC_BC7 = 11,
    TC_MAX = 12,
}

---@enum TextureFilter
local TextureFilter = {
    TF_Nearest = 0,
    TF_Bilinear = 1,
    TF_Trilinear = 2,
    TF_Default = 3,
    TF_MAX = 4,
}

---@enum TextureGroup
local TextureGroup = {
    TEXTUREGROUP_World = 0,
    TEXTUREGROUP_WorldNormalMap = 1,
    TEXTUREGROUP_WorldSpecular = 2,
    TEXTUREGROUP_Character = 3,
    TEXTUREGROUP_CharacterNormalMap = 4,
    TEXTUREGROUP_CharacterSpecular = 5,
    TEXTUREGROUP_Weapon = 6,
    TEXTUREGROUP_WeaponNormalMap = 7,
    TEXTUREGROUP_WeaponSpecular = 8,
    TEXTUREGROUP_Vehicle = 9,
    TEXTUREGROUP_VehicleNormalMap = 10,
    TEXTUREGROUP_VehicleSpecular = 11,
    TEXTUREGROUP_Cinematic = 12,
    TEXTUREGROUP_Effects = 13,
    TEXTUREGROUP_EffectsNotFiltered = 14,
    TEXTUREGROUP_Skybox = 15,
    TEXTUREGROUP_UI = 16,
    TEXTUREGROUP_Lightmap = 17,
    TEXTUREGROUP_RenderTarget = 18,
    TEXTUREGROUP_MobileFlattened = 19,
    TEXTUREGROUP_ProcBuilding_Face = 20,
    TEXTUREGROUP_ProcBuilding_LightMap = 21,
    TEXTUREGROUP_Shadowmap = 22,
    TEXTUREGROUP_ColorLookupTable = 23,
    TEXTUREGROUP_Terrain_Heightmap = 24,
    TEXTUREGROUP_Terrain_Weightmap = 25,
    TEXTUREGROUP_Bokeh = 26,
    TEXTUREGROUP_IESLightProfile = 27,
    TEXTUREGROUP_Pixels2D = 28,
    TEXTUREGROUP_HierarchicalLOD = 29,
    TEXTUREGROUP_Impostor = 30,
    TEXTUREGROUP_ImpostorNormalDepth = 31,
    TEXTUREGROUP_8BitData = 32,
    TEXTUREGROUP_16BitData = 33,
    TEXTUREGROUP_Project01 = 34,
    TEXTUREGROUP_Project02 = 35,
    TEXTUREGROUP_Project03 = 36,
    TEXTUREGROUP_Project04 = 37,
    TEXTUREGROUP_Project05 = 38,
    TEXTUREGROUP_Project06 = 39,
    TEXTUREGROUP_Project07 = 40,
    TEXTUREGROUP_Project08 = 41,
    TEXTUREGROUP_Project09 = 42,
    TEXTUREGROUP_Project10 = 43,
    TEXTUREGROUP_MAX = 44,
}

---@enum TextureMipGenSettings
local TextureMipGenSettings = {
    TMGS_FromTextureGroup = 0,
    TMGS_SimpleAverage = 1,
    TMGS_Sharpen0 = 2,
    TMGS_Sharpen1 = 3,
    TMGS_Sharpen2 = 4,
    TMGS_Sharpen3 = 5,
    TMGS_Sharpen4 = 6,
    TMGS_Sharpen5 = 7,
    TMGS_Sharpen6 = 8,
    TMGS_Sharpen7 = 9,
    TMGS_Sharpen8 = 10,
    TMGS_Sharpen9 = 11,
    TMGS_Sharpen10 = 12,
    TMGS_NoMipmaps = 13,
    TMGS_LeaveExistingMips = 14,
    TMGS_Blur1 = 15,
    TMGS_Blur2 = 16,
    TMGS_Blur3 = 17,
    TMGS_Blur4 = 18,
    TMGS_Blur5 = 19,
    TMGS_Unfiltered = 20,
    TMGS_MAX = 21,
}

