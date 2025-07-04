#pragma once
#include "CoreMinimal.h"
#include "OnTimelineVectorDelegate.h"
#include "TimelineVectorTrack.generated.h"

class UCurveVector;
class UStructProperty;

USTRUCT(BlueprintType)
struct FTimelineVectorTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* VectorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineVector InterpFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VectorPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStructProperty* VectorProperty;
    
    ENGINE_API FTimelineVectorTrack();
};

