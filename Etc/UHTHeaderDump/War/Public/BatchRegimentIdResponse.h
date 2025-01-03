#pragma once
#include "CoreMinimal.h"
#include "BatchRegimentIdResponse.generated.h"

USTRUCT(BlueprintType)
struct FBatchRegimentIdResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RegimentIds;
    
    WAR_API FBatchRegimentIdResponse();
};

