#pragma once
#include "CoreMinimal.h"
#include "RegionLogEntry.h"
#include "RegionLog.generated.h"

USTRUCT(BlueprintType)
struct FRegionLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegionLogEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextEntryIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NextRegionLogID;
    
    WAR_API FRegionLog();
};

