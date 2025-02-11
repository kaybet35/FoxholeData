#pragma once
#include "CoreMinimal.h"
#include "RegionLog.h"
#include "RegionLogs.generated.h"

USTRUCT(BlueprintType)
struct FRegionLogs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionLog Colonial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionLog Warden;
    
    WAR_API FRegionLogs();
};

