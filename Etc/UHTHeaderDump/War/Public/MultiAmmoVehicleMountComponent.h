#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "MultiAmmo.h"
#include "MultiAmmoVehicleMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMultiAmmoVehicleMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresExternalReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMultiAmmo MultiAmmo;
    
    UMultiAmmoVehicleMountComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    
};

