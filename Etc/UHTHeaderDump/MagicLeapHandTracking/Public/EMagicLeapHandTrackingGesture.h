#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHandTrackingGesture.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapHandTrackingGesture : uint8 {
    Finger,
    Fist,
    Pinch,
    Thumb,
    L,
    OpenHand,
    OpenHandBack = OpenHand,
    Ok,
    C,
    NoPose,
    NoHand,
};

