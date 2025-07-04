---@meta

---@class FColorParameterNameAndCurves
---@field ParameterName FName
---@field RedCurve FMovieSceneFloatChannel
---@field GreenCurve FMovieSceneFloatChannel
---@field BlueCurve FMovieSceneFloatChannel
---@field AlphaCurve FMovieSceneFloatChannel
local FColorParameterNameAndCurves = {}



---@class FEventPayload
---@field EventName FName
---@field Parameters FMovieSceneEventParameters
local FEventPayload = {}



---@class FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate
---@field AttachBindingID FMovieSceneObjectBindingID
---@field AttachSocketName FName
---@field AttachComponentName FName
---@field AttachmentLocationRule EAttachmentRule
---@field AttachmentRotationRule EAttachmentRule
---@field AttachmentScaleRule EAttachmentRule
---@field DetachmentLocationRule EDetachmentRule
---@field DetachmentRotationRule EDetachmentRule
---@field DetachmentScaleRule EDetachmentRule
local FMovieScene3DAttachSectionTemplate = {}



---@class FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
---@field Location FVector
---@field Time FFrameNumber
local FMovieScene3DLocationKeyStruct = {}



---@class FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
---@field PathBindingID FMovieSceneObjectBindingID
---@field TimingCurve FMovieSceneFloatChannel
---@field FrontAxisEnum MovieScene3DPathSection_Axis
---@field UpAxisEnum MovieScene3DPathSection_Axis
---@field bFollow boolean
---@field bReverse boolean
---@field bForceUpright boolean
local FMovieScene3DPathSectionTemplate = {}



---@class FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
---@field Rotation FRotator
---@field Time FFrameNumber
local FMovieScene3DRotationKeyStruct = {}



---@class FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
---@field Scale FVector
---@field Time FFrameNumber
local FMovieScene3DScaleKeyStruct = {}



---@class FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
---@field Location FVector
---@field Rotation FRotator
---@field Scale FVector
---@field Time FFrameNumber
local FMovieScene3DTransformKeyStruct = {}



---@class FMovieScene3DTransformTemplateData
---@field TranslationCurve FMovieSceneFloatChannel
---@field RotationCurve FMovieSceneFloatChannel
---@field ScaleCurve FMovieSceneFloatChannel
---@field ManualWeight FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
---@field Mask FMovieSceneTransformMask
---@field bUseQuaternionInterpolation boolean
local FMovieScene3DTransformTemplateData = {}



---@class FMovieSceneActorReferenceData : FMovieSceneChannel
---@field KeyTimes TArray<FFrameNumber>
---@field KeyValues TArray<FMovieSceneActorReferenceKey>
local FMovieSceneActorReferenceData = {}



---@class FMovieSceneActorReferenceKey
---@field Object FMovieSceneObjectBindingID
local FMovieSceneActorReferenceKey = {}



---@class FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
---@field PropertyData FMovieScenePropertySectionData
---@field ActorReferenceData FMovieSceneActorReferenceData
local FMovieSceneActorReferenceSectionTemplate = {}



---@class FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
local FMovieSceneAdditiveCameraAnimationTemplate = {}


---@class FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
---@field AudioSection UMovieSceneAudioSection
local FMovieSceneAudioSectionTemplate = {}



---@class FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field BoolCurve FMovieSceneBoolChannel
local FMovieSceneBoolPropertySectionTemplate = {}



---@class FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field ByteCurve FMovieSceneByteChannel
local FMovieSceneBytePropertySectionTemplate = {}



---@class FMovieSceneCameraAnimSectionData
---@field CameraAnim UCameraAnim
---@field PlayRate float
---@field PlayScale float
---@field BlendInTime float
---@field BlendOutTime float
---@field bLooping boolean
local FMovieSceneCameraAnimSectionData = {}



---@class FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
---@field SourceData FMovieSceneCameraAnimSectionData
---@field SectionStartTime FFrameNumber
local FMovieSceneCameraAnimSectionTemplate = {}



---@class FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate
---@field CameraBindingID FMovieSceneObjectBindingID
---@field CutTransform FTransform
---@field bHasCutTransform boolean
local FMovieSceneCameraCutSectionTemplate = {}



---@class FMovieSceneCameraShakeSectionData
---@field ShakeClass TSubclassOf<UCameraShake>
---@field PlayScale float
---@field PlaySpace ECameraAnimPlaySpace::Type
---@field UserDefinedPlaySpace FRotator
local FMovieSceneCameraShakeSectionData = {}



