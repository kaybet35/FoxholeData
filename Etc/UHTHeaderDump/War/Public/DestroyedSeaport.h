#pragma once
#include "CoreMinimal.h"
#include "DestroyedStorageFacility.h"
#include "DestroyedSeaport.generated.h"

class ALadder;
class UCraneSpawnLocationComponent;
class UPersistentProxyComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedSeaport : public ADestroyedStorageFacility {
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
    ADestroyedSeaport(const FObjectInitializer& ObjectInitializer);

};

