#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingWrapper.h"
#include "StreamingLevelsToConsider.generated.h"

USTRUCT(BlueprintType)
struct FStreamingLevelsToConsider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelStreamingWrapper> StreamingLevels;
    
    ENGINE_API FStreamingLevelsToConsider();
};

