#pragma once
#include "CoreMinimal.h"
#include "LargeShip.h"
#include "LargeShipStorage.generated.h"

class UAudioComponent;
class UBoxComponent;
class UCraneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ALargeShipStorage : public ALargeShip {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CraneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShippableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ArmMovementSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* DeployingSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PulleyMovementSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneComponent* CraneComponent;
    
public:
    ALargeShipStorage(const FObjectInitializer& ObjectInitializer);

};

