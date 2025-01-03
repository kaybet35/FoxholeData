#pragma once
#include "CoreMinimal.h"
#include "RegimentMemberSquadIdMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentMemberSquadIdMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    WAR_API FRegimentMemberSquadIdMessage();
};

