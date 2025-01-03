#pragma once
#include "CoreMinimal.h"
#include "StorageFacilityBuildSite.h"
#include "SeaportBuildSite.generated.h"

class ALadder;
class UCraneSpawnLocationComponent;
class UPersistentProxyComponent;

UCLASS(Blueprintable)
class WAR_API ASeaportBuildSite : public AStorageFacilityBuildSite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* ProxyLoadingDockComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALadder*> SpawnedLadders;
    
public:
    ASeaportBuildSite(const FObjectInitializer& ObjectInitializer);

};

