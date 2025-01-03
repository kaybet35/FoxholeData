#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "ERocketLaunchResponse.h"
#include "EWorldConquestMapId.h"
#include "UObjectHandle.h"
#include "WarGridCoordinate.h"
#include "RPCRocketLaunchCodeResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketLaunchCodeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERocketLaunchResponse TraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LocalStrikeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarGridCoordinate Coordinate;
    
    WAR_API FRPCRocketLaunchCodeResponse();
};

