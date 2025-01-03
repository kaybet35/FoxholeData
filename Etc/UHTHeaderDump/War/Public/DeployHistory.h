#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "DeployHistory.generated.h"

USTRUCT(BlueprintType)
struct FDeployHistory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastDeployTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastDeployTimeAlt;
    
public:
    WAR_API FDeployHistory();
};

