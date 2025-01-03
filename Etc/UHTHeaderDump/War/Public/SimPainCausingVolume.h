#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PainCausingVolume -FallbackName=PainCausingVolume
#include "SimPainCausingVolume.generated.h"

UCLASS(Blueprintable)
class WAR_API ASimPainCausingVolume : public APainCausingVolume {
    GENERATED_BODY()
public:
    ASimPainCausingVolume(const FObjectInitializer& ObjectInitializer);

};

