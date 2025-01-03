#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "CoastalGunAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UCoastalGunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingAngle;
    
public:
    UCoastalGunAnimInstance();

};

