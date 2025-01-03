#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMagicLeapEyeTrackingCalibrationStatus.h"
#include "MagicLeapEyeBlinkState.h"
#include "MagicLeapFixationComfort.h"
#include "MagicLeapEyeTrackerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPEYETRACKER_API UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapEyeTrackerFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFixationComfort(FMagicLeapFixationComfort& FixationComfort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
    
};

