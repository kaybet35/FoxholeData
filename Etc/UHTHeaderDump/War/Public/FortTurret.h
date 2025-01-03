#pragma once
#include "CoreMinimal.h"
#include "FoxholeTurret.h"
#include "PowerInfo.h"
#include "PowerNode.h"
#include "FortTurret.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AFortTurret : public AFoxholeTurret, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
public:
    AFortTurret(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

