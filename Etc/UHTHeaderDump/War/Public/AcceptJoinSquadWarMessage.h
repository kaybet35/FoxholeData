#pragma once
#include "CoreMinimal.h"
#include "JoinSquadWarMessage.h"
#include "AcceptJoinSquadWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FAcceptJoinSquadWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinSquadWarMessage JoinMessage;
    
    WAR_API FAcceptJoinSquadWarMessage();
};

