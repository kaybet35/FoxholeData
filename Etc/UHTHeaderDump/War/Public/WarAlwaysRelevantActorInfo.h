#pragma once
#include "CoreMinimal.h"
#include "WarAlwaysRelevantActorInfo.generated.h"

class AActor;
class UNetConnection;

USTRUCT(BlueprintType)
struct FWarAlwaysRelevantActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LastActors;
    
    WAR_API FWarAlwaysRelevantActorInfo();
};

