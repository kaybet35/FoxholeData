---@meta

---@class FGeneratedMovieSceneKeyStruct
local FGeneratedMovieSceneKeyStruct = {}


---@class FMovieSceneBinding
---@field ObjectGuid FGuid
---@field BindingName FString
---@field Tracks TArray<UMovieSceneTrack>
local FMovieSceneBinding = {}



---@class FMovieSceneBindingOverrideData
---@field ObjectBindingId FMovieSceneObjectBindingID
---@field Object TWeakObjectPtr<UObject>
---@field bOverridesDefault boolean
local FMovieSceneBindingOverrideData = {}



---@class FMovieSceneBoolChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field DefaultValue boolean
---@field bHasDefaultValue boolean
---@field Values TArray<boolean>
local FMovieSceneBoolChannel = {}



---@class FMovieSceneByteChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field DefaultValue uint8
---@field bHasDefaultValue boolean
---@field Values TArray<uint8>
---@field Enum UEnum
local FMovieSceneByteChannel = {}



---@class FMovieSceneChannel
local FMovieSceneChannel = {}


---@class FMovieSceneEasingSettings
---@field AutoEaseInDuration int32
---@field AutoEaseOutDuration int32
---@field EaseIn TScriptInterface<IMovieSceneEasingFunction>
---@field bManualEaseIn boolean
---@field ManualEaseInDuration int32
---@field EaseOut TScriptInterface<IMovieSceneEasingFunction>
---@field bManualEaseOut boolean
---@field ManualEaseOutDuration int32
local FMovieSceneEasingSettings = {}



---@class FMovieSceneEditorData
---@field ExpansionStates TMap<FString, FMovieSceneExpansionState>
---@field PinnedNodes TArray<FString>
---@field ViewStart double
---@field ViewEnd double
---@field WorkStart double
---@field WorkEnd double
---@field MarkedFrames TSet<FFrameNumber>
---@field WorkingRange FFloatRange
---@field ViewRange FFloatRange
local FMovieSceneEditorData = {}



---@class FMovieSceneEmptyStruct
local FMovieSceneEmptyStruct = {}


---@class FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
---@field CompletionMode EMovieSceneCompletionMode
---@field SourceSectionPtr TWeakObjectPtr<UMovieSceneSection>
local FMovieSceneEvalTemplate = {}



---@class FMovieSceneEvalTemplateBase
local FMovieSceneEvalTemplateBase = {}


---@class FMovieSceneEvalTemplatePtr
local FMovieSceneEvalTemplatePtr = {}


---@class FMovieSceneEvaluationField
---@field Ranges TArray<FMovieSceneFrameRange>
---@field Groups TArray<FMovieSceneEvaluationGroup>
---@field MetaData TArray<FMovieSceneEvaluationMetaData>
local FMovieSceneEvaluationField = {}



---@class FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr
---@field SegmentID FMovieSceneSegmentIdentifier
local FMovieSceneEvaluationFieldSegmentPtr = {}



---@class FMovieSceneEvaluationFieldTrackPtr
---@field SequenceID FMovieSceneSequenceID
---@field TrackIdentifier FMovieSceneTrackIdentifier
local FMovieSceneEvaluationFieldTrackPtr = {}



---@class FMovieSceneEvaluationGroup
---@field LUTIndices TArray<FMovieSceneEvaluationGroupLUTIndex>
---@field SegmentPtrLUT TArray<FMovieSceneEvaluationFieldSegmentPtr>
local FMovieSceneEvaluationGroup = {}



---@class FMovieSceneEvaluationGroupLUTIndex
---@field LUTOffset int32
---@field NumInitPtrs int32
---@field NumEvalPtrs int32
local FMovieSceneEvaluationGroupLUTIndex = {}



---@class FMovieSceneEvaluationKey
---@field SequenceID FMovieSceneSequenceID
---@field TrackIdentifier FMovieSceneTrackIdentifier
---@field SectionIndex uint32
local FMovieSceneEvaluationKey = {}



