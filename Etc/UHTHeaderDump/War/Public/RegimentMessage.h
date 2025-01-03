#pragma once
#include "CoreMinimal.h"
#include "Regiment.h"
#include "RegimentMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegiment Regiment;
    
    WAR_API FRegimentMessage();
};

