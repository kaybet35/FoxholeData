---@meta

---@class ULiveLinkMagicLeapHandTrackingSourceFactory : ULiveLinkSourceFactory
ULiveLinkMagicLeapHandTrackingSourceFactory = {}


---@class UMagicLeapHandTrackingFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapHandTrackingFunctionLibrary = {}

---@param Gesture EMagicLeapHandTrackingGesture
---@param Confidence float
function UMagicLeapHandTrackingFunctionLibrary:SetStaticGestureConfidenceThreshold(Gesture, Confidence) end
---@param StaticGesturesToActivate TArray<EMagicLeapHandTrackingGesture>
---@param KeypointsFilterLevel EMagicLeapHandTrackingKeypointFilterLevel
---@param GestureFilterLevel EMagicLeapHandTrackingGestureFilterLevel
---@param bTrackingEnabled boolean
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:SetConfiguration(StaticGesturesToActivate, KeypointsFilterLevel, GestureFilterLevel, bTrackingEnabled) end
---@param Gesture EMagicLeapHandTrackingGesture
---@return float
function UMagicLeapHandTrackingFunctionLibrary:GetStaticGestureConfidenceThreshold(Gesture) end
---@param SourceHandle FLiveLinkSourceHandle
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetMagicLeapHandTrackingLiveLinkSource(SourceHandle) end
---@param Hand EControllerHand
---@param TransformSpace EMagicLeapGestureTransformSpace
---@param Secondary FTransform
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetHandThumbTip(Hand, TransformSpace, Secondary) end
---@param Hand EControllerHand
---@param TransformSpace EMagicLeapGestureTransformSpace
---@param Pointer FTransform
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetHandIndexFingerTip(Hand, TransformSpace, Pointer) end
---@param Hand EControllerHand
---@param HandCenterNormalized FVector
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetHandCenterNormalized(Hand, HandCenterNormalized) end
---@param Hand EControllerHand
---@param HandCenter FTransform
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetHandCenter(Hand, HandCenter) end
---@param Hand EControllerHand
---@param Keypoint EMagicLeapHandTrackingKeypoint
---@param TransformSpace EMagicLeapGestureTransformSpace
---@param Transform FTransform
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetGestureKeypointTransform(Hand, Keypoint, TransformSpace, Transform) end
---@param Hand EControllerHand
---@param Keypoints TArray<FTransform>
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetGestureKeypoints(Hand, Keypoints) end
---@param Hand EControllerHand
---@param Confidence float
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetCurrentGestureConfidence(Hand, Confidence) end
---@param Hand EControllerHand
---@param Gesture EMagicLeapHandTrackingGesture
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetCurrentGesture(Hand, Gesture) end
---@param ActiveStaticGestures TArray<EMagicLeapHandTrackingGesture>
---@param KeypointsFilterLevel EMagicLeapHandTrackingKeypointFilterLevel
---@param GestureFilterLevel EMagicLeapHandTrackingGestureFilterLevel
---@param bTrackingEnabled boolean
---@return boolean
function UMagicLeapHandTrackingFunctionLibrary:GetConfiguration(ActiveStaticGestures, KeypointsFilterLevel, GestureFilterLevel, bTrackingEnabled) end


