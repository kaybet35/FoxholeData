#pragma once
#include "CoreMinimal.h"
#include "ActorLogEntry.h"
#include "ActorLog.generated.h"

USTRUCT(BlueprintType)
struct FActorLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FActorLogEntry> Entries;
    
    WAR_API FActorLog();
};

