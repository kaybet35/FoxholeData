#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "CodeNameQuantity.h"
#include "ConquestConfig.generated.h"

UCLASS(Blueprintable)
class WAR_API AConquestConfig : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCodeNameQuantity> ItemsC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCodeNameQuantity> ItemsW;
    
    AConquestConfig(const FObjectInitializer& ObjectInitializer);

};

