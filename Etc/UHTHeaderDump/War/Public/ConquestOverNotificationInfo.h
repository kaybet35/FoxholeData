#pragma once
#include "CoreMinimal.h"
#include "ConquestOverNotificationInfo.generated.h"

USTRUCT(BlueprintType)
struct FConquestOverNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConquestWinner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 NumColonialAchievements;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 NumWardenAchievements;
    
    WAR_API FConquestOverNotificationInfo();
};

