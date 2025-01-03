#pragma once
#include "CoreMinimal.h"
#include "ProjectileItemComponent.h"
#include "WaterReloadSupport.h"
#include "WaterBucketItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWaterBucketItemComponent : public UProjectileItemComponent, public IWaterReloadSupport {
    GENERATED_BODY()
public:
    UWaterBucketItemComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