---@class FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
---@field SourceData FMovieSceneCameraShakeSectionData
---@field SectionStartTime FFrameNumber
local FMovieSceneCameraShakeSectionTemplate = {}



---@class FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
---@field Color FLinearColor
---@field Time FFrameNumber
local FMovieSceneColorKeyStruct = {}



---@class FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
---@field Curves FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
local FMovieSceneColorSectionTemplate = {}



---@class FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
---@field MaterialIndex int32
local FMovieSceneComponentMaterialSectionTemplate = {}



---@class FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate
---@field TemplateData FMovieScene3DTransformTemplateData
local FMovieSceneComponentTransformSectionTemplate = {}



---@class FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field EnumCurve FMovieSceneByteChannel
local FMovieSceneEnumPropertySectionTemplate = {}



---@class FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field TemplateData FMovieScene3DTransformTemplateData
local FMovieSceneEulerTransformPropertySectionTemplate = {}



---@class FMovieSceneEvent
---@field Ptrs FMovieSceneEventPtrs
local FMovieSceneEvent = {}



---@class FMovieSceneEventChannel : FMovieSceneChannel
---@field KeyTimes TArray<FFrameNumber>
---@field KeyValues TArray<FMovieSceneEvent>
local FMovieSceneEventChannel = {}



---@class FMovieSceneEventParameters
local FMovieSceneEventParameters = {}


---@class FMovieSceneEventPayloadVariable
---@field Value FString
local FMovieSceneEventPayloadVariable = {}



---@class FMovieSceneEventPtrs
---@field Function UFunction
---@field BoundObjectProperty UProperty
local FMovieSceneEventPtrs = {}



---@class FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase
---@field EventToTrigger FMovieSceneEventPtrs
local FMovieSceneEventRepeaterTemplate = {}



---@class FMovieSceneEventSectionData : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field KeyValues TArray<FEventPayload>
local FMovieSceneEventSectionData = {}



---@class FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase
---@field EventData FMovieSceneEventSectionData
local FMovieSceneEventSectionTemplate = {}



---@class FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate
---@field EventReceivers TArray<FMovieSceneObjectBindingID>
---@field bFireEventsWhenForwards boolean
---@field bFireEventsWhenBackwards boolean
local FMovieSceneEventTemplateBase = {}



---@class FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase
---@field EventTimes TArray<FFrameNumber>
---@field Events TArray<FMovieSceneEventPtrs>
local FMovieSceneEventTriggerTemplate = {}



---@class FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
---@field FadeCurve FMovieSceneFloatChannel
---@field FadeColor FLinearColor
---@field bFadeAudio boolean
local FMovieSceneFadeSectionTemplate = {}



---@class FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field FloatFunction FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
local FMovieSceneFloatPropertySectionTemplate = {}



---@class FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field IntegerCurve FMovieSceneIntegerChannel
---@field BlendType EMovieSceneBlendType
local FMovieSceneIntegerPropertySectionTemplate = {}



---@class FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate
---@field Visibility ELevelVisibility
---@field LevelNames TArray<FName>
local FMovieSceneLevelVisibilitySectionTemplate = {}



---@class FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
---@field MPC UMaterialParameterCollection
local FMovieSceneMaterialParameterCollectionTemplate = {}



---@class FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
---@field ObjectChannel FMovieSceneObjectPathChannel
local FMovieSceneObjectPropertyTemplate = {}



---@class FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
---@field Scalars TArray<FScalarParameterNameAndCurve>
---@field Vectors TArray<FVectorParameterNameAndCurves>
---@field Colors TArray<FColorParameterNameAndCurves>
---@field Transforms TArray<FTransformParameterNameAndCurves>
local FMovieSceneParameterSectionTemplate = {}



---@class FMovieSceneParticleChannel : FMovieSceneByteChannel
local FMovieSceneParticleChannel = {}


---@class FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
local FMovieSceneParticleParameterSectionTemplate = {}


---@class FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
---@field ParticleKeys FMovieSceneParticleChannel
local FMovieSceneParticleSectionTemplate = {}



---@class FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
---@field MaterialIndex int32
---@field MaterialChannel FMovieSceneObjectPathChannel
local FMovieScenePrimitiveMaterialTemplate = {}



