#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CoalitionAssignable.h"
#include "EWeatherStationState.h"
#include "GunnerSupport.h"
#include "PowerInfo.h"
#include "PowerNode.h"
#include "TeamStructure.h"
#include "WarGridCoordinate.h"
#include "WeatherStationID.h"
#include "WeatherStation.generated.h"

class UFacilityLightComponent;
class USkeletalMeshComponent;
class USoundCue;
class UWarAudioComponent;

UCLASS(Blueprintable)
class WAR_API AWeatherStation : public ATeamStructure, public ICoalitionAssignable, public IGunnerSupport, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWarAudioComponent* ActiveSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWarAudioComponent* RotationSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFacilityLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ActivateSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DeactivateSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredPowerForFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredPowerForRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EWeatherStationState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 NetworkedStations;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 PredictionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 RequiredSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Yaw, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FWeatherStationID GlobalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FWeatherStationID ConnectionTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FWarGridCoordinate CoordConnectionTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FWeatherStationID ConnectionFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FWarGridCoordinate CoordConnectionFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RemainingActiveTime;
    
public:
    AWeatherStation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Yaw(const float PreviousYaw);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void UpdateGunnerYawAndPitch(int32 GunnerIndex, FVector2D YawAndPitch) override PURE_VIRTUAL(UpdateGunnerYawAndPitch,);
    
    UFUNCTION(BlueprintCallable)
    void SetStashedAmmo(int32 GunnerIndex, int32 AmmoAmount, FName AmmoName) override PURE_VIRTUAL(SetStashedAmmo,);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFiring(int32 GunnerIndex, bool IsFiring) override PURE_VIRTUAL(SetIsFiring,);
    
    UFUNCTION(BlueprintCallable)
    void SetGunnerWorking(int32 GunnerIndex, bool IsWorking) override PURE_VIRTUAL(SetGunnerWorking,);
    
    UFUNCTION(BlueprintCallable)
    bool IsGunnerWorking(int32 GunnerIndex) const override PURE_VIRTUAL(IsGunnerWorking, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFiring(int32 GunnerIndex) const override PURE_VIRTUAL(IsFiring, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsDeployed(int32 GunnerIndex, bool bTestFullDeploy) const override PURE_VIRTUAL(IsDeployed, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetTrackingSpeedModifier(int32 GunnerIndex) const override PURE_VIRTUAL(GetTrackingSpeedModifier, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FName GetStashedAmmoType(int32 GunnerIndex) const override PURE_VIRTUAL(GetStashedAmmoType, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStashedAmmo(int32 GunnerIndex) const override PURE_VIRTUAL(GetStashedAmmo, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumMuzzleSockets(int32 GunnerIndex) const override PURE_VIRTUAL(GetNumMuzzleSockets, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetMuzzleTransformFromIndex(int32 GunnerIndex, int32 MuzzleIndex) const override PURE_VIRTUAL(GetMuzzleTransformFromIndex, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    FName GetMuzzleSocketName(int32 GunnerIndex, const int32 MuzzleIndex) const override PURE_VIRTUAL(GetMuzzleSocketName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLineOfSightLocation(int32 GunnerIndex, int32 MuzzleIndex) const override PURE_VIRTUAL(GetLineOfSightLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetGunnerYawAndPitch(int32 GunnerIndex) const override PURE_VIRTUAL(GetGunnerYawAndPitch, return FVector2D{};);
    
    UFUNCTION(BlueprintCallable)
    bool CanRotate(int32 GunnerIndex) const override PURE_VIRTUAL(CanRotate, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanFire(int32 GunnerIndex) const override PURE_VIRTUAL(CanFire, return false;);
    
};

