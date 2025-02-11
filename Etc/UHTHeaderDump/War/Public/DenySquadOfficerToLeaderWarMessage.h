#pragma once
#include "CoreMinimal.h"
#include "DenySquadOfficerToLeaderWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FDenySquadOfficerToLeaderWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    WAR_API FDenySquadOfficerToLeaderWarMessage();
};

