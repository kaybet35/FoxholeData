#include "SimVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "AFKTimeoutComponent.h"
#include "Net/UnrealNetwork.h"
#include "PlayerCameraRigComponent.h"
#include "SimpleVehicleMovementComponent.h"

ASimVehicle::ASimVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("VehicleCollision")).SetDefaultSubobjectClass<USimpleVehicleMovementComponent>(TEXT("CharMoveComp"))) {
    this->bNetLoadOnClient = false;
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->bInterpolatePitch = false;
    this->Icon = NULL;
    this->TechID = ETechID::None;
    this->BuildSiteClass = NULL;
    this->VehicleBuildType = EVehicleBuildType::NotBuildable;
    this->FactionVariant = EFactionId::NoTeam;
    this->VehicleProfileType = EVehicleProfileType::Default;
    this->VehicleMovementProfileType = EVehicleMovementProfileType::Default;
    this->ArmourType = EArmourType::None;
    this->bCanDriveOverTrenches = false;
    this->DepthOffset = 0.00f;
    this->MinShipRammingVelocityChangeForDestruction = 0.00f;
    this->bIgnoreNonRootComponentsDuringVehicleMovement = true;
    this->bCanCarryVehicles = false;
    this->Health = 300;
    this->TankArmour = 0;
    this->Subsystems = 0;
    this->ActiveModularMounts[0] = 0;
    this->ActiveModularMounts[1] = 0;
    this->bAllowAnySeatSwitches = true;
    this->bCanUseStructures = false;
    this->bIsStockpilable = true;
    this->bIsReserveStockpiled = false;
    this->bIsUsableFromVehicle = false;
    this->bCanBeDemolished = false;
    this->bCanBeDisabled = true;
    this->bAllowItemDrop = false;
    this->bRestrictMovementFromItems = false;
    this->bIsVehicleOn = false;
    this->bIsVehicleLocked = false;
    this->bIsCommanderHatchOpen = false;
    this->bIsReservable = false;
    this->bIsShipCargo = false;
    this->bAllowsDirectPackaging = false;
    this->TeamId = 255;
    this->DepthCuttoffForSwimDamage = 0.00f;
    this->SquadLockDuration = 1800;
    this->CommanderIndex = -1;
    this->MaxPlatformPlayers = 6;
    this->DestroyedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestroyedMesh"));
    const FProperty* p_CapsuleComponent_Parent = GetClass()->FindPropertyByName("CapsuleComponent");
    this->MinorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MinorDamagePS"));
    this->MajorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MajorDamagePS"));
    this->DestroyedFX = NULL;
    this->DisabledTurretFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurretFX"));
    this->DisabledTurret2FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurret2FX"));
    this->DisabledTurret3FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurret3FX"));
    this->DisabledTurret4FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurret4FX"));
    this->DisabledTurret5FX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledTurret5FX"));
    this->DestroyedSoundCue = NULL;
    this->BreakdownSoundCue = NULL;
    this->BoostSoundCue = NULL;
    this->CharatcerHitSound = NULL;
    this->EnvironmentHitSound = NULL;
    this->DriveLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DriveLoop"));
    this->BackUpSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("BackUpSFXLoop"));
    this->LockSound = NULL;
    this->CameraRigComponent = CreateDefaultSubobject<UPlayerCameraRigComponent>(TEXT("CameraRigVehicle"));
    this->FrontAxleCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("FrontAxelCastLocation"));
    this->RearAxleCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RearAxleCastLocation"));
    this->FrontLeftRollCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("FrontRightAxleCastLocation"));
    this->FrontRightRollCastLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RearRightAxleCastLocation"));
    this->LeftSideTrackLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LeftSideTrackLocation"));
    this->RightSideTrackLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RightSideTrackLocation"));
    this->BoxCollision = (UBoxComponent*)RootComponent;
    this->PassengerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("PassengerBaseBox"));
    this->AFKTimeoutComponent = CreateDefaultSubobject<UAFKTimeoutComponent>(TEXT("AFKTimeoutComponent"));
    this->ItemHolder = NULL;
    this->DefaultTreadTime = 0.10f;
    this->LinearSpeedToTurnSpeedMapCurve = NULL;
    this->LinearSpeedToWaterTurnSpeedMapCurve = NULL;
    this->BoostSpeedModifier = 1.00f;
    this->BoostGasUsageModifier = 1.00f;
    this->MapIconType = EMapIconType::None;
    this->bCanMoveUnderBridges = false;
    this->bUsesTraces = true;
    this->ServerAnimTickMode = EServerAnimTickMode::NeverTicks;
    this->CoalitionId = 0;
    this->Tier = ETechTreeTier::One;
    this->bIncludeInRecoverySaves = true;
    this->bDoPenetratingShotsReduceTankArmour = true;
    this->VehiclesPerCrateBonusQuantity = 0;
    this->bSupportsFastAttachedMove = true;
    this->PackagedMesh = NULL;
    this->ViewabilityRadiusExtension = 0.00f;
    this->FloodableComponent = NULL;
    this->bCargoSealed = true;
    this->TravelBorderSizeOverride = 0.00f;
    this->bShowOnMapIntel = true;
    this->bCheckPassengerEncumbrance = true;
    this->bIsVisibleOnSonar = false;
    this->bDestroysIceWhenWaterTravelling = false;
    this->DisabledTurret3FX->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->DisabledTurret4FX->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->DisabledTurret5FX->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->DriveLoop->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->BackUpSFXLoop->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->CameraRigComponent->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->FrontAxleCastLocation->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->RearAxleCastLocation->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->FrontLeftRollCastLocation->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->FrontRightRollCastLocation->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->LeftSideTrackLocation->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->RightSideTrackLocation->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->PassengerArea->SetupAttachment(RootComponent);
    this->DestroyedMesh->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->MinorDamagePS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->MajorDamagePS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->DisabledTurretFX->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->DisabledTurret2FX->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
}

