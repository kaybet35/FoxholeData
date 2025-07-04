#pragma once
#include "CoreMinimal.h"
#include "SoundModulationParameter.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundModulationParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSoundModulationParameter();
};