---@class FMovieSceneEvaluationMetaData
---@field ActiveSequences TArray<FMovieSceneSequenceID>
---@field ActiveEntities TArray<FMovieSceneOrderedEvaluationKey>
---@field SubTemplateSerialNumbers TMap<FMovieSceneSequenceID, uint32>
local FMovieSceneEvaluationMetaData = {}



---@class FMovieSceneEvaluationOperand
---@field ObjectBindingId FGuid
---@field SequenceID FMovieSceneSequenceID
local FMovieSceneEvaluationOperand = {}



---@class FMovieSceneEvaluationTemplate
---@field Tracks TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack>
---@field EvaluationField FMovieSceneEvaluationField
---@field Hierarchy FMovieSceneSequenceHierarchy
---@field SequenceSignature FGuid
---@field TemplateSerialNumber FMovieSceneEvaluationTemplateSerialNumber
---@field TemplateLedger FMovieSceneTemplateGenerationLedger
---@field TrackFieldData FMovieSceneTrackFieldData
---@field SubSectionFieldData FMovieSceneSubSectionFieldData
local FMovieSceneEvaluationTemplate = {}



---@class FMovieSceneEvaluationTemplateSerialNumber
---@field Value uint32
local FMovieSceneEvaluationTemplateSerialNumber = {}



---@class FMovieSceneEvaluationTrack
---@field ObjectBindingId FGuid
---@field EvaluationPriority uint16
---@field EvaluationMethod EEvaluationMethod
---@field Segments FMovieSceneEvaluationTrackSegments
---@field SourceTrack UMovieSceneTrack
---@field EvaluationTree FSectionEvaluationDataTree
---@field ChildTemplates TArray<FMovieSceneEvalTemplatePtr>
---@field TrackTemplate FMovieSceneTrackImplementationPtr
---@field EvaluationGroup FName
---@field bEvaluateInPreroll boolean
---@field bEvaluateInPostroll boolean
---@field bTearDownPriority boolean
local FMovieSceneEvaluationTrack = {}



---@class FMovieSceneEvaluationTrackSegments
---@field SegmentIdentifierToIndex TArray<int32>
---@field SortedSegments TArray<FMovieSceneSegment>
local FMovieSceneEvaluationTrackSegments = {}



---@class FMovieSceneExpansionState
---@field bExpanded boolean
local FMovieSceneExpansionState = {}



---@class FMovieSceneFloatChannel : FMovieSceneChannel
---@field PreInfinityExtrap ERichCurveExtrapolation
---@field PostInfinityExtrap ERichCurveExtrapolation
---@field Times TArray<FFrameNumber>
---@field Values TArray<FMovieSceneFloatValue>
---@field DefaultValue float
---@field bHasDefaultValue boolean
---@field KeyHandles FMovieSceneKeyHandleMap
---@field TickResolution FFrameRate
local FMovieSceneFloatChannel = {}



---@class FMovieSceneFloatValue
---@field Value float
---@field InterpMode ERichCurveInterpMode
---@field TangentMode ERichCurveTangentMode
---@field Tangent FMovieSceneTangentData
local FMovieSceneFloatValue = {}



---@class FMovieSceneFrameRange
local FMovieSceneFrameRange = {}


---@class FMovieSceneIntegerChannel : FMovieSceneChannel
---@field Times TArray<FFrameNumber>
---@field DefaultValue int32
---@field bHasDefaultValue boolean
---@field Values TArray<int32>
local FMovieSceneIntegerChannel = {}



---@class FMovieSceneKeyHandleMap : FKeyHandleLookupTable
local FMovieSceneKeyHandleMap = {}


---@class FMovieSceneKeyStruct
local FMovieSceneKeyStruct = {}


---@class FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct
---@field Time FFrameNumber
local FMovieSceneKeyTimeStruct = {}



---@class FMovieSceneMarkedFrame
---@field FrameNumber FFrameNumber
---@field Label FString
local FMovieSceneMarkedFrame = {}



---@class FMovieSceneObjectBindingID
---@field SequenceID int32
---@field Space EMovieSceneObjectBindingSpace
---@field Guid FGuid
local FMovieSceneObjectBindingID = {}



