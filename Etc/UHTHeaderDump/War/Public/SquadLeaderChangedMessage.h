#pragma once
#include "CoreMinimal.h"
#include "SquadLeaderChangedMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadLeaderChangedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderName;
    
    WAR_API FSquadLeaderChangedMessage();
};

