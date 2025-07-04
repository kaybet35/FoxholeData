#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlineBlueprintCallProxyBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBlueprintCallProxyBase : public UObject {
    GENERATED_BODY()
public:
    UOnlineBlueprintCallProxyBase();

    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

