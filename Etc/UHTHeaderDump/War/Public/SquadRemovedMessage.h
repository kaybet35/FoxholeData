#pragma once
#include "CoreMinimal.h"
#include "SquadRemovedMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadRemovedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    WAR_API FSquadRemovedMessage();
};

