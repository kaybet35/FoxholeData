#pragma once
#include "CoreMinimal.h"
#include "PowerGridInfo.h"
#include "PowerGridNode.h"
#include "TeamStructure.h"
#include "StaticCrane.generated.h"

class UAudioComponent;
class UBoxComponent;
class UBuildSocketComponent;
class UCraneComponent;
class UFacilityLightComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AStaticCrane : public ATeamStructure, public IPowerGridNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainMesh;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PowerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFacilityLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneComponent* CraneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PowerGridInfo, meta=(AllowPrivateAccess=true))
    FPowerGridInfo PowerGridInfo;
    
public:
    AStaticCrane(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerGridInfo();
    

    // Fix for true pure virtual functions not being implemented
};