---@class FMovieSceneSkeletalAnimationParams
---@field Animation UAnimSequenceBase
---@field FirstLoopStartFrameOffset FFrameNumber
---@field StartFrameOffset FFrameNumber
---@field EndFrameOffset FFrameNumber
---@field PlayRate float
---@field bReverse boolean
---@field SlotName FName
---@field Weight FMovieSceneFloatChannel
---@field bSkipAnimNotifiers boolean
---@field bForceCustomMode boolean
---@field StartOffset float
---@field EndOffset float
local FMovieSceneSkeletalAnimationParams = {}



---@class FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
---@field Params FMovieSceneSkeletalAnimationSectionTemplateParameters
local FMovieSceneSkeletalAnimationSectionTemplate = {}



---@class FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
---@field SectionStartTime FFrameNumber
---@field SectionEndTime FFrameNumber
local FMovieSceneSkeletalAnimationSectionTemplateParameters = {}



---@class FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
---@field SlomoCurve FMovieSceneFloatChannel
local FMovieSceneSlomoSectionTemplate = {}



---@class FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate
---@field Curve FMovieSceneBoolChannel
local FMovieSceneSpawnSectionTemplate = {}



---@class FMovieSceneStringChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field Values TArray<FString>
---@field DefaultValue FString
---@field bHasDefaultValue boolean
local FMovieSceneStringChannel = {}



---@class FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field StringCurve FMovieSceneStringChannel
local FMovieSceneStringPropertySectionTemplate = {}



---@class FMovieSceneTransformMask
---@field Mask uint32
local FMovieSceneTransformMask = {}



---@class FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field TemplateData FMovieScene3DTransformTemplateData
local FMovieSceneTransformPropertySectionTemplate = {}



---@class FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
---@field Vector FVector2D
local FMovieSceneVector2DKeyStruct = {}



---@class FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
---@field Vector FVector4
local FMovieSceneVector4KeyStruct = {}



---@class FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
---@field Vector FVector
local FMovieSceneVectorKeyStruct = {}



---@class FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
---@field Time FFrameNumber
local FMovieSceneVectorKeyStructBase = {}



---@class FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
---@field ComponentCurves FMovieSceneFloatChannel
---@field NumChannelsUsed int32
---@field BlendType EMovieSceneBlendType
local FMovieSceneVectorPropertySectionTemplate = {}



---@class FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
local FMovieSceneVisibilitySectionTemplate = {}


---@class FScalarParameterNameAndCurve
---@field ParameterName FName
---@field ParameterCurve FMovieSceneFloatChannel
local FScalarParameterNameAndCurve = {}



---@class FTransformParameterNameAndCurves
---@field ParameterName FName
---@field Translation FMovieSceneFloatChannel
---@field Rotation FMovieSceneFloatChannel
---@field Scale FMovieSceneFloatChannel
local FTransformParameterNameAndCurves = {}



---@class FVectorParameterNameAndCurves
---@field ParameterName FName
---@field XCurve FMovieSceneFloatChannel
---@field YCurve FMovieSceneFloatChannel
---@field ZCurve FMovieSceneFloatChannel
local FVectorParameterNameAndCurves = {}



---@class IMovieSceneTransformOrigin : IInterface
local IMovieSceneTransformOrigin = {}

---@return FTransform
function IMovieSceneTransformOrigin:BP_GetTransformOrigin() end


---@class UMovieScene3DAttachSection : UMovieScene3DConstraintSection
---@field AttachSocketName FName
---@field AttachComponentName FName
---@field AttachmentLocationRule EAttachmentRule
---@field AttachmentRotationRule EAttachmentRule
---@field AttachmentScaleRule EAttachmentRule
---@field DetachmentLocationRule EDetachmentRule
---@field DetachmentRotationRule EDetachmentRule
---@field DetachmentScaleRule EDetachmentRule
local UMovieScene3DAttachSection = {}



---@class UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack
local UMovieScene3DAttachTrack = {}


---@class UMovieScene3DConstraintSection : UMovieSceneSection
---@field ConstraintId FGuid
---@field ConstraintBindingID FMovieSceneObjectBindingID
local UMovieScene3DConstraintSection = {}

---@param InConstraintBindingID FMovieSceneObjectBindingID
function UMovieScene3DConstraintSection:SetConstraintBindingID(InConstraintBindingID) end
---@return FMovieSceneObjectBindingID
function UMovieScene3DConstraintSection:GetConstraintBindingID() end


