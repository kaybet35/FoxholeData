#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "ActivityStateChange.h"
#include "ActivityStateDebugTrace.h"
#include "ActivityStateInfo.h"
#include "CharacterInvokableInterface.h"
#include "CharacterInvokeInfo.h"
#include "DamageableActor.h"
#include "ECharacterActivityState.h"
#include "EDamageType.h"
#include "EFortModificationType.h"
#include "EUniformType.h"
#include "EWaterSourceType.h"
#include "EZombieType.h"
#include "EmoteActivityOptions.h"
#include "HitNotify.h"
#include "ItemInstance.h"
#include "MapIntelligenceInterface.h"
#include "PlayerAdjustment.h"
#include "RepPlayerMovement.h"
#include "SurfaceMovementData.h"
#include "Templates/SubclassOf.h"
#include "UITargetingInfo.h"
#include "Vector2D_NetQuantize.h"
#include "WarCharacter.h"
#include "SimCharacter.generated.h"

class AActor;
class AController;
class AImpactEffect;
class AItemPickup;
class ARWDSimVehicle;
class ARailVehicle;
class ARailwayTrack;
class AShipVehicle;
class ASimCharacter;
class ASimVehicle;
class AStructure;
class UAudioComponent;
class UCameraComponent;
class UCameraShake;
class UDamageType;
class UEnterVehicleUseComponent;
class UEquipmentHolderComponent;
class UFloodableComponent;
class UHatchComponent;
class UItemHolderComponent;
class ULadderComponent;
class UMaterialParameterCollection;
class UModificationSlotComponent;
class UMountComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPlayerCameraRigComponent;
class UPlayerLOSRasterComponent;
class UPostProcessComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USoundCue;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API ASimCharacter : public AWarCharacter, public ICharacterInvokableInterface, public IDamageableActor, public IMapIntelligenceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepPlayerMovement, meta=(AllowPrivateAccess=true))
    FRepPlayerMovement RepPlayerMovement;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float StanceYawModifiers[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveStarterKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchedTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFallSpeedForDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FatalFallSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbForwardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbCosAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVaultHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVaultVerticalClearencePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVaultDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClimbOpenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClimbOntoOpenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShortWallStepOpenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberStandOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_MountComponent, meta=(AllowPrivateAccess=true))
    UMountComponent* MountComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOccupiedStructure, meta=(AllowPrivateAccess=true))
    AStructure* CurrentOccupiedStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentVehicle, meta=(AllowPrivateAccess=true))
    ASimVehicle* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FootStepCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResetWoundedStateThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthThresholdForHurtMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActivityLatencyCompensation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityStateInfo ActivityStateInfos[70];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterActivityState, FEmoteActivityOptions> EmoteActivityOptionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedDeviationOfShootingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InVehicleAllowedDeviationOfShootingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponFiringConeAbilityModifierPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TeamIdNotify, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_VisualCustomizationMaskNotify, meta=(AllowPrivateAccess=true))
    uint8 VisualCustomizationMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsWearingGasMask, meta=(AllowPrivateAccess=true))
    uint8 bIsWearingGasMask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesDynamicMaterials: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniformType, meta=(AllowPrivateAccess=true))
    EUniformType UniformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> CurrentSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurfaceMovementData> SurfaceMovementModifiers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Hands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Legs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Helmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EquippedItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GasMaskMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AccessoryMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Muzzle_Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Muzzle_Crouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Muzzle_Prone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GroundEquippedItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* ItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SuppressionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemHolderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentHolderComponent* EquipmentItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_EquipmentItemHolderItems, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> EquipmentItemHolderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SwimmingPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* EnterWaterPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SwimmingSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* EnterWaterSFX;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterActivityState, meta=(AllowPrivateAccess=true))
    ECharacterActivityState CharacterActivityStateInternal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Encumbrance, meta=(AllowPrivateAccess=true))
    uint8 ReplicatedItemEncumbrance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastMovementBase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeMinDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeMaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> MeleeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> MeleeImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MeleeAttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrowningBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleStaminaRestoreRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleStaminaRestoreDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GasMaskStaminaRestoreRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionStaminaRegenModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaDrainExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddedSprintingStaminaDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddedFloodedStaminaDrain;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddedBlockingStaminaDrain;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddedChargingStaminaDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddedDeadlyGasStaminaDrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeStaminaCostNormalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingStaminaDrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingStaminaDrainDepthCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingDepthCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollInWaterLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollOutOfWaterLinearDamping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityMovementDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityDecayMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityYawDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityYawDecayTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityGainRates[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float HealTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BleedingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedDamagePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedMinDamageReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerMinDamageReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BleedingEffectTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedBleedingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsEffectedByDeadlyGas: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBleeding, meta=(AllowPrivateAccess=true))
    uint8 bIsBleeding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ZombieType, meta=(AllowPrivateAccess=true))
    EZombieType ZombieType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WoundedTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZombieMeleeReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ZombieMeleeImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ZombieDeathSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZombieHitRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZombieHitHalfHeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimCharacter* CarryingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> LastBurningHitInstigator;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerFogOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlwaysVisibleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AimRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScopeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUITargetingInfo LastUITargetingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectiveBlockingMaxDeviation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector2D_NetQuantize YawPitchPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerCameraRigComponent* CameraRigComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* TopDownCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ScopePS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* LOSPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerLOSRasterComponent* LOSRasterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> SprintCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GrenadeAimMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Grip_Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Grip_Crouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Grip_Prone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* RegionBoundaryParamCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInScopeMode, meta=(AllowPrivateAccess=true))
    uint8 bIsInScopeMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime OfflineExpiryTime;
    
