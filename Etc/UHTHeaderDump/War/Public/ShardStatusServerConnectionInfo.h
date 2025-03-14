#pragma once
#include "CoreMinimal.h"
#include "ShardStatusServerConnectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FShardStatusServerConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString steamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ipAddress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeaconPort;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 packedWarStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 packedServerState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 colonialQueueSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 wardenQueueSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 serverType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 openColonialSlots;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 openWardenSlots;
    
    WAR_API FShardStatusServerConnectionInfo();
};

