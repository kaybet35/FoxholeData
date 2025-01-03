#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "UObjectHandle.h"
#include "RPCBorderBaseClaimRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCBorderBaseClaimRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle ObjectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId OriginMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RoadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId ClaimingFaction;
    
    WAR_API FRPCBorderBaseClaimRequest();
};

