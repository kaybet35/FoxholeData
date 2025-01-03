#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "WarAchievementConfig.h"
#include "WarAchievementsStyle.generated.h"

USTRUCT(BlueprintType)
struct FWarAchievementsStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarAchievementConfig> WarAchievementConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ProgressBarFill;
    
    WAR_API FWarAchievementsStyle();
};

