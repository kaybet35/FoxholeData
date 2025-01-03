#pragma once
#include "CoreMinimal.h"
#include "RegionConnectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FRegionConnectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapCodename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 serverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString steamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ipAddress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Port;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PortBeacon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 packedWarStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 packedServerState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 colonialQueueSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 wardenQueueSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ColonialOpenSlots;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 WardenOpenSlots;
    
    WAR_API FRegionConnectionInfo();
};

