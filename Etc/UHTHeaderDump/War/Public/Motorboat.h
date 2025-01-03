#pragma once
#include "CoreMinimal.h"
#include "SimVehicle.h"
#include "Motorboat.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class WAR_API AMotorboat : public ASimVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackWaterEmitter;
    
public:
    AMotorboat(const FObjectInitializer& ObjectInitializer);

};

