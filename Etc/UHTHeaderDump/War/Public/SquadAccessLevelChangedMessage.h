#pragma once
#include "CoreMinimal.h"
#include "SquadAccessLevelChangedMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadAccessLevelChangedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 AccessLevel;
    
    WAR_API FSquadAccessLevelChangedMessage();
};

