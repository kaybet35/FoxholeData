#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "SpawnPoint.h"
#include "DeploymentQueueEntry.generated.h"

class ASimPlayerController;

USTRUCT(BlueprintType)
struct FDeploymentQueueEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimPlayerController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId TargetMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPoint TravelPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRecovery;
    
    WAR_API FDeploymentQueueEntry();
};

