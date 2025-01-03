#pragma once
#include "CoreMinimal.h"
#include "DynamicTierInfo.h"
#include "TownHall.h"
#include "StaticBase.generated.h"

class UAITurretsControllerComponent;

UCLASS(Blueprintable)
class WAR_API AStaticBase : public ATownHall {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAITurretsControllerComponent* AITurretsController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicTierInfo DynamicTierInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsVictoryTown, meta=(AllowPrivateAccess=true))
    bool bIsVictoryTownRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TownConnectionLevel;
    
public:
    AStaticBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVictoryTown();
    
};

