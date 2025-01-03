#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "TorpedoMovementComponent.generated.h"

class UCurveFloat;
class UCurveVector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTorpedoMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MaxHorizontalAccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PIDCurve;
    
    UTorpedoMovementComponent(const FObjectInitializer& ObjectInitializer);

};

