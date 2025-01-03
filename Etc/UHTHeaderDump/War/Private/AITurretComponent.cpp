#include "AITurretComponent.h"
#include "Net/UnrealNetwork.h"

UAITurretComponent::UAITurretComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->AllowedTargetTypes = 63;
    this->MuzzleType = ETurretMuzzleType::Self;
    this->GunnerIndex = 0;
    this->NumMuzzles = 1;
    this->TrackingMode = ETurretTrackingMode::Instant;
    this->TrackingSpeed = 0.00f;
    this->TrackingThreshold = 0.00f;
    this->YawToPitchCurve = NULL;
    this->MinimumRange = 0.00f;
    this->MaximumRange = 0.00f;
    this->MaximumReachability = 4000.00f;
    this->BorderDeadZone = 0.00f;
    this->bReduceRangeAtNight = true;
    this->bIgnoreLineOfSight = false;
    this->bFlaresNegateNightRangeReduction = false;
    this->bIs360ViewWhenMounted = false;
    this->SuppressionPercentage = 0;
    this->bIsSuppressible = false;
    this->AttackDelayAgainstVehicles = 1.00f;
    this->bShowExtraTracers = false;
    this->bUsesLegacyFoxholeTurretDamageSelection = false;
    this->bUseATDamageForVehicle = false;
    this->ImpactEffect = NULL;
    this->ImpactEffectAlternate = NULL;
    this->WeaponFireFXClass = NULL;
    this->WeaponFireFXClassAlternate = NULL;
    this->ShotSoundCue = NULL;
    this->ShotAgainstVehicleSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->WeaponDamage = 0.00f;
    this->WeaponDamageAgainstVehicles = 75.00f;
    this->BestJitterConeHalfAngle = 0.00f;
    this->WorstJitterConeHalfAngle = 0.00f;
    this->FiringPeriod = 0.00f;
    this->TimeToFullFireRateAndAccuracy = 0.00f;
    this->FiringConeAngle = 0.00f;
    this->EnemyPursueDuration = 0.00f;
    this->ArmourDamageModifier = 1.00f;
    this->TargetStabilityReductionPerShot = 0.00f;
    this->EnemyType = ECC_Pawn;
    this->CurrentEnemyTargetYaw = 0.00f;
    this->bIsEnemyObscured = false;
    this->AITurretBlueprintCDO = NULL;
}

void UAITurretComponent::OnRep_SimulatedHitNotify() {
}

void UAITurretComponent::OnRep_IsEnemyObscured() {
}

void UAITurretComponent::OnRep_CurrentEnemy() {
}

void UAITurretComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAITurretComponent, SuppressionPercentage);
    DOREPLIFETIME(UAITurretComponent, CurrentEnemy);
    DOREPLIFETIME(UAITurretComponent, CurrentEnemyTargetYaw);
    DOREPLIFETIME(UAITurretComponent, SimulatedHitNotify);
    DOREPLIFETIME(UAITurretComponent, bIsEnemyObscured);
}


