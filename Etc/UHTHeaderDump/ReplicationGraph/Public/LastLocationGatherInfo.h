#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LastLocationGatherInfo.generated.h"

class UNetConnection;

USTRUCT(BlueprintType)
struct FLastLocationGatherInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastLocation;
    
    REPLICATIONGRAPH_API FLastLocationGatherInfo();
};

