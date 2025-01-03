#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ECharacterActivityState.h"
#include "ESimCharacterStance.h"
#include "WeaponAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterActivityState CharacterActivityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimCharacterStance CharacterStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterScoping;
    
public:
    UWeaponAnimInstance();

};

