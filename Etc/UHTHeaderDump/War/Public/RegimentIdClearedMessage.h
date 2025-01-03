#pragma once
#include "CoreMinimal.h"
#include "RegimentIdClearedMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentIdClearedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    WAR_API FRegimentIdClearedMessage();
};

