#pragma once
#include "CoreMinimal.h"
#include "SquadMember.h"
#include "JoinSquadWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FJoinSquadWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadMember NewMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewMemberRegimentTag;
    
    WAR_API FJoinSquadWarMessage();
};

