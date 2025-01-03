#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "UObjectHandle.h"
#include "RPCRocketLaunchCodeRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketLaunchCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LocalStrikeLocation;
    
    WAR_API FRPCRocketLaunchCodeRequest();
};

