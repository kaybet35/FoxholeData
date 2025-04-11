#include "SimCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EquipmentHolderComponent.h"
#include "ItemHolderComponent.h"
#include "Net/UnrealNetwork.h"
#include "PlayerCameraRigComponent.h"
#include "PlayerCharacterMovementComponent.h"
#include "PlayerLOSRasterComponent.h"

ASimCharacter::ASimCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPlayerCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->AIControllerClass = NULL;
    this->StanceYawModifiers[0] = 1.00f;
    this->StanceYawModifiers[1] = 1.00f;
    this->StanceYawModifiers[2] = 1.00f;
    this->StanceYawModifiers[3] = 1.00f;
    this->bGiveStarterKit = false;
    this->BaseTurnRate = 45.00f;
    this->SprintingMaxSpeedModifier = 1.35f;
    this->DeathDuration = 180.00f;
    this->ProneEyeHeight = 0.00f;
    this->CrouchedTargetOffset = 25.00f;
    this->MinFallSpeedForDamage = 1000.00f;
    this->FatalFallSpeed = 1600.00f;
    this->MaxClimbForwardDistance = 100.00f;
    this->MaxClimbCosAngle = 0.50f;
    this->MaxVaultHeight = 175.00f;
    this->MinVaultVerticalClearencePercent = 0.70f;
    this->MaxVaultDistance = 250.00f;
    this->MaxClimbHeight = 500.00f;
    this->MinClimbOpenDistance = 175.00f;
    this->MinClimbOntoOpenDistance = 150.00f;
    this->MinShortWallStepOpenDistance = 0.00f;
    this->ClamberStandOffset = 0.00f;
    this->MountComponent = NULL;
    this->CurrentOccupiedStructure = NULL;
    this->CurrentVehicle = NULL;
    this->FootStepCue = NULL;
    this->MaxHealth = 0;
    this->ResetWoundedStateThreshold = 100;
    this->HealthThresholdForHurtMaterial = 0.75f;
    this->MaxActivityLatencyCompensation = 0.50f;
    this->AllowedDeviationOfShootingDirection = 30.00f;
    this->InVehicleAllowedDeviationOfShootingDirection = 90.00f;
    this->WeaponFiringConeAbilityModifierPct = 0.00f;
    this->TeamId = 255;
    this->VisualCustomizationMask = 255;
    this->bIsWearingGasMask = false;
    this->bUsesDynamicMaterials = true;
    this->UniformType = EUniformType::Default;
    this->CurrentSurfaceType = SurfaceType_Default;
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Back = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Back"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->EquippedItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->GasMaskMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GasMaskMesh"));
    this->AccessoryMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AccessoryMesh"));
    this->Muzzle_Standing = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle_Standing"));
    this->Muzzle_Crouched = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle_Crouched"));
    this->Muzzle_Prone = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle_Prone"));
    this->GroundEquippedItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GroundEquippedItemMesh"));
    this->ItemHolder = CreateDefaultSubobject<UItemHolderComponent>(TEXT("ItemHolder"));
    this->SuppressionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SuppressionSphere"));
    this->EquipmentItemHolder = CreateDefaultSubobject<UEquipmentHolderComponent>(TEXT("EquipmentItemHolder"));
    this->EquipmentItemHolderItems.AddDefaulted(8);
    this->SwimmingPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SwimmingPS"));
    this->EnterWaterPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EnterWaterPS"));
    this->SwimmingSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("SwimmingSFX"));
    this->EnterWaterSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("EnterWaterSFX"));
    this->CharacterActivityStateInternal = ECharacterActivityState::Idle;
    this->Health = 0.00f;
    this->ReplicatedItemEncumbrance = 0;
    this->LastMovementBase = NULL;
    this->MeleeMinDamage = 40.00f;
    this->MeleeMaxDamage = 60.00f;
    this->MeleeDamageType = NULL;
    this->MeleeImpactEffect = NULL;
    this->MeleeAttackSound = NULL;
    this->SwimmingBuoyancy = 1.00f;
    this->DrowningBuoyancy = 0.00f;
    this->MaxStamina = 30.00f;
    this->IdleStaminaRestoreRate = 2.00f;
    this->IdleStaminaRestoreDelay = 2.00f;
    this->GasMaskStaminaRestoreRate = 1.70f;
    this->SuppressionStaminaRegenModifier = 0.20f;
    this->StaminaDrainExponent = 2.00f;
    this->AddedSprintingStaminaDrain = 8.00f;
    this->AddedFloodedStaminaDrain = 4.00f;
    this->AddedBlockingStaminaDrain = 2.00f;
    this->AddedChargingStaminaDrain = 1.00f;
    this->AddedDeadlyGasStaminaDrain = 6.00f;
    this->MeleeStaminaCostNormalized = 0.10f;
    this->SwimmingStaminaDrainRate = 2.00f;
    this->SwimmingStaminaDrainDepthCutoff = 0.70f;
    this->ClimbingDepthCutoff = 1.00f;
    this->RagdollInWaterLinearDamping = 10000000.00f;
    this->RagdollOutOfWaterLinearDamping = 0.10f;
    this->StabilityMovementDecayRate = 0.00f;
    this->StabilityDecayMovementSpeed = 0.00f;
    this->StabilityYawDecayRate = 0.00f;
    this->StabilityYawDecayTime = 0.00f;
    this->StabilityGainRates[0] = 0.00f;
    this->StabilityGainRates[1] = 0.00f;
    this->StabilityGainRates[2] = 0.00f;
    this->StabilityGainRates[3] = 0.00f;
    this->HealTimer = 0.00f;
    this->BleedingEnabled = false;
    this->BleedDamagePerSecond = 10.00f;
    this->BleedMinDamageReq = 25.00f;
    this->StaggerMinDamageReq = 25.00f;
    this->BleedingEffectTemplate = NULL;
    this->SpawnedBleedingEffect = NULL;
    this->bIsEffectedByDeadlyGas = false;
    this->bIsBleeding = false;
    this->ZombieType = EZombieType::None;
    this->WoundedTimeRemaining = 0.00f;
    this->ZombieMeleeReach = 0.00f;
    this->ZombieMeleeImpactEffect = NULL;
    this->ZombieDeathSound = NULL;
    this->ZombieHitRadius = 0.00f;
    this->ZombieHitHalfHeight = 0.00f;
    this->CarryingPlayer = NULL;
    this->BlockingMaxSpeedModifier = 0.50f;
    this->ChargingMaxSpeedModifier = 0.60f;
    this->AimingMaxSpeedModifier = 0.50f;
    this->bDisablePlayerFogOfWar = false;
    this->AlwaysVisibleRadius = 700.00f;
    this->AimRadius = 400;
    this->ScopeRadius = 900;
    this->EffectiveBlockingMaxDeviation = 25.00f;
    this->CameraRigComponent = CreateDefaultSubobject<UPlayerCameraRigComponent>(TEXT("CameraRig"));
    this->TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
    this->ScopePS = NULL;
    this->LOSPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("LOSPostProcess"));
    this->LOSRasterComponent = CreateDefaultSubobject<UPlayerLOSRasterComponent>(TEXT("LOSRasterComponent"));
    this->SprintCameraShake = NULL;
    this->GrenadeAimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrenadeAimMesh"));
    this->Grip_Standing = CreateDefaultSubobject<USceneComponent>(TEXT("Grip_Standing"));
    this->Grip_Crouched = CreateDefaultSubobject<USceneComponent>(TEXT("Grip_Crouched"));
    this->Grip_Prone = CreateDefaultSubobject<USceneComponent>(TEXT("Grip_Prone"));
    this->RegionBoundaryParamCollection = NULL;
    this->bIsInScopeMode = false;
    this->Grip_Crouched->SetupAttachment(RootComponent);
    this->Grip_Prone->SetupAttachment(RootComponent);
    this->SwimmingPS->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->EnterWaterPS->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->SwimmingSFX->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->EnterWaterSFX->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->CameraRigComponent->SetupAttachment(RootComponent);
    this->TopDownCameraComponent->SetupAttachment(CameraRigComponent);
    this->LOSPostProcess->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->LOSRasterComponent->SetupAttachment(LOSPostProcess);
    this->GrenadeAimMesh->SetupAttachment(RootComponent);
    this->Grip_Standing->SetupAttachment(RootComponent);
    this->Head->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Hands->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Legs->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Back->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Helmet->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->EquippedItemMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->GasMaskMesh->SetupAttachment(RootComponent);
    this->Muzzle_Standing->SetupAttachment(RootComponent);
    this->Muzzle_Crouched->SetupAttachment(RootComponent);
    this->Muzzle_Prone->SetupAttachment(RootComponent);
    this->GroundEquippedItemMesh->SetupAttachment(RootComponent);
    this->SuppressionSphere->SetupAttachment(RootComponent);
}

