#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Vector2D_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct FVector2D_NetQuantize : public FVector {
    GENERATED_BODY()
public:
    WAR_API FVector2D_NetQuantize();
};

