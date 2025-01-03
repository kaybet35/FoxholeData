#pragma once
#include "CoreMinimal.h"
#include "ECharacterActivityState.h"
#include "EZombieSecondaryAttack.h"
#include "EZombieType.h"
#include "Templates/SubclassOf.h"
#include "ZombieWeaponInfo.generated.h"

class UDamageType;
class UTexture2D;

USTRUCT(BlueprintType)
struct FZombieWeaponInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZombieType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> MeleeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZombieSecondaryAttack SecondaryAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterActivityState ActivityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    WAR_API FZombieWeaponInfo();
};

