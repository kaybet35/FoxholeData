#pragma once
#include "CoreMinimal.h"
#include "RefinableItemInfo.h"
#include "RefinementOrderInfo.h"
#include "TeamStructure.h"
#include "Refinery.generated.h"

class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API ARefinery : public ATeamStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FRefinementOrderInfo> RefinementOrderMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRefinableItemInfo> RefinableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsRefining;
    
public:
    ARefinery(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefining() const;
    
};

