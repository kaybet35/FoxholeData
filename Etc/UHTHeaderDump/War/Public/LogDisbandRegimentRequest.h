#pragma once
#include "CoreMinimal.h"
#include "LogDisbandRegimentRequest.generated.h"

USTRUCT(BlueprintType)
struct FLogDisbandRegimentRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegimentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegimentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstigatorOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstigatorName;
    
    WAR_API FLogDisbandRegimentRequest();
};

