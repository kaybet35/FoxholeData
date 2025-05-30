#pragma once
#include "CoreMinimal.h"
#include "QuantizedTimestamp.generated.h"

USTRUCT(BlueprintType)
struct FQuantizedTimestamp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    WAR_API FQuantizedTimestamp();
};

