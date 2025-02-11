#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "LandscapeDeformationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeDeformationTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    WAR_API FLandscapeDeformationTickFunction();
};

template<>
struct TStructOpsTypeTraits<FLandscapeDeformationTickFunction> : public TStructOpsTypeTraitsBase2<FLandscapeDeformationTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

