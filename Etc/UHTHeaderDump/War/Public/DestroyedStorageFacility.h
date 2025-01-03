#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedStorageFacility.generated.h"

class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;
class UReserveStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedStorageFacility : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UReserveStockpileComponent* ReserveStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    ADestroyedStorageFacility(const FObjectInitializer& ObjectInitializer);

};

