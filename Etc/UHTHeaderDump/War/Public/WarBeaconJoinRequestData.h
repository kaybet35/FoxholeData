#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EQueueType.h"
#include "EServerTravelOriginType.h"
#include "SpawnPoint.h"
#include "WarBeaconJoinRequestData.generated.h"

USTRUCT(BlueprintType)
struct FWarBeaconJoinRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ClientVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId TeamId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerTravelOriginType ServerTravelOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeSelfServeFactionUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQueueType QueueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAtOfflineCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPoint TravelPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    WAR_API FWarBeaconJoinRequestData();
};