---@class FMovieSceneObjectBindingIDs
---@field Ids TArray<FMovieSceneObjectBindingID>
local FMovieSceneObjectBindingIDs = {}



---@class FMovieSceneObjectPathChannel : FMovieSceneChannel
---@field PropertyClass UClass
---@field Times TArray<FFrameNumber>
---@field Values TArray<FMovieSceneObjectPathChannelKeyValue>
---@field DefaultValue FMovieSceneObjectPathChannelKeyValue
local FMovieSceneObjectPathChannel = {}



---@class FMovieSceneObjectPathChannelKeyValue
---@field SoftPtr TSoftObjectPtr<UObject>
---@field HardPtr UObject
local FMovieSceneObjectPathChannelKeyValue = {}



---@class FMovieSceneOrderedEvaluationKey
---@field Key FMovieSceneEvaluationKey
---@field SetupIndex uint16
---@field TearDownIndex uint16
local FMovieSceneOrderedEvaluationKey = {}



---@class FMovieScenePossessable
---@field Tags TArray<FName>
---@field Guid FGuid
---@field Name FString
---@field PossessedObjectClass UClass
---@field ParentGuid FGuid
local FMovieScenePossessable = {}



---@class FMovieScenePropertySectionData
---@field PropertyName FName
---@field PropertyPath FString
---@field FunctionName FName
---@field NotifyFunctionName FName
local FMovieScenePropertySectionData = {}



---@class FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate
---@field PropertyData FMovieScenePropertySectionData
local FMovieScenePropertySectionTemplate = {}



---@class FMovieSceneRootEvaluationTemplateInstance
---@field DirectorInstances TMap<FMovieSceneSequenceID, UObject>
local FMovieSceneRootEvaluationTemplateInstance = {}



---@class FMovieSceneSectionEvalOptions
---@field bCanEditCompletionMode boolean
---@field CompletionMode EMovieSceneCompletionMode
local FMovieSceneSectionEvalOptions = {}



---@class FMovieSceneSectionGroup
---@field Sections TArray<TWeakObjectPtr<UMovieSceneSection>>
local FMovieSceneSectionGroup = {}



---@class FMovieSceneSectionParameters
---@field StartFrameOffset FFrameNumber
---@field TimeScale float
---@field HierarchicalBias int32
---@field StartOffset float
---@field PrerollTime float
---@field PostrollTime float
local FMovieSceneSectionParameters = {}



---@class FMovieSceneSegment
local FMovieSceneSegment = {}


---@class FMovieSceneSegmentIdentifier
---@field IdentifierIndex int32
local FMovieSceneSegmentIdentifier = {}



---@class FMovieSceneSequenceHierarchy
---@field SubSequences TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData>
---@field Hierarchy TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode>
local FMovieSceneSequenceHierarchy = {}



---@class FMovieSceneSequenceHierarchyNode
---@field ParentID FMovieSceneSequenceID
---@field Children TArray<FMovieSceneSequenceID>
local FMovieSceneSequenceHierarchyNode = {}



---@class FMovieSceneSequenceID
---@field Value uint32
local FMovieSceneSequenceID = {}



---@class FMovieSceneSequenceInstanceData
local FMovieSceneSequenceInstanceData = {}


---@class FMovieSceneSequenceInstanceDataPtr
local FMovieSceneSequenceInstanceDataPtr = {}


---@class FMovieSceneSequenceLoopCount
---@field Value int32
local FMovieSceneSequenceLoopCount = {}



---@class FMovieSceneSequencePlaybackSettings
---@field bAutoPlay boolean
---@field LoopCount FMovieSceneSequenceLoopCount
---@field PlayRate float
---@field StartTime float
---@field bRandomStartTime boolean
---@field bRestoreState boolean
---@field bDisableMovementInput boolean
---@field bDisableLookAtInput boolean
---@field bHidePlayer boolean
---@field bHideHud boolean
---@field bDisableCameraCuts boolean
---@field bPauseAtEnd boolean
local FMovieSceneSequencePlaybackSettings = {}