---@class UMovieScene3DConstraintTrack : UMovieSceneTrack
---@field ConstraintSections TArray<UMovieSceneSection>
local UMovieScene3DConstraintTrack = {}



---@class UMovieScene3DPathSection : UMovieScene3DConstraintSection
---@field TimingCurve FMovieSceneFloatChannel
---@field FrontAxisEnum MovieScene3DPathSection_Axis
---@field UpAxisEnum MovieScene3DPathSection_Axis
---@field bFollow boolean
---@field bReverse boolean
---@field bForceUpright boolean
local UMovieScene3DPathSection = {}



---@class UMovieScene3DPathTrack : UMovieScene3DConstraintTrack
local UMovieScene3DPathTrack = {}


---@class UMovieScene3DTransformSection : UMovieSceneSection
---@field TransformMask FMovieSceneTransformMask
---@field Translation FMovieSceneFloatChannel
---@field Rotation FMovieSceneFloatChannel
---@field Scale FMovieSceneFloatChannel
---@field ManualWeight FMovieSceneFloatChannel
---@field bUseQuaternionInterpolation boolean
local UMovieScene3DTransformSection = {}



---@class UMovieScene3DTransformTrack : UMovieScenePropertyTrack
local UMovieScene3DTransformTrack = {}


---@class UMovieSceneActorReferenceSection : UMovieSceneSection
---@field ActorReferenceData FMovieSceneActorReferenceData
---@field ActorGuidIndexCurve FIntegralCurve
---@field ActorGuidStrings TArray<FString>
local UMovieSceneActorReferenceSection = {}



---@class UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack
local UMovieSceneActorReferenceTrack = {}


---@class UMovieSceneAudioSection : UMovieSceneSection
---@field Sound USoundBase
---@field StartFrameOffset FFrameNumber
---@field StartOffset float
---@field AudioStartTime float
---@field AudioDilationFactor float
---@field AudioVolume float
---@field SoundVolume FMovieSceneFloatChannel
---@field PitchMultiplier FMovieSceneFloatChannel
---@field bSuppressSubtitles boolean
---@field bOverrideAttenuation boolean
---@field AttenuationSettings USoundAttenuation
---@field OnQueueSubtitles FMovieSceneAudioSectionOnQueueSubtitles
---@field OnAudioFinished FMovieSceneAudioSectionOnAudioFinished
---@field OnAudioPlaybackPercent FMovieSceneAudioSectionOnAudioPlaybackPercent
local UMovieSceneAudioSection = {}

---@param InStartOffset FFrameNumber
function UMovieSceneAudioSection:SetStartOffset(InStartOffset) end
---@param InSound USoundBase
function UMovieSceneAudioSection:SetSound(InSound) end
---@return FFrameNumber
function UMovieSceneAudioSection:GetStartOffset() end
---@return USoundBase
function UMovieSceneAudioSection:GetSound() end


---@class UMovieSceneAudioTrack : UMovieSceneNameableTrack
---@field AudioSections TArray<UMovieSceneSection>
local UMovieSceneAudioTrack = {}



---@class UMovieSceneBoolSection : UMovieSceneSection
---@field DefaultValue boolean
---@field BoolCurve FMovieSceneBoolChannel
local UMovieSceneBoolSection = {}



---@class UMovieSceneBoolTrack : UMovieScenePropertyTrack
local UMovieSceneBoolTrack = {}


---@class UMovieSceneByteSection : UMovieSceneSection
---@field ByteCurve FMovieSceneByteChannel
local UMovieSceneByteSection = {}



---@class UMovieSceneByteTrack : UMovieScenePropertyTrack
---@field Enum UEnum
local UMovieSceneByteTrack = {}



---@class UMovieSceneCameraAnimSection : UMovieSceneSection
---@field AnimData FMovieSceneCameraAnimSectionData
---@field CameraAnim UCameraAnim
---@field PlayRate float
---@field PlayScale float
---@field BlendInTime float
---@field BlendOutTime float
---@field bLooping boolean
local UMovieSceneCameraAnimSection = {}



---@class UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack
---@field CameraAnimSections TArray<UMovieSceneSection>
local UMovieSceneCameraAnimTrack = {}



---@class UMovieSceneCameraCutSection : UMovieSceneSection
---@field CameraGuid FGuid
---@field CameraBindingID FMovieSceneObjectBindingID
local UMovieSceneCameraCutSection = {}

