#pragma once
#include "CoreMinimal.h"
#include "ERotationDirection.h"
#include "MountComponent.h"
#include "WatchTowerMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWatchTowerMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UWatchTowerMountComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRotationDirection(const ERotationDirection Direction);
    
};