---@class FMovieSceneSequenceReplProperties
---@field LastKnownPosition FFrameTime
---@field LastKnownStatus EMovieScenePlayerStatus::Type
---@field LastKnownNumLoops int32
local FMovieSceneSequenceReplProperties = {}



---@class FMovieSceneSequenceTransform
---@field TimeScale float
---@field Offset FFrameTime
local FMovieSceneSequenceTransform = {}



---@class FMovieSceneSpawnable
---@field SpawnTransform FTransform
---@field Tags TArray<FName>
---@field bContinuouslyRespawn boolean
---@field Guid FGuid
---@field Name FString
---@field ObjectTemplate UObject
---@field ChildPossessables TArray<FGuid>
---@field Ownership ESpawnOwnership
---@field LevelName FName
local FMovieSceneSpawnable = {}



---@class FMovieSceneSubSectionData
---@field Section TWeakObjectPtr<UMovieSceneSubSection>
---@field ObjectBindingId FGuid
---@field Flags ESectionEvaluationFlags
local FMovieSceneSubSectionData = {}



---@class FMovieSceneSubSectionFieldData
local FMovieSceneSubSectionFieldData = {}


---@class FMovieSceneSubSequenceData
---@field Sequence FSoftObjectPath
---@field RootToSequenceTransform FMovieSceneSequenceTransform
---@field TickResolution FFrameRate
---@field DeterministicSequenceID FMovieSceneSequenceID
---@field PlayRange FMovieSceneFrameRange
---@field PreRollRange FMovieSceneFrameRange
---@field PostRollRange FMovieSceneFrameRange
---@field HierarchicalBias int32
---@field InstanceData FMovieSceneSequenceInstanceDataPtr
---@field SubSectionSignature FGuid
---@field OuterToInnerTransform FMovieSceneSequenceTransform
local FMovieSceneSubSequenceData = {}



---@class FMovieSceneTangentData
---@field ArriveTangent float
---@field LeaveTangent float
---@field TangentWeightMode ERichCurveTangentWeightMode
---@field ArriveTangentWeight float
---@field LeaveTangentWeight float
local FMovieSceneTangentData = {}



---@class FMovieSceneTemplateGenerationLedger
---@field LastTrackIdentifier FMovieSceneTrackIdentifier
---@field TrackSignatureToTrackIdentifier TMap<FGuid, FMovieSceneTrackIdentifier>
---@field SubSectionRanges TMap<FGuid, FMovieSceneFrameRange>
local FMovieSceneTemplateGenerationLedger = {}



---@class FMovieSceneTimecodeSource
---@field Timecode FTimecode
---@field DeltaFrame FFrameNumber
local FMovieSceneTimecodeSource = {}



---@class FMovieSceneTrackDisplayOptions
---@field bShowVerticalFrames boolean
local FMovieSceneTrackDisplayOptions = {}



---@class FMovieSceneTrackEvalOptions
---@field bCanEvaluateNearestSection boolean
---@field bEvalNearestSection boolean
---@field bEvaluateInPreroll boolean
---@field bEvaluateInPostroll boolean
---@field bEvaluateNearestSection boolean
local FMovieSceneTrackEvalOptions = {}



---@class FMovieSceneTrackFieldData
local FMovieSceneTrackFieldData = {}


---@class FMovieSceneTrackIdentifier
---@field Value uint32
local FMovieSceneTrackIdentifier = {}



---@class FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase
local FMovieSceneTrackImplementation = {}


---@class FMovieSceneTrackImplementationPtr
local FMovieSceneTrackImplementationPtr = {}


---@class FMovieSceneTrackLabels
---@field Strings TArray<FString>
local FMovieSceneTrackLabels = {}



---@class FOptionalMovieSceneBlendType
---@field BlendType EMovieSceneBlendType
---@field bIsValid boolean
local FOptionalMovieSceneBlendType = {}



---@class FSectionEvaluationData
---@field ImplIndex int32
---@field ForcedTime FFrameNumber
---@field Flags ESectionEvaluationFlags
local FSectionEvaluationData = {}



---@class FSectionEvaluationDataTree
local FSectionEvaluationDataTree = {}


---@class FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate
local FTestMovieSceneEvalTemplate = {}


