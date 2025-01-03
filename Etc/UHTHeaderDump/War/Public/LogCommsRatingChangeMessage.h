#pragma once
#include "CoreMinimal.h"
#include "LogCommsRatingChangeMessage.generated.h"

USTRUCT(BlueprintType)
struct FLogCommsRatingChangeMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 NewCondition;
    
    WAR_API FLogCommsRatingChangeMessage();
};

