#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "DepthProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UDepthProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UDepthProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

