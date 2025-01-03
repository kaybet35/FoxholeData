#pragma once
#include "CoreMinimal.h"
#include "SavedBallastInfo.generated.h"

USTRUCT(BlueprintType)
struct FSavedBallastInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float TargetFloodPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float FloodPercent;
    
    WAR_API FSavedBallastInfo();
};

