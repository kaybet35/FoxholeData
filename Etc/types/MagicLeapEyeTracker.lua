---@meta

---@class FMagicLeapEyeBlinkState
---@field LeftEyeBlinked boolean
---@field RightEyeBlinked boolean
local FMagicLeapEyeBlinkState = {}



---@class FMagicLeapFixationComfort
---@field FixationDepthIsUncomfortable boolean
---@field FixationDepthViolationHasOccurred boolean
---@field RemainingTimeAtUncomfortableDepth float
local FMagicLeapFixationComfort = {}



---@class UMagicLeapEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary
local UMagicLeapEyeTrackerFunctionLibrary = {}

---@param FixationComfort FMagicLeapFixationComfort
---@return boolean
function UMagicLeapEyeTrackerFunctionLibrary:GetFixationComfort(FixationComfort) end
---@param BlinkState FMagicLeapEyeBlinkState
---@return boolean
function UMagicLeapEyeTrackerFunctionLibrary:GetEyeBlinkState(BlinkState) end
---@return EMagicLeapEyeTrackingCalibrationStatus
function UMagicLeapEyeTrackerFunctionLibrary:GetCalibrationStatus() end


