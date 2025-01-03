#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Vector2D_NetQuantize10.generated.h"

USTRUCT(BlueprintType)
struct FVector2D_NetQuantize10 : public FVector2D {
    GENERATED_BODY()
public:
    WAR_API FVector2D_NetQuantize10();
};