public:
    ASimCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SlowTick();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseShipHatch(UHatchComponent* HatchComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseShipFlagVolume(AShipVehicle* ShipVehicle, uint8 FlagIndex, bool bIsMovement);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUseItem(const int8 Index, UItemHolderComponent* InHolder);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseFloodable(UFloodableComponent* FloodableComponent);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateAimYawAndPitch(const FVector2D_NetQuantize YawAndPitch);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnlinkRWDSimVehicles(ARWDSimVehicle* Tractor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleRailSwitch(ARailwayTrack* RailwayTrack, int32 PathSocketId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTakePickup(AItemPickup* ItemPickup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncLastWeaponInvoke(const FCharacterInvokeInfo& ClientWeaponInvoke);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwitchSeats(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSimulateMeleeAttack(FActivityStateChange ActivityStateChange);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIsInScopeMode(bool InIsInScopeMode);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadFromWaterSource(EWaterSourceType RequestedSource, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReload(int32 AmmoIx, UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmote(const ECharacterActivityState EmoteActivityState);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnUseFromVehicle(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    
public:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveMinimal(float Timestamp, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMountStructure(AStructure* Structure, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerModifyStructure(FActivityStateChange ActivityStateChange, UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLinkRWDSimVehicles(ARWDSimVehicle* VehicleA, ARWDSimVehicle* VehicleB);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLinkRailVehicles(ARailVehicle* VehicleA, ARailVehicle* VehicleB);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGiveUpFromWoundedState();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitVehicle(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnterVehicle(ASimVehicle* SimVehicle, UEnterVehicleUseComponent* EnterVehicleUseComponent, const FActivityStateChange ActivityStateChange, const int32 SeatIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClimbLadder(ULadderComponent* LadderComponent, bool bEntering, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClimb(FVector2D InputDirection, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerChangeItemEquipState(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCarryWounded(ASimCharacter* WoundedCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ZombieType();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisualCustomizationMaskNotify();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UniformType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamIdNotify();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepPlayerMovement(const FRepPlayerMovement& PrevSnapshot);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MountComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsWearingGasMask();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInScopeMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBleeding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquipmentItemHolderItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Encumbrance();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentVehicle(ASimVehicle* PreviousVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOccupiedStructure();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterActivityState();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnMeleeHitEffects(FHitNotify SimulatedHitNotify);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSetStagger(const uint8 InStagger);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSetNormalizedStamina(const float InNormalizedStamina);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnUniformMitigatedDamage(EDamageType DamageType);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientVehicleSeatSwitched(bool bIsDriver, ASimVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientSyncActivityStateSequence(uint8 CurrentSequenceNumber, int8 HeldItemIndex);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetUnmountPosition(FVector Position, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetNormalizedStamina(float InNormalizedStamina);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetItemHolderItems(const TArray<FItemInstance>& InItemHolderItems);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientSetGainingHeatFromHits(bool bIsGaining);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetFlyMode(const bool bInIsFlyMode, const float FlyHeight, const float FlySpeed);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInterruptActivityState(uint8 SequenceNumber);
    
    UFUNCTION(Client, Reliable)
    void ClientCorrectActivityState(uint8 LastSuccessfulSequenceNumber, int8 HeldItemIndex, ECharacterActivityState NewState);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientCarryWoundedSetupMovement(ASimCharacter* WoundedCharacter, bool bBeganCarrying);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCannonLaunch(const FVector2D_NetQuantize LaunchVelocity);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBeginWoundedState();
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustPositionPlayer(float Timestamp, const FPlayerAdjustment& Adjustment);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddSuppression(const float SuppressAmount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddStability(const float StabilityAmount);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAckActivityState(uint8 SequenceNumber);
    
    UFUNCTION(BlueprintCallable)
    void CheckForCover();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateMaterialParameters(const FVector& Position);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateHeatVisuals(bool bState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSetTeamVisuals(const int32 VisualTeamId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPCinematicDeath();
    

    // Fix for true pure virtual functions not being implemented
};

