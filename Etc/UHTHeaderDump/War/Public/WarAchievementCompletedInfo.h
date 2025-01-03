#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EWarAchievementType.h"
#include "WarAchievementCompletedInfo.generated.h"

USTRUCT(BlueprintType)
struct FWarAchievementCompletedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarAchievementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    WAR_API FWarAchievementCompletedInfo();
};

