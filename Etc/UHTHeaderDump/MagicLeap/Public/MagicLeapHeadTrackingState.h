#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHeadTrackingError.h"
#include "EMagicLeapHeadTrackingMode.h"
#include "MagicLeapHeadTrackingState.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapHeadTrackingState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapHeadTrackingMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapHeadTrackingError Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Confidence;
    
    MAGICLEAP_API FMagicLeapHeadTrackingState();
};