---@class IMovieSceneBindingOwnerInterface : IInterface
local IMovieSceneBindingOwnerInterface = {}


---@class IMovieSceneEasingFunction : IInterface
local IMovieSceneEasingFunction = {}

---@param Interp float
---@return float
function IMovieSceneEasingFunction:OnEvaluate(Interp) end


---@class IMovieSceneKeyProxy : IInterface
local IMovieSceneKeyProxy = {}


---@class IMovieScenePlaybackClient : IInterface
local IMovieScenePlaybackClient = {}


---@class UMovieScene : UMovieSceneSignedObject
---@field Spawnables TArray<FMovieSceneSpawnable>
---@field Possessables TArray<FMovieScenePossessable>
---@field ObjectBindings TArray<FMovieSceneBinding>
---@field BindingGroups TMap<FName, FMovieSceneObjectBindingIDs>
---@field MasterTracks TArray<UMovieSceneTrack>
---@field CameraCutTrack UMovieSceneTrack
---@field SelectionRange FMovieSceneFrameRange
---@field PlaybackRange FMovieSceneFrameRange
---@field TickResolution FFrameRate
---@field DisplayRate FFrameRate
---@field EvaluationType EMovieSceneEvaluationType
---@field ClockSource EUpdateClockSource
---@field MarkedFrames TArray<FMovieSceneMarkedFrame>
local UMovieScene = {}



---@class UMovieSceneBindingOverrides : UObject
---@field BindingData TArray<FMovieSceneBindingOverrideData>
local UMovieSceneBindingOverrides = {}



---@class UMovieSceneBuiltInEasingFunction : UObject
---@field Type EMovieSceneBuiltInEasing
local UMovieSceneBuiltInEasingFunction = {}



---@class UMovieSceneEasingExternalCurve : UObject
---@field Curve UCurveFloat
local UMovieSceneEasingExternalCurve = {}



---@class UMovieSceneFolder : UObject
---@field FolderName FName
---@field ChildFolders TArray<UMovieSceneFolder>
---@field ChildMasterTracks TArray<UMovieSceneTrack>
---@field ChildObjectBindingStrings TArray<FString>
local UMovieSceneFolder = {}



---@class UMovieSceneNameableTrack : UMovieSceneTrack
local UMovieSceneNameableTrack = {}


---@class UMovieSceneSection : UMovieSceneSignedObject
---@field EvalOptions FMovieSceneSectionEvalOptions
---@field Easing FMovieSceneEasingSettings
---@field SectionRange FMovieSceneFrameRange
---@field PreRollFrames FFrameNumber
---@field PostRollFrames FFrameNumber
---@field RowIndex int32
---@field OverlapPriority int32
---@field bIsActive boolean
---@field bIsLocked boolean
---@field StartTime float
---@field EndTime float
---@field PrerollTime float
---@field PostrollTime float
---@field bIsInfinite boolean
---@field bSupportsInfiniteRange boolean
---@field BlendType FOptionalMovieSceneBlendType
local UMovieSceneSection = {}

---@param NewRowIndex int32
function UMovieSceneSection:SetRowIndex(NewRowIndex) end
---@param InPreRollFrames int32
function UMovieSceneSection:SetPreRollFrames(InPreRollFrames) end
---@param InPostRollFrames int32
function UMovieSceneSection:SetPostRollFrames(InPostRollFrames) end
---@param NewPriority int32
function UMovieSceneSection:SetOverlapPriority(NewPriority) end
---@param bInIsLocked boolean
function UMovieSceneSection:SetIsLocked(bInIsLocked) end
---@param bInIsActive boolean
function UMovieSceneSection:SetIsActive(bInIsActive) end
---@param InCompletionMode EMovieSceneCompletionMode
function UMovieSceneSection:SetCompletionMode(InCompletionMode) end
---@param InBlendType EMovieSceneBlendType
function UMovieSceneSection:SetBlendType(InBlendType) end
---@return boolean
function UMovieSceneSection:IsLocked() end
---@return boolean
function UMovieSceneSection:IsActive() end
---@return int32
function UMovieSceneSection:GetRowIndex() end
---@return int32
function UMovieSceneSection:GetPreRollFrames() end
---@return int32
function UMovieSceneSection:GetPostRollFrames() end
---@return int32
function UMovieSceneSection:GetOverlapPriority() end
---@return EMovieSceneCompletionMode
function UMovieSceneSection:GetCompletionMode() end
---@return FOptionalMovieSceneBlendType
function UMovieSceneSection:GetBlendType() end


