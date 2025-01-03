#pragma once
#include "CoreMinimal.h"
#include "WarProjectile.h"
#include "DepthProjectile.generated.h"

UCLASS(Blueprintable)
class WAR_API ADepthProjectile : public AWarProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaterVelocityZ;
    
public:
    ADepthProjectile(const FObjectInitializer& ObjectInitializer);

};

