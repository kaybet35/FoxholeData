#pragma once
#include "CoreMinimal.h"
#include "SquadOnlineCounts.h"
#include "SquadOnlineCountsMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadOnlineCountsMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSquadOnlineCounts> SquadOnlineCounts;
    
    WAR_API FSquadOnlineCountsMessage();
};