---@class UMovieSceneSequence : UMovieSceneSignedObject
---@field PrecompiledEvaluationTemplate FMovieSceneEvaluationTemplate
---@field DefaultCompletionMode EMovieSceneCompletionMode
---@field bParentContextsAreSignificant boolean
---@field bPlayableDirectly boolean
local UMovieSceneSequence = {}

---@param InBindingName FName
---@return TArray<FMovieSceneObjectBindingID>
function UMovieSceneSequence:FindBindingsByTag(InBindingName) end
---@param InBindingName FName
---@return FMovieSceneObjectBindingID
function UMovieSceneSequence:FindBindingByTag(InBindingName) end


---@class UMovieSceneSequencePlayer : UObject
---@field OnPlay FMovieSceneSequencePlayerOnPlay
---@field OnPlayReverse FMovieSceneSequencePlayerOnPlayReverse
---@field OnStop FMovieSceneSequencePlayerOnStop
---@field OnPause FMovieSceneSequencePlayerOnPause
---@field OnFinished FMovieSceneSequencePlayerOnFinished
---@field Status EMovieScenePlayerStatus::Type
---@field bReversePlayback boolean
---@field Sequence UMovieSceneSequence
---@field StartTime FFrameNumber
---@field DurationFrames int32
---@field CurrentNumLoops int32
---@field PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field RootTemplateInstance FMovieSceneRootEvaluationTemplateInstance
---@field NetSyncProps FMovieSceneSequenceReplProperties
---@field PlaybackClient TScriptInterface<IMovieScenePlaybackClient>
local UMovieSceneSequencePlayer = {}

