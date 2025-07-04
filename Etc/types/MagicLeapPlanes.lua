---@meta

---@class FMagicLeapPlaneBoundaries
---@field ID FGuid
---@field Boundaries TArray<FMagicLeapPlaneBoundary>
local FMagicLeapPlaneBoundaries = {}



---@class FMagicLeapPlaneBoundary
---@field Polygon FMagicLeapPolygon
---@field Holes TArray<FMagicLeapPolygon>
local FMagicLeapPlaneBoundary = {}



---@class FMagicLeapPlaneResult
---@field PlanePosition FVector
---@field PlaneOrientation FRotator
---@field ContentOrientation FRotator
---@field PlaneDimensions FVector2D
---@field PlaneFlags TArray<EMagicLeapPlaneQueryFlags>
---@field ID FGuid
local FMagicLeapPlaneResult = {}



---@class FMagicLeapPlanesQuery
---@field Flags TArray<EMagicLeapPlaneQueryFlags>
---@field SearchVolume UBoxComponent
---@field MaxResults int32
---@field MinHoleLength float
---@field MinPlaneArea float
---@field SearchVolumePosition FVector
---@field SearchVolumeOrientation FQuat
---@field SearchVolumeExtents FVector
local FMagicLeapPlanesQuery = {}



---@class FMagicLeapPolygon
---@field Vertices TArray<FVector>
local FMagicLeapPolygon = {}



---@class UMagicLeapPlanesComponent : USceneComponent
---@field QueryFlags TArray<EMagicLeapPlaneQueryFlags>
---@field SearchVolume UBoxComponent
---@field MaxResults int32
---@field MinHolePerimeter float
---@field MinPlaneArea float
---@field OnPlanesQueryResult FMagicLeapPlanesComponentOnPlanesQueryResult
local UMagicLeapPlanesComponent = {}

---@return boolean
function UMagicLeapPlanesComponent:RequestPlanesAsync() end


---@class UMagicLeapPlanesFunctionLibrary : UBlueprintFunctionLibrary
local UMagicLeapPlanesFunctionLibrary = {}

---@param InPriority TArray<EMagicLeapPlaneQueryFlags>
---@param InFlagsToReorder TArray<EMagicLeapPlaneQueryFlags>
---@param OutReorderedFlags TArray<EMagicLeapPlaneQueryFlags>
function UMagicLeapPlanesFunctionLibrary:ReorderPlaneFlags(InPriority, InFlagsToReorder, OutReorderedFlags) end
---@param InQueryFlags TArray<EMagicLeapPlaneQueryFlags>
---@param InResultFlags TArray<EMagicLeapPlaneQueryFlags>
---@param OutFlags TArray<EMagicLeapPlaneQueryFlags>
function UMagicLeapPlanesFunctionLibrary:RemoveFlagsNotInQuery(InQueryFlags, InResultFlags, OutFlags) end
---@param Query FMagicLeapPlanesQuery
---@param ResultDelegate FPlanesQueryBeginAsyncResultDelegate
---@return boolean
function UMagicLeapPlanesFunctionLibrary:PlanesQueryBeginAsync(Query, ResultDelegate) end
---@return boolean
function UMagicLeapPlanesFunctionLibrary:IsTrackerValid() end
---@param ContentActor AActor
---@param PlaneResult FMagicLeapPlaneResult
---@return FTransform
function UMagicLeapPlanesFunctionLibrary:GetContentScale(ContentActor, PlaneResult) end
---@return boolean
function UMagicLeapPlanesFunctionLibrary:DestroyTracker() end
---@return boolean
function UMagicLeapPlanesFunctionLibrary:CreateTracker() end


