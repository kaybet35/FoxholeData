#pragma once
#include "CoreMinimal.h"
#include "SquadOfficerDeltaMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadOfficerDeltaMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewOfficerState;
    
    WAR_API FSquadOfficerDeltaMessage();
};

