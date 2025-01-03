#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "WarBenchmarkAlgorithmBase.generated.h"

class ASimPlayerController;
class USimulatedClientNetConnection;

USTRUCT(BlueprintType)
struct FWarBenchmarkAlgorithmBase : public FTickFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USimulatedClientNetConnection*> SimulatedConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASimPlayerController*> SimulatedControllers;
    
    WAR_API FWarBenchmarkAlgorithmBase();
};

template<>
struct TStructOpsTypeTraits<FWarBenchmarkAlgorithmBase> : public TStructOpsTypeTraitsBase2<FWarBenchmarkAlgorithmBase>
{
    enum
    {
        WithCopy = false
    };
};

