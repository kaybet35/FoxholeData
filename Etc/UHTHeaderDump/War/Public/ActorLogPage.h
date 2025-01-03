#pragma once
#include "CoreMinimal.h"
#include "ActorLogEntry.h"
#include "ActorLogPage.generated.h"

USTRUCT(BlueprintType)
struct FActorLogPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorLogEntry> EntryList;
    
    WAR_API FActorLogPage();
};

