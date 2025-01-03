#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "RPCRocketLaunchFail.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketLaunchFail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    WAR_API FRPCRocketLaunchFail();
};

