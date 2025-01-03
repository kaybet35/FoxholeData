#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "RPCRocketPreLaunchUpdateAlert.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketPreLaunchUpdateAlert {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId TargetMapID;
    
    WAR_API FRPCRocketPreLaunchUpdateAlert();
};

