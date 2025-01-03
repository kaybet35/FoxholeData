#pragma once
#include "CoreMinimal.h"
#include "WarRecord.generated.h"

USTRUCT(BlueprintType)
struct FWarRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConquestWinner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ColonialWarAchievementProgressList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WardenWarAchievementProgressList;
    
    WAR_API FWarRecord();
};

