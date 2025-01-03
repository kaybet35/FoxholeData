#pragma once
#include "CoreMinimal.h"
#include "RemoveFromSquadWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FRemoveFromSquadWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    WAR_API FRemoveFromSquadWarMessage();
};