void ASimCharacter::SlowTick() {
}

void ASimCharacter::ServerUseShipHatch_Implementation(UHatchComponent* HatchComponent) {
}
bool ASimCharacter::ServerUseShipHatch_Validate(UHatchComponent* HatchComponent) {
    return true;
}

void ASimCharacter::ServerUseShipFlagVolume_Implementation(AShipVehicle* ShipVehicle, uint8 FlagIndex, bool bIsMovement) {
}
bool ASimCharacter::ServerUseShipFlagVolume_Validate(AShipVehicle* ShipVehicle, uint8 FlagIndex, bool bIsMovement) {
    return true;
}

void ASimCharacter::ServerUseItem_Implementation(const int8 Index, UItemHolderComponent* InHolder) {
}
bool ASimCharacter::ServerUseItem_Validate(const int8 Index, UItemHolderComponent* InHolder) {
    return true;
}

void ASimCharacter::ServerUseFloodable_Implementation(UFloodableComponent* FloodableComponent) {
}
bool ASimCharacter::ServerUseFloodable_Validate(UFloodableComponent* FloodableComponent) {
    return true;
}

void ASimCharacter::ServerUpdateAimYawAndPitch_Implementation(const FVector2D_NetQuantize YawAndPitch) {
}
bool ASimCharacter::ServerUpdateAimYawAndPitch_Validate(const FVector2D_NetQuantize YawAndPitch) {
    return true;
}

