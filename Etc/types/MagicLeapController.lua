---@meta

---@class FMagicLeapTouchpadGesture
---@field Hand EControllerHand
---@field MotionSource FName
---@field Type EMagicLeapTouchpadGestureType
---@field Direction EMagicLeapTouchpadGestureDirection
---@field PositionAndForce FVector
---@field Speed float
---@field Distance float
---@field FingerGap float
---@field Radius float
---@field Angle float
FMagicLeapTouchpadGesture = {}



---@class UMagicLeapControllerFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapControllerFunctionLibrary = {}

---@param Hand EControllerHand
---@param MotionSource FName
---@return boolean
function UMagicLeapControllerFunctionLibrary:SetMotionSourceForHand(Hand, MotionSource) end
---@param TrackingMode EMagicLeapControllerTrackingMode
---@return boolean
function UMagicLeapControllerFunctionLibrary:SetControllerTrackingMode(TrackingMode) end
---@param MotionSource FName
---@param LEDPattern EMagicLeapControllerLEDPattern
---@param LEDColor EMagicLeapControllerLEDColor
---@param DurationInSec float
---@return boolean
function UMagicLeapControllerFunctionLibrary:PlayLEDPattern(MotionSource, LEDPattern, LEDColor, DurationInSec) end
---@param MotionSource FName
---@param LEDEffect EMagicLeapControllerLEDEffect
---@param LEDSpeed EMagicLeapControllerLEDSpeed
---@param LEDPattern EMagicLeapControllerLEDPattern
---@param LEDColor EMagicLeapControllerLEDColor
---@param DurationInSec float
---@return boolean
function UMagicLeapControllerFunctionLibrary:PlayLEDEffect(MotionSource, LEDEffect, LEDSpeed, LEDPattern, LEDColor, DurationInSec) end
---@param MotionSource FName
---@param HapticPattern EMagicLeapControllerHapticPattern
---@param Intensity EMagicLeapControllerHapticIntensity
---@return boolean
function UMagicLeapControllerFunctionLibrary:PlayHapticPattern(MotionSource, HapticPattern, Intensity) end
---@param Hand EControllerHand
---@param LEDEffect EMagicLeapControllerLEDEffect
---@param LEDSpeed EMagicLeapControllerLEDSpeed
---@param LEDPattern EMagicLeapControllerLEDPattern
---@param LEDColor EMagicLeapControllerLEDColor
---@param DurationInSec float
---@return boolean
function UMagicLeapControllerFunctionLibrary:PlayControllerLEDEffect(Hand, LEDEffect, LEDSpeed, LEDPattern, LEDColor, DurationInSec) end
---@param Hand EControllerHand
---@param LEDPattern EMagicLeapControllerLEDPattern
---@param LEDColor EMagicLeapControllerLEDColor
---@param DurationInSec float
---@return boolean
function UMagicLeapControllerFunctionLibrary:PlayControllerLED(Hand, LEDPattern, LEDColor, DurationInSec) end
---@param Hand EControllerHand
---@param HapticPattern EMagicLeapControllerHapticPattern
---@param Intensity EMagicLeapControllerHapticIntensity
---@return boolean
function UMagicLeapControllerFunctionLibrary:PlayControllerHapticFeedback(Hand, HapticPattern, Intensity) end
---@return int32
function UMagicLeapControllerFunctionLibrary:MaxSupportedMagicLeapControllers() end
---@param MotionSource FName
---@return boolean
function UMagicLeapControllerFunctionLibrary:IsMLControllerConnected(MotionSource) end
function UMagicLeapControllerFunctionLibrary:InvertControllerMapping() end
---@param Hand EControllerHand
---@return FName
function UMagicLeapControllerFunctionLibrary:GetMotionSourceForHand(Hand) end
---@param Hand EControllerHand
---@return EMagicLeapControllerType
function UMagicLeapControllerFunctionLibrary:GetMLControllerType(Hand) end
---@param MotionSource FName
---@return EControllerHand
function UMagicLeapControllerFunctionLibrary:GetHandForMotionSource(MotionSource) end
---@param MotionSource FName
---@return EMagicLeapControllerType
function UMagicLeapControllerFunctionLibrary:GetControllerType(MotionSource) end
---@return EMagicLeapControllerTrackingMode
function UMagicLeapControllerFunctionLibrary:GetControllerTrackingMode() end
---@param ControllerIndex int32
---@param Hand EControllerHand
---@return boolean
function UMagicLeapControllerFunctionLibrary:GetControllerMapping(ControllerIndex, Hand) end


---@class UMagicLeapTouchpadGesturesComponent : UActorComponent
---@field OnTouchpadGestureStart FMagicLeapTouchpadGesturesComponentOnTouchpadGestureStart
---@field OnTouchpadGestureContinue FMagicLeapTouchpadGesturesComponentOnTouchpadGestureContinue
---@field OnTouchpadGestureEnd FMagicLeapTouchpadGesturesComponentOnTouchpadGestureEnd
UMagicLeapTouchpadGesturesComponent = {}



