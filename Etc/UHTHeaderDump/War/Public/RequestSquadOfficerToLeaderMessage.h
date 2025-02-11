#pragma once
#include "CoreMinimal.h"
#include "RequestSquadOfficerToLeaderMessage.generated.h"

USTRUCT(BlueprintType)
struct FRequestSquadOfficerToLeaderMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfficerOnlineId;
    
    WAR_API FRequestSquadOfficerToLeaderMessage();
};

