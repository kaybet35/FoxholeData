#pragma once
#include "CoreMinimal.h"
#include "StorageFacility.h"
#include "Templates/SubclassOf.h"
#include "Seaport.generated.h"

class ALadder;
class UBoxComponent;
class UCraneSpawnLocationComponent;
class UPersistentProxyComponent;
class USceneComponent;
class UTeamFlagMeshComponent;

UCLASS(Blueprintable)
class WAR_API ASeaport : public AStorageFacility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* ProxyLoadingDockComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PassengerUnloadingArea1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PassengerUnloadingArea2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocationSeaport1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocationSeaport2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocationDock1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocationDock2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALadder> LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALadder*> SpawnedLadders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamFlagMeshComponent* FlagMesh;
    
public:
    ASeaport(const FObjectInitializer& ObjectInitializer);

};

