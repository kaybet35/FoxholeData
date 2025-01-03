#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "MountComponent.h"
#include "TankEngineerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTankEngineerComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMountIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepairAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CompatibleAmmoNames;
    
public:
    UTankEngineerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepair(FActivityStateChange ActivityStateChange);
    
};

