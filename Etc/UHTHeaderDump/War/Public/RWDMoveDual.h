#pragma once
#include "CoreMinimal.h"
#include "Vector2D_NetQuantize10.h"
#include "RWDMoveDual.generated.h"

USTRUCT(BlueprintType)
struct FRWDMoveDual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D_NetQuantize10 InAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 View;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CompressedMoveFlags;
    
    WAR_API FRWDMoveDual();
};

