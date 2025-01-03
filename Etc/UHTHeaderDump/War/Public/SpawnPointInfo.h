#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "SpawnPointInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpawnPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpawnPointType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SpawnCharges;
    
    WAR_API FSpawnPointInfo();
};

