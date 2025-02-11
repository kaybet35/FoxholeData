#pragma once
#include "CoreMinimal.h"
#include "TechStateEndMessage.generated.h"

USTRUCT(BlueprintType)
struct FTechStateEndMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TechStateID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> CompletedTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ActivityWeights;
    
    WAR_API FTechStateEndMessage();
};