void ASimVehicle::VehicleCollisionTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASimVehicle::ServerSwitchSeats_Implementation(int32 NewSeatIndex) {
}
bool ASimVehicle::ServerSwitchSeats_Validate(int32 NewSeatIndex) {
    return true;
}

void ASimVehicle::ServerStartBoost_Implementation() {
}
bool ASimVehicle::ServerStartBoost_Validate() {
    return true;
}

void ASimVehicle::ServerOnMount_Implementation(ASimCharacter* PlayerCharacter) {
}
bool ASimVehicle::ServerOnMount_Validate(ASimCharacter* PlayerCharacter) {
    return true;
}

void ASimVehicle::ServerFire_Implementation() {
}
bool ASimVehicle::ServerFire_Validate() {
    return true;
}

void ASimVehicle::ServerDeployGunner_Implementation() {
}
bool ASimVehicle::ServerDeployGunner_Validate() {
    return true;
}

void ASimVehicle::OnRep_Tier() {
}

void ASimVehicle::OnRep_TeamID() {
}

void ASimVehicle::OnRep_TankArmour() {
}

void ASimVehicle::OnRep_Subsystems(const uint8 PreviousSubsystems) {
}

void ASimVehicle::OnRep_ItemHolderItems() {
}

void ASimVehicle::OnRep_IsVehicleOn() {
}

void ASimVehicle::OnRep_IsCommanderHatchOpen() {
}

void ASimVehicle::OnRep_Health() {
}

void ASimVehicle::OnRep_FuelTankerInfo() {
}

void ASimVehicle::OnRep_FuelTank(const FFuelTank& PreviousFuelTank) {
}

void ASimVehicle::OnRep_CargoSealed(bool bPrevCargoSealed) {
}

void ASimVehicle::OnRep_ActiveModularMounts() {
}

void ASimVehicle::MulticastPlayLockFX_Implementation() {
}

void ASimVehicle::MulticastPassengerExited_Implementation(int32 SeatIndex) {
}

void ASimVehicle::MulticastPassengerEntered_Implementation(int32 SeatIndex) {
}

void ASimVehicle::MulticastOnBoostEntered_Implementation() {
}

void ASimVehicle::MulticastApplyPenetrateHit_Implementation(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType) {
}

void ASimVehicle::MulticastApplyFatalHit_Implementation(bool bDisableCollisions) {
}

void ASimVehicle::MulticastApplyDeflectHit_Implementation(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType) {
}

float ASimVehicle::GetTurnAngle() const {
    return 0.0f;
}

bool ASimVehicle::GetTopHatchOpen() const {
    return false;
}

void ASimVehicle::ClientEndActivityState_Implementation(ASimCharacter* CharacterToInterrupt) {
}

void ASimVehicle::ClientAddDriverSuppression_Implementation(const float SuppressAmount) {
}


void ASimVehicle::AllFire_Implementation() {
}

void ASimVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimVehicle, Health);
    DOREPLIFETIME(ASimVehicle, TankArmour);
    DOREPLIFETIME(ASimVehicle, Subsystems);
    DOREPLIFETIME(ASimVehicle, ActiveModularMounts);
    DOREPLIFETIME(ASimVehicle, FuelTank);
    DOREPLIFETIME(ASimVehicle, bIsVehicleOn);
    DOREPLIFETIME(ASimVehicle, bIsVehicleLocked);
    DOREPLIFETIME(ASimVehicle, bIsCommanderHatchOpen);
    DOREPLIFETIME(ASimVehicle, bIsReservable);
    DOREPLIFETIME(ASimVehicle, TeamId);
    DOREPLIFETIME(ASimVehicle, ItemHolderItems);
    DOREPLIFETIME(ASimVehicle, CoalitionId);
    DOREPLIFETIME(ASimVehicle, Tier);
    DOREPLIFETIME(ASimVehicle, bCargoSealed);
    DOREPLIFETIME(ASimVehicle, DeploymentLogic);
    DOREPLIFETIME(ASimVehicle, FuelTankerInfo);
}


