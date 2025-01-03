#pragma once
#include "CoreMinimal.h"
#include "FuelInfo.h"
#include "PowerInfo.h"
#include "PowerNode.h"
#include "TeamStructure.h"
#include "EngineRoom.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API AEngineRoom : public ATeamStructure, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelInfo, meta=(AllowPrivateAccess=true))
    FFuelInfo FuelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
public:
    AEngineRoom(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelInfo();
    

    // Fix for true pure virtual functions not being implemented
};

