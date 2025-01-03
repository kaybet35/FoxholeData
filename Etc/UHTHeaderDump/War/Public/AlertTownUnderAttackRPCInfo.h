#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "AlertTownUnderAttackRPCInfo.generated.h"

USTRUCT(BlueprintType)
struct FAlertTownUnderAttackRPCInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    WAR_API FAlertTownUnderAttackRPCInfo();
};

