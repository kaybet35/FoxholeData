#pragma once
#include "CoreMinimal.h"
#include "RegimentInfo.h"
#include "RegimentInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FRegimentInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegimentInfo> RegimentInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RegimentIds;
    
    WAR_API FRegimentInfoResponse();
};

