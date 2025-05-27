#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "SnapshotManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSnapshotManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    WAR_API FSnapshotManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSnapshotManagerTickFunction> : public TStructOpsTypeTraitsBase2<FSnapshotManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

