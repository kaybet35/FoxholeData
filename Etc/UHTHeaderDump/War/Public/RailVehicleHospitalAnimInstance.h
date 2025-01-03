#pragma once
#include "CoreMinimal.h"
#include "RailVehicleAnimInstance.h"
#include "RailVehicleHospitalAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API URailVehicleHospitalAnimInstance : public URailVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float GunnerYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float GunnerPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsGunnerWorking;
    
    URailVehicleHospitalAnimInstance();

};

