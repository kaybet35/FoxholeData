#pragma once
#include "CoreMinimal.h"
#include "TechStateUpdateMessage.generated.h"

USTRUCT(BlueprintType)
struct FTechStateUpdateMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TechStateID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> CompletedTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ActivityWeights;
    
    WAR_API FTechStateUpdateMessage();
};

