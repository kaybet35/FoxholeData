#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MagicLeapMeshBlockInfo.h"
#include "MagicLeapTrackingMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct FMagicLeapTrackingMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagicLeapMeshBlockInfo> BlockData;
    
    MAGICLEAP_API FMagicLeapTrackingMeshInfo();
};

