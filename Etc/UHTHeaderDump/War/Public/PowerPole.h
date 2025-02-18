#pragma once
#include "CoreMinimal.h"
#include "PowerGridInfo.h"
#include "PowerGridNode.h"
#include "TeamStructure.h"
#include "PowerPole.generated.h"

class UBuildSocketComponent;
class UFacilityLightComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class WAR_API APowerPole : public ATeamStructure, public IPowerGridNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PowerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFacilityLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoConnectToNearby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoConnectSearchRadius;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PowerGridInfo, meta=(AllowPrivateAccess=true))
    FPowerGridInfo PowerGridInfo;
    
    APowerPole(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerGridInfo();
    

    // Fix for true pure virtual functions not being implemented
};

