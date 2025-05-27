#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "WaterProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWaterProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UWaterProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

