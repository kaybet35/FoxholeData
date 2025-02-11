#pragma once
#include "CoreMinimal.h"
#include "AssignSquadOfficerToLeaderWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FAssignSquadOfficerToLeaderWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfficerOnlineId;
    
    WAR_API FAssignSquadOfficerToLeaderWarMessage();
};

