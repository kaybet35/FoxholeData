---@meta

---@class FLuminARLightEstimate
---@field bIsValid boolean
---@field PixelIntensity float
---@field RGBScaleFactor FVector
FLuminARLightEstimate = {}



---@class ULuminARFrameFunctionLibrary : UBlueprintFunctionLibrary
ULuminARFrameFunctionLibrary = {}

---@param WorldContextObject UObject
---@param ScreenPosition FVector2D
---@param TraceChannels TSet<ELuminARLineTraceChannel>
---@param OutHitResults TArray<FARTraceResult>
---@return boolean
function ULuminARFrameFunctionLibrary:LuminARLineTrace(WorldContextObject, ScreenPosition, TraceChannels, OutHitResults) end
---@return ELuminARTrackingState
function ULuminARFrameFunctionLibrary:GetTrackingState() end
---@param OutLightEstimate FLuminARLightEstimate
function ULuminARFrameFunctionLibrary:GetLightEstimation(OutLightEstimate) end


---@class ULuminARSessionConfig : UARSessionConfig
---@field MaxPlaneQueryResults int32
---@field MinPlaneArea int32
---@field bArbitraryOrientationPlaneDetection boolean
---@field PlaneSearchExtents FVector
---@field PlaneQueryFlags TArray<EMagicLeapPlaneQueryFlags>
---@field bDiscardZeroExtentPlanes boolean
ULuminARSessionConfig = {}



---@class ULuminARSessionFunctionLibrary : UBlueprintFunctionLibrary
ULuminARSessionFunctionLibrary = {}

---@param WorldContextObject UObject
---@param LatentInfo FLatentActionInfo
---@param Configuration ULuminARSessionConfig
function ULuminARSessionFunctionLibrary:StartLuminARSession(WorldContextObject, LatentInfo, Configuration) end


---@class ULuminARUObjectManager : UObject
---@field AllAnchors TArray<UARPin>
ULuminARUObjectManager = {}


