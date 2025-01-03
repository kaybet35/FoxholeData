#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnalyticsUnstuckInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsUnstuckInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NewLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUnstuckCommandsUsed;
    
    WAR_API FAnalyticsUnstuckInfo();
};

