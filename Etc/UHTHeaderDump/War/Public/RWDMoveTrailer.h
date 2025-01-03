#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize100 -FallbackName=Vector_NetQuantize100
#include "RWDMoveTrailer.generated.h"

USTRUCT(BlueprintType)
struct FRWDMoveTrailer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 Loc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MovementMode;
    
    WAR_API FRWDMoveTrailer();
};

