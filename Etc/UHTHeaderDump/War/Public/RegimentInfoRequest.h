#pragma once
#include "CoreMinimal.h"
#include "RegimentInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct FRegimentInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RegimentIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OnlineIds;
    
    WAR_API FRegimentInfoRequest();
};

