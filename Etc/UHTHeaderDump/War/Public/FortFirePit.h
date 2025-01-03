#pragma once
#include "CoreMinimal.h"
#include "Fort.h"
#include "FuelTank.h"
#include "FortFirePit.generated.h"

UCLASS(Blueprintable)
class WAR_API AFortFirePit : public AFort {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTankDiesel, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTankDiesel;
    
public:
    AFortFirePit(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTankDiesel();
    
};

