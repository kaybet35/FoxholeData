#include "WarTweakables.h"

FWarTweakables::FWarTweakables() {
    this->bRequireAuth = false;
    this->bLogAuthToDiscord = false;
    this->bEnableRestrictions = false;
    this->VehicleWrenchPreventionTime_Min = 0.00f;
    this->AWSLogEnableStatus = EAWSLogEnableStatus::Live;
    this->UprisingPhaseDuration = 0.00f;
    this->MineDecayTimeSec = 0;
    this->MaxVehicleAFKDurationSeconds = 0.00f;
    this->MaxStructureAFKDurationSeconds = 0.00f;
    this->GasMaskFilterAbsorbPerPoint = 0.00f;
    this->StockpileDecimation = 0.00f;
    this->ResearchDecimation = 0.00f;
    this->bEnableUprisings = false;
    this->bEnableResourceTestMode = false;
    this->ScrapReplenishRates = 0.00f;
    this->ComponentReplenishRates = 0.00f;
    this->SulfurReplenishRates = 0.00f;
    this->SpawnTimeColonial = 0.00f;
    this->SpawnTimeWarden = 0.00f;
    this->SpawnTimeCap = 0.00f;
    this->StructureRecentAttackDurationMin = 0.00f;
    this->StructureUnderAttackAlertCooldownMin = 0.00f;
    this->PostTravelInvulnerabilityTime = 0.00f;
    this->PostTravelInvulCooldownSeconds = 0.00f;
    this->GarrisonFrequency = 0.00f;
    this->GarrisonActivityFactor = 0.00f;
    this->GarrisonActivityFactorOverride = 0.00f;
    this->SmallGarrisonActivityFactor = 0.00f;
    this->LargeGarrisonActivityFactor = 0.00f;
    this->GarrisonDeployCost = 0.00f;
    this->GarrisonDecay = 0.00f;
    this->GarrisonStarterSize = 0.00f;
    this->GarrisonMinSize = 0.00f;
    this->DesiredFriendlyGarrisonSize = 0.00f;
    this->FriendlyGarrisonGrowth = 0.00f;
    this->DeployRechargeTime = 0;
    this->TimeBetweenDeadlyGasEffect = 0.00f;
    this->ZombieRegularHealthModifier = 0.00f;
    this->ZombieSpitterHealthModifier = 0.00f;
    this->ZombieTankHealthModifier = 0.00f;
    this->ZombieRegularDamage = 0.00f;
    this->ZombieSpitterDamage = 0.00f;
    this->ZombieTankDamage = 0.00f;
    this->HitMitigation = 0.00f;
    this->HitMitigationRifle = 0.00f;
    this->HitMitigationCarbine = 0.00f;
    this->HitMitigationSniper = 0.00f;
    this->HitMitigationAssault = 0.00f;
    this->HitMitigationOptimalDistance = 0.00f;
    this->ForwardArcDot = 0.00f;
    this->CriticalWoundChanceNormalized = 0.00f;
    this->PatientConversionTimeModifier = 0.00f;
    this->HospitalSpawnChargesModifier = 0.00f;
    this->HomeRegionTestPopulation = 0;
    this->HomeRegionPlayersPerBase = 0;
    this->UnexplodedOrdnanceChance = 0.00f;
    this->FortBaseNetworkDistance = 0;
    this->LRADamage = 0.00f;
    this->LRADamageInnerRadius = 0.00f;
    this->LRAAccuracyRadiusMultiplier = 0.00f;
    this->FSAAccuracyRadiusMultiplier = 0.00f;
    this->LRALaunchVelocity = 0.00f;
    this->LRALaunchVelocityZ = 0.00f;
    this->LRALaunchVelocityZDistanceFactor = 0.00f;
    this->IntelCenterListeningRadiusMin = 0.00f;
    this->IntelCenterListeningRadiusMax = 0.00f;
    this->bPreventSaveWithZeroActors = false;
    this->bLogIncompleteValidations = false;
    this->ValidationThreshold = 0.00f;
    this->FastDecayOnRoadFactor = 0.00f;
    this->FortDecayFactor = 0.00f;
    this->FortChanceToAggro = 0.00f;
    this->BorderFOBDeploymentDistance = 0.00f;
    this->NumUnstuckCommandsPerWar = 0;
    this->UnstuckWaitTime = 0.00f;
    this->ReserveStockpileExpiryHours = 0.00f;
    this->RefineryExpiryHours = 0.00f;
    this->StockpileAlertMinValue = 0;
    this->DistributionCenterAlertMinValue = 0;
    this->DistributionCenterSubmitCooldown = 0;
    this->FactoryScalingPopulationMin = 0;
    this->FactoryScalingPopulationMax = 0;
    this->FactoryScalingModifierMin = 0.00f;
    this->FactoryScalingModifierMax = 0.00f;
    this->FactoryExpiryMultiplier = 0.00f;
    this->FactoryOrderTimeMultiplier = 0.00f;
    this->MassProductionSpeedFactor = 0.00f;
    this->MassProductionMaxCompletedOrders = 0;
    this->ResourceHighYieldChance = 0.00f;
    this->ResourceHighYieldRandomFloor = 0.00f;
    this->ResourceHighYieldRandomCeiling = 0.00f;
    this->ResourceFieldScalingPopulationMin = 0;
    this->ResourceFieldScalingPopulationMax = 0;
    this->ResourceFieldScalingModifierMin = 0.00f;
    this->ResourceFieldScalingModifierMax = 0.00f;
    this->ResourceFieldReplenishmentVariation = 0.00f;
    this->TechNodeMinSpawnChance = 0.00f;
    this->TechNodeMaxSpawnChance = 0.00f;
    this->TechNodeMinThreshold = 0;
    this->TechNodeMaxThreshold = 0;
    this->ResourceMineScalingPopulationMin = 0;
    this->ResourceMineScalingPopulationMax = 0;
    this->ResourceMineScalingModifierMin = 0.00f;
    this->ResourceMineScalingModifierMax = 0.00f;
    this->MinVehicleSpawnTimeSeconds = 0.00f;
    this->MaxVehicleSpawnTimeSeconds = 0.00f;
    this->ResearchTickRate = 0.00f;
    this->StockpileActivityModifier = 0.00f;
    this->MaxStockpileActivityPerHour = 0.00f;
    this->SuppliesActivityModifier = 0.00f;
    this->MaxSuppliesActivityPerHour = 0.00f;
    this->SpawnPointActivityModifier = 0.00f;
    this->MaxSpawnPointActivityPerHour = 0.00f;
    this->TeamStructureActivityModifier = 0.00f;
    this->MaxTeamStructureActivityPerHour = 0.00f;
    this->FriendlyTerritoryActivityModifier = 0.00f;
    this->EarlyWarActivityModifier = 0.00f;
    this->EarlyWarActivityMaxAmount = 0.00f;
    this->MaxActivityPerHour = 0.00f;
    this->ProvisionalGarrisonSpawnsRequired = 0;
    this->MinTankArmourMultiplier = 0.00f;
    this->SubsystemDisableChanceMultiplier = 0.00f;
    this->FrontierMapIntelLimitDistance = 0.00f;
    this->ZombieHeavyStructureThreshold = 0.00f;
    this->ZombieHeavyStructureHitChance = 0.00f;
    this->ZombieTankHeavyStructureHitChance = 0.00f;
    this->BorderBaseCooldownSeconds = 0.00f;
    this->BorderBaseSuppliesPopulationMin = 0;
    this->BorderBaseSuppliesPopulationMax = 0;
    this->BorderBaseSuppliesModifierOverride = 0.00f;
    this->JoinServerReservationMinutes = 0.00f;
    this->TravelReservationMinutes = 0.00f;
    this->MaxReservedQueueSlots = 0;
    this->TimeInConquestQueueThreshold = 0.00f;
    this->AISupppressionMax = 0.00f;
    this->AISuppressionDecayRate = 0.00f;
    this->AISuppressionGrowthRate = 0.00f;
    this->AISuppressionGrowthMax = 0.00f;
    this->VoiceChatChannelNameSuffix = 0;
    this->bFactionSpecificVoice = false;
    this->MaxResourceNodesOfAnyKind = 0;
    this->WorldResourceSpawnChance = 0.00f;
    this->WorldResourceRoadMultiplier = 0.00f;
    this->WorldResourceMaxBadLuckMins = 0.00f;
    this->WorldResourceMaxBadLuckMultiplier = 0.00f;
    this->WorldResourceDistanceCheck = 0.00f;
    this->WorldResourceDistance = 0.00f;
    this->WorldResourceCooldown = 0.00f;
    this->WreckageToBMatMax = 0;
    this->WreckageToRMatMax = 0;
    this->WreckageToRelicMax = 0;
    this->WreckageBMatWeight = 0;
    this->WreckageRMatWeight = 0;
    this->BallisticPenetrationMaxDistance = 0.00f;
    this->BallisticPenetrationDistanceExponent = 0.00f;
    this->BallisticPenetrationMaxAngleBonus = 0.00f;
    this->BallisticPenetrationMaxRangeBonus = 0.00f;
    this->MuddynessGain = 0.00f;
    this->MuddynessLost = 0.00f;
    this->PlayerSnowStormTemperatureLoss = 0.00f;
    this->VehicleSnowStormTemperatureLoss = 0.00f;
    this->PlayerInVehicleTemperatureGain = 0.00f;
    this->PlayerInStructureTemperatureGain = 0.00f;
    this->PlayerNoWeatherTemperatureGain = 0.00f;
    this->VehicleNoWeatherTemperatureGain = 0.00f;
    this->FrozenPipePenalty = 0.00f;
    this->PlayerFirePitTemperatureGain = 0.00f;
    this->VehicleFirePitTemperatureGain = 0.00f;
    this->VehicleEngineOnTemperatureGain = 0.00f;
    this->VehicleShelteredTemperatureGain = 0.00f;
    this->NaturalHeatDecay = 0.00f;
    this->NaturalHeatGrowth = 0.00f;
    this->StructurePrototypeRepairModifier = 0.00f;
    this->VehiclePrototypeRepairModifier = 0.00f;
    this->FirePitFuelUseMultiplier = 0.00f;
    this->MHTAllowedExtraDistance = 0.00f;
    this->WindDirectionOverride = 0.00f;
    this->WindSpeedOverride = 0.00f;
    this->WindFactor = 0.00f;
    this->WindSpeedMin = 0.00f;
    this->WindSpeedChangeRateMin = 0.00f;
    this->WindSpeedChangeRateMax = 0.00f;
    this->WindDirectionChangeRateMin = 0.00f;
    this->WindDirectionChangeRateMax = 0.00f;
    this->WindDirectionChangeDurationMin = 0.00f;
    this->WindDirectionChangeDurationMax = 0.00f;
    this->WindDirectionMaxDelta = 0.00f;
    this->WeatherWindChangeMultiplier = 0.00f;
    this->StructureDamageDevastationSize = 0.00f;
    this->StructureDamageDevastationFactor = 0.00f;
    this->StructureDamageDevastationMultiplierMax = 0.00f;
    this->StructureDamageDevastationMinThreshold = 0.00f;
    this->StructureBreachingDevastationMultiplierMax = 0.00f;
    this->RuinedStructureDevstationSize = 0.00f;
    this->RuinedStructureDevstationThreshold = 0.00f;
    this->MinFortArtilleryShots = 0;
    this->MaxFortArtilleryShots = 0;
    this->DecayDamageMultiplier = 0.00f;
    this->DeployQueueTimerSec = 0.00f;
    this->AutoSaveSeconds = 0.00f;
    this->RecoverySaveSeconds = 0.00f;
    this->WarBalancerEnabled = false;
    this->WarBalancerTickRate = 0.00f;
    this->WarBalancerDryRunMode = false;
    this->WarBalancerMaxPlayers = 0;
    this->WarBalancerMinPlayersBasedOnTick = 0;
    this->WarBalancerFalloffStartDay = 0;
    this->WarBalancerFalloffPerDay = 0.00f;
    this->WarBalancerWinFactorMinZoneDelta = 0;
    this->WarBalancerLocalPopulationFactorSmallFaction = 0;
    this->WarBalancerLocalPopulationFactorMinDelta = 0;
    this->WarBalancerMostlyFriendlyRegionZoneDelta = 0;
    this->WarBalancerContestedPopulation = 0;
    this->WarBalancerContestedMinFreeSlots = 0;
    this->WarBalancerDisadvantagedImbalance = 0.00f;
    this->WarBalancerImbalanceLimit = 0.00f;
    this->WarBalancerContestedMaxPopulationMultiplier = 0.00f;
    this->WarBalancerSpawnTimeAveragePopulationWeight = 0.00f;
    this->WarBalancerSpawnTimeMultiplier = 0.00f;
    this->WarBalancerSpawnTimeEnemyRegionMultiplier = 0.00f;
    this->WarBalancerSpawnTimeMax = 0.00f;
    this->WarBalancerMaxTickMs = 0.00f;
    this->WarBalancerContestedMaxQueueSize = 0;
    this->WarBalancerAbsoluteMinPopulation = 0;
    this->WarBalancerAbsoluteMinPopulationIsland = 0;
    this->WarBalancerMaxLoweredPopulation = 0;
    this->WarBalancerSmallerFactionHeadroom = 0;
    this->WarBalancerIslandEndDay = 0;
    this->MaxProfilesToProcessAtOnce = 0;
    this->bKickForVacTimeout = false;
    this->bEnableInfoUpdate = false;
    this->RecoveryModeDurationSeconds = 0.00f;
    this->bEnableDamageDebug = false;
    this->BridgeVehicleDecayPercent = 0.00f;
    this->BridgeVehicleGracePeriod = 0.00f;
    this->BridgeLargeShipDecayPercent = 0.00f;
    this->BridgeLargeShipGracePeriod = 0.00f;
    this->IntelLeakVoteKicksRequired = 0;
    this->PreAutoRestartAlertTime = 0.00f;
    this->PreAutoRestartAlertInterval = 0.00f;
    this->SameStructureRadius = 0.00f;
    this->SameStructureMaxOverlapCount = 0;
    this->NetStatsInterval = 0.00f;
    this->AbandonedBaseTickRate = 0.00f;
    this->AbandonedBaseNormalizedDamage = 0.00f;
    this->FacilityDurationModifier = 0.00f;
    this->FacilityPowerDurationModifier = 0.00f;
    this->FacilityPendingOrderTime = 0.00f;
    this->FacilityOrderTime = 0.00f;
    this->FacilityCompletedOrderTime = 0.00f;
    this->BuildingFireSpreadChanceFactor = 0.00f;
    this->MaxPowerNodeDistance = 0;
    this->MaxRailTravelPassengers = 0;
    this->MaxLargeShipTravelPassengers = 0;
    this->MaxLargeShipDeploymentPassengers = 0;
    this->MaxLargeShipAnchoredDeploymentPassengers = 0;
    this->NumDisruptivePlacementVotes = 0;
    this->FireBaseChance = 0.00f;
    this->FireMaxDevastationBonusToFireChance = 0.00f;
    this->FireMaxAddedBurningFromHitsPerTick = 0.00f;
    this->FireMinAddedBurningFromHitsPerTick = 0.00f;
    this->FireBurningCharacterRange = 0.00f;
    this->FireMinFireDamageToContinueBurning = 0.00f;
    this->FireExtinguishEffectivenessMultiplier = 0.00f;
    this->FireAddedBurningEffectivenessMultiplier = 0.00f;
    this->FireBuildingCharacterBurnMultiplier = 0.00f;
    this->FireDamageToGuaranteedIgnite = 0.00f;
    this->ArtilleryTravelFiringPreventionSeconds = 0.00f;
    this->TrackSupplyDrainSkipChance = 0.00f;
    this->bFireSpreadFromNeutralStructures = false;
    this->bCheckReservationsOnLogin = false;
    this->bCheckMaxPlayersOnLogin = false;
    this->RailwayTrackRepairPercentMS = 0.00f;
    this->RailwayTrackRepairPercentCM = 0.00f;
    this->RailwayTrackRepairCooldown = 0.00f;
    this->DestroyItemComponentsDelay = 0.00f;
    this->bDestroyItemComponents = false;
    this->bDisableItemComponentsRep = false;
    this->MaintenanceRepairPercent = 0.00f;
    this->RegionZoneStructureCountInterval = 0.00f;
    this->LeakSizeIncrease = 0.00f;
    this->LeakWaterPerSecond = 0.00f;
    this->LargeLeakWaterPerSecond = 0.00f;
    this->MaxLeakSpreadPerSecond = 0.00f;
    this->bStopFireOnNeutralJoin = false;
    this->DrivingRestrictionThreshold = 0.00f;
    this->bEnableVehicleRestore = false;
    this->VehicleRestoreChance = 0.00f;
    this->VehicleRestoreTimeMin = 0.00f;
    this->VehicleRestoreTimeMax = 0.00f;
    this->RetrieveTimePerSecond = 0.00f;
    this->MaxRetrieveTimeSpent = 0.00f;
    this->bEnableVehicleAI = false;
    this->SensorListeningRange = 0.00f;
    this->AutoRepairAmountNormalized = 0.00f;
    this->LargeShipAIBorderDeadZoneOverride = 0.00f;
    this->ItemDecayDurationOverride = 0.00f;
    this->FloodableRainStormWaterPerSecond = 0.00f;
    this->FloodableRainStormMaxWaterLevel = 0.00f;
    this->SubmarineRecoveryTimeSeconds = 0.00f;
    this->bAllowEjectDriver = false;
    this->bAllowLargeShipUnstuck = false;
    this->PostRecoveryModeDurationSeconds = 0.00f;
    this->PostVehicleDriverDisconnectDurationSeconds = 0.00f;
    this->MaxAFKDurationSeconds = 0.00f;
    this->bAutomaticallyDisableAuth = false;
    this->NumFailuresToDisableAuth = 0;
    this->AuthFailureDurationRequiredSeconds = 0.00f;
    this->AuthReEnableSeconds = 0.00f;
    this->BorderDecayFactor = 0.00f;
    this->WarBalancerMaxPopulationChangePerTick = 0;
    this->RareMetalWeightAdjustment = 0;
    this->CommendHistoryExpirySecs = 0.00f;
    this->GlobalRefineSpeedModifier = 0.00f;
    this->FacilityMapPostItemRadius = 0.00f;
    this->MaxBreachChance = 0.00f;
    this->MinBreachChance = 0.00f;
    this->MultipleShelterModifier = 0.00f;
    this->bAllowStockpileExternalUser = false;
    this->bGateLongRangeArtilleryFiringOnTech = false;
    this->bAllowSquadMissingMembers = false;
    this->bUseDevVotesRequiredCount = false;
    this->bUseDevRestrictionDuration = false;
    this->bFactionLock = false;
}

