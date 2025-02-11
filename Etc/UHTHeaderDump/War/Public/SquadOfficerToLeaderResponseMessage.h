#pragma once
#include "CoreMinimal.h"
#include "SquadOfficerToLeaderResponseMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadOfficerToLeaderResponseMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestSuccessful;
    
    WAR_API FSquadOfficerToLeaderResponseMessage();
};

