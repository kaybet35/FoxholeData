#pragma once
#include "CoreMinimal.h"
#include "RegimentInfo.h"
#include "RegimentCreatedMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentCreatedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreatorOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegimentInfo RegimentInfo;
    
    WAR_API FRegimentCreatedMessage();
};