---@param InCameraBindingID FMovieSceneObjectBindingID
function UMovieSceneCameraCutSection:SetCameraBindingID(InCameraBindingID) end
---@return FMovieSceneObjectBindingID
function UMovieSceneCameraCutSection:GetCameraBindingID() end


---@class UMovieSceneCameraCutTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneCameraCutTrack = {}



---@class UMovieSceneCameraShakeSection : UMovieSceneSection
---@field ShakeData FMovieSceneCameraShakeSectionData
---@field ShakeClass TSubclassOf<UCameraShake>
---@field PlayScale float
---@field PlaySpace ECameraAnimPlaySpace::Type
---@field UserDefinedPlaySpace FRotator
local UMovieSceneCameraShakeSection = {}



---@class UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack
---@field CameraShakeSections TArray<UMovieSceneSection>
local UMovieSceneCameraShakeTrack = {}



---@class UMovieSceneCinematicShotSection : UMovieSceneSubSection
---@field ShotDisplayName FString
---@field DisplayName FText
local UMovieSceneCinematicShotSection = {}

---@param InShotDisplayName FString
function UMovieSceneCinematicShotSection:SetShotDisplayName(InShotDisplayName) end
---@return FString
function UMovieSceneCinematicShotSection:GetShotDisplayName() end


---@class UMovieSceneCinematicShotTrack : UMovieSceneSubTrack
local UMovieSceneCinematicShotTrack = {}


---@class UMovieSceneColorSection : UMovieSceneSection
---@field RedCurve FMovieSceneFloatChannel
---@field GreenCurve FMovieSceneFloatChannel
---@field BlueCurve FMovieSceneFloatChannel
---@field AlphaCurve FMovieSceneFloatChannel
local UMovieSceneColorSection = {}



---@class UMovieSceneColorTrack : UMovieScenePropertyTrack
---@field bIsSlateColor boolean
local UMovieSceneColorTrack = {}



---@class UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack
---@field MaterialIndex int32
local UMovieSceneComponentMaterialTrack = {}



---@class UMovieSceneEnumSection : UMovieSceneSection
---@field EnumCurve FMovieSceneByteChannel
local UMovieSceneEnumSection = {}



---@class UMovieSceneEnumTrack : UMovieScenePropertyTrack
---@field Enum UEnum
local UMovieSceneEnumTrack = {}



---@class UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack
local UMovieSceneEulerTransformTrack = {}


---@class UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase
---@field Event FMovieSceneEvent
local UMovieSceneEventRepeaterSection = {}



---@class UMovieSceneEventSection : UMovieSceneSection
---@field Events FNameCurve
---@field EventData FMovieSceneEventSectionData
local UMovieSceneEventSection = {}



---@class UMovieSceneEventSectionBase : UMovieSceneSection
local UMovieSceneEventSectionBase = {}


---@class UMovieSceneEventTrack : UMovieSceneNameableTrack
---@field bFireEventsWhenForwards boolean
---@field bFireEventsWhenBackwards boolean
---@field EventPosition EFireEventsAtPosition
---@field EventReceivers TArray<FMovieSceneObjectBindingID>
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneEventTrack = {}



---@class UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase
---@field EventChannel FMovieSceneEventChannel
local UMovieSceneEventTriggerSection = {}



---@class UMovieSceneFadeSection : UMovieSceneFloatSection
---@field FadeColor FLinearColor
---@field bFadeAudio boolean
local UMovieSceneFadeSection = {}



---@class UMovieSceneFadeTrack : UMovieSceneFloatTrack
local UMovieSceneFadeTrack = {}


---@class UMovieSceneFloatSection : UMovieSceneSection
---@field FloatCurve FMovieSceneFloatChannel
local UMovieSceneFloatSection = {}



---@class UMovieSceneFloatTrack : UMovieScenePropertyTrack
local UMovieSceneFloatTrack = {}


---@class UMovieSceneIntegerSection : UMovieSceneSection
---@field IntegerCurve FMovieSceneIntegerChannel
local UMovieSceneIntegerSection = {}



---@class UMovieSceneIntegerTrack : UMovieScenePropertyTrack
local UMovieSceneIntegerTrack = {}


---@class UMovieSceneLevelVisibilitySection : UMovieSceneSection
---@field Visibility ELevelVisibility
---@field LevelNames TArray<FName>
local UMovieSceneLevelVisibilitySection = {}