void ASimCharacter::ServerUnlinkRWDSimVehicles_Implementation(ARWDSimVehicle* Tractor) {
}
bool ASimCharacter::ServerUnlinkRWDSimVehicles_Validate(ARWDSimVehicle* Tractor) {
    return true;
}

void ASimCharacter::ServerToggleRailSwitch_Implementation(ARailwayTrack* RailwayTrack, int32 PathSocketId) {
}
bool ASimCharacter::ServerToggleRailSwitch_Validate(ARailwayTrack* RailwayTrack, int32 PathSocketId) {
    return true;
}

void ASimCharacter::ServerTakePickup_Implementation(AItemPickup* ItemPickup) {
}
bool ASimCharacter::ServerTakePickup_Validate(AItemPickup* ItemPickup) {
    return true;
}

void ASimCharacter::ServerSyncLastWeaponInvoke_Implementation(const FCharacterInvokeInfo& ClientWeaponInvoke) {
}
bool ASimCharacter::ServerSyncLastWeaponInvoke_Validate(const FCharacterInvokeInfo& ClientWeaponInvoke) {
    return true;
}

void ASimCharacter::ServerSwitchSeats_Implementation(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex) {
}
bool ASimCharacter::ServerSwitchSeats_Validate(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex) {
    return true;
}

