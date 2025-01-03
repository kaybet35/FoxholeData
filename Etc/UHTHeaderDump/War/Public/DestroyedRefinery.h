#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "RefinementOrderInfo.h"
#include "DestroyedRefinery.generated.h"

class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedRefinery : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FRefinementOrderInfo> RefinementOrderMap;
    
    ADestroyedRefinery(const FObjectInitializer& ObjectInitializer);

};

