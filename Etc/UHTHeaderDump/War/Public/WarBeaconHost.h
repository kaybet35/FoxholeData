#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "WarBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API AWarBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    AWarBeaconHost(const FObjectInitializer& ObjectInitializer);

};

