#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "WarAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWarAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UWarAudioComponent(const FObjectInitializer& ObjectInitializer);

};

