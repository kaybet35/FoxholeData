#pragma once
#include "CoreMinimal.h"
#include "MultiAmmo.h"
#include "ProjectileGunnerMountComponent.h"
#include "Templates/SubclassOf.h"
#include "GrenadeGunnerMountComponent.generated.h"

class AWarProjectile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UGrenadeGunnerMountComponent : public UProjectileGunnerMountComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMultiAmmo MultiAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AWarProjectile>> GrenadeClasses;
    
    UGrenadeGunnerMountComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    
};

