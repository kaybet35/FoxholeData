#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "WarBenchmarkMovementRecorderTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FWarBenchmarkMovementRecorderTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    WAR_API FWarBenchmarkMovementRecorderTickFunction();
};

template<>
struct TStructOpsTypeTraits<FWarBenchmarkMovementRecorderTickFunction> : public TStructOpsTypeTraitsBase2<FWarBenchmarkMovementRecorderTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

