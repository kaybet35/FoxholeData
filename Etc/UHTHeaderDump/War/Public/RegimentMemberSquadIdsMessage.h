#pragma once
#include "CoreMinimal.h"
#include "RegimentMemberSquadIdMessage.h"
#include "RegimentMemberSquadIdsMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentMemberSquadIdsMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegimentMemberSquadIdMessage> Messages;
    
    WAR_API FRegimentMemberSquadIdsMessage();
};

