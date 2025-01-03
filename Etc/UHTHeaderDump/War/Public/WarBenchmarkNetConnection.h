#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SimulatedClientNetConnection -FallbackName=SimulatedClientNetConnection
#include "WarBenchmarkNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarBenchmarkNetConnection : public USimulatedClientNetConnection {
    GENERATED_BODY()
public:
    UWarBenchmarkNetConnection();

};

