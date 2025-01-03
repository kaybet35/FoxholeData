#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelStreamingDynamic -FallbackName=LevelStreamingDynamic
#include "LevelStreamingHex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WAR_API ULevelStreamingHex : public ULevelStreamingDynamic {
    GENERATED_BODY()
public:
    ULevelStreamingHex();

private:
    UFUNCTION(BlueprintCallable)
    void OnUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnHidden();
    
};

