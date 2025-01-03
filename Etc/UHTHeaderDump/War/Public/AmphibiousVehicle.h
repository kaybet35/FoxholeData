#pragma once
#include "CoreMinimal.h"
#include "RWDSimVehicle.h"
#include "AmphibiousVehicle.generated.h"

class UAudioComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class WAR_API AAmphibiousVehicle : public ARWDSimVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WakeWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WaterDriveLoop;
    
public:
    AAmphibiousVehicle(const FObjectInitializer& ObjectInitializer);

};

