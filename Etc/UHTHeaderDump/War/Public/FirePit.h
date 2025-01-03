#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "FuelTank.h"
#include "FirePit.generated.h"

class UAudioComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UTemperatureModifierSphereComponent;

UCLASS(Blueprintable)
class WAR_API AFirePit : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTemperatureModifierSphereComponent* TemperatureModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FireMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Fire1ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Fire2ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Fire3ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* FireSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTankDiesel, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTankDiesel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DieselConsumptionRate;
    
public:
    AFirePit(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTankDiesel();
    
};

