#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WarStatics.generated.h"

UCLASS(Blueprintable)
class WAR_API UWarStatics : public UObject {
    GENERATED_BODY()
public:
    UWarStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNight(const UObject* WorldContextObject);
    
};

