#pragma once
#include "CoreMinimal.h"
#include "DecayInfo.h"
#include "DecayPreventer.h"
#include "TeamStructure.h"
#include "MaintenanceTunnel.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AMaintenanceTunnel : public ATeamStructure, public IDecayPreventer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FDecayInfo DecayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrassCullRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 Filter;
    
public:
    AMaintenanceTunnel(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

