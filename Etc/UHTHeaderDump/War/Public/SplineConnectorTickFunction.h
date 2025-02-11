#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SplineConnectorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSplineConnectorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    WAR_API FSplineConnectorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSplineConnectorTickFunction> : public TStructOpsTypeTraitsBase2<FSplineConnectorTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

