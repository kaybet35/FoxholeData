#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ActorLog.h"
#include "ArmourDirectionBoneNamesList.h"
#include "CoalitionAssignable.h"
#include "DamageableActor.h"
#include "EArmourType.h"
#include "EFactionId.h"
#include "EMapIconType.h"
#include "EServerAnimTickMode.h"
#include "ETankArmourEffectType.h"
#include "ETechID.h"
#include "ETechTreeTier.h"
#include "EVehicleBuildType.h"
#include "EVehicleMovementProfileType.h"
#include "EVehicleProfileType.h"
#include "FuelTank.h"
#include "FuelTanker.h"
#include "FuelTankerInfo.h"
#include "GenericActor.h"
#include "GlobalVehicleID.h"
#include "HornData.h"
#include "ItemInstance.h"
#include "MapIntelligenceInterface.h"
#include "MuzzleInfo.h"
#include "PersistentActor.h"
#include "SeatSupport.h"
#include "ShippableInfo.h"
#include "SpoolingHandler.h"
#include "Templates/SubclassOf.h"
#include "TreadActorInfo.h"
#include "TreadData.h"
#include "VehicleDeploymentLogic.h"
#include "VehicleMapIntelligenceProvider.h"
#include "WarCharacter.h"
#include "SimVehicle.generated.h"

class AActor;
class ASimCharacter;
class ASimVehicle;
class AVehicleBuildSite;
class UAFKTimeoutComponent;
class UAudioComponent;
class UBoxComponent;
class UCurveFloat;
class UFloodableComponent;
class UGenericStockpileComponent;
class UItemHolderComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UPlayerCameraRigComponent;
class UPrimitiveComponent;
class USceneComponent;
class USeatComponent;
class USoundCue;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture;
class UVehicleSeatComponent;

UCLASS(Blueprintable)
class WAR_API ASimVehicle : public AWarCharacter, public IPersistentActor, public IMapIntelligenceInterface, public ICoalitionAssignable, public IDamageableActor, public IGenericActor, public ISeatSupport, public IFuelTanker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BuildRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPhysicalMaterial> RearTraceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPhysicalMaterial> FrontTraceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> FrontTraceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RearTraceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInterpolatePitch: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChassisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Icon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableInfo ShippableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVehicleBuildSite> BuildSiteClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleBuildType VehicleBuildType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleProfileType VehicleProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleMovementProfileType VehicleMovementProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmourType ArmourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDriveOverTrenches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthOffset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGlobalVehicleID GlobalVehicleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FActorLog ActorLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShipRammingVelocityChangeForDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreNonRootComponentsDuringVehicleMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCarryVehicles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmourDirectionBoneNamesList> ArmourDirectionBoneNamesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TankArmour, meta=(AllowPrivateAccess=true))
    int32 TankArmour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Subsystems, meta=(AllowPrivateAccess=true))
    uint8 Subsystems;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ActiveModularMounts, meta=(AllowPrivateAccess=true))
    uint8 ActiveModularMounts[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTank, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAnySeatSwitches: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseStructures: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsStockpilable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsReserveStockpiled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsUsableFromVehicle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeDemolished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowItemDrop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestrictMovementFromItems: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVehicleOn, meta=(AllowPrivateAccess=true))
    uint8 bIsVehicleOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsVehicleLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCommanderHatchOpen, meta=(AllowPrivateAccess=true))
    uint8 bIsCommanderHatchOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsReservable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsShipCargo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowsDirectPackaging: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TeamID, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthCuttoffForSwimDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadLockDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommanderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlatformPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MinorDamagePS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MajorDamagePS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyedFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DisabledTurretFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DisabledTurret2FX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DisabledTurret3FX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DisabledTurret4FX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* DisabledTurret5FX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PenetrateFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PenetrateSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PenetrateSmallFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PenetrateSmallSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeflectFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DeflectSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BreakdownSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BoostSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CharatcerHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EnvironmentHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FrozenEnterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* DriveLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* BackUpSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LockSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHornData Horn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleMapIntelligenceProvider VehicleMapIntelligenceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerCameraRigComponent* CameraRigComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontAxleCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RearAxleCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontLeftRollCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontRightRollCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftSideTrackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightSideTrackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PassengerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UAFKTimeoutComponent* AFKTimeoutComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* ItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ItemHolderItems, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemHolderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTreadActorInfo> TreadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTreadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreadData Treads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LinearSpeedToTurnSpeedMapCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LinearSpeedToWaterTurnSpeedMapCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostGasUsageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMuzzleInfo> MuzzleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpoolingHandler SpoolingHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType MapIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMoveUnderBridges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerAnimTickMode ServerAnimTickMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CoalitionId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Tier, meta=(AllowPrivateAccess=true))
    ETechTreeTier Tier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeInRecoverySaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName OriginatorBuildSiteName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoPenetratingShotsReduceTankArmour;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVehicleSeatComponent*> SeatComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USeatComponent*> ModularSeatComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGenericStockpileComponent*> StockpileComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString LockingPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime TimeOfLastUseCoalition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString BuilderPlayerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VehiclesPerCrateBonusQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastSavedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsFastAttachedMove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PackagedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewabilityRadiusExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFloodableComponent* FloodableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASimVehicle*> CarriedVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> CarriedVehicleNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CargoSealed, meta=(AllowPrivateAccess=true))
    bool bCargoSealed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelBorderSizeOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVehicleDeploymentLogic DeploymentLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOnMapIntel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckPassengerEncumbrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVisibleOnSonar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroysIceWhenWaterTravelling;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTankerInfo, meta=(AllowPrivateAccess=true))
    FFuelTankerInfo FuelTankerInfo;
    
public:
    ASimVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void VehicleCollisionTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwitchSeats(int32 NewSeatIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartBoost();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnMount(ASimCharacter* PlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeployGunner();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Tier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TankArmour();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Subsystems(const uint8 PreviousSubsystems);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemHolderItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVehicleOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCommanderHatchOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTankerInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTank(const FFuelTank& PreviousFuelTank);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CargoSealed(bool bPrevCargoSealed);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveModularMounts();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayLockFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPassengerExited(int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPassengerEntered(int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnBoostEntered();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastApplyPenetrateHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastApplyFatalHit(bool bDisableCollisions);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastApplyDeflectHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTopHatchOpen() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndActivityState(ASimCharacter* CharacterToInterrupt);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddDriverSuppression(const float SuppressAmount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnVehicleOn(bool IsOn);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void AllFire();
    

    // Fix for true pure virtual functions not being implemented
};

