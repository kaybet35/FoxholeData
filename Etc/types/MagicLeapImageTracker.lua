---@meta

---@class FMagicLeapImageTrackerTarget
local FMagicLeapImageTrackerTarget = {}


---@class UMagicLeapImageTrackerComponent : USceneComponent
---@field TargetImageTexture UTexture2D
---@field Name FString
---@field LongerDimension float
---@field bIsStationary boolean
---@field bUseUnreliablePose boolean
---@field OnSetImageTargetSucceeded FMagicLeapImageTrackerComponentOnSetImageTargetSucceeded
---@field OnSetImageTargetFailed FMagicLeapImageTrackerComponentOnSetImageTargetFailed
---@field OnImageTargetFound FMagicLeapImageTrackerComponentOnImageTargetFound
---@field OnImageTargetLost FMagicLeapImageTrackerComponentOnImageTargetLost
---@field OnImageTargetUnreliableTracking FMagicLeapImageTrackerComponentOnImageTargetUnreliableTracking
local UMagicLeapImageTrackerComponent = {}

---@param ImageTarget UTexture2D
---@return boolean
function UMagicLeapImageTrackerComponent:SetTargetAsync(ImageTarget) end
---@return boolean
function UMagicLeapImageTrackerComponent:RemoveTargetAsync() end


---@class UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary
local UMagicLeapImageTrackerFunctionLibrary = {}

---@param MaxSimultaneousTargets int32
function UMagicLeapImageTrackerFunctionLibrary:SetMaxSimultaneousTargets(MaxSimultaneousTargets) end
---@return boolean
function UMagicLeapImageTrackerFunctionLibrary:IsImageTrackingEnabled() end
---@return int32
function UMagicLeapImageTrackerFunctionLibrary:GetMaxSimultaneousTargets() end
---@param bEnable boolean
function UMagicLeapImageTrackerFunctionLibrary:EnableImageTracking(bEnable) end


