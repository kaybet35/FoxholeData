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
    this->bShowExtraTracers = false;
    this->bLimitOccupantFiringArc = false;
    this->MaxOccupantFiringArcDeviation = 0.00f;
    this->OccupantFiringConeAngle = 0.00f;
    this->bUsesLegacyFoxholeTurretDamageSelection = false;
    this->bUseATDamageForVehicle = false;
    this->FiringConeAngle = 0.00f;
    this->EnemyType = ECC_Pawn;
    this->CurrentEnemyTargetYaw = 0.00f;
    this->bIsEnemyObscured = false;
    this->bIsSuppressedOverride = false;
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
    DOREPLIFETIME(UAITurretComponent, bIsSuppressedOverride);
}


