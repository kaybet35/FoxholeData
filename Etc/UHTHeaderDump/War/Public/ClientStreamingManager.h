#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClientStreamingManager.generated.h"

class ULevelStreamingHex;

UCLASS(Blueprintable, Config=Game)
class WAR_API UClientStreamingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingHex*> StreamingLevels;
    
public:
    UClientStreamingManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloaded(ULevelStreamingHex* LevelStreaming);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShown(ULevelStreamingHex* LevelStreaming);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadComplete(ULevelStreamingHex* LevelStreaming);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden(ULevelStreamingHex* LevelStreaming);
    
};

