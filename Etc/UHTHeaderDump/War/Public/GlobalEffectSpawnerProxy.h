#pragma once
#include "CoreMinimal.h"
#include "EffectSpawnerProxy.h"
#include "GlobalEffectSpawnerProxy.generated.h"

UCLASS(Blueprintable)
class WAR_API AGlobalEffectSpawnerProxy : public AEffectSpawnerProxy {
    GENERATED_BODY()
public:
    AGlobalEffectSpawnerProxy(const FObjectInitializer& ObjectInitializer);

};

