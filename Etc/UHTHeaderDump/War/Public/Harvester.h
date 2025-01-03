#pragma once
#include "CoreMinimal.h"
#include "GatherResult.h"
#include "RWDSimVehicle.h"
#include "Harvester.generated.h"

class AResource;
class UAudioComponent;
class UCapsuleComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class WAR_API AHarvester : public ARWDSimVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrindRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrindFuelRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplitRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplitFuelRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* GrindingCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* NoTargetParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ComponentsParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DefensesParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SalvageParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SulfurParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SplitParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* GrindingSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SplittingSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* RotatingSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Action, meta=(AllowPrivateAccess=true))
    uint8 Action;
    
public:
    AHarvester(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopAction();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartGrinding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Action();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnResourceSplit();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnGather(AResource* Resource, const FGatherResult& GatherResult);
    
};

