---@meta

---@class FMagicLeapHeadTrackingState
---@field Mode EMagicLeapHeadTrackingMode
---@field Error EMagicLeapHeadTrackingError
---@field Confidence float
FMagicLeapHeadTrackingState = {}



---@class FMagicLeapMeshBlockInfo
---@field BlockID FGuid
---@field BlockPosition FVector
---@field BlockOrientation FRotator
---@field BlockDimensions FVector
---@field Timestamp FTimespan
---@field BlockState EMagicLeapMeshState
FMagicLeapMeshBlockInfo = {}



---@class FMagicLeapMeshBlockRequest
---@field BlockID FGuid
---@field LevelOfDetail EMagicLeapMeshLOD
FMagicLeapMeshBlockRequest = {}



---@class FMagicLeapRaycastHitResult
---@field HitState EMagicLeapRaycastResultState
---@field HitPoint FVector
---@field Normal FVector
---@field Confidence float
---@field UserData int32
FMagicLeapRaycastHitResult = {}



---@class FMagicLeapRaycastQueryParams
---@field Position FVector
---@field Direction FVector
---@field UpVector FVector
---@field Width int32
---@field Height int32
---@field HorizontalFovDegrees float
---@field CollideWithUnobserved boolean
---@field UserData int32
FMagicLeapRaycastQueryParams = {}



---@class FMagicLeapTrackingMeshInfo
---@field Timestamp FTimespan
---@field BlockData TArray<FMagicLeapMeshBlockInfo>
FMagicLeapTrackingMeshInfo = {}



---@class FPurchaseConfirmation
---@field PackageName FString
---@field Type PurchaseType
FPurchaseConfirmation = {}



---@class FPurchaseItemDetails
---@field Price FString
---@field Name FString
---@field Type PurchaseType
FPurchaseItemDetails = {}



---@class IMagicLeapMeshBlockSelectorInterface : IInterface
IMagicLeapMeshBlockSelectorInterface = {}

---@param NewMeshInfo FMagicLeapTrackingMeshInfo
---@param RequestedMesh TArray<FMagicLeapMeshBlockRequest>
function IMagicLeapMeshBlockSelectorInterface:SelectMeshBlocks(NewMeshInfo, RequestedMesh) end


---@class UInAppPurchaseComponent : UActorComponent
---@field InAppPurchaseLogMessage FInAppPurchaseComponentInAppPurchaseLogMessage
---@field GetItemsDetailsSuccess FInAppPurchaseComponentGetItemsDetailsSuccess
---@field GetItemsDetailsFailure FInAppPurchaseComponentGetItemsDetailsFailure
---@field PurchaseConfirmationSuccess FInAppPurchaseComponentPurchaseConfirmationSuccess
---@field PurchaseConfirmationFailure FInAppPurchaseComponentPurchaseConfirmationFailure
---@field GetPurchaseHistorySuccess FInAppPurchaseComponentGetPurchaseHistorySuccess
---@field GetPurchaseHistoryFailure FInAppPurchaseComponentGetPurchaseHistoryFailure
UInAppPurchaseComponent = {}

---@param ItemDetails FPurchaseItemDetails
---@return boolean
function UInAppPurchaseComponent:TryPurchaseItemAsync(ItemDetails) end
---@param InNumPages int32
---@return boolean
function UInAppPurchaseComponent:TryGetPurchaseHistoryAsync(InNumPages) end
---@param ItemIDs TArray<FString>
---@return boolean
function UInAppPurchaseComponent:TryGetItemsDetailsAsync(ItemIDs) end
---@param PurchaseConfirmations FPurchaseConfirmation
function UInAppPurchaseComponent:PurchaseConfirmationSuccess__DelegateSignature(PurchaseConfirmations) end
function UInAppPurchaseComponent:PurchaseConfirmationFailure__DelegateSignature() end
---@param LogMessage FString
function UInAppPurchaseComponent:InAppPurchaseLogMessage__DelegateSignature(LogMessage) end
---@param PurchaseHistory TArray<FPurchaseConfirmation>
function UInAppPurchaseComponent:GetPurchaseHistorySuccess__DelegateSignature(PurchaseHistory) end
function UInAppPurchaseComponent:GetPurchaseHistoryFailure__DelegateSignature() end
---@param ItemsDetails TArray<FPurchaseItemDetails>
function UInAppPurchaseComponent:GetItemsDetailsSuccess__DelegateSignature(ItemsDetails) end
function UInAppPurchaseComponent:GetItemsDetailsFailure__DelegateSignature() end


---@class ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent
---@field DeviceHasReactivatedDelegate FLuminApplicationLifecycleComponentDeviceHasReactivatedDelegate
---@field DeviceWillEnterRealityModeDelegate FLuminApplicationLifecycleComponentDeviceWillEnterRealityModeDelegate
---@field DeviceWillGoInStandbyDelegate FLuminApplicationLifecycleComponentDeviceWillGoInStandbyDelegate
ULuminApplicationLifecycleComponent = {}



---@class UMagicLeapHMDFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapHMDFunctionLibrary = {}

