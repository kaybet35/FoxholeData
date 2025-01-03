#pragma once
#include "CoreMinimal.h"
#include "TunnelNode.h"
#include "StorageFacility.generated.h"

class UAITurretsControllerComponent;
class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;
class UReserveStockpileComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AStorageFacility : public ATunnelNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UReserveStockpileComponent* ReserveStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAITurretsControllerComponent* AITurretsController;
    
public:
    AStorageFacility(const FObjectInitializer& ObjectInitializer);

};