---@param InVisibility ELevelVisibility
function UMovieSceneLevelVisibilitySection:SetVisibility(InVisibility) end
---@param InLevelNames TArray<FName>
function UMovieSceneLevelVisibilitySection:SetLevelNames(InLevelNames) end
---@return ELevelVisibility
function UMovieSceneLevelVisibilitySection:GetVisibility() end
---@return TArray<FName>
function UMovieSceneLevelVisibilitySection:GetLevelNames() end


---@class UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneLevelVisibilityTrack = {}



---@class UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack
---@field MPC UMaterialParameterCollection
local UMovieSceneMaterialParameterCollectionTrack = {}



---@class UMovieSceneMaterialTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneMaterialTrack = {}



---@class UMovieSceneObjectPropertySection : UMovieSceneSection
---@field ObjectChannel FMovieSceneObjectPathChannel
local UMovieSceneObjectPropertySection = {}



---@class UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack
---@field PropertyClass UClass
local UMovieSceneObjectPropertyTrack = {}



---@class UMovieSceneParameterSection : UMovieSceneSection
---@field ScalarParameterNamesAndCurves TArray<FScalarParameterNameAndCurve>
---@field VectorParameterNamesAndCurves TArray<FVectorParameterNameAndCurves>
---@field ColorParameterNamesAndCurves TArray<FColorParameterNameAndCurves>
---@field TransformParameterNamesAndCurves TArray<FTransformParameterNameAndCurves>
local UMovieSceneParameterSection = {}



---@class UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneParticleParameterTrack = {}



---@class UMovieSceneParticleSection : UMovieSceneSection
---@field ParticleKeys FMovieSceneParticleChannel
local UMovieSceneParticleSection = {}



---@class UMovieSceneParticleTrack : UMovieSceneNameableTrack
---@field ParticleSections TArray<UMovieSceneSection>
local UMovieSceneParticleTrack = {}



---@class UMovieScenePrimitiveMaterialSection : UMovieSceneSection
---@field MaterialChannel FMovieSceneObjectPathChannel
local UMovieScenePrimitiveMaterialSection = {}



---@class UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack
---@field MaterialIndex int32
local UMovieScenePrimitiveMaterialTrack = {}



---@class UMovieScenePropertyTrack : UMovieSceneNameableTrack
---@field SectionToKey UMovieSceneSection
---@field PropertyName FName
---@field PropertyPath FString
---@field Sections TArray<UMovieSceneSection>
local UMovieScenePropertyTrack = {}



---@class UMovieSceneSkeletalAnimationSection : UMovieSceneSection
---@field Params FMovieSceneSkeletalAnimationParams
---@field AnimSequence UAnimSequence
---@field Animation UAnimSequenceBase
---@field StartOffset float
---@field EndOffset float
---@field PlayRate float
---@field bReverse boolean
---@field SlotName FName
local UMovieSceneSkeletalAnimationSection = {}



---@class UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack
---@field AnimationSections TArray<UMovieSceneSection>
---@field bUseLegacySectionIndexBlend boolean
local UMovieSceneSkeletalAnimationTrack = {}



---@class UMovieSceneSlomoSection : UMovieSceneFloatSection
local UMovieSceneSlomoSection = {}


---@class UMovieSceneSlomoTrack : UMovieSceneFloatTrack
local UMovieSceneSlomoTrack = {}


---@class UMovieSceneSpawnSection : UMovieSceneBoolSection
local UMovieSceneSpawnSection = {}


---@class UMovieSceneSpawnTrack : UMovieSceneTrack
---@field Sections TArray<UMovieSceneSection>
---@field ObjectGuid FGuid
local UMovieSceneSpawnTrack = {}



---@class UMovieSceneStringSection : UMovieSceneSection
---@field StringCurve FMovieSceneStringChannel
local UMovieSceneStringSection = {}



---@class UMovieSceneStringTrack : UMovieScenePropertyTrack
local UMovieSceneStringTrack = {}


---@class UMovieSceneTransformTrack : UMovieScenePropertyTrack
local UMovieSceneTransformTrack = {}


---@class UMovieSceneVectorSection : UMovieSceneSection
---@field Curves FMovieSceneFloatChannel
---@field ChannelsUsed int32
local UMovieSceneVectorSection = {}



---@class UMovieSceneVectorTrack : UMovieScenePropertyTrack
---@field NumChannelsUsed int32
local UMovieSceneVectorTrack = {}



---@class UMovieSceneVisibilityTrack : UMovieSceneBoolTrack
local UMovieSceneVisibilityTrack = {}


