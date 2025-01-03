#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "GearPickup.h"
#include "AccessoryPickup.generated.h"

UCLASS(Blueprintable)
class WAR_API AAccessoryPickup : public AGearPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentSlot> SlotsToAccessorize;
    
    AAccessoryPickup(const FObjectInitializer& ObjectInitializer);

};

