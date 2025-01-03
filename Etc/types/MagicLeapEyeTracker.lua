---@meta

---@class FMagicLeapEyeBlinkState
---@field LeftEyeBlinked boolean
---@field RightEyeBlinked boolean
FMagicLeapEyeBlinkState = {}



---@class FMagicLeapFixationComfort
---@field FixationDepthIsUncomfortable boolean
---@field FixationDepthViolationHasOccurred boolean
---@field RemainingTimeAtUncomfortableDepth float
FMagicLeapFixationComfort = {}



---@class UMagicLeapEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapEyeTrackerFunctionLibrary = {}

---@param FixationComfort FMagicLeapFixationComfort
---@return boolean
function UMagicLeapEyeTrackerFunctionLibrary:GetFixationComfort(FixationComfort) end
---@param BlinkState FMagicLeapEyeBlinkState
---@return boolean
function UMagicLeapEyeTrackerFunctionLibrary:GetEyeBlinkState(BlinkState) end
---@return EMagicLeapEyeTrackingCalibrationStatus
function UMagicLeapEyeTrackerFunctionLibrary:GetCalibrationStatus() end


