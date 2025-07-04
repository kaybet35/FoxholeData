#pragma once
#include "CoreMinimal.h"
#include "OnTimelineFloatDelegate.h"
#include "TimelineFloatTrack.generated.h"

class UCurveFloat;
class UFloatProperty;

USTRUCT(BlueprintType)
struct FTimelineFloatTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineFloat InterpFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FloatPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFloatProperty* FloatProperty;
    
    ENGINE_API FTimelineFloatTrack();
};

