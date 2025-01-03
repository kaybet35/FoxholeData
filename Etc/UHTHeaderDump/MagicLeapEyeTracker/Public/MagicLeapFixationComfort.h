#pragma once
#include "CoreMinimal.h"
#include "MagicLeapFixationComfort.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapFixationComfort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FixationDepthIsUncomfortable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FixationDepthViolationHasOccurred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingTimeAtUncomfortableDepth;
    
    MAGICLEAPEYETRACKER_API FMagicLeapFixationComfort();
};

