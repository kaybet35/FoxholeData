#pragma once
#include "CoreMinimal.h"
#include "RegimentIdChangedMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentIdChangedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    WAR_API FRegimentIdChangedMessage();
};

