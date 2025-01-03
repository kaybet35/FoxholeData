#pragma once
#include "CoreMinimal.h"
#include "MagicLeapEyeBlinkState.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapEyeBlinkState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeftEyeBlinked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RightEyeBlinked;
    
    MAGICLEAPEYETRACKER_API FMagicLeapEyeBlinkState();
};