function UMovieSceneSequencePlayer:StopAtCurrentTime() end
function UMovieSceneSequencePlayer:Stop() end
---@param StartTime float
---@param Duration float
function UMovieSceneSequencePlayer:SetTimeRange(StartTime, Duration) end
---@param PlayRate float
function UMovieSceneSequencePlayer:SetPlayRate(PlayRate) end
---@param NewStartTime float
---@param NewEndTime float
function UMovieSceneSequencePlayer:SetPlaybackRange(NewStartTime, NewEndTime) end
---@param NewPlaybackPosition float
function UMovieSceneSequencePlayer:SetPlaybackPosition(NewPlaybackPosition) end
---@param FrameRate FFrameRate
function UMovieSceneSequencePlayer:SetFrameRate(FrameRate) end
---@param StartFrame int32
---@param Duration int32
function UMovieSceneSequencePlayer:SetFrameRange(StartFrame, Duration) end
---@param bInDisableCameraCuts boolean
function UMovieSceneSequencePlayer:SetDisableCameraCuts(bInDisableCameraCuts) end
---@param TimeInSeconds float
function UMovieSceneSequencePlayer:ScrubToSeconds(TimeInSeconds) end
---@param InLabel FString
---@return boolean
function UMovieSceneSequencePlayer:ScrubToMarkedFrame(InLabel) end
---@param NewPosition FFrameTime
function UMovieSceneSequencePlayer:ScrubToFrame(NewPosition) end
function UMovieSceneSequencePlayer:Scrub() end
---@param StoppedTime FFrameTime
function UMovieSceneSequencePlayer:RPC_OnStopEvent(StoppedTime) end
---@param Method EUpdatePositionMethod
---@param RelevantTime FFrameTime
function UMovieSceneSequencePlayer:RPC_ExplicitServerUpdateEvent(Method, RelevantTime) end
---@param TimeInSeconds float
function UMovieSceneSequencePlayer:PlayToSeconds(TimeInSeconds) end
---@param InLabel FString
---@return boolean
function UMovieSceneSequencePlayer:PlayToMarkedFrame(InLabel) end
---@param NewPosition FFrameTime
function UMovieSceneSequencePlayer:PlayToFrame(NewPosition) end
function UMovieSceneSequencePlayer:PlayReverse() end
---@param NumLoops int32
function UMovieSceneSequencePlayer:PlayLooping(NumLoops) end
function UMovieSceneSequencePlayer:Play() end
function UMovieSceneSequencePlayer:Pause() end
---@param TimeInSeconds float
function UMovieSceneSequencePlayer:JumpToSeconds(TimeInSeconds) end
---@param NewPlaybackPosition float
function UMovieSceneSequencePlayer:JumpToPosition(NewPlaybackPosition) end
---@param InLabel FString
---@return boolean
function UMovieSceneSequencePlayer:JumpToMarkedFrame(InLabel) end
---@param NewPosition FFrameTime
function UMovieSceneSequencePlayer:JumpToFrame(NewPosition) end
---@return boolean
function UMovieSceneSequencePlayer:IsReversed() end
---@return boolean
function UMovieSceneSequencePlayer:IsPlaying() end
---@return boolean
function UMovieSceneSequencePlayer:IsPaused() end
function UMovieSceneSequencePlayer:GoToEndAndStop() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetStartTime() end
---@return float
function UMovieSceneSequencePlayer:GetPlayRate() end
---@return float
function UMovieSceneSequencePlayer:GetPlaybackStart() end
---@return float
function UMovieSceneSequencePlayer:GetPlaybackPosition() end
---@return float
function UMovieSceneSequencePlayer:GetPlaybackEnd() end
---@param InObject UObject
---@return TArray<FMovieSceneObjectBindingID>
function UMovieSceneSequencePlayer:GetObjectBindings(InObject) end
---@return float
function UMovieSceneSequencePlayer:GetLength() end
---@return FFrameRate
function UMovieSceneSequencePlayer:GetFrameRate() end
---@return int32
function UMovieSceneSequencePlayer:GetFrameDuration() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetEndTime() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetDuration() end
---@return boolean
function UMovieSceneSequencePlayer:GetDisableCameraCuts() end
---@return FQualifiedFrameTime
function UMovieSceneSequencePlayer:GetCurrentTime() end
---@param ObjectBinding FMovieSceneObjectBindingID
---@return TArray<UObject>
function UMovieSceneSequencePlayer:GetBoundObjects(ObjectBinding) end
function UMovieSceneSequencePlayer:ChangePlaybackDirection() end


---@class UMovieSceneSignedObject : UObject
---@field Signature FGuid
local UMovieSceneSignedObject = {}



---@class UMovieSceneSubSection : UMovieSceneSection
---@field Parameters FMovieSceneSectionParameters
---@field StartOffset float
---@field TimeScale float
---@field PrerollTime float
---@field SubSequence UMovieSceneSequence
---@field ActorToRecord TLazyObjectPtr<AActor>
---@field TargetSequenceName FString
---@field TargetPathToRecordTo FDirectoryPath
local UMovieSceneSubSection = {}

---@param Sequence UMovieSceneSequence
function UMovieSceneSubSection:SetSequence(Sequence) end
---@return UMovieSceneSequence
function UMovieSceneSubSection:GetSequence() end


---@class UMovieSceneSubTrack : UMovieSceneNameableTrack
---@field Sections TArray<UMovieSceneSection>
local UMovieSceneSubTrack = {}



---@class UMovieSceneTrack : UMovieSceneSignedObject
---@field EvalOptions FMovieSceneTrackEvalOptions
---@field bIsEvalDisabled boolean
local UMovieSceneTrack = {}



---@class UTestMovieSceneSection : UMovieSceneSection
local UTestMovieSceneSection = {}


---@class UTestMovieSceneSequence : UMovieSceneSequence
---@field MovieScene UMovieScene
local UTestMovieSceneSequence = {}



---@class UTestMovieSceneTrack : UMovieSceneTrack
---@field bHighPassFilter boolean
---@field SectionArray TArray<UMovieSceneSection>
local UTestMovieSceneTrack = {}



