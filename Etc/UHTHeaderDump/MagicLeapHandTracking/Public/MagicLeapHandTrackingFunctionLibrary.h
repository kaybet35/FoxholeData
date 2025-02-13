#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceHandle -FallbackName=LiveLinkSourceHandle
#include "EMagicLeapGestureTransformSpace.h"
#include "EMagicLeapHandTrackingGesture.h"
#include "EMagicLeapHandTrackingGestureFilterLevel.h"
#include "EMagicLeapHandTrackingKeypoint.h"
#include "EMagicLeapHandTrackingKeypointFilterLevel.h"
#include "MagicLeapHandTrackingFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPHANDTRACKING_API UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapHandTrackingFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);
    
    UFUNCTION(BlueprintCallable)
    static bool SetConfiguration(const TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
    
    UFUNCTION(BlueprintCallable)
    static float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandThumbTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandIndexFingerTip(EControllerHand Hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandCenterNormalized(EControllerHand Hand, FVector& HandCenterNormalized);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandCenter(EControllerHand Hand, FTransform& HandCenter);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGestureKeypointTransform(EControllerHand Hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGestureKeypoints(EControllerHand Hand, TArray<FTransform>& Keypoints);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentGestureConfidence(EControllerHand Hand, float& Confidence);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentGesture(EControllerHand Hand, EMagicLeapHandTrackingGesture& Gesture);
    
    UFUNCTION(BlueprintCallable)
    static bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled);
    
};

