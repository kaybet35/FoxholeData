#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MuzzleOffsetVector_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FMuzzleOffsetVector_NetQuantize : public FVector {
    GENERATED_BODY()
public:
    WAR_API FMuzzleOffsetVector_NetQuantize();
};

