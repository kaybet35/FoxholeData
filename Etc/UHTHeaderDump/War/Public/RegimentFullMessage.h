#pragma once
#include "CoreMinimal.h"
#include "RegimentFullMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentFullMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    WAR_API FRegimentFullMessage();
};

