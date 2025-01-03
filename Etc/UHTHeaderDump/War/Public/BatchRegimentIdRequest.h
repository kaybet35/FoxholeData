#pragma once
#include "CoreMinimal.h"
#include "BatchRegimentIdRequest.generated.h"

USTRUCT(BlueprintType)
struct FBatchRegimentIdRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlineIds;
    
    WAR_API FBatchRegimentIdRequest();
};

