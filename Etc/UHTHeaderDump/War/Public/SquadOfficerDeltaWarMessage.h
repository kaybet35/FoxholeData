#pragma once
#include "CoreMinimal.h"
#include "SquadOfficerDeltaWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadOfficerDeltaWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewOfficerState;
    
    WAR_API FSquadOfficerDeltaWarMessage();
};

