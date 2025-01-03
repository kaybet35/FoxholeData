#pragma once
#include "CoreMinimal.h"
#include "EDockedState.h"
#include "RampData.h"
#include "ReplicatedShippableData.h"
#include "SavedShippableData.h"
#include "SimVehicle.h"
#include "Templates/SubclassOf.h"
#include "Barge.generated.h"

class AGlobalShippableInfo;
class UAudioComponent;
class UBoxComponent;
class UMeshComponent;
class UParticleSystemComponent;
class USceneComponent;
class UShippableUseComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API ABarge : public ASimVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRampData Ramp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RampDriveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WakeWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WaterDriveLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* KillVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* WorkVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_DockedState, meta=(AllowPrivateAccess=true))
    EDockedState DockedState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float RampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGlobalShippableInfo> GlobalShippableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentShippable, meta=(AllowPrivateAccess=true))
    FName CurrentShippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShippableData, meta=(AllowPrivateAccess=true))
    FReplicatedShippableData ShippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedShippableData SavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShippableUseComponent* ShippableUseComponent;
    
public:
    ABarge(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleRamp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShippableData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DockedState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentShippable();
    
};

