#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "AlertTownDestroyedRPCInfo.generated.h"

USTRUCT(BlueprintType)
struct FAlertTownDestroyedRPCInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    WAR_API FAlertTownDestroyedRPCInfo();
};

