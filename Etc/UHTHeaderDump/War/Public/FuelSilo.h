#pragma once
#include "CoreMinimal.h"
#include "LiquidTank.h"
#include "TeamStructure.h"
#include "FuelSilo.generated.h"

class UBuildSocketComponent;

UCLASS(Blueprintable)
class WAR_API AFuelSilo : public ATeamStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PipeInput0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PipeOutput0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_LiquidTank, meta=(AllowPrivateAccess=true))
    FLiquidTank LiquidTank;
    
public:
    AFuelSilo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LiquidTank();
    
};

