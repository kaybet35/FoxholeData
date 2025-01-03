#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "QueuedPlayer.generated.h"

class AWarBeaconClient;

USTRUCT(BlueprintType)
struct FQueuedPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWarBeaconClient* BeaconClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsConnected;
    
    WAR_API FQueuedPlayer();
};

