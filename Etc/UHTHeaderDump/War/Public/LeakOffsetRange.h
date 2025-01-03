#pragma once
#include "CoreMinimal.h"
#include "ELeakOffsetRangeSide.h"
#include "LeakOffsetRange.generated.h"

USTRUCT(BlueprintType)
struct FLeakOffsetRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeStartX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeEndX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELeakOffsetRangeSide Side;
    
    WAR_API FLeakOffsetRange();
};

