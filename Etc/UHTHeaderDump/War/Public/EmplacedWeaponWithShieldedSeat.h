#pragma once
#include "CoreMinimal.h"
#include "EmplacedWeapon.h"
#include "EmplacedWeaponWithShieldedSeat.generated.h"

UCLASS(Blueprintable)
class WAR_API AEmplacedWeaponWithShieldedSeat : public AEmplacedWeapon {
    GENERATED_BODY()
public:
    AEmplacedWeaponWithShieldedSeat(const FObjectInitializer& ObjectInitializer);

};

