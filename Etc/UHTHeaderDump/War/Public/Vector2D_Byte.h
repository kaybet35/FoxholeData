#pragma once
#include "CoreMinimal.h"
#include "Vector2D_Byte.generated.h"

USTRUCT(BlueprintType)
struct FVector2D_Byte {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Y;
    
    WAR_API FVector2D_Byte();
};