---@param InStabilizationDepthActor AActor
---@param bSetFocusActor boolean
function UMagicLeapHMDFunctionLibrary:SetStabilizationDepthActor(InStabilizationDepthActor, bSetFocusActor) end
---@param InFocusActor AActor
---@param bSetStabilizationActor boolean
function UMagicLeapHMDFunctionLibrary:SetFocusActor(InFocusActor, bSetStabilizationActor) end
---@param InBaseRotation FRotator
function UMagicLeapHMDFunctionLibrary:SetBaseRotation(InBaseRotation) end
---@param InBasePosition FVector
function UMagicLeapHMDFunctionLibrary:SetBasePosition(InBasePosition) end
---@param InBaseOrientation FQuat
function UMagicLeapHMDFunctionLibrary:SetBaseOrientation(InBaseOrientation) end
---@return boolean
function UMagicLeapHMDFunctionLibrary:SetAppReady() end
---@return boolean
function UMagicLeapHMDFunctionLibrary:IsRunningOnMagicLeapHMD() end
---@return int32
function UMagicLeapHMDFunctionLibrary:GetMLSDKVersionRevision() end
---@return int32
function UMagicLeapHMDFunctionLibrary:GetMLSDKVersionMinor() end
---@return int32
function UMagicLeapHMDFunctionLibrary:GetMLSDKVersionMajor() end
---@return FString
function UMagicLeapHMDFunctionLibrary:GetMLSDKVersion() end
---@param State FMagicLeapHeadTrackingState
---@return boolean
function UMagicLeapHMDFunctionLibrary:GetHeadTrackingState(State) end
---@param MapEvents TSet<EMagicLeapHeadTrackingMapEvent>
---@return boolean
function UMagicLeapHMDFunctionLibrary:GetHeadTrackingMapEvents(MapEvents) end


---@class UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent
---@field OnHeadTrackingLost FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingLost
---@field OnHeadTrackingRecovered FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingRecovered
---@field OnHeadTrackingRecoveryFailed FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingRecoveryFailed
---@field OnHeadTrackingNewSessionStarted FMagicLeapHeadTrackingNotificationsComponentOnHeadTrackingNewSessionStarted
UMagicLeapHeadTrackingNotificationsComponent = {}



---@class UMagicLeapRaycastComponent : UActorComponent
UMagicLeapRaycastComponent = {}

---@param RequestParams FMagicLeapRaycastQueryParams
---@param ResultDelegate FRequestRaycastResultDelegate
---@return boolean
function UMagicLeapRaycastComponent:RequestRaycast(RequestParams, ResultDelegate) end
---@param HitResult FMagicLeapRaycastHitResult
function UMagicLeapRaycastComponent:RaycastResultDelegate__DelegateSignature(HitResult) end


---@class UMagicLeapRaycastFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapRaycastFunctionLibrary = {}

---@param Position FVector
---@param Direction FVector
---@param UpVector FVector
---@param Width int32
---@param Height int32
---@param HorizontalFovDegrees float
---@param CollideWithUnobserved boolean
---@param UserData int32
---@return FMagicLeapRaycastQueryParams
function UMagicLeapRaycastFunctionLibrary:MakeRaycastQueryParams(Position, Direction, UpVector, Width, Height, HorizontalFovDegrees, CollideWithUnobserved, UserData) end


---@class UMagicLeapSettings : UObject
---@field bEnableZI boolean
---@field bUseVulkanForZI boolean
---@field bUseMLAudioForZI boolean
UMagicLeapSettings = {}



---@class UMeshTrackerComponent : USceneComponent
---@field OnMeshTrackerUpdated FMeshTrackerComponentOnMeshTrackerUpdated
---@field ScanWorld boolean
---@field MeshType EMagicLeapMeshType
---@field BoundingVolume UBoxComponent
---@field LevelOfDetail EMagicLeapMeshLOD
---@field PerimeterOfGapsToFill float
---@field Planarize boolean
---@field DisconnectedSectionArea float
---@field RequestNormals boolean
---@field RequestVertexConfidence boolean
---@field VertexColorMode EMagicLeapMeshVertexColorMode
---@field BlockVertexColors TArray<FColor>
---@field VertexColorFromConfidenceZero FLinearColor
---@field VertexColorFromConfidenceOne FLinearColor
---@field RemoveOverlappingTriangles boolean
---@field MRMesh UMRMeshComponent
---@field BricksPerFrame int32
UMeshTrackerComponent = {}

---@param NewMeshInfo FMagicLeapTrackingMeshInfo
---@param RequestedMesh TArray<FMagicLeapMeshBlockRequest>
function UMeshTrackerComponent:SelectMeshBlocks(NewMeshInfo, RequestedMesh) end
---@param ID FGuid
---@param Vertices TArray<FVector>
---@param Triangles TArray<int32>
---@param Normals TArray<FVector>
---@param Confidence TArray<float>
function UMeshTrackerComponent:OnMeshTrackerUpdated__DelegateSignature(ID, Vertices, Triangles, Normals, Confidence) end
---@return int32
function UMeshTrackerComponent:GetNumQueuedBlockUpdates() end
---@param InMRMeshPtr UMRMeshComponent
function UMeshTrackerComponent:DisconnectMRMesh(InMRMeshPtr) end
function UMeshTrackerComponent:DisconnectBlockSelector() end
---@param InMRMeshPtr UMRMeshComponent
function UMeshTrackerComponent:ConnectMRMesh(InMRMeshPtr) end
---@param Selector TScriptInterface<IMagicLeapMeshBlockSelectorInterface>
function UMeshTrackerComponent:ConnectBlockSelector(Selector) end


