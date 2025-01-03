#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "RPCRocketTargetUpdate.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketTargetUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LocalStrikeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchTimeRemaining;
    
    WAR_API FRPCRocketTargetUpdate();
};