void ASimCharacter::ServerSimulateMeleeAttack_Implementation(FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerSimulateMeleeAttack_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerSetIsInScopeMode_Implementation(bool InIsInScopeMode) {
}
bool ASimCharacter::ServerSetIsInScopeMode_Validate(bool InIsInScopeMode) {
    return true;
}

void ASimCharacter::ServerReloadFromWaterSource_Implementation(EWaterSourceType RequestedSource, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerReloadFromWaterSource_Validate(EWaterSourceType RequestedSource, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerReload_Implementation(int32 AmmoIx, UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerReload_Validate(int32 AmmoIx, UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerPlayEmote_Implementation(const ECharacterActivityState EmoteActivityState) {
}
bool ASimCharacter::ServerPlayEmote_Validate(const ECharacterActivityState EmoteActivityState) {
    return true;
}

void ASimCharacter::ServerOnUseFromVehicle_Implementation(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerOnUseFromVehicle_Validate(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerMoveMinimal_Implementation(float Timestamp, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
}
bool ASimCharacter::ServerMoveMinimal_Validate(float Timestamp, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode) {
    return true;
}

void ASimCharacter::ServerMountStructure_Implementation(AStructure* Structure, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerMountStructure_Validate(AStructure* Structure, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerModifyStructure_Implementation(FActivityStateChange ActivityStateChange, UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask) {
}
bool ASimCharacter::ServerModifyStructure_Validate(FActivityStateChange ActivityStateChange, UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask) {
    return true;
}

void ASimCharacter::ServerLinkRWDSimVehicles_Implementation(ARWDSimVehicle* VehicleA, ARWDSimVehicle* VehicleB) {
}
bool ASimCharacter::ServerLinkRWDSimVehicles_Validate(ARWDSimVehicle* VehicleA, ARWDSimVehicle* VehicleB) {
    return true;
}

void ASimCharacter::ServerLinkRailVehicles_Implementation(ARailVehicle* VehicleA, ARailVehicle* VehicleB) {
}
bool ASimCharacter::ServerLinkRailVehicles_Validate(ARailVehicle* VehicleA, ARailVehicle* VehicleB) {
    return true;
}

void ASimCharacter::ServerGiveUpFromWoundedState_Implementation() {
}
bool ASimCharacter::ServerGiveUpFromWoundedState_Validate() {
    return true;
}

void ASimCharacter::ServerExitVehicle_Implementation(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerExitVehicle_Validate(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerEnterVehicle_Implementation(ASimVehicle* SimVehicle, UEnterVehicleUseComponent* EnterVehicleUseComponent, const FActivityStateChange ActivityStateChange, const int32 SeatIndex) {
}
bool ASimCharacter::ServerEnterVehicle_Validate(ASimVehicle* SimVehicle, UEnterVehicleUseComponent* EnterVehicleUseComponent, const FActivityStateChange ActivityStateChange, const int32 SeatIndex) {
    return true;
}

void ASimCharacter::ServerClimbLadder_Implementation(ULadderComponent* LadderComponent, bool bEntering, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerClimbLadder_Validate(ULadderComponent* LadderComponent, bool bEntering, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerClimb_Implementation(FVector2D InputDirection, FActivityStateChange ActivityStateChange) {
}
bool ASimCharacter::ServerClimb_Validate(FVector2D InputDirection, FActivityStateChange ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerChangeItemEquipState_Implementation(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange) {
}
bool ASimCharacter::ServerChangeItemEquipState_Validate(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange) {
    return true;
}

void ASimCharacter::ServerCarryWounded_Implementation(ASimCharacter* WoundedCharacter) {
}
bool ASimCharacter::ServerCarryWounded_Validate(ASimCharacter* WoundedCharacter) {
    return true;
}

void ASimCharacter::OnRep_ZombieType() {
}

void ASimCharacter::OnRep_VisualCustomizationMaskNotify() {
}

void ASimCharacter::OnRep_UniformType() {
}

void ASimCharacter::OnRep_TeamIdNotify() {
}

void ASimCharacter::OnRep_RepPlayerMovement(const FRepPlayerMovement& PrevSnapshot) {
}

void ASimCharacter::OnRep_MountComponent() {
}

void ASimCharacter::OnRep_IsWearingGasMask() {
}

void ASimCharacter::OnRep_IsInScopeMode() {
}

void ASimCharacter::OnRep_IsBleeding() {
}

void ASimCharacter::OnRep_Health() {
}

void ASimCharacter::OnRep_EquipmentItemHolderItems() {
}

void ASimCharacter::OnRep_Encumbrance() {
}

void ASimCharacter::OnRep_CurrentVehicle(ASimVehicle* PreviousVehicle) {
}

void ASimCharacter::OnRep_CurrentOccupiedStructure() {
}

void ASimCharacter::OnRep_CharacterActivityState() {
}

void ASimCharacter::MulticastSpawnMeleeHitEffects_Implementation(FHitNotify SimulatedHitNotify) {
}

void ASimCharacter::MulticastSetNormalizedStamina_Implementation(const float InNormalizedStamina) {
}

void ASimCharacter::MulticastOnUniformMitigatedDamage_Implementation(EDamageType DamageType) {
}

void ASimCharacter::MulticastApplyNonFatalHit_Implementation(const float InStagger) {
}

void ASimCharacter::ClientVehicleSeatSwitched_Implementation(bool bIsDriver, ASimVehicle* Vehicle) {
}

void ASimCharacter::ClientTraceActivity_Implementation(FActivityStateDebugTrace NewTrace) {
}

void ASimCharacter::ClientSyncActivityStateSequence_Implementation(uint8 CurrentSequenceNumber, int8 HeldItemIndex) {
}

void ASimCharacter::ClientSetUnmountPosition_Implementation(FVector Position, FRotator Rotation) {
}

void ASimCharacter::ClientSetNormalizedStamina_Implementation(float InNormalizedStamina) {
}

void ASimCharacter::ClientSetItemHolderItems_Implementation(const TArray<FItemInstance>& InItemHolderItems) {
}

void ASimCharacter::ClientSetGainingHeatFromHits_Implementation(bool bIsGaining) {
}

void ASimCharacter::ClientSetFlyMode_Implementation(const bool bInIsFlyMode, const float FlyHeight, const float FlySpeed) {
}

void ASimCharacter::ClientInterruptActivityState_Implementation(uint8 SequenceNumber) {
}

void ASimCharacter::ClientCorrectActivityState_Implementation(uint8 LastSuccessfulSequenceNumber, int8 HeldItemIndex, ECharacterActivityState NewState) {
}

void ASimCharacter::ClientCarryWoundedSetupMovement_Implementation(ASimCharacter* WoundedCharacter, bool bBeganCarrying) {
}
bool ASimCharacter::ClientCarryWoundedSetupMovement_Validate(ASimCharacter* WoundedCharacter, bool bBeganCarrying) {
    return true;
}

void ASimCharacter::ClientCannonLaunch_Implementation(const FVector2D_NetQuantize LaunchVelocity) {
}

void ASimCharacter::ClientBeginWoundedState_Implementation() {
}

void ASimCharacter::ClientAddSuppression_Implementation(const float SuppressAmount) {
}

void ASimCharacter::ClientAddStability_Implementation(const float StabilityAmount) {
}

void ASimCharacter::ClientAckActivityState_Implementation(uint8 SequenceNumber) {
}

void ASimCharacter::CheckForCover() {
}





void ASimCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimCharacter, RepPlayerMovement);
    DOREPLIFETIME(ASimCharacter, MountComponent);
    DOREPLIFETIME(ASimCharacter, CurrentOccupiedStructure);
    DOREPLIFETIME(ASimCharacter, CurrentVehicle);
    DOREPLIFETIME(ASimCharacter, TeamId);
    DOREPLIFETIME(ASimCharacter, VisualCustomizationMask);
    DOREPLIFETIME(ASimCharacter, bIsWearingGasMask);
    DOREPLIFETIME(ASimCharacter, UniformType);
    DOREPLIFETIME(ASimCharacter, ItemHolderItems);
    DOREPLIFETIME(ASimCharacter, EquipmentItemHolderItems);
    DOREPLIFETIME(ASimCharacter, CharacterActivityStateInternal);
    DOREPLIFETIME(ASimCharacter, Health);
    DOREPLIFETIME(ASimCharacter, ReplicatedItemEncumbrance);
    DOREPLIFETIME(ASimCharacter, bIsEffectedByDeadlyGas);
    DOREPLIFETIME(ASimCharacter, bIsBleeding);
    DOREPLIFETIME(ASimCharacter, ZombieType);
    DOREPLIFETIME(ASimCharacter, WoundedTimeRemaining);
    DOREPLIFETIME(ASimCharacter, YawPitchPacked);
    DOREPLIFETIME(ASimCharacter, bIsInScopeMode);
}


