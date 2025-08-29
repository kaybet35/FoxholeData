---@meta

---@class AAccessoryPickup : AGearPickup
---@field SlotsToAccessorize TArray<EEquipmentSlot>
local AAccessoryPickup = {}



---@class AAlwaysReservableItemPickup : ABasicItemPickup
local AAlwaysReservableItemPickup = {}


---@class AAmbulance : ARWDSimVehicle
local AAmbulance = {}


---@class AAmmoPickup : ABasicItemPickup
local AAmmoPickup = {}


---@class AAmmoRoom : ATeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
local AAmmoRoom = {}



---@class AAmmoRoomBuildSite : AFortBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
local AAmmoRoomBuildSite = {}



---@class AAmphibiousVehicle : ARWDSimVehicle
---@field FrontLeftWaterEmitter UParticleSystemComponent
---@field FrontRightWaterEmitter UParticleSystemComponent
---@field BackRightWaterEmitter UParticleSystemComponent
---@field BackLeftWaterEmitter UParticleSystemComponent
---@field WakeWaterEmitter UParticleSystemComponent
---@field WaterDriveLoop UAudioComponent
local AAmphibiousVehicle = {}



---@class AAntiZombiePainVolume : AWarPainVolume
local AAntiZombiePainVolume = {}


---@class AArmoredCar : ARWDSimVehicle
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmoType FName
---@field StashedAmmo int32
---@field PayloadMeshes FPayloadMeshes
local AArmoredCar = {}

function AArmoredCar:OnRep_StashedAmmo() end
function AArmoredCar:OnRep_GunnerYawAndPitch() end


---@class AArmourProfiles : AInfo
---@field DataTable UDataTable
local AArmourProfiles = {}



---@class AArtillery : ARWDSimVehicle
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmo int32
---@field StashedAmmoType FName
---@field PayloadMeshes FPayloadMeshes
local AArtillery = {}

function AArtillery:OnRep_StashedAmmo() end
function AArtillery:OnRep_GunnerYawAndPitch() end


---@class AArtilleryRailVehicle : AInfantryRailVehicle
---@field FireShellParticleSystem UParticleSystemComponent
---@field EjectShellParticleSystem UParticleSystemComponent
---@field InitialDelay float
---@field ExplosionDelay float
---@field FuelPowerForRotation float
---@field FuelPowerForFiring float
---@field HeatForFiring uint8
---@field Heat uint8
local AArtilleryRailVehicle = {}



---@class AAssemblyStation : ATeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field UpgradeSlotComponent UModificationSlotComponent
---@field PowerSocket UBuildSocketComponent
---@field LightComponent UFacilityLightComponent
---@field GarageFootprintComponent UBoxComponent
---@field TransferLocation USceneComponent
---@field TransferLocation2 USceneComponent
---@field AssemblyAreaComponent UAssemblyAreaComponent
---@field AssemblyItems TArray<FAssemblyItem>
---@field Modifications TMap<EFortModificationType, FAssemblyModification>
---@field RepairCost FResourceAmounts
---@field PowerGridInfo FPowerGridInfo
---@field BuildActor TWeakObjectPtr<AActor>
---@field AssemblyAreaState EAssemblyAreaState
---@field BuildActorName FName
---@field ProducerOnlineID FString
---@field bAllowsTierUpgrades boolean
---@field bSupportsExtraLargeShippables boolean
---@field bIsDockyard boolean
---@field bVehiclesMustBePositionedForRepairs boolean
---@field UpgradeCostMultiplier float
---@field GarageFootprintKillLocationZ float
---@field LadderLocation1 USceneComponent
---@field LadderLocation2 USceneComponent
---@field LadderLocation3 USceneComponent
---@field LadderType TSubclassOf<ALadder>
---@field SpawnedLadders TArray<ALadder>
local AAssemblyStation = {}

function AAssemblyStation:OnRep_PowerGridInfo() end
function AAssemblyStation:OnRep_BuildActor() end
function AAssemblyStation:OnRep_AssemblyAreaState() end


---@class AAssemblyStationBuildSite : AStructureBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
local AAssemblyStationBuildSite = {}



---@class ABackpackItemPickup : AItemPickup
---@field BackpackMeshes TArray<USkeletalMesh>
local ABackpackItemPickup = {}



---@class ABarbedWire : ABuildableStructure
local ABarbedWire = {}


---@class ABarge : ASimVehicle
---@field Ramp FRampData
---@field RampDriveVolume UBoxComponent
---@field FrontLeftWaterEmitter UParticleSystemComponent
---@field FrontRightWaterEmitter UParticleSystemComponent
---@field BackRightWaterEmitter UParticleSystemComponent
---@field BackLeftWaterEmitter UParticleSystemComponent
---@field WakeWaterEmitter UParticleSystemComponent
---@field WaterDriveLoop UAudioComponent
---@field KillVolume UBoxComponent
---@field WorkVolume UBoxComponent
---@field DockedState EDockedState
---@field RampAngle float
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field DynamicMeshComponent UMeshComponent
---@field TransferLocation USceneComponent
---@field GlobalShippableInfo TSubclassOf<AGlobalShippableInfo>
---@field CurrentShippable FName
---@field ShippableData FReplicatedShippableData
---@field SavedData FSavedShippableData
---@field ShippableUseComponent UShippableUseComponent
local ABarge = {}

function ABarge:ServerToggleRamp() end
function ABarge:OnRep_ShippableData() end
function ABarge:OnRep_DockedState() end
function ABarge:OnRep_CurrentShippable() end


---@class ABargeShip : AShipVehicle
---@field Ramp FRampData
---@field RampDriveVolume UBoxComponent
---@field WaterDriveLoop UAudioComponent
---@field KillVolume UBoxComponent
---@field WorkVolume UBoxComponent
---@field DockedState EDockedState
---@field RampAngle float
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field DynamicMeshComponent UMeshComponent
---@field TransferLocation USceneComponent
---@field GlobalShippableInfo TSubclassOf<AGlobalShippableInfo>
---@field CurrentShippable FName
---@field ShippableData FReplicatedShippableData
---@field SavedData FSavedShippableData
---@field DockingObstructionCheckVolume UBoxComponent
---@field UndockingObstructionCheckVolume UBoxComponent
---@field ShippableUseComponent UShippableUseComponent
---@field StarterFuelNormalizedOverride float
local ABargeShip = {}

function ABargeShip:ServerToggleRamp() end
function ABargeShip:OnRep_ShippableData() end
function ABargeShip:OnRep_DockedState() end
function ABargeShip:OnRep_CurrentShippable() end


---@class ABase : ATunnelNode
---@field GenericStockpileComponent UGenericStockpileComponent
---@field TechTreeComponent UTechTreeComponent
---@field SirenLoop UAudioComponent
---@field GarrisonLevel int32
---@field BaseTunnelConnectionRange int32
---@field DecayInfo FDecayInfo
---@field SpawnPoints FSpawnPoints
local ABase = {}



---@class ABaseBuildSite : AStructureBuildSite
---@field bIsStaticBase boolean
---@field GenericStockpileComponent UGenericStockpileComponent
---@field TechTreeComponent UTechTreeComponent
---@field SpawnPoints FSpawnPoints
---@field bIsFirstTier boolean
---@field TunnelNodeProxyClass TSubclassOf<ATunnelNodeProxy>
---@field TunnelNodeProxy ATunnelNodeProxy
---@field bIsBaseUpgrade boolean
---@field TunnelConnectionRange int32
local ABaseBuildSite = {}



---@class ABasicItemPickup : AItemPickup
local ABasicItemPickup = {}


---@class ABattleTank : ATankBase
---@field MainGunYaw float
---@field MainGunPitch float
---@field AlternateGunYaw float
---@field AlternateGunPitch float
---@field Alternate2GunYaw float
---@field Alternate2GunPitch float
---@field StashedAmmoType FName
---@field AlternateStashedAmmoType FName
---@field Alternate2StashedAmmoType FName
---@field StashedAmmo int32
---@field AlternateStashedAmmo int32
---@field Alternate2StashedAmmo int32
---@field PayloadMeshes FPayloadMeshes
local ABattleTank = {}

function ABattleTank:OnRep_StashedAmmo() end
function ABattleTank:OnRep_MainGunYaw() end
function ABattleTank:OnRep_MainGunPitch() end
function ABattleTank:OnRep_AlternateStashedAmmo() end
function ABattleTank:OnRep_AlternateGunYaw() end
function ABattleTank:OnRep_AlternateGunPitch() end
function ABattleTank:OnRep_Alternate2GunYaw() end
function ABattleTank:OnRep_Alternate2GunPitch() end
---@return boolean
function ABattleTank:GetIsMainGunFiring() end


---@class ABicycle : ASimVehicle
local ABicycle = {}


---@class ABorderBase : AForwardBase
---@field OnSpawnedPS UParticleSystemComponent
---@field OnSpawnedSFX USoundCue
---@field bIsUsable boolean
---@field Info FBorderBaseInfo
local ABorderBase = {}

function ABorderBase:OnRep_IsUsable() end
function ABorderBase:MulticastOnSpawned() end


---@class ABorderTravelGhost : AActor
---@field BoxCollision UBoxComponent
local ABorderTravelGhost = {}



---@class ABoundaryHex : AActor
---@field Mesh UStaticMeshComponent
---@field EditorMesh UStaticMeshComponent
local ABoundaryHex = {}



---@class ABridge : ABuildableStructure
---@field BelowBlockingVolume UBoxComponent
---@field AboveBlockingArea UBoxComponent
local ABridge = {}



---@class ABuildGhost : AActor
---@field RotatedSocket TWeakObjectPtr<UBuildSocketComponent>
---@field PlacementHitActor TWeakObjectPtr<AActor>
---@field Sockets TArray<UBuildSocketComponent>
---@field ManualConnectorSocket UBuildSocketComponent
---@field MainSplineConnector USplineConnectorComponent
---@field LandscapeHoleVolume TWeakObjectPtr<UBoxComponent>
---@field LandscapeHoleVolumeTransform FTransform
---@field ModificationSocketPreviewInfo TMap<UBuildSocketComponent, FModificationSocketPreviewInfo>
---@field ArrowComponent UArrowComponent
---@field BuildFootprintComponent UBoxComponent
---@field IgnoredActors TArray<TWeakObjectPtr<AActor>>
---@field CDO ABuildableStructure
---@field BuildGhostParamCollection UMaterialParameterCollection
---@field BuildGhostMaterial UMaterialInterface
---@field BuildGhostHighlightMaterial UMaterialInterface
---@field DirectionArrowMesh UStaticMesh
---@field UpgradeModeMaterial UMaterialInterface
---@field LineOfSightVisualizationActor ALineOfSightVisualizationActor
---@field UpgradeStructure ABuildableStructure
local ABuildGhost = {}



---@class ABuildSite : AStructure
---@field DefaultResourceRequirements FResourceAmounts
---@field ResourceRequirements FResourceAmounts
---@field BlocksPassiveDefences boolean
---@field bIgnoreStructureDeathAoE boolean
---@field bAllowStanding boolean
---@field bIsNeutral boolean
---@field TeamId uint8
---@field OwnerWorldPlayerId FString
---@field ResourcesPerBuildCycle int32
---@field bIsBuiltAutomatically boolean
---@field bIsReservableWhenBuiltAutomatically boolean
---@field Tier ETechTreeTier
---@field PrototypeDropLocation FVector
---@field RemainingExpiryTime float
---@field PawnCheckVolumes TArray<UShapeComponent>
---@field BuildSiteMaterial UMaterialInterface
local ABuildSite = {}

function ABuildSite:OnRep_ResourceRequirements() end
function ABuildSite:OnRep_DefaultResourceRequirements() end


---@class ABuildableStructure : AStructure
---@field SnappablePathSocketClass TSubclassOf<UBuildSocketComponent>
---@field PathSockets TArray<FPathSocket>
---@field Tier EFortTier
---@field ModificationMask uint32
---@field bDisableModificationSlotValidation boolean
---@field bOnlyMigratePipesModification boolean
---@field bReadOnlyModifications boolean
---@field ModificationSlots TArray<UModificationSlotComponent>
---@field ProceduralUseVolumeFactor float
---@field ConnectorConfiguration FConnectorConfiguration
---@field bDoUpgradeObstructionCheck boolean
---@field NoBuildPhysicalMaterials TArray<UPhysicalMaterial>
---@field bApplyNoBuildPhysicalMaterialsToSurfaceSamples boolean
---@field bUseSplineFootprintsForSurfaceChecks boolean
---@field bIgnoreNoBuildAreas boolean
---@field bIgnoreBuiltRoads boolean
---@field bIsBuiltOnLandscape boolean
---@field bIsBuiltOnIce boolean
---@field bBuildOnBridges boolean
---@field bBuildOnWater boolean
---@field bIsBuiltOnFoundation boolean
---@field bIsPartiallyBuiltOnFoundation boolean
---@field bAllowFloating boolean
---@field bLinearAttachment boolean
---@field LinearAttachmentTolerance float
---@field bLinearAttachmentPitch boolean
---@field MaxAttachmentGroupSize int32
---@field MapBoundaryBuildRule EMapBoundaryBuildRule
---@field bAllowNearEnemy boolean
---@field bIsConnector boolean
---@field bIsManualConnector boolean
---@field ConnectorMinLength float
---@field ConnectorMaxLength float
---@field MinLengthMaxHealthModifier float
---@field ConnectorMinWidth float
---@field bConnectorCanSnapUnderRoads boolean
---@field BuildGhostClass TSubclassOf<ABuildGhost>
---@field BuildSiteClass TSubclassOf<ABuildSite>
---@field BaseStructureClass TSubclassOf<AStructure>
---@field BreachedStructureClass TSubclassOf<AStructure>
---@field ProxyActorClass TSubclassOf<AActor>
---@field bClearModificationsOnDowngrade boolean
---@field Description FText
---@field ShippableInfo FShippableInfo
---@field Icon UTexture
---@field BuildCategory EBuildCategory
---@field BuildOrder uint8
---@field BuildLocationType EBuildLocationType
---@field MaxBuildDistance float
---@field MaxBuildOverlapDepth float
---@field BuildTargetArmLength float
---@field DestroyedDamageRadius float
---@field DestroyedDamageExtent FVector
---@field DestroyedDamageOffset FVector
---@field bDropsLargeMaterialsWhenDestroyed boolean
---@field bCustomPawnOverlapCheck boolean
---@field bCanOverlapSpawnPoint boolean
---@field bCanBeBuiltIndoors boolean
---@field bIsFillStructureProxy boolean
---@field MinDistanceToSameStructure float
---@field bIsVehicleProxy boolean
---@field bRotateBuildGhost boolean
---@field ValidBuildTools uint8
---@field bIsInitiallyDestroyed boolean
---@field FactionVariant EFactionId
---@field DescriptionDetails TArray<FTooltipDetailText>
---@field ConcreteSettler FConcreteSettler
---@field SpoolingHandler FSpoolingHandler
---@field bIsReservable boolean
---@field bUsesImpactsMaterial boolean
---@field PackagedMesh UStaticMesh
local ABuildableStructure = {}

function ABuildableStructure:OnRep_PathSockets() end
---@param PreviousModificationMask uint32
function ABuildableStructure:OnRep_ModificationMask(PreviousModificationMask) end


---@class ABuiltRoad : ABuildableStructure
---@field SplineConnector USplineConnectorComponent
---@field GrassCullRadius float
---@field BackSocket UBuildSocketComponent
---@field FrontSocket UBuildSocketComponent
local ABuiltRoad = {}



---@class ACabooseRailVehicle : ARailVehicle
---@field GenericStockpileComponent UGenericStockpileComponent
local ACabooseRailVehicle = {}



---@class ACalloutMarker : AActor
---@field Lifetime_Sec float
---@field MoveSpeed float
local ACalloutMarker = {}



---@class ACalloutMarkerGhost : AActor
---@field SimPlayerController ASimPlayerController
local ACalloutMarkerGhost = {}



---@class ACatWalk : ATeamStructure
local ACatWalk = {}


---@class ACharactersRenderInfo : AInfo
---@field OutfitInfoMap TMap<EOutfitType, FOutfitMeshInfo>
---@field UniformInfo FUniformRenderInfo
---@field MaleSkinTones TArray<FCharacterSkinToneInfo>
---@field FemaleSkinTones TArray<FCharacterSkinToneInfo>
---@field FootPrintInfo TArray<FFootPrintActorInfo>
---@field ZombieFootprintInfo FZombieFootPrintActorInfo
---@field IdleAnimations TArray<FIdleAnimation>
---@field PhysicalMaterialResolver FPhysicalMaterialResolver
local ACharactersRenderInfo = {}



---@class AClientFoliageReplacement : AActor
---@field DestroyedMesh UStaticMesh
---@field Mesh UStaticMeshComponent
---@field CriticalThreshold float
---@field ReplacementState EClientFoliageReplacementState
---@field OriginalComponent UFoliageInstancedStaticMeshComponent
local AClientFoliageReplacement = {}

---@param State EClientFoliageReplacementState
function AClientFoliageReplacement:OnStateChanged(State) end


---@class ACoastalGun : AGunTurret
local ACoastalGun = {}


---@class AConcreteWall : AWall
local AConcreteWall = {}


---@class AConquestConfig : AInfo
---@field ItemsC TArray<FCodeNameQuantity>
---@field ItemsW TArray<FCodeNameQuantity>
local AConquestConfig = {}



---@class AConstructionEquipment : ATeamStructure
---@field SkeletalMesh USkeletalMeshComponent
---@field ScoopMaterialMesh UStaticMeshComponent
---@field MaterialGenericStockpileComponent UGenericStockpileComponent
---@field FuelGenericStockpileComponent UGenericStockpileComponent
---@field CollisionQueryLocation USceneComponent
---@field ActiveLoop UAudioComponent
---@field TurningLoop UAudioComponent
---@field ImpactEffectClass TSubclassOf<AImpactEffect>
---@field MaterialDropSoundCue USoundCue
---@field FuelName FName
---@field Config FConstructionEquipmentConfig
---@field MaterialSubmissionDistance float
---@field RecheckBlockedSiteTime float
---@field FuelConsumptionPerCycle int32
---@field ServerState FConstructionEquipmentServerState
local AConstructionEquipment = {}

function AConstructionEquipment:OnRep_ConstructionEquipmentServerState() end
function AConstructionEquipment:MulticastPlayMaterialDropFX() end


---@class AConstructionSite : ATeamStructure
---@field BuildLocationFilter EBuildLocationType
---@field GarageFootprintComponent UBoxComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field FullRepairCost int32
local AConstructionSite = {}

---@return boolean
function AConstructionSite:ValidateMapBuildLocation() end


---@class AConstructionSiteBuildSite : AStructureBuildSite
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
local AConstructionSiteBuildSite = {}



---@class AConstructionVehicle : ARWDSimVehicle
---@field BoomLocation USceneComponent
---@field HammerLocation USceneComponent
---@field WorkSoundCue USoundCue
---@field WorkPS UParticleSystem
---@field CabYaw float
---@field bIsWorking boolean
local AConstructionVehicle = {}

---@param DesiredYaw float
function AConstructionVehicle:ServerSyncDesiredYaw(DesiredYaw) end
---@param bIsWorking boolean
function AConstructionVehicle:ServerSetIsWorking(bIsWorking) end
---@param bIsScoping boolean
function AConstructionVehicle:ServerSetIsScoping(bIsScoping) end
function AConstructionVehicle:MulticastPlayFX() end


---@class AContainer : ABuildableStructure
---@field MeshComponent UStaticMeshComponent
---@field GenericStockpileComponent UGenericStockpileComponent
---@field Colors TArray<FLinearColor>
---@field ColorIndex uint8
local AContainer = {}

function AContainer:OnRep_Color() end


---@class ACrane : ARWDSimVehicle
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field ShippableCollision UBoxComponent
---@field ArmMovementSFXLoop UAudioComponent
---@field DeployingSFXLoop UAudioComponent
---@field PulleyMovementSFXLoop UAudioComponent
---@field CraneComponent UCraneComponent
local ACrane = {}



---@class ACraneMarker : AActor
---@field MainMesh UStaticMeshComponent
---@field InteractMesh UStaticMesh
---@field InteractGreyMesh UStaticMesh
---@field InteractBlockedMesh UStaticMesh
---@field InvalidMesh UStaticMesh
---@field UseMesh UStaticMesh
local ACraneMarker = {}



---@class ACraneRailwayTrack : ARailwayTrack
local ACraneRailwayTrack = {}


---@class ACrater : ABuildableStructure
local ACrater = {}


---@class ADamageProfiles : AInfo
---@field DataTable UDataTable
local ADamageProfiles = {}



---@class ADayNightCycleManager : AActor
---@field LightSource ADirectionalLight
---@field MoonLightSource ADirectionalLight
---@field SkyLight ASkyLight
---@field PostProcessVolume APostProcessVolume
---@field ExponentialHeightFog AExponentialHeightFog
---@field DayReflectionCapture ASphereReflectionCapture
---@field NightReflectionCapture ASphereReflectionCapture
---@field LightDayIntensity float
---@field LightNightIntensity float
---@field DirectionalLightColorCurve UCurveLinearColor
---@field MoonLightColorCurve UCurveLinearColor
---@field MoonLightIntensityCurve UCurveFloat
---@field MoonLightAngleCurve UCurveFloat
---@field VisibilityRadiusIntensityCurve UCurveFloat
---@field FogColorCurve UCurveLinearColor
---@field FogFalloffCurve UCurveFloat
---@field DayReflectionBrightness UCurveFloat
---@field NightReflectionBrightness UCurveFloat
---@field SkyLightIntensity UCurveFloat
---@field LatitudeRotation float
---@field SunSpeed float
---@field NightSunSpeed float
---@field CubeMapSamples TArray<FDayNightCycleCubemapInfo>
---@field bDebugCaptureEveryframe boolean
---@field Day int32
---@field MaxNightVisibilityRadius float
---@field MinNightVisibilityRadius float
---@field bIsNight boolean
---@field SunAngle float
---@field SunAngleQuantized uint16
---@field EnvironmentalModificationData UEnvironmentalModificationData
local ADayNightCycleManager = {}

function ADayNightCycleManager:OnRep_SunAngleQuantized() end


---@class ADeadlyGasGrenadeProjectile : ATimedProjectile
---@field PainVolumeTemplate TSubclassOf<AWarPainVolume>
local ADeadlyGasGrenadeProjectile = {}



---@class ADeployedListeningKit : ATripodMountedStructure
---@field ListeningAreaComponent UListeningAreaComponent
local ADeployedListeningKit = {}



---@class ADeployedStructure : ABuildableStructure
---@field TeamId uint8
---@field bEnableFriendlyFireTrackingOverride boolean
---@field IgnoreDamageFromStructures TArray<FName>
local ADeployedStructure = {}



---@class ADeployedTripod : ADeployedStructure
---@field BaseItemCodeName FName
local ADeployedTripod = {}



---@class ADeployedWeapon : ATripodMountedStructure
---@field PayloadMesh USkeletalMeshComponent
---@field HeightConfig FTripodHeightConfig
---@field bIgnoresRadialDamage boolean
---@field StashedAmmo int16
---@field StashedAmmoType FName
---@field TripodHeight float
local ADeployedWeapon = {}

function ADeployedWeapon:OnRep_StashedAmmo() end


---@class ADepthProjectile : AWarProjectile
---@field WaterVelocityZ float
local ADepthProjectile = {}



---@class ADestroyedAssemblyStation : ADestroyedTeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field ModificationMask uint32
local ADestroyedAssemblyStation = {}



---@class ADestroyedBase : ADestroyedTeamStructure
---@field LastSpawnPointID uint32
---@field bIsStaticBase boolean
---@field GenericStockpileComponent UGenericStockpileComponent
---@field TechTreeComponent UTechTreeComponent
local ADestroyedBase = {}



---@class ADestroyedBorderBase : ADestroyedBase
---@field Info FBorderBaseInfo
---@field bIsActive boolean
local ADestroyedBorderBase = {}



---@class ADestroyedBridge : ADestroyedStructure
local ADestroyedBridge = {}


---@class ADestroyedConstructionSite : ADestroyedTeamStructure
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
local ADestroyedConstructionSite = {}



---@class ADestroyedDrawbridge : ADestroyedStructure
---@field SideAProxy UPersistentProxyComponent
---@field SideBProxy UPersistentProxyComponent
local ADestroyedDrawbridge = {}



---@class ADestroyedEmplacementHouse : ADestroyedTeamStructure
local ADestroyedEmplacementHouse = {}


---@class ADestroyedEngineeringCenter : ADestroyedTeamStructure
local ADestroyedEngineeringCenter = {}


---@class ADestroyedFacilityRefinery : ADestroyedTeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field CrateGenericStockpileComponent UGenericStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field FuelTanks TArray<FFuelTank>
---@field PendingOrders TArray<FFacilityRefineryOrder>
---@field Orders TArray<FFacilityRefineryOrder>
---@field CompletedOrders TArray<FFacilityRefineryOrder>
---@field ItemInputBuffer int32
---@field ReservePower FReservePower
---@field ModificationMask uint32
local ADestroyedFacilityRefinery = {}



---@class ADestroyedFort : AFort
local ADestroyedFort = {}


---@class ADestroyedFortForwardBase : ADestroyedBase
local ADestroyedFortForwardBase = {}


---@class ADestroyedGarrisonHouse : ADestroyedTeamStructure
local ADestroyedGarrisonHouse = {}


---@class ADestroyedGarrisonStation : ADestroyedGarrisonHouse
---@field GenericStockpileComponent UGenericStockpileComponent
---@field TechTreeComponent UTechTreeComponent
---@field LastSpawnPointID uint32
local ADestroyedGarrisonStation = {}



---@class ADestroyedHospital : ADestroyedTeamStructure
---@field LastSpawnPointID uint32
---@field GenericStockpileComponent UGenericStockpileComponent
local ADestroyedHospital = {}



---@class ADestroyedKeep : ADestroyedTeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
local ADestroyedKeep = {}



---@class ADestroyedLiquidTransferStation : ADestroyedResourceTransferStation
---@field FuelInputBuffers TArray<FFuelQuantity>
---@field FuelOutputBuffer FFuelQuantity
local ADestroyedLiquidTransferStation = {}



---@class ADestroyedMassProductionFactory : ADestroyedSpecializedFactory
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
local ADestroyedMassProductionFactory = {}



---@class ADestroyedRefinery : ADestroyedTeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field RefinementOrderMap TMap<FString, FRefinementOrderInfo>
local ADestroyedRefinery = {}



---@class ADestroyedResourceMine : ADestroyedStructure
---@field GenericStockpileComponent UGenericStockpileComponent
local ADestroyedResourceMine = {}



---@class ADestroyedResourceTransferStation : ADestroyedTeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
local ADestroyedResourceTransferStation = {}



---@class ADestroyedRocketFacility : ADestroyedTeamStructure
---@field FuelTank FFuelTank
local ADestroyedRocketFacility = {}



---@class ADestroyedSeaport : ADestroyedStorageFacility
---@field CraneSpawnLocationComponent2 UCraneSpawnLocationComponent
---@field ProxyLoadingDockComponent UPersistentProxyComponent
---@field SpawnedLadders TArray<ALadder>
local ADestroyedSeaport = {}



---@class ADestroyedSpecializedFactory : ADestroyedTeamStructure
---@field SpecializedFactoryComponent USpecializedFactoryComponent
local ADestroyedSpecializedFactory = {}



---@class ADestroyedStorageFacility : ADestroyedTeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field ReserveStockpileComponent UReserveStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
local ADestroyedStorageFacility = {}



---@class ADestroyedStructure : AStructure
local ADestroyedStructure = {}


---@class ADestroyedTeamStructure : ARuinableStructure
---@field LastHeldFactionID EFactionId
local ADestroyedTeamStructure = {}



---@class ADestroyedTownHall : ADestroyedBase
local ADestroyedTownHall = {}


---@class ADestroyedVehicleFactory : ADestroyedConstructionSite
local ADestroyedVehicleFactory = {}


---@class ADestructibleProp : AActor
---@field DestroyedFX UParticleSystem
---@field DestroyedSoundCue USoundCue
local ADestructibleProp = {}

function ADestructibleProp:MulticastApplyFatalHit() end


---@class ADrawbridge : ABuildableStructure
---@field SideAMesh USkeletalMeshComponent
---@field SideBMesh USkeletalMeshComponent
---@field SideALeverMesh USkeletalMeshComponent
---@field SideBLeverMesh USkeletalMeshComponent
---@field SideAUseArea UBoxComponent
---@field SideBUseArea UBoxComponent
---@field SideAProxy UPersistentProxyComponent
---@field SideBProxy UPersistentProxyComponent
---@field SideBottomUseArea UBoxComponent
---@field AboveBlockingArea UBoxComponent
---@field AboveBlockingVolumeA UBoxComponent
---@field AboveBlockingVolumeB UBoxComponent
---@field BelowBlockingArea UBoxComponent
---@field BelowBlockingVolume UBoxComponent
---@field SwitchSound USoundCue
---@field OpenedSound USoundCue
---@field ClosedSound USoundCue
---@field MovingLoop UAudioComponent
---@field Ladder1Location USceneComponent
---@field Ladder2Location USceneComponent
---@field Ladder1 ALadder
---@field Ladder2 ALadder
---@field LadderType TSubclassOf<ALadder>
---@field BridgeOpenDuration float
---@field bIsRailBridge boolean
---@field LinkedTrack ARailwayTrack
---@field SideAState FBridgeSideState
---@field SideBState FBridgeSideState
---@field State EBridgeState
---@field StartTime float
local ADrawbridge = {}

function ADrawbridge:OnRep_State() end
function ADrawbridge:OnRep_StartTime() end
---@param OldState EBridgeState
---@param NewState EBridgeState
function ADrawbridge:MulticastPlayTransitionEffects(OldState, NewState) end
---@param BridgeSide EBridgeSide
function ADrawbridge:MulticastPlaySideToggleEffect(BridgeSide) end
---@return float
function ADrawbridge:GetProgress() end
function ADrawbridge:ApplyVehicleDecay() end


---@class ADrawbridgeBuildSite : AStructureBuildSite
---@field SideAProxy UPersistentProxyComponent
---@field SideBProxy UPersistentProxyComponent
local ADrawbridgeBuildSite = {}



---@class AEffectSpawnerProxy : AActor
---@field DestroyedVFX UParticleSystem
---@field DestroyedSoundCue USoundCue
local AEffectSpawnerProxy = {}

function AEffectSpawnerProxy:OnRep_DestroyedVFX() end
function AEffectSpawnerProxy:OnRep_DestroyedSoundCue() end


---@class AEmplacedArtillery : AEmplacedWeapon
local AEmplacedArtillery = {}


---@class AEmplacedStructure : ATeamStructure
---@field EmplacedIncomingDamageModifier float
local AEmplacedStructure = {}



---@class AEmplacedWeapon : AEmplacedStructure
---@field EmplacedTrackingModifier float
---@field Mesh USkeletalMeshComponent
---@field FoundationMesh USkeletalMeshComponent
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmo int32
---@field StashedAmmoType FName
---@field MuzzleInfo TArray<FMuzzleInfo>
---@field PayloadMeshes FPayloadMeshes
local AEmplacedWeapon = {}

function AEmplacedWeapon:OnRep_StashedAmmo() end


---@class AEmplacedWeaponWithShieldedSeat : AEmplacedWeapon
local AEmplacedWeaponWithShieldedSeat = {}


---@class AEmplacementHouse : ATunnelNode
---@field EmplacementGunMesh USkeletalMeshComponent
---@field EmplacementGunMuzzleLocation USceneComponent
---@field LadderType TSubclassOf<ALadder>
---@field LadderLocation USceneComponent
---@field TimeToStarvation float
---@field AnimationHysteresisTime float
---@field StashedAmmo int32
---@field StashedAmmoType FName
---@field GunnerYawAndPitch FVector2D
---@field Ladder ALadder
local AEmplacementHouse = {}



---@class AEmplacementHouseBuildSite : AStructureBuildSite
local AEmplacementHouseBuildSite = {}


---@class AEngineRailVehicle : ARailVehicle
---@field SteamGainRate float
---@field SteamVentRate float
---@field SteamActivateThreshold float
---@field SteamDeactivateThreshold float
---@field SteamPressure float
---@field bIsSteamSFXPrimed boolean
---@field SteamParticleSystem UParticleSystemComponent
---@field BoostingParticleSystem UParticleSystemComponent
---@field SteamVentCue USoundCue
---@field HornLoop UAudioComponent
---@field MaxHornDuration float
---@field BoostDuration float
---@field bHornActivated boolean
local AEngineRailVehicle = {}

---@param InHornActivated boolean
function AEngineRailVehicle:ServerSetHornActivated(InHornActivated) end
function AEngineRailVehicle:OnRep_HornActivated() end
---@param InBoosting boolean
function AEngineRailVehicle:ClientSetBoosting(InBoosting) end


---@class AEngineRoom : AFacilityRefinery
---@field SkeletalMesh USkeletalMeshComponent
---@field AnimMontage UAnimMontage
local AEngineRoom = {}



---@class AEngineRoomBuildSite : AFacilityRefineryBuildSite
local AEngineRoomBuildSite = {}


---@class AEngineeringCenter : ATeamStructure
local AEngineeringCenter = {}


---@class AEngineeringCenterBuildSite : AStructureBuildSite
local AEngineeringCenterBuildSite = {}


---@class AEnvironmentModification : AActor
---@field ImpactMap TArray<uint16>
---@field Seed int32
---@field DevastationHeatmap TArray<uint8>
---@field LastProcessedDevastationHeatmap TArray<uint8>
---@field QuantizedPuddleRainfall TArray<uint8>
---@field Puddles TArray<FPuddleInfo>
---@field SavedPuddleRainfall TArray<float>
---@field RainfallReceivers TSet<AStructure>
---@field FoliageCullInstancedMeshComponent UInstancedStaticMeshComponent
---@field Replacements TArray<AClientFoliageReplacement>
---@field Decals TArray<UDecalComponent>
---@field bFirstReplicationOfDevastationHeatmap boolean
---@field CreationTime float
---@field EncodedRemovedFoliageInstances TArray<uint8>
local AEnvironmentModification = {}

---@param OldDevastationHeatmap TArray<uint8>
function AEnvironmentModification:ProcessDevastationHeatmapReplication(OldDevastationHeatmap) end
function AEnvironmentModification:OnRep_Seed() end
---@param Prev TArray<uint8>
function AEnvironmentModification:OnRep_QuantizedPuddleRainfall(Prev) end
function AEnvironmentModification:OnRep_EncodedRemovedFoliageInstances() end
---@param OldDevastationHeatmap TArray<uint8>
function AEnvironmentModification:OnRep_DevastationHeatmap(OldDevastationHeatmap) end
---@param OldCreationTime float
function AEnvironmentModification:OnRep_CreationTime(OldCreationTime) end


---@class AEnvironmentSFX : AActor
---@field ArrowComponent UArrowComponent
---@field DayTimeSFX UAudioComponent
---@field NightTimeSFX UAudioComponent
local AEnvironmentSFX = {}



---@class AEnvironmentVFX : AActor
---@field ArrowComponent UArrowComponent
local AEnvironmentVFX = {}



---@class AExplosive : AActor
---@field DetonationDelay float
---@field ArrowComponent UArrowComponent
---@field CollisionComp USphereComponent
---@field ItemMesh UStaticMeshComponent
---@field ExplosiveCodeName FName
---@field ExplosionOffsetZ float
---@field ExplosionFXOffsetZ float
---@field DamageDelay float
---@field ExplosionTemplate TSubclassOf<AWarExplosionEffect>
---@field WaterSurfaceExplosionTemplate TSubclassOf<AWarExplosionEffect>
---@field DestroyObstacleRadius float
---@field SubExplosionCount int32
---@field ExplosionLength float
---@field bExplosionEffectsTrigger boolean
---@field TeamId uint8
local AExplosive = {}

function AExplosive:OnRep_Exploded() end


---@class AExplosiveAmmoPickup : AAmmoPickup
---@field ExplosionClass TSubclassOf<AWarExplosionEffect>
---@field DirectFireExplosionClass TSubclassOf<AWarExplosionEffect>
---@field ShotSoundCue USoundCue
---@field bSupportsDirectFireMode boolean
local AExplosiveAmmoPickup = {}



---@class AFacilityRefinery : ATeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field CrateGenericStockpileComponent UGenericStockpileComponent
---@field UpgradeSlotComponent UModificationSlotComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field PowerSocket UBuildSocketComponent
---@field LightComponent UFacilityLightComponent
---@field TransferLocation USceneComponent
---@field ConversionEntries TArray<FMultiConversionInfo>
---@field Modifications TMap<EFortModificationType, FFacilityModification>
---@field RequiredResourceFieldCodeName FName
---@field FuelTanks TArray<FFuelTank>
---@field PowerGridInfo FPowerGridInfo
---@field ReservePower FReservePower
---@field bAlwaysSetOrdersToBlocked boolean
---@field ReplicatedIndex int8
---@field bReplicatedIsActive boolean
---@field MaxOrders uint8
---@field PendingOrders TArray<FFacilityRefineryOrder>
---@field Orders TArray<FFacilityRefineryOrder>
---@field CompletedOrders TArray<FFacilityRefineryOrder>
---@field ItemInputBuffer int32
local AFacilityRefinery = {}

function AFacilityRefinery:OnRep_ReplicatedIsActive() end
function AFacilityRefinery:OnRep_ReplicatedIndex() end
function AFacilityRefinery:OnRep_PowerGridInfo() end
---@param MaxOrderCount uint8
function AFacilityRefinery:MulticastSetMaxOrderCount(MaxOrderCount) end
function AFacilityRefinery:BPOnStateInactive() end
function AFacilityRefinery:BPOnStateActive() end


---@class AFacilityRefineryBuildSite : AStructureBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
---@field CrateGenericStockpileComponent UGenericStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field FuelTanks TArray<FFuelTank>
---@field PendingOrders TArray<FFacilityRefineryOrder>
---@field Orders TArray<FFacilityRefineryOrder>
---@field CompletedOrders TArray<FFacilityRefineryOrder>
---@field ItemInputBuffer int32
---@field ReservePower FReservePower
local AFacilityRefineryBuildSite = {}



---@class AFestivalFlagHolder : ATeamStructure
---@field DropOffLocation UCapsuleComponent
local AFestivalFlagHolder = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AFestivalFlagHolder:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class AFestivalFlagPickUp : AItemPickup
---@field FlagMesh USkeletalMeshComponent
---@field ColonialMaterial UMaterialInterface
---@field WardenMaterial UMaterialInterface
local AFestivalFlagPickUp = {}



---@class AFestivalPortal : ABuildableStructure
---@field TeleportLocation USceneComponent
---@field Name FString
---@field Destination FString
local AFestivalPortal = {}



---@class AFieldBridge : ABuildableStructure
---@field FrontRamp UStaticMeshComponent
---@field BackRamp UStaticMeshComponent
---@field FrontKillVolume UBoxComponent
---@field BackKillVolume UBoxComponent
local AFieldBridge = {}



---@class AFieldBridgeBuildSite : AStructureBuildSite
local AFieldBridgeBuildSite = {}


---@class AFieldMachineGun : ARWDSimVehicle
---@field MuzzleFlashPS UParticleSystemComponent
---@field FiringSound USoundCue
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmoType FName
---@field StashedAmmo int32
local AFieldMachineGun = {}

---@return boolean
function AFieldMachineGun:GetIsFiring() end
---@param GunnerIndex int32
---@return FVector2D
function AFieldMachineGun:GetGunnerYawAndPitch(GunnerIndex) end


---@class AFieldPier : ABuildableStructure
---@field ShippableZOffset float
local AFieldPier = {}



---@class AFireBarrel : AActor
---@field ArrowComponent UArrowComponent
---@field BarrelMesh UStaticMeshComponent
---@field FireMesh UStaticMeshComponent
---@field SmokeParticleSystem UParticleSystemComponent
---@field SteamParticleSystem UParticleSystemComponent
---@field bIsIgnited boolean
---@field TimeToReignite float
local AFireBarrel = {}

function AFireBarrel:OnRep_bIsIgnited() end


---@class AFireInfo : AInfo
---@field BurningFromSuppressionThreshold float
---@field FireIntensityThresholds TArray<FFireIntensityThreshold>
---@field MaxPreMitigationFireDamagePerTick float
---@field TickPeriodSeconds float
---@field WeatherIntensityEffectMultiplier float
---@field CharacterOnFireDamage float
---@field BurningSpreadWindScale float
---@field BurningBuildingHeatRange float
---@field FlameActor TSubclassOf<AFlameActor>
---@field BuildingsDamagingPlayersDamageType TSubclassOf<UDamageType>
---@field BuildingsFireSpreadDamageType TSubclassOf<UDamageType>
---@field BurningSelfDamageType TSubclassOf<UDamageType>
---@field WaterFireLoopSFX USoundCue
---@field WaterFireTailSFX USoundCue
---@field WaterFireVFX UParticleSystem
local AFireInfo = {}



---@class AFirePit : ABuildableStructure
---@field TemperatureModifierComponent UTemperatureModifierSphereComponent
---@field FireMesh UStaticMeshComponent
---@field Fire1ParticleSystem UParticleSystemComponent
---@field Fire2ParticleSystem UParticleSystemComponent
---@field Fire3ParticleSystem UParticleSystemComponent
---@field FireSFXLoop UAudioComponent
---@field FuelTankDiesel FFuelTank
---@field DieselConsumptionRate float
local AFirePit = {}

function AFirePit:OnRep_FuelTankDiesel() end


---@class AFirearmPickup : AGearPickup
local AFirearmPickup = {}


---@class AFlameActor : AActor
---@field WaterFireVFXComponent UParticleSystemComponent
local AFlameActor = {}

---@param Direction FVector
function AFlameActor:BPUpdateWindDirection(Direction) end
---@param Previous uint8
---@param NewIntensity uint8
function AFlameActor:BPOnFireIntensityChanged(Previous, NewIntensity) end
function AFlameActor:BPDeactivate() end


---@class AFlareExplosionEffect : AWarExplosionEffect
---@field AltitudeCurve UCurveFloat
---@field IlluminationRadius float
---@field VisibilityIndicatorRadius float
---@field LightFX UParticleSystem
---@field MaxActiveLightsInRange int32
---@field MaxLightCullingRange float
---@field LightParticleSystem UParticleSystemComponent
local AFlareExplosionEffect = {}



---@class AFlatbedRailVehicle : ARailVehicle
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field DynamicMeshComponent UMeshComponent
---@field TransferLocation USceneComponent
---@field GlobalShippableInfo TSubclassOf<AGlobalShippableInfo>
---@field CurrentShippable FName
---@field ShippableData FReplicatedShippableData
---@field SavedData FSavedShippableData
local AFlatbedRailVehicle = {}

function AFlatbedRailVehicle:OnRep_ShippableData() end
function AFlatbedRailVehicle:OnRep_CurrentShippable() end


---@class AFlatbedTruck : ARWDSimVehicle
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field DynamicMeshComponent UMeshComponent
---@field TransferLocation USceneComponent
---@field GlobalShippableInfo TSubclassOf<AGlobalShippableInfo>
---@field CurrentShippable FName
---@field ShippableData FReplicatedShippableData
---@field SavedData FSavedShippableData
local AFlatbedTruck = {}

function AFlatbedTruck:OnRep_ShippableData() end
function AFlatbedTruck:OnRep_CurrentShippable() end


---@class AFort : ABuildableStructure
---@field bSupportsEmplacedStructures boolean
---@field EmplacementLocation UBoxComponent
---@field MinUpgradeTargetDistance float
---@field ObstructionCheckOverrideExtents FVector
---@field EmplacedStructure TWeakObjectPtr<AEmplacedStructure>
local AFort = {}



---@class AFortArtilleryShelter : AFort
---@field BaseShelterBonus float
local AFortArtilleryShelter = {}



---@class AFortBuildSite : AFortBuildSiteBase
local AFortBuildSite = {}


---@class AFortBuildSiteBase : AStructureBuildSite
local AFortBuildSiteBase = {}


---@class AFortConnector : AFort
local AFortConnector = {}


---@class AFortConnectorBuildSite : AFortBuildSiteBase
local AFortConnectorBuildSite = {}


---@class AFortCorner : AFort
---@field IncompatibleCornerSockets TArray<FName>
local AFortCorner = {}



---@class AFortCornerBuildSite : AFortBuildSiteBase
local AFortCornerBuildSite = {}


---@class AFortEmp : ATeamStructure
---@field FirstSegmentMesh UStaticMeshComponent
---@field SecondSegmentMesh UStaticMeshComponent
---@field BuildLocation UBoxComponent
---@field LRArtilleryObstructionShape UBoxComponent
---@field IntelCenterObstructionShape UBoxComponent
---@field WeatherStationObstructionShape UBoxComponent
---@field FortGarrisonStationObstructionShape UBoxComponent
---@field FortEmpConfig FFortEmpConfig
---@field FortEmpSelectedStructure EFortEmpStructure
---@field RequiredSquadMembers uint8
---@field SquadId int32
local AFortEmp = {}



---@class AFortFirePit : AFort
---@field FuelTankDiesel FFuelTank
local AFortFirePit = {}

function AFortFirePit:OnRep_FuelTankDiesel() end


---@class AFortFireSuppression : ATeamStructure
---@field PowerConsumerComponent UPowerConsumerComponent
---@field WaterTank FFuelTank
---@field bIsDispensingWater boolean
---@field SprinklerVFXComponent UParticleSystemComponent
---@field PumpingLoopComponent UAudioComponent
---@field SteamVFXComponent UParticleSystemComponent
---@field PipeInputAssociatedSocketName FName
---@field DispenseAmountPerSec float
local AFortFireSuppression = {}

function AFortFireSuppression:OnRep_IsDispensingWater() end


---@class AFortFireSuppressionBuildSite : AStructureBuildSite
---@field WaterTank FFuelTank
local AFortFireSuppressionBuildSite = {}



---@class AFortForwardBase : AForwardBase
---@field LadderLocation USceneComponent
---@field LadderType TSubclassOf<ALadder>
---@field Ladder ALadder
local AFortForwardBase = {}



---@class AFortForwardBaseBuildSite : ABaseBuildSite
local AFortForwardBaseBuildSite = {}


---@class AFortGarrisonStation : ATeamStructure
---@field RoofMesh UStaticMeshComponent
---@field BasementMesh UStaticMeshComponent
---@field GroundStaircaseMesh UStaticMeshComponent
---@field BoatHullComponent UBoatHullComponent
---@field VisibilityToggleComponent USafeHouseVisibilityToggleComponent
---@field GenericStockpileComponent UGenericStockpileComponent
---@field SpawnPoints FSpawnPoints
local AFortGarrisonStation = {}



---@class AFortObservation : ATeamStructure
---@field ObstructionCheckOverrideExtents FVector
---@field MapIntelligenceSource UMapIntelligenceSourceComponent
---@field PowerConsumerComponent UPowerConsumerComponent
---@field TeamFlagMeshComponent UTeamFlagMeshComponent
local AFortObservation = {}



---@class AFortStaticArtillery : ATunnelNode
---@field SkeletalMesh USkeletalMeshComponent
---@field FlagMesh UTeamFlagMeshComponent
---@field FireShellParticleSystem UParticleSystemComponent
---@field MinDistance float
---@field MaxDistance float
---@field FiringAngle float
---@field FiringCooldown float
---@field MinVerticalAngle float
---@field MaxVerticalAngle float
---@field DamageParams FStaticArtilleryDamageParams
---@field InitialDelay float
---@field ExplosionDelay float
---@field HorizontalAngle float
---@field VerticalAngle float
---@field bIsFiring boolean
local AFortStaticArtillery = {}

function AFortStaticArtillery:OnRep_IsFiring() end


---@class AFortTurret : AFoxholeTurret
local AFortTurret = {}


---@class AFortTurretAT : AGunTurret
local AFortTurretAT = {}


---@class AFortTurretMG : AFortTurret
---@field SkeletalMesh USkeletalMeshComponent
local AFortTurretMG = {}



---@class AForwardBase : AOutpost
---@field TeamFlagMeshComponent UTeamFlagMeshComponent
local AForwardBase = {}



---@class AFoundation : ATeamStructure
local AFoundation = {}


---@class AFoundationBuildSite : AStructureBuildSite
local AFoundationBuildSite = {}


---@class AFoxhole : ABuildableStructure
local AFoxhole = {}


---@class AFoxholeTurret : ATunnelNode
---@field AITurretComponent UAITurretComponent
---@field AITurretsController UAITurretsControllerComponent
---@field MuzzleFlashLocationComponent UArrowComponent
---@field ShouldAggroOnDamage boolean
---@field bUseSquareMuzzleBounds boolean
---@field bIsTutorialTurret boolean
---@field bDisallowForwardUpgradeInIsland boolean
---@field bLimitOccupantFiringArc boolean
---@field MaxOccupantFiringArcDeviation float
---@field FlagMesh UTeamFlagMeshComponent
local AFoxholeTurret = {}



---@class AFreighter : AShipVehicle
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field TransferLocation USceneComponent
---@field FrontLeftWaterEmitter UParticleSystemComponent
---@field FrontRightWaterEmitter UParticleSystemComponent
---@field BackRightWaterEmitter UParticleSystemComponent
---@field BackLeftWaterEmitter UParticleSystemComponent
---@field WakeWaterEmitter UParticleSystemComponent
---@field WaterDriveLoop UAudioComponent
---@field DeployingSFXLoop UAudioComponent
---@field GlobalShippableInfo TSubclassOf<AGlobalShippableInfo>
---@field MaxShippableCount int32
---@field CurrentShippables TArray<FFreighterCargo>
---@field ShippableData FReplicatedShippableData
---@field State uint8
---@field DynamicMeshComponent UMeshComponent
local AFreighter = {}

---@param bIsDeploy boolean
function AFreighter:ServerToggleMode(bIsDeploy) end
---@param PreviousState uint8
function AFreighter:OnRep_State(PreviousState) end
function AFreighter:OnRep_ShippableData() end
function AFreighter:OnRep_CurrentShippables() end


---@class AFuelContainer : AContainer
---@field FuelTankerInfo FFuelTankerInfo
local AFuelContainer = {}

function AFuelContainer:OnRep_FuelTankerInfo() end


---@class AGarrisonHouse : ATunnelNode
---@field TimeToStarvation float
---@field DynamicTierInfo FDynamicTierInfo
---@field AITurretsController UAITurretsControllerComponent
local AGarrisonHouse = {}

---@return boolean
function AGarrisonHouse:IsNeutralHouse() end


---@class AGarrisonHouseBuildSite : AStructureBuildSite
local AGarrisonHouseBuildSite = {}


---@class AGarrisonStation : AGarrisonHouse
---@field GenericStockpileComponent UGenericStockpileComponent
---@field TechTreeComponent UTechTreeComponent
---@field MapIntelligenceSourceComponent UMapIntelligenceSourceComponent
---@field TunnelConnectionRange float
---@field DecayInfo FDecayInfo
---@field SpawnPoints FSpawnPoints
local AGarrisonStation = {}



---@class AGarrisonStationBuildSite : AGarrisonHouseBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
---@field TechTreeComponent UTechTreeComponent
---@field SpawnPoints FSpawnPoints
local AGarrisonStationBuildSite = {}



---@class AGate : ATeamStructure
---@field OpeningSoundCue USoundCue
---@field NoBuildCollider UBoxComponent
---@field GateObstructionCollider UBoxComponent
---@field GateCollider UBoxComponent
---@field GateDoorMesh USkeletalMeshComponent
---@field GateCollisionProfileName FName
---@field GateDoorOverlapMaterial UMaterialInterface
---@field GateState EGateState
---@field AutomaticCloseTime float
local AGate = {}

function AGate:OnRep_GateState() end


---@class AGearPickup : AItemPickup
local AGearPickup = {}


---@class AGlobalEffectSpawnerProxy : AEffectSpawnerProxy
local AGlobalEffectSpawnerProxy = {}


---@class AGlobalFestivalInfo : AInfo
---@field RenderInfoMap TMap<FName, FFestivalRenderInfo>
local AGlobalFestivalInfo = {}



---@class AGlobalMovementModifiersInfo : AInfo
---@field VehicleData TArray<FSurfaceMovementData>
---@field MotorboatData TArray<FSurfaceMovementData>
local AGlobalMovementModifiersInfo = {}



---@class AGlobalShippableInfo : AInfo
---@field SmallSizeConfig FShippableRenderInfo
---@field NormalSizeConfig FShippableRenderInfo
---@field LargeSizeConfig FShippableRenderInfo
---@field ExtraLargeSizeConfig FShippableRenderInfo
local AGlobalShippableInfo = {}



---@class AGunTurret : AFoxholeTurret
---@field SkelMesh USkeletalMeshComponent
---@field GunnerYaw float
local AGunTurret = {}

function AGunTurret:OnRep_GunnerYaw() end
---@return float
function AGunTurret:GetTrackingAngle() end


---@class AGunboat : AShipVehicle
---@field WorkVolume UBoxComponent
---@field KillVolume UBoxComponent
---@field GunnerInfos TArray<FVehicleGunnerInfo>
local AGunboat = {}



---@class AHalfTrack : ARWDSimVehicle
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmoType FName
---@field StashedAmmo int32
---@field AltGunnerYawAndPitch FVector2D
---@field AltStashedAmmoType FName
---@field AltStashedAmmo int32
---@field PayloadMeshes FPayloadMeshes
---@field MainGunnerIndex int32
---@field TowingRearAxleOffest float
local AHalfTrack = {}

function AHalfTrack:OnRep_StashedAmmo() end
function AHalfTrack:OnRep_GunnerYawAndPitch() end


---@class AHarvester : ARWDSimVehicle
---@field GrindRate float
---@field GrindFuelRate float
---@field SplitRate float
---@field SplitFuelRate float
---@field MovementModifier float
---@field GrindingCapsule UCapsuleComponent
---@field NoTargetParticleSystem UParticleSystemComponent
---@field ComponentsParticleSystem UParticleSystemComponent
---@field DefensesParticleSystem UParticleSystemComponent
---@field SalvageParticleSystem UParticleSystemComponent
---@field SulfurParticleSystem UParticleSystemComponent
---@field SplitParticleSystem UParticleSystemComponent
---@field GrindingSFXLoop UAudioComponent
---@field SplittingSFXLoop UAudioComponent
---@field RotatingSFXLoop UAudioComponent
---@field Action uint8
local AHarvester = {}

function AHarvester:ServerStopAction() end
function AHarvester:ServerStartGrinding() end
function AHarvester:OnRep_Action() end
function AHarvester:MulticastOnResourceSplit() end
---@param Resource AResource
---@param GatherResult FGatherResult
function AHarvester:MulticastOnGather(Resource, GatherResult) end


---@class AHeadlessPlayerController : ASimPlayerController
local AHeadlessPlayerController = {}

---@param CommandString FString
function AHeadlessPlayerController:ClientParseCommand(CommandString) end


---@class AHomeRegionBase : AStaticBase
---@field SpawnPriority int32
local AHomeRegionBase = {}



---@class AHospital : ATeamStructure
---@field HospitalComponent UHospitalComponent
---@field GenericStockpileComponent UGenericStockpileComponent
---@field SpawnPoints FSpawnPoints
local AHospital = {}



---@class AHospitalBuildSite : AFortBuildSite
---@field HospitalComponent UHospitalComponent
---@field GenericStockpileComponent UGenericStockpileComponent
---@field SpawnPoints FSpawnPoints
local AHospitalBuildSite = {}



---@class AImpactEffect : AActor
---@field EffectOverrides TArray<FImpactEffectOverride>
---@field FleshBloodSplatterDecal FDecalData
---@field HitNotify FHitNotify
local AImpactEffect = {}



---@class AInfantryRailVehicle : ARailVehicle
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmoType FName
---@field StashedAmmo int32
---@field RightGunnerIndex int32
---@field LeftGunnerIndex int32
---@field MainGunnerIndex int32
local AInfantryRailVehicle = {}

function AInfantryRailVehicle:OnRep_GunnerYawAndPitch() end


---@class AIntelCenter : ATeamStructure
---@field Mesh USkeletalMeshComponent
---@field BaseMesh USkeletalMeshComponent
---@field RotationSFXLoop UAudioComponent
---@field ListeningSFXLoop UAudioComponent
---@field StartListeningSound USoundBase
---@field EndListeningSound USoundBase
---@field RequiredPowerForFiring float
---@field RequiredPowerForRotation float
---@field RequiredSquadMembers uint8
---@field SquadId int32
---@field GunnerYawAndPitch FVector2D
---@field LastListenEndTime float
---@field ListenTimeRemaining float
---@field LaunchCodeInfo FRocketLaunchCodeInfo
local AIntelCenter = {}

---@param Previous float
function AIntelCenter:OnRep_LastListenEndTime(Previous) end
---@param PreviousGunnerYawAndPitch FVector2D
function AIntelCenter:OnRep_GunnerYawAndPitch(PreviousGunnerYawAndPitch) end


---@class AItemCratePickup : AItemPickup
local AItemCratePickup = {}


---@class AItemPickup : AActor
---@field StealthComponent UStealthComponent
---@field ItemComponentClass TSubclassOf<UItemComponent>
---@field Encumbrance int32
---@field EquippedEncumbrance int32
---@field bHideContent boolean
---@field CodeName FName
---@field ChassisName FText
---@field DisplayName FText
---@field Description FText
---@field Icon UTexture
---@field SubTypeIcon FSlateBrush
---@field EquipmentSlot EEquipmentSlot
---@field ItemCategory EItemCategory
---@field ItemFlagsMask uint32
---@field ItemProfileType EItemProfileType
---@field FactionVariant EFactionId
---@field TechID ETechID
---@field ItemInstance FItemInstance
---@field bIsLiquid boolean
---@field bIsLarge boolean
---@field bIsHeavy boolean
---@field bIsProxy boolean
---@field bDoesNotDecay boolean
---@field bSupportsVehicleMounts boolean
---@field bMustBeEmptyToSubmit boolean
---@field bCanBePrototyped boolean
---@field ItemMesh UStaticMeshComponent
---@field ItemBox UBoxComponent
---@field DescriptionDetails TArray<FTooltipDetailText>
local AItemPickup = {}

function AItemPickup:OnRep_ItemInstance() end


---@class AItemProfileTable : AInfo
---@field ItemProfileTable TMap<EItemProfileType, FItemProfileData>
local AItemProfileTable = {}



---@class AItemStash : ATeamStructure
---@field DecayTime float
---@field DespawnIfEmptyTime float
---@field CollisionBox UBoxComponent
local AItemStash = {}



---@class AKeep : AForwardBase
local AKeep = {}


---@class AKeepBuildSite : AStructureBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
local AKeepBuildSite = {}



---@class ALadder : AActor
---@field LadderComponent ULadderComponent
---@field BoxCollision UBoxComponent
---@field Mesh UStaticMeshComponent
---@field ClimbVolume UBoxComponent
---@field ClimbVolumeTop UBoxComponent
---@field EnterPositionBottom USceneComponent
---@field EnterPositionTop USceneComponent
local ALadder = {}



---@class ALandMine : AMine
local ALandMine = {}


---@class ALandingCraft : AAmphibiousVehicle
---@field KillVolume UBoxComponent
---@field bBackHatchOpen boolean
---@field StashedAmmo int32
local ALandingCraft = {}

---@return boolean
function ALandingCraft:GetBackHatchOpen() end


---@class ALandscapeEnvironmentActor : AActor
local ALandscapeEnvironmentActor = {}


---@class ALargeShip : AShipVehicle
---@field Ramp FRampData
---@field KillVolume UBoxComponent
---@field AnchorVolume UAnchorUseComponent
---@field NoSocketMuzzlePositions TMap<int32, FVector>
---@field GunnerInfos TArray<FLargeShipGunnerInfo>
---@field ExtraItemHolders TArray<FItemHolderData>
---@field GarrisonComponent UGarrisonComponent
---@field GenericStockpileComponent UGenericStockpileComponent
---@field GenericStockpileComponent1 UGenericStockpileComponent
---@field GenericStockpileComponent2 UGenericStockpileComponent
---@field SpawnPoints FSpawnPoints
---@field BulkheadDoors TArray<UBulkheadDoor>
---@field RoomComponents TArray<URoomComponent>
---@field Ramps TArray<UGangwayRamp>
---@field VehicleBuildTriggerComponents TArray<UVehicleBuildTriggerComponent>
---@field VehicleBuildFootprints TArray<UBoxComponent>
---@field AnchorState EAnchorState
---@field DockedState EDockedState
---@field SavedDoors uint16
---@field DeployedRampAngle float
---@field SavedRooms TArray<FRoomComponentSaveState>
---@field SavedGangwayRamps TArray<FGangwayRampSaveState>
---@field SavedExtraItemHolders TArray<FItemHolderData>
---@field IncomingPingSoundCue USoundCue
---@field OutgoingPingSoundCue USoundCue
---@field CargoCheckVolume UBoxComponent
---@field DockingObstructionCheckVolume UBoxComponent
---@field UndockingObstructionCheckVolume UBoxComponent
---@field DockComponent UDockComponent
---@field BuildSiteVehicleType EVehicleBuildType
---@field AnchorComponent UAnchorComponent
---@field VeryMajorDamagePS UParticleSystemComponent
---@field MediumDamagePS UParticleSystemComponent
---@field VeryMinorDamagePS UParticleSystemComponent
---@field SupportStaticMesh UStaticMesh
---@field PostProcessComponent UPostProcessComponent
---@field PostProcessCapsuleHalfHeight float
---@field PostProcessCapsuleRadius float
---@field PostProcessCapsuleZOffset float
---@field PostProcessMaterial UMaterialInterface
---@field PostProcessMaterialInstance UMaterialInstanceDynamic
---@field Leaks FRoomLeakArray
---@field PayloadMeshesLeft FPayloadMeshes
---@field PayloadMeshesRight FPayloadMeshes
---@field bRainStormsCauseFlooding boolean
---@field LightComponents TArray<USceneComponent>
---@field VisibilityToggleAreas TArray<UVisibilityToggleAreaComponent>
local ALargeShip = {}

function ALargeShip:OnRep_Leaks() end
---@param LastGunnerInfos TArray<FLargeShipGunnerInfo>
function ALargeShip:OnRep_GunnerInfos(LastGunnerInfos) end
function ALargeShip:OnRep_ExtraItemHolders() end
function ALargeShip:OnRep_DockedState() end
function ALargeShip:OnRep_AnchorState() end
function ALargeShip:BPOnClientBeginPlay() end
---@param InLightComponents TArray<USceneComponent>
function ALargeShip:AddLightComponents(InLightComponents) end


---@class ALargeShipStorage : ALargeShip
---@field CraneMesh USkeletalMeshComponent
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field ShippableCollision UBoxComponent
---@field ArmMovementSFXLoop UAudioComponent
---@field DeployingSFXLoop UAudioComponent
---@field PulleyMovementSFXLoop UAudioComponent
---@field CraneComponent UCraneComponent
local ALargeShipStorage = {}



---@class ALightTank : ATankBase
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmo int32
---@field StashedAmmoType FName
---@field PayloadMeshes FPayloadMeshes
local ALightTank = {}

function ALightTank:OnRep_StashedAmmo() end
function ALightTank:OnRep_GunnerYawAndPitch() end
---@return boolean
function ALightTank:GetIsShooting() end
---@return float
function ALightTank:GetGunYaw() end
---@return float
function ALightTank:GetGunPitch() end


---@class ALimitedVulnerabilityStructure : ABuildableStructure
---@field VulnerableDamageType TSubclassOf<UDamageType>
local ALimitedVulnerabilityStructure = {}



---@class ALineOfSightVisualizationActor : AActor
---@field ValidColour FLinearColor
---@field ValidColour2 FLinearColor
---@field ValidOutlineColour FLinearColor
---@field ValidOutlineColour2 FLinearColor
---@field InvalidColour FLinearColor
---@field InvalidColour2 FLinearColor
---@field InvalidOutlineColour FLinearColor
---@field InvalidOutlineColour2 FLinearColor
---@field WorkSplittingFactor int32
local ALineOfSightVisualizationActor = {}



---@class ALiquidTransferStation : AResourceTransferStation
---@field FuelInputBuffers TArray<FFuelQuantity>
---@field FuelOutputBuffer FFuelQuantity
---@field InputSocket UBuildSocketComponent
---@field OutputSocket UBuildSocketComponent
local ALiquidTransferStation = {}



---@class ALiquidTransferStationBuildSite : AStructureBuildSite
---@field FuelInputBuffers TArray<FFuelQuantity>
---@field FuelOutputBuffer FFuelQuantity
local ALiquidTransferStationBuildSite = {}



---@class AListeningArea : AActor
---@field LifeSpanRemaining float
---@field ListeningComponent UListeningAreaComponent
local AListeningArea = {}



---@class ALongRangeArtillery : ATeamStructure
---@field Mesh USkeletalMeshComponent
---@field BaseMesh USkeletalMeshComponent
---@field RotationSFXLoop UAudioComponent
---@field FireShellParticleSystem UParticleSystemComponent
---@field EjectShellParticleSystem UParticleSystemComponent
---@field InitialDelay float
---@field ExplosionDelay float
---@field MaxPower float
---@field RequiredPowerForFiring float
---@field RequiredPowerForRotation float
---@field HeatForFiring uint8
---@field RequiredSquadMembers uint8
---@field Heat uint8
---@field SquadId int32
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmo int32
local ALongRangeArtillery = {}

---@param PreviousGunnerYawAndPitch FVector2D
function ALongRangeArtillery:OnRep_GunnerYawAndPitch(PreviousGunnerYawAndPitch) end


---@class ALoreKeyVerificationActor : AActor
local ALoreKeyVerificationActor = {}


---@class ALoreList : AInfo
---@field LoreDataTable TMap<FName, FLoreData>
local ALoreList = {}



---@class ALorePickup : AItemPickup
---@field ReadableTextComponent UReadableTextComponent
local ALorePickup = {}



---@class AMGPillbox : AFoxholeTurret
---@field SkeletalMesh USkeletalMeshComponent
local AMGPillbox = {}



---@class AMainMenuGameMode : AWarGameMode
local AMainMenuGameMode = {}


---@class AMainMenuPlayerController : AWarPlayerController
---@field ImageDownloadTaskList TArray<UNewsItemImageDownloadTask>
local AMainMenuPlayerController = {}

---@param ShardId int32
function AMainMenuPlayerController:RefreshShardStatus(ShardId) end


---@class AMaintenanceTunnel : ATeamStructure
---@field DecayInfo FDecayInfo
---@field GenericStockpileComponent UGenericStockpileComponent
---@field MinRange float
---@field MaxRange float
---@field GrassCullRadius float
---@field Range float
---@field Filter uint16
local AMaintenanceTunnel = {}



---@class AMapBoundary : AActor
---@field ArrowComponent UArrowComponent
---@field MarkerArea UBoxComponent
---@field NoBuildArea UBoxComponent
local AMapBoundary = {}



---@class AMapExtentMarker : AActor
---@field Location EMapExtentMarkerLocation
---@field MarkerScene USceneComponent
local AMapExtentMarker = {}



---@class AMapIcon : AActor
---@field MapTeamId EMapTeamId
---@field MapIconType EMapIconType
---@field DefaultSceneComponent USceneComponent
local AMapIcon = {}



---@class AMapInfo : AActor
---@field MapName FText
---@field MapImage UTexture2D
---@field MapImagePractice UTexture2D
local AMapInfo = {}



---@class AMapIntelligence : AInfo
---@field MapIntelligenceTypeConfigs FMapIntelligenceTypeConfig
local AMapIntelligence = {}



---@class AMapList : AInfo
---@field MapDatabase TMap<FName, FMapData>
local AMapList = {}



---@class AMapMarker : AActor
---@field ArrowComponent UArrowComponent
---@field MarkerArea UBoxComponent
---@field MajorTextRender UTextRenderComponent
---@field MinorTextRender UTextRenderComponent
---@field MajorText FText
---@field MinorText FText
---@field MapMarkerType EMapMarkerType
local AMapMarker = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AMapMarker:BeginMarkerOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class AMassProductionFactory : ASpecializedFactory
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field TransferLocation USceneComponent
---@field TransferLocationFootprint UBoxComponent
---@field ShippableCrateSound USoundCue
---@field ShippableCratePS UParticleSystem
local AMassProductionFactory = {}

function AMassProductionFactory:MulticastPlayShippableCrateFX() end


---@class AMassProductionFactoryBuildSite : ASpecializedFactoryBuildSite
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
local AMassProductionFactoryBuildSite = {}



---@class AMaterialPlatform : ABuildableStructure
---@field MeshComponent UStaticMeshComponent
---@field BoxCollision UBoxComponent
---@field GenericStockpileComponent UGenericStockpileComponent
local AMaterialPlatform = {}



---@class AMech : ATankBase
---@field MainGunMuzzleLocation USceneComponent
---@field LeftGunMuzzleLocation USceneComponent
---@field RightGunMuzzleLocation USceneComponent
---@field MainGunYawAndPitch FVector2D
---@field LeftGunYawAndPitch FVector2D
---@field RightGunYawAndPitch FVector2D
---@field StashedMainGunAmmo int32
---@field StashedMainGunAmmoType FName
---@field StashedLeftGunAmmo int32
---@field StashedRightGunAmmo int32
local AMech = {}



---@class AMine : AExplosive
---@field ActivationDelay float
---@field bTriggeredByInfantry boolean
---@field bTriggeredByVehicles boolean
---@field RoadPhysicalMaterials TArray<UPhysicalMaterial>
---@field Health int32
---@field ArmourType EArmourType
---@field SpawnTime FDateTime
local AMine = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AMine:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class AMineSpline : ATeamStructure
---@field SplineConnector USplineConnectorComponent
---@field BackSocket UBuildSocketComponent
---@field FrontSocket UBuildSocketComponent
---@field AmmoCodeName FName
---@field ExplosionTemplate TSubclassOf<AWarExplosionEffect>
---@field DamageDelay float
---@field ArmingDelay float
---@field ExplosionFXOffsetZ float
---@field MineMask uint32
---@field MaxMineCount uint8
---@field bTriggeredByInfantry boolean
---@field bTriggeredByVehicles boolean
local AMineSpline = {}

---@param PrevMask uint32
function AMineSpline:OnRep_MineMask(PrevMask) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AMineSpline:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class AMineSplineBuildSite : AStructureBuildSite
local AMineSplineBuildSite = {}


---@class AMiniMapCapturer : AActor
---@field SceneCapture ASceneCapture2D
---@field ActorsToForceShowInGame TArray<AActor>
---@field ResultTexture UTexture2D
---@field CameraAngleCorrection float
---@field TargetGamma float
local AMiniMapCapturer = {}



---@class AModificationTemplate : AActor
local AModificationTemplate = {}


---@class AMonument : AActor
---@field MonumentMesh UStaticMeshComponent
---@field MonumentTypeMeshes TArray<UStaticMesh>
---@field UseMonumentComponent UUseMonumentComponent
---@field MonumentIndex int32
---@field MonumentType EMonumentType
local AMonument = {}



---@class AMortarAmmoPickup : AExplosiveAmmoPickup
local AMortarAmmoPickup = {}


---@class AMortarTank : ALightTank
local AMortarTank = {}


---@class AMotorboat : ASimVehicle
---@field FrontWaterEmitter UParticleSystemComponent
---@field BackWaterEmitter UParticleSystemComponent
local AMotorboat = {}



---@class AMotorcycle : ARWDSimVehicle
---@field StashedAmmo int32
local AMotorcycle = {}



---@class ANoBuildArea : AActor
---@field NoBuildComponent UBoxComponent
---@field PlacementStatus EPlacementStatus
local ANoBuildArea = {}



---@class ANonWalkableStructureBuildSite : AStructureBuildSite
local ANonWalkableStructureBuildSite = {}


---@class AObservationTower : AWatchTower
local AObservationTower = {}


---@class AOfflineCharacter : AActor
---@field CapsuleComponent UCapsuleComponent
---@field CharacterMesh USkeletalMeshComponent
---@field Head USkeletalMeshComponent
---@field Hands USkeletalMeshComponent
---@field Legs USkeletalMeshComponent
---@field Back USkeletalMeshComponent
---@field Helmet USkeletalMeshComponent
---@field StealthComponent UStealthComponent
---@field TeamId uint8
---@field VisualCustomizationMask uint8
---@field ZombieType EZombieType
---@field Temperature uint8
---@field Muddyness uint8
---@field OnlineID FString
---@field CurrentHealth float
---@field MaxHealth float
---@field DeathDuration float
local AOfflineCharacter = {}

function AOfflineCharacter:MulticastApplyFatalHit() end
function AOfflineCharacter:BPApplyFatalHit() end


---@class AOilPipelineSegment : ATeamStructure
local AOilPipelineSegment = {}


---@class AOilTanker : ARWDSimVehicle
local AOilTanker = {}


---@class AOutpost : ABase
---@field MeshComponent UStaticMeshComponent
local AOutpost = {}



---@class APersistentProxy : ALandscapeEnvironmentActor
---@field Mesh UStaticMeshComponent
local APersistentProxy = {}



---@class APipeline : ATeamStructure
---@field SplineConnector USplineConnectorComponent
---@field UpgradeSlotComponent UModificationSlotComponent
---@field BackSocket UBuildSocketComponent
---@field FrontSocket UBuildSocketComponent
---@field LeftSocket UBuildSocketComponent
---@field RightSocket UBuildSocketComponent
---@field MaxLiquidAmount float
---@field SystemIndex int32
---@field GroundedPipeLength float
local APipeline = {}



---@class APipelineSilo : APipeline
---@field VisibleMeshes uint8
local APipelineSilo = {}

function APipelineSilo:OnRep_VisibleMeshes() end


---@class APipelineValve : ATeamStructure
---@field UpgradeSlotComponent UModificationSlotComponent
---@field BackSocket UBuildSocketComponent
---@field FrontSocket UBuildSocketComponent
---@field ThroughputNormalized float
local APipelineValve = {}



---@class APlayerCharacter : ASimCharacter
local APlayerCharacter = {}


---@class APlayerImposter : ASimVehicle
---@field Head USkeletalMeshComponent
---@field Hands USkeletalMeshComponent
---@field Legs USkeletalMeshComponent
---@field Back USkeletalMeshComponent
---@field Helmet USkeletalMeshComponent
---@field EquippedItemMesh USkeletalMeshComponent
---@field FactionId EFactionId
---@field OutfitType EOutfitType
---@field UniformType EUniformType
---@field bIsFemale boolean
---@field SkinTone uint8
---@field EquippedItemCodeName FName
---@field CustomizationVersion uint8
local APlayerImposter = {}

function APlayerImposter:OnRep_CustomizationVersion() end


---@class APowerLine : ABuildableStructure
---@field SplineConnector USplineConnectorComponent
---@field BackSocket UBuildSocketComponent
---@field FrontSocket UBuildSocketComponent
---@field BuildGhostOffsetZ float
local APowerLine = {}



---@class APowerPlant : AFacilityRefinery
local APowerPlant = {}


---@class APowerPole : ATeamStructure
---@field PowerSocket UBuildSocketComponent
---@field LightComponent UFacilityLightComponent
---@field CableMaterial UMaterialInterface
---@field bAutoConnectToNearby boolean
---@field AutoConnectSearchRadius float
---@field PowerGridInfo FPowerGridInfo
local APowerPole = {}

function APowerPole:OnRep_PowerGridInfo() end


---@class APrototypeKitPickup : AItemPickup
local APrototypeKitPickup = {}


---@class AProxyDrawbridgeSide : APersistentProxy
local AProxyDrawbridgeSide = {}


---@class ARWDSimVehicle : ASimVehicle
---@field RepRWDMovement FRepRWDMovement
---@field Trailer ARWDSimVehicle
---@field Tractor ARWDSimVehicle
---@field IdleLoop UAudioComponent
---@field DriveLoopPitchCurve UCurveFloat
---@field RearLeftTireDirtLowSpeedPS UParticleSystemComponent
---@field RearLeftTireDirtHighSpeedPS UParticleSystemComponent
---@field RearRightTireDirtLowSpeedPS UParticleSystemComponent
---@field RearRightTireDirtHighSpeedPS UParticleSystemComponent
---@field MainDirtLowSpeedPS UParticleSystemComponent
---@field MainDirtHighSpeedPS UParticleSystemComponent
---@field SkiddingDirtPS UParticleSystemComponent
---@field TireDirtLowSpeedTemplate UParticleSystem
---@field TireFXLowSpeedThreshold float
---@field TireDirtHighSpeedTemplate UParticleSystem
---@field TireFXHighSpeedThreshold float
---@field MainDirtLowSpeedTemplate UParticleSystem
---@field MainFXLowSpeedThreshold float
---@field MainDirtHighSpeedTemplate UParticleSystem
---@field MainFXHighSpeedThreshold float
---@field SkiddingDirtTemplate UParticleSystem
---@field SkiddingFXSpeedThreshold float
---@field GearShiftUpSoundCue USoundCue
---@field GearShiftDownSoundCue USoundCue
---@field TowHitch UTowHitchUseComponent
---@field SavedLinkedTrailerName FString
local ARWDSimVehicle = {}

---@param Move FRWDMove
---@param Base FRWDMoveBase
---@param TrailerMove FRWDMoveTrailer
function ARWDSimVehicle:ServerMoveRwdTowing(Move, Base, TrailerMove) end
---@param Move FRWDMove
---@param Base FRWDMoveBase
function ARWDSimVehicle:ServerMoveRwd(Move, Base) end
---@param Move FRWDMove
---@param TrailerMove FRWDMoveTrailer
function ARWDSimVehicle:ServerMoveNoBaseRwdTowing(Move, TrailerMove) end
---@param Move FRWDMove
function ARWDSimVehicle:ServerMoveNoBaseRwd(Move) end
---@param Dual FRWDMoveDual
---@param Move FRWDMove
---@param Base FRWDMoveBase
function ARWDSimVehicle:ServerMoveDualRwd(Dual, Move, Base) end
---@param Dual FRWDMoveDual
---@param Move FRWDMove
function ARWDSimVehicle:ServerMoveDualNoBaseRwd(Dual, Move) end
function ARWDSimVehicle:OnRep_Tractor() end
function ARWDSimVehicle:OnRep_RepRWDMovement() end
---@param bHitched boolean
function ARWDSimVehicle:MulticastPlayHitchFX(bHitched) end
---@param Timestamp float
---@param Adjustment FRWDVeryShortAdjustment
---@param TrailerAdjustment FRWDVeryShortAdjustment
function ARWDSimVehicle:ClientVeryShortAdjustPositionRwdTowing(Timestamp, Adjustment, TrailerAdjustment) end
---@param Timestamp float
---@param Adjustment FRWDVeryShortAdjustment
function ARWDSimVehicle:ClientVeryShortAdjustPositionRwd(Timestamp, Adjustment) end
---@param bHasTrailer boolean
---@param NewTrailer ARWDSimVehicle
function ARWDSimVehicle:ClientUpdateTrailer(bHasTrailer, NewTrailer) end
---@param Timestamp float
---@param Adjustment FRWDAdjustment
---@param TrailerAdjustment FRWDAdjustment
---@param SteeringAngle float
function ARWDSimVehicle:ClientAdjustPositionRwdTowing(Timestamp, Adjustment, TrailerAdjustment, SteeringAngle) end
---@param Timestamp float
---@param Adjustment FRWDAdjustment
---@param SteeringAngle float
function ARWDSimVehicle:ClientAdjustPositionRwd(Timestamp, Adjustment, SteeringAngle) end


---@class ARadioBackpackPickup : ABackpackItemPickup
local ARadioBackpackPickup = {}


---@class ARadioPickup : ABasicItemPickup
local ARadioPickup = {}


---@class ARailVehicle : ASimVehicle
---@field CustomSweepComponents TArray<UPrimitiveComponent>
---@field bNeedsSkelmeshTickForMovement boolean
---@field WheelBase float
---@field bIsPowered boolean
---@field TrackGauge ETrackGauge
---@field TrainInfo FTrainInfo
---@field RepTrainMovement FRepTrainMovement
---@field FrontCoupler URailCouplerUseComponent
---@field RearCoupler URailCouplerUseComponent
---@field FrontCableComponent UCableComponent
---@field CouplerCableMaterial UMaterialInterface
---@field IdleLoop UAudioComponent
---@field BrakeLoop UAudioComponent
---@field FrontClacks UAudioComponent
---@field RearClacks UAudioComponent
---@field SavedFrontTrackName FString
---@field SavedRearTrackName FString
---@field SavedFrontTrackAlpha float
---@field SavedLinkedFrontCarName FString
---@field BrakingSystems TArray<FRailParticleSystem>
---@field DrivingSystems TArray<FRailParticleSystem>
---@field LastFrontBogieTrack ARailwayTrack
---@field LastRearBogieTrack ARailwayTrack
---@field bIsBoosting boolean
---@field BorderTravelOverrideExtent float
local ARailVehicle = {}

function ARailVehicle:ServerRequestTrainInfo() end
---@param TimeStamp0 float
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags uint8
---@param View0 uint32
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param NewFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientTrack ARailwayTrack
---@param bClientTrackIsFront boolean
---@param PackedClientDistance float
---@param ServerMovementMode uint8
function ARailVehicle:ServerRailMoveDual(TimeStamp0, InAccel0, PendingFlags, View0, Timestamp, InAccel, NewFlags, ClientRoll, View, ClientTrack, bClientTrackIsFront, PackedClientDistance, ServerMovementMode) end
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param CompressedMoveFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientTrack ARailwayTrack
---@param bClientTrackIsFront boolean
---@param PackedClientDistance float
---@param ClientMovementMode uint8
function ARailVehicle:ServerRailMove(Timestamp, InAccel, CompressedMoveFlags, ClientRoll, View, ClientTrack, bClientTrackIsFront, PackedClientDistance, ClientMovementMode) end
function ARailVehicle:OnRep_RailwayMovement() end
---@param RailVehicles TArray<ARailVehicle>
function ARailVehicle:ClientUpdateTrainInfo(RailVehicles) end
---@param Timestamp float
---@param ServerMovementMode uint8
---@param NewReplicatedMovement TArray<FRepRailwayMovement>
function ARailVehicle:ClientRailAdjustPosition(Timestamp, ServerMovementMode, NewReplicatedMovement) end


---@class ARailVehicleBuildSite : AVehicleBuildSite
---@field FrontTrackName FString
---@field RearTrackName FString
---@field FrontTrackPackedAlpha float
local ARailVehicleBuildSite = {}



---@class ARailVehicleCrane : ARailVehicle
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field ShippableCollision UBoxComponent
---@field ArmMovementSFXLoop UAudioComponent
---@field DeployingSFXLoop UAudioComponent
---@field PulleyMovementSFXLoop UAudioComponent
---@field CraneComponent UCraneComponent
local ARailVehicleCrane = {}



---@class ARailVehicleHospital : ARailVehicle
---@field HospitalComponent UHospitalComponent
---@field GenericStockpileComponent UGenericStockpileComponent
---@field SpawnPoints FSpawnPoints
---@field DeployState FDynamicState
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmoType FName
---@field StashedAmmo int32
local ARailVehicleHospital = {}

function ARailVehicleHospital:OnRep_GunnerYawAndPitch() end


---@class ARailVehicleProxy : ABuildableStructure
local ARailVehicleProxy = {}


---@class ARailVehicleResourcePlatform : ARailVehicle
---@field GenericStockpileComponent UGenericStockpileComponent
local ARailVehicleResourcePlatform = {}



---@class ARailwayTrack : ATeamStructure
---@field SplineConnector USplineConnectorComponent
---@field GrassCullRadius float
---@field BackSocket UBuildSocketComponent
---@field FrontSocket UBuildSocketComponent
---@field BackSwitch URailSwitchUseComponent
---@field FrontSwitch URailSwitchUseComponent
---@field BackSwitchMesh USkeletalMeshComponent
---@field FrontSwitchMesh USkeletalMeshComponent
---@field TrackGauge ETrackGauge
---@field MaxHeightAboveRoad float
---@field MaxHeightForPathConnection float
---@field RailZOffset float
---@field bIsNoVis boolean
---@field bIsDisabled boolean
---@field bIsShownOnMap boolean
---@field SwitchStates TArray<FRailSwitchState>
---@field Vehicles TArray<ARailVehicle>
---@field RoadCheckPhysMaterials TArray<UPhysicalMaterial>
---@field bHasIncomingTravel boolean
local ARailwayTrack = {}

function ARailwayTrack:OnRep_SwitchStates() end
function ARailwayTrack:OnRep_IsDisabled() end


---@class ARefinery : ATeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field TransferLocation USceneComponent
---@field RefinementOrderMap TMap<FString, FRefinementOrderInfo>
---@field RefinableItems TArray<FRefinableItemInfo>
---@field bIsRefining boolean
local ARefinery = {}

---@return boolean
function ARefinery:IsRefining() end


---@class ARefineryBuildSite : AStructureBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field RefinementOrderMap TMap<FString, FRefinementOrderInfo>
local ARefineryBuildSite = {}



---@class ARelicAPC : ASimVehicle
---@field LeftGunMuzzleLocation USceneComponent
---@field RightGunMuzzleLocation USceneComponent
---@field LeftGunYawAndPitch FVector2D
---@field RightGunYawAndPitch FVector2D
---@field StashedLeftGunAmmo int32
---@field StashedRightGunAmmo int32
local ARelicAPC = {}



---@class ARelicAPCStructure : ABuildableStructure
---@field VehicleClass TSubclassOf<ASimVehicle>
local ARelicAPCStructure = {}



---@class ARelicAPCStructureBuildSite : AStructureBuildSite
local ARelicAPCStructureBuildSite = {}


---@class ARelicArmouredCar : AArmoredCar
local ARelicArmouredCar = {}


---@class ARelicBase : AStaticBase
local ARelicBase = {}


---@class ARelicBus : ARWDSimVehicle
local ARelicBus = {}


---@class ARelicScoutVehicle : ASimVehicle
local ARelicScoutVehicle = {}


---@class AReplicatedLadder : ALadder
local AReplicatedLadder = {}


---@class AReservableStructure : ABuildableStructure
local AReservableStructure = {}


---@class AResource : AActor
---@field HammerImpactEffect TSubclassOf<AImpactEffect>
---@field SledgeImpactEffect TSubclassOf<AImpactEffect>
---@field ArrowComponent UArrowComponent
---@field HighYieldEffect UParticleSystemComponent
---@field ResourcePickupClass TSubclassOf<AItemPickup>
---@field BaseAmountPerGather int32
---@field BonusAmountOnFinalGather int32
---@field BaseAmount int32
---@field AmountRemaining int32
---@field GatherXP int32
---@field bPlayGatherFX boolean
---@field ChanceForRareResource float
---@field ResourceLevel int32
---@field ResourceFieldId uint32
---@field bIsHighYield boolean
---@field NumNextTierResourcesToSpawn int32
---@field PossibleNextTierResources TArray<TSubclassOf<AResource>>
---@field bShouldPersist boolean
---@field DestroyedFX UParticleSystem
---@field DestroyedSoundCue USoundCue
---@field SpawnSoundCue USoundCue
local AResource = {}

---@param bPreviousIsHighYield boolean
function AResource:OnRep_IsHighYield(bPreviousIsHighYield) end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function AResource:BPOnGatherHit(Gatherer, GatherLevel) end


---@class AResourceContainer : AContainer
local AResourceContainer = {}


---@class AResourceField : ABuildableStructure
---@field ResourceFieldMeshComponent UStaticMeshComponent
---@field NoBuildVolume USphereComponent
---@field ResourceFieldMesh1 UStaticMesh
---@field ResourceFieldMesh2 UStaticMesh
---@field ResourceFieldMesh3 UStaticMesh
---@field ResourceClass TSubclassOf<AResource>
---@field SpawnPeriod float
---@field MaxConcurrentNodes int32
---@field MinSpawnDistance float
---@field MaxSpawnDistance float
---@field ResourcesPerReplenishment int32
---@field ResourcesLeftToSpawn int16
---@field TimeToReplenish float
---@field ResourceFieldId int32
---@field RemainingTimeToReplenish float
---@field LandscapeTraceDistance float
---@field SpawnActorCollisionHandlingMethod ESpawnActorCollisionHandlingMethod
---@field ResourceNodeSphereColliderRadius float
---@field bIgnoredByResourceRolling boolean
---@field bCheckTechForSecondaryResource boolean
---@field SecondaryResourceWeights TArray<FSecondaryResourceWeight>
---@field ChanceToSpawnSecondaryNormalized float
---@field SecondaryResourceToSpawn TSubclassOf<AItemPickup>
local AResourceField = {}

function AResourceField:OnRep_ResourcesLeftToSpawn() end


---@class AResourceMine : ABuildableStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field ProducedItem FName
---@field ProducedItemCount int16
---@field ProducedRareItem FName
---@field ChanceToProduceRareItem float
---@field ProductionCycleTime float
---@field PetrolEfficiencyMultiplier float
---@field DieselConsumptionRate float
---@field PetrolConsumptionRate float
---@field FuelTankDiesel FFuelTank
---@field FuelTankPetrol FFuelTank
---@field bIsProducing boolean
---@field ItemsInProduction float
---@field TransferLocation USceneComponent
---@field RequiredFieldCodeName FName
local AResourceMine = {}

---@return boolean
function AResourceMine:IsProducing() end


---@class AResourceMineBuildSite : AStructureBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
local AResourceMineBuildSite = {}



---@class AResourceTransferStation : ATeamStructure
---@field GenericStockpileComponent UGenericStockpileComponent
---@field TransferLocation USceneComponent
local AResourceTransferStation = {}



---@class AResourceTransferStationBuildSite : AStructureBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
local AResourceTransferStationBuildSite = {}



---@class ARespawnSpectatorPawn : ASpectatorPawn
local ARespawnSpectatorPawn = {}


---@class ARock : AWall
local ARock = {}


---@class ARocket : ATeamStructure
---@field SkeletalMesh USkeletalMeshComponent
---@field FuelingParticleSystem UParticleSystemComponent
---@field GroundParticleSystem UParticleSystemComponent
---@field LaunchParticleSystem UParticleSystemComponent
---@field InFlightParticleSystem UParticleSystemComponent
---@field LaunchSoundCue USoundCue
---@field ImpactSoundCue USoundCue
---@field InFlightCameraShake TSubclassOf<UCameraShake>
---@field LaunchAnimationTime float
---@field FlightAnimationTime float
---@field LaunchFire FRocketLaunchFire
---@field RocketTargetClass TSubclassOf<ARocketTarget>
---@field ImpactEffectClass TSubclassOf<ARocketImpactEffect>
---@field GroundZeroClass TSubclassOf<ARocketGroundZero>
---@field LaunchAudioComponent UAudioComponent
---@field State ERocketLaunchSequence
---@field LiquidTank FLiquidTank
---@field SelectedStrikeLocation FVector
---@field OriginMapID EWorldConquestMapId
---@field SelectedCode FRocketLaunchCodeInfo
local ARocket = {}

function ARocket:OnRep_State() end
function ARocket:OnRep_LiquidTank() end
function ARocket:BPBeginLaunch() end


---@class ARocketFacility : ATeamStructure
---@field BuildLocation UBoxComponent
---@field FirstRocketPartCodeName FName
---@field FuelLocationOffset FVector
---@field Sequence ERocketLaunchSequence
---@field PendingLaunchCode FRocketLaunchCodeInfo
---@field SelectedLaunchCode FRocketLaunchCodeInfo
---@field LinkedIntelCenter FName
---@field RequiredSquadMembers uint8
---@field StartLaunchEntries uint8
---@field CancelLaunchEntries uint8
---@field TargetRegion EWorldConquestMapId
---@field Coordinate FWarGridCoordinate
---@field FuelTank FFuelTank
---@field TimeToLaunch double
---@field LastFailure ERocketLaunchResponse
---@field LastFailureTime FDateTime
local ARocketFacility = {}

function ARocketFacility:OnRep_TimeToLaunch() end


---@class ARocketFacilityBuildSite : AStructureBuildSite
---@field FuelTank FFuelTank
local ARocketFacilityBuildSite = {}



---@class ARocketGroundZero : ATeamStructure
---@field DamageDuration float
local ARocketGroundZero = {}



---@class ARocketImpactEffect : AActor
---@field ArrowComponent UArrowComponent
local ARocketImpactEffect = {}



---@class ARocketLauncherProjectileDummy : AActor
---@field SkeletalMesh USkeletalMeshComponent
local ARocketLauncherProjectileDummy = {}

function ARocketLauncherProjectileDummy:SpoolupFinished() end
function ARocketLauncherProjectileDummy:BPBeginLaunch() end


---@class ARocketTarget : ATeamStructure
---@field OriginMapID EWorldConquestMapId
---@field LaunchCodeID uint16
---@field LaunchTimeRemaining float
---@field bIsSirenActive boolean
local ARocketTarget = {}

function ARocketTarget:OnRep_IsSirenActive() end


---@class ARuinableStructure : ADestroyedStructure
---@field bShowRuinedInEditor boolean
---@field RuinedComponent URuinedComponent
local ARuinableStructure = {}



---@class AScoutTank : ALightTank
local AScoutTank = {}


---@class AScoutVehicle : ARWDSimVehicle
---@field GunMuzzleLocation USceneComponent
---@field StashedAmmo int32
local AScoutVehicle = {}



---@class AScreenshotCharacter : AActor
---@field Mesh USkeletalMeshComponent
---@field Head USkeletalMeshComponent
---@field Hands USkeletalMeshComponent
---@field Legs USkeletalMeshComponent
---@field Back USkeletalMeshComponent
---@field Helmet USkeletalMeshComponent
---@field EquippedItemMesh USkeletalMeshComponent
---@field bSetMeshesDynamically boolean
---@field bAlwaysResetEquippedItemMesh boolean
---@field FactionId EFactionId
---@field OutfitType EOutfitType
---@field UniformType EUniformType
---@field ZombieType EZombieType
---@field bIsFemale boolean
---@field SkinTone uint8
---@field OverrideMaterial UMaterialInstance
---@field EquippedItem TSoftClassPtr<AItemPickup>
local AScreenshotCharacter = {}



---@class ASeaport : AStorageFacility
---@field TransferLocation2 USceneComponent
---@field CraneSpawnLocationComponent2 UCraneSpawnLocationComponent
---@field ProxyLoadingDockComponent UPersistentProxyComponent
---@field PassengerUnloadingArea1 UBoxComponent
---@field PassengerUnloadingArea2 UBoxComponent
---@field LadderLocationSeaport1 USceneComponent
---@field LadderLocationSeaport2 USceneComponent
---@field LadderLocationDock1 USceneComponent
---@field LadderLocationDock2 USceneComponent
---@field LadderType TSubclassOf<ALadder>
---@field SpawnedLadders TArray<ALadder>
---@field FlagMesh UTeamFlagMeshComponent
local ASeaport = {}



---@class ASeaportBuildSite : AStorageFacilityBuildSite
---@field CraneSpawnLocationComponent2 UCraneSpawnLocationComponent
---@field ProxyLoadingDockComponent UPersistentProxyComponent
---@field SpawnedLadders TArray<ALadder>
local ASeaportBuildSite = {}



---@class ASensorReadingProxy : AActor
---@field Mesh USkeletalMeshComponent
---@field Material UMaterialInterface
local ASensorReadingProxy = {}



---@class AShipVehicle : ASimVehicle
---@field ShipCollision UStaticMeshComponent
---@field RepShipMovement FRepShipMovement
---@field StructureToIgnore AStructure
---@field PropellerPositions FVector
---@field RudderPivot FVector
---@field ControlSurfaces TArray<FControlSurface>
---@field MovementFlags uint8
local AShipVehicle = {}

---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param CompressedMoveFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName FName
---@param ClientMovementMode uint8
function AShipVehicle:ServerMoveShip(Timestamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param CompressedMoveFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementMode uint8
function AShipVehicle:ServerMoveNoBaseShip(Timestamp, InAccel, ClientLoc, CompressedMoveFlags, ClientRoll, View, ClientMovementMode) end
---@param TimeStamp0 float
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags uint8
---@param View0 uint32
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementBase UPrimitiveComponent
---@param ClientBaseBoneName FName
---@param ClientMovementMode uint8
function AShipVehicle:ServerMoveDualShip(TimeStamp0, InAccel0, PendingFlags, View0, Timestamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementBase, ClientBaseBoneName, ClientMovementMode) end
---@param TimeStamp0 float
---@param InAccel0 FVector_NetQuantize10
---@param PendingFlags uint8
---@param View0 uint32
---@param Timestamp float
---@param InAccel FVector_NetQuantize10
---@param ClientLoc FVector_NetQuantize100
---@param NewFlags uint8
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementMode uint8
function AShipVehicle:ServerMoveDualNoBaseShip(TimeStamp0, InAccel0, PendingFlags, View0, Timestamp, InAccel, ClientLoc, NewFlags, ClientRoll, View, ClientMovementMode) end
function AShipVehicle:OnRep_StructureToIgnore() end
function AShipVehicle:OnRep_RepShipMovement() end
---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AShipVehicle:OnPassengerAreaEndOverlap(OverlappedComp, Other, OtherComp, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AShipVehicle:OnPassengerAreaBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param Timestamp float
---@param Adjustment FShipVeryShortAdjustment
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
function AShipVehicle:ClientVeryShortAdjustPositionShip(Timestamp, Adjustment, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition) end
---@param Timestamp float
---@param Adjustment FShipAdjustment
---@param NewBase UPrimitiveComponent
---@param NewBaseBoneName FName
---@param bHasBase boolean
---@param bBaseRelativePosition boolean
function AShipVehicle:ClientAdjustPositionShip(Timestamp, Adjustment, NewBase, NewBaseBoneName, bHasBase, bBaseRelativePosition) end


---@class AShippable : ABuildableStructure
---@field GlobalShippableInfo TSubclassOf<AGlobalShippableInfo>
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field DynamicMeshComponent UMeshComponent
---@field ShippableType FName
---@field ShippableData FReplicatedShippableData
---@field SavedData FSavedShippableData
local AShippable = {}

function AShippable:OnRep_ShippableType() end
function AShippable:OnRep_ShippableData() end


---@class AShippableCrate : ABuildableStructure
---@field ShippableMesh UStaticMesh
---@field StoredCodeName FName
local AShippableCrate = {}



---@class AShippingContainer : AContainer
local AShippingContainer = {}


---@class AShootingRangeArea : AActor
---@field ShootingRangeComponent UBoxComponent
local AShootingRangeArea = {}

---@param OverlappedActor AActor
---@param OtherActor AActor
function AShootingRangeArea:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function AShootingRangeArea:OnOverlapBegin(OverlappedActor, OtherActor) end


---@class ASignPost : ABuildableStructure
---@field HealPerUpVote int32
---@field DamagePerDownVote int32
---@field Text FText
---@field VoteList TArray<FSignPostVote>
---@field LastEditedTimeTicks int64
---@field bIsWorldSignPost boolean
local ASignPost = {}



---@class ASignPostBuildSite : AStructureBuildSite
local ASignPostBuildSite = {}


---@class ASimCharacter : AWarCharacter
---@field RepPlayerMovement FRepPlayerMovement
---@field StanceYawModifiers float
---@field bGiveStarterKit boolean
---@field BaseTurnRate float
---@field SprintingMaxSpeedModifier float
---@field DeathDuration float
---@field ProneEyeHeight float
---@field CrouchedTargetOffset float
---@field MinFallSpeedForDamage float
---@field FatalFallSpeed float
---@field MaxClimbForwardDistance float
---@field MaxClimbCosAngle float
---@field MaxVaultHeight float
---@field MinVaultVerticalClearencePercent float
---@field MaxVaultDistance float
---@field MaxClimbHeight float
---@field MinClimbOpenDistance float
---@field MinClimbOntoOpenDistance float
---@field MinShortWallStepOpenDistance float
---@field ClamberStandOffset float
---@field MountComponent UMountComponent
---@field CurrentOccupiedStructure AStructure
---@field CurrentVehicle ASimVehicle
---@field FootStepCue USoundCue
---@field MaxHealth int32
---@field ResetWoundedStateThreshold int32
---@field HealthThresholdForHurtMaterial float
---@field MaxActivityLatencyCompensation float
---@field ActivityStateInfos FActivityStateInfo
---@field EmoteActivityOptionsTable TMap<ECharacterActivityState, FEmoteActivityOptions>
---@field AllowedDeviationOfShootingDirection float
---@field InVehicleAllowedDeviationOfShootingDirection float
---@field WeaponFiringConeAbilityModifierPct float
---@field TeamId uint8
---@field VisualCustomizationMask uint8
---@field bIsWearingGasMask boolean
---@field bUsesDynamicMaterials boolean
---@field UniformType EUniformType
---@field CurrentSurfaceType EPhysicalSurface
---@field SurfaceMovementModifiers TArray<FSurfaceMovementData>
---@field Head USkeletalMeshComponent
---@field Hands USkeletalMeshComponent
---@field Legs USkeletalMeshComponent
---@field Back USkeletalMeshComponent
---@field Helmet USkeletalMeshComponent
---@field EquippedItemMesh USkeletalMeshComponent
---@field GasMaskMesh USkeletalMeshComponent
---@field AccessoryMesh USkeletalMeshComponent
---@field Muzzle_Standing USceneComponent
---@field Muzzle_Crouched USceneComponent
---@field Muzzle_Prone USceneComponent
---@field GroundEquippedItemMesh UStaticMeshComponent
---@field ItemHolder UItemHolderComponent
---@field SuppressionSphere USphereComponent
---@field ItemHolderItems TArray<FItemInstance>
---@field EquipmentItemHolder UEquipmentHolderComponent
---@field EquipmentItemHolderItems TArray<FItemInstance>
---@field SwimmingPS UParticleSystemComponent
---@field EnterWaterPS UParticleSystemComponent
---@field SwimmingSFX UAudioComponent
---@field EnterWaterSFX UAudioComponent
---@field CharacterActivityStateInternal ECharacterActivityState
---@field Health float
---@field ReplicatedItemEncumbrance uint8
---@field LastMovementBase AActor
---@field MeleeMinDamage float
---@field MeleeMaxDamage float
---@field MeleeDamageType TSubclassOf<UDamageType>
---@field MeleeImpactEffect TSubclassOf<AImpactEffect>
---@field MeleeAttackSound USoundCue
---@field SwimmingBuoyancy float
---@field DrowningBuoyancy float
---@field MaxStamina float
---@field IdleStaminaRestoreRate float
---@field IdleStaminaRestoreDelay float
---@field GasMaskStaminaRestoreRate float
---@field SuppressionStaminaRegenModifier float
---@field StaminaDrainExponent float
---@field AddedSprintingStaminaDrain float
---@field AddedFloodedStaminaDrain float
---@field AddedBlockingStaminaDrain float
---@field AddedChargingStaminaDrain float
---@field AddedDeadlyGasStaminaDrain float
---@field MeleeStaminaCostNormalized float
---@field SwimmingStaminaDrainRate float
---@field SwimmingStaminaDrainDepthCutoff float
---@field ClimbingDepthCutoff float
---@field RagdollInWaterLinearDamping float
---@field RagdollOutOfWaterLinearDamping float
---@field StabilityMovementDecayRate float
---@field StabilityDecayMovementSpeed float
---@field StabilityYawDecayRate float
---@field StabilityYawDecayTime float
---@field StabilityGainRates float
---@field HealTimer float
---@field BleedingEnabled boolean
---@field BleedDamagePerSecond float
---@field BleedMinDamageReq float
---@field StaggerMinDamageReq float
---@field BleedingEffectTemplate UParticleSystem
---@field SpawnedBleedingEffect UParticleSystemComponent
---@field bIsEffectedByDeadlyGas boolean
---@field bIsBleeding boolean
---@field ZombieType EZombieType
---@field WoundedTimeRemaining float
---@field ZombieMeleeReach float
---@field ZombieMeleeImpactEffect TSubclassOf<AImpactEffect>
---@field ZombieDeathSound USoundCue
---@field ZombieHitRadius float
---@field ZombieHitHalfHeight float
---@field CarryingPlayer ASimCharacter
---@field LastBurningHitInstigator TWeakObjectPtr<AController>
---@field BlockingMaxSpeedModifier float
---@field ChargingMaxSpeedModifier float
---@field AimingMaxSpeedModifier float
---@field bDisablePlayerFogOfWar boolean
---@field AlwaysVisibleRadius float
---@field AimRadius int32
---@field ScopeRadius int32
---@field LastUITargetingInfo FUITargetingInfo
---@field EffectiveBlockingMaxDeviation float
---@field YawPitchPacked FVector2D_NetQuantize
---@field CameraRigComponent UPlayerCameraRigComponent
---@field TopDownCameraComponent UCameraComponent
---@field ScopePS UParticleSystemComponent
---@field LOSPostProcess UPostProcessComponent
---@field LOSRasterComponent UPlayerLOSRasterComponent
---@field SprintCameraShake TSubclassOf<UCameraShake>
---@field GrenadeAimMesh UStaticMeshComponent
---@field Grip_Standing USceneComponent
---@field Grip_Crouched USceneComponent
---@field Grip_Prone USceneComponent
---@field RegionBoundaryParamCollection UMaterialParameterCollection
---@field bIsInScopeMode boolean
---@field OfflineExpiryTime FDateTime
local ASimCharacter = {}

function ASimCharacter:SlowTick() end
---@param HatchComponent UHatchComponent
function ASimCharacter:ServerUseShipHatch(HatchComponent) end
---@param ShipVehicle AShipVehicle
---@param FlagIndex uint8
---@param bIsMovement boolean
function ASimCharacter:ServerUseShipFlagVolume(ShipVehicle, FlagIndex, bIsMovement) end
---@param Index int8
---@param InHolder UItemHolderComponent
function ASimCharacter:ServerUseItem(Index, InHolder) end
---@param FloodableComponent UFloodableComponent
function ASimCharacter:ServerUseFloodable(FloodableComponent) end
---@param YawAndPitch FVector2D_NetQuantize
function ASimCharacter:ServerUpdateAimYawAndPitch(YawAndPitch) end
---@param Tractor ARWDSimVehicle
function ASimCharacter:ServerUnlinkRWDSimVehicles(Tractor) end
---@param RailwayTrack ARailwayTrack
---@param PathSocketId int32
function ASimCharacter:ServerToggleRailSwitch(RailwayTrack, PathSocketId) end
---@param ItemPickup AItemPickup
function ASimCharacter:ServerTakePickup(ItemPickup) end
---@param ClientWeaponInvoke FCharacterInvokeInfo
function ASimCharacter:ServerSyncLastWeaponInvoke(ClientWeaponInvoke) end
---@param Vehicle ASimVehicle
---@param ActivityStateChange FActivityStateChange
---@param NewSeatIndex int32
function ASimCharacter:ServerSwitchSeats(Vehicle, ActivityStateChange, NewSeatIndex) end
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerSimulateMeleeAttack(ActivityStateChange) end
---@param InIsInScopeMode boolean
function ASimCharacter:ServerSetIsInScopeMode(InIsInScopeMode) end
---@param RequestedSource EWaterSourceType
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerReloadFromWaterSource(RequestedSource, ActivityStateChange) end
---@param AmmoIx int32
---@param InHolder UItemHolderComponent
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerReload(AmmoIx, InHolder, ActivityStateChange) end
---@param EmoteActivityState ECharacterActivityState
function ASimCharacter:ServerPlayEmote(EmoteActivityState) end
---@param Vehicle ASimVehicle
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerOnUseFromVehicle(Vehicle, ActivityStateChange) end
---@param Timestamp float
---@param ClientRoll uint8
---@param View uint32
---@param ClientMovementMode uint8
function ASimCharacter:ServerMoveMinimal(Timestamp, ClientRoll, View, ClientMovementMode) end
---@param Structure AStructure
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerMountStructure(Structure, ActivityStateChange) end
---@param ActivityStateChange FActivityStateChange
---@param Slot UModificationSlotComponent
---@param Type EFortModificationType
---@param CurrentModificationMask int32
function ASimCharacter:ServerModifyStructure(ActivityStateChange, Slot, Type, CurrentModificationMask) end
---@param VehicleA ARWDSimVehicle
---@param VehicleB ARWDSimVehicle
function ASimCharacter:ServerLinkRWDSimVehicles(VehicleA, VehicleB) end
---@param VehicleA ARailVehicle
---@param VehicleB ARailVehicle
function ASimCharacter:ServerLinkRailVehicles(VehicleA, VehicleB) end
function ASimCharacter:ServerGiveUpFromWoundedState() end
---@param Vehicle ASimVehicle
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerExitVehicle(Vehicle, ActivityStateChange) end
---@param SimVehicle ASimVehicle
---@param EnterVehicleUseComponent UEnterVehicleUseComponent
---@param ActivityStateChange FActivityStateChange
---@param SeatIndex int32
function ASimCharacter:ServerEnterVehicle(SimVehicle, EnterVehicleUseComponent, ActivityStateChange, SeatIndex) end
---@param LadderComponent ULadderComponent
---@param bEntering boolean
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerClimbLadder(LadderComponent, bEntering, ActivityStateChange) end
---@param InputDirection FVector2D
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerClimb(InputDirection, ActivityStateChange) end
---@param Index int8
---@param bEquip boolean
---@param ActivityStateChange FActivityStateChange
function ASimCharacter:ServerChangeItemEquipState(Index, bEquip, ActivityStateChange) end
---@param WoundedCharacter ASimCharacter
function ASimCharacter:ServerCarryWounded(WoundedCharacter) end
function ASimCharacter:OnRep_ZombieType() end
function ASimCharacter:OnRep_VisualCustomizationMaskNotify() end
function ASimCharacter:OnRep_UniformType() end
function ASimCharacter:OnRep_TeamIdNotify() end
---@param PrevSnapshot FRepPlayerMovement
function ASimCharacter:OnRep_RepPlayerMovement(PrevSnapshot) end
function ASimCharacter:OnRep_MountComponent() end
function ASimCharacter:OnRep_IsWearingGasMask() end
function ASimCharacter:OnRep_IsInScopeMode() end
function ASimCharacter:OnRep_IsBleeding() end
function ASimCharacter:OnRep_Health() end
function ASimCharacter:OnRep_EquipmentItemHolderItems() end
function ASimCharacter:OnRep_Encumbrance() end
---@param PreviousVehicle ASimVehicle
function ASimCharacter:OnRep_CurrentVehicle(PreviousVehicle) end
function ASimCharacter:OnRep_CurrentOccupiedStructure() end
function ASimCharacter:OnRep_CharacterActivityState() end
---@param SimulatedHitNotify FHitNotify
function ASimCharacter:MulticastSpawnMeleeHitEffects(SimulatedHitNotify) end
---@param InStagger uint8
function ASimCharacter:MulticastSetStagger(InStagger) end
---@param InNormalizedStamina float
function ASimCharacter:MulticastSetNormalizedStamina(InNormalizedStamina) end
---@param DamageType EDamageType
function ASimCharacter:MulticastOnUniformMitigatedDamage(DamageType) end
---@param NewTrace FActivityStateDebugTrace
function ASimCharacter:ClientTraceActivity(NewTrace) end
---@param CurrentSequenceNumber uint8
---@param HeldItemIndex int8
function ASimCharacter:ClientSyncActivityStateSequence(CurrentSequenceNumber, HeldItemIndex) end
---@param Position FVector
---@param Rotation FRotator
function ASimCharacter:ClientSetUnmountPosition(Position, Rotation) end
---@param InNormalizedStamina float
function ASimCharacter:ClientSetNormalizedStamina(InNormalizedStamina) end
---@param InItemHolderItems TArray<FItemInstance>
function ASimCharacter:ClientSetItemHolderItems(InItemHolderItems) end
---@param bIsGaining boolean
function ASimCharacter:ClientSetGainingHeatFromHits(bIsGaining) end
---@param bInIsFlyMode boolean
---@param FlyHeight float
---@param FlySpeed float
function ASimCharacter:ClientSetFlyMode(bInIsFlyMode, FlyHeight, FlySpeed) end
---@param SequenceNumber uint8
function ASimCharacter:ClientInterruptActivityState(SequenceNumber) end
---@param LastSuccessfulSequenceNumber uint8
---@param HeldItemIndex int8
---@param NewState ECharacterActivityState
function ASimCharacter:ClientCorrectActivityState(LastSuccessfulSequenceNumber, HeldItemIndex, NewState) end
---@param WoundedCharacter ASimCharacter
---@param bBeganCarrying boolean
function ASimCharacter:ClientCarryWoundedSetupMovement(WoundedCharacter, bBeganCarrying) end
---@param LaunchVelocity FVector2D_NetQuantize
function ASimCharacter:ClientCannonLaunch(LaunchVelocity) end
function ASimCharacter:ClientBeginWoundedState() end
---@param Timestamp float
---@param Adjustment FPlayerAdjustment
function ASimCharacter:ClientAdjustPositionPlayer(Timestamp, Adjustment) end
---@param SuppressAmount float
function ASimCharacter:ClientAddSuppression(SuppressAmount) end
---@param StabilityAmount float
function ASimCharacter:ClientAddStability(StabilityAmount) end
---@param SequenceNumber uint8
function ASimCharacter:ClientAckActivityState(SequenceNumber) end
function ASimCharacter:CheckForCover() end
---@param Position FVector
function ASimCharacter:BPUpdateMaterialParameters(Position) end
---@param bState boolean
function ASimCharacter:BPUpdateHeatVisuals(bState) end
---@param VisualTeamId int32
function ASimCharacter:BPSetTeamVisuals(VisualTeamId) end
function ASimCharacter:BPCinematicDeath() end


---@class ASimGameMode : AWarGameMode
---@field DefaultAutoSavePeriod float
---@field DefaultAutoSaveSlot FString
---@field DefaultBotClass TSubclassOf<APawn>
---@field AssignableSpawnPoints TMap<uint32, AActor>
---@field CurrentVehicleID uint32
---@field OfflineCharacterMap TMap<FString, AOfflineCharacter>
---@field OfflineCharacterClass TSubclassOf<AOfflineCharacter>
---@field SavedCharacterMap TMap<FString, FSavedCharacter>
---@field PlayerProfileManager UPlayerProfileManager
---@field WarReporter FWarReporter
---@field ResourceMapping UResourceMapping
---@field DecayPreventers TSet<AActor>
local ASimGameMode = {}

---@param Command FString
function ASimGameMode:HeadlessServerCommand(Command) end
---@param Command FString
function ASimGameMode:HeadlessCommand(Command) end


---@class ASimGameState : AWarGameState
---@field TownHallInfo TArray<FTownHallInfo>
---@field GameplayFlags FGameplayFlags
---@field MapIntelligence AMapIntelligence
---@field SubmarineAudioVolume ASubmarineAudioVolume
---@field WarAchievementProgress FWarAchievementProgress
---@field StructureLayers uint32
---@field WorldWeatherState FWorldWeatherState
---@field PrevWindSpeedTime float
---@field PrevWindSpeed uint8
---@field NextWindSpeedTime float
---@field NextWindSpeed uint8
---@field PrevWindDirectionTime float
---@field PrevWindDirection uint8
---@field NextWindDirectionTime float
---@field NextWindDirection uint8
---@field InitialReplicatedServerTimestamp FQuantizedTimestamp
---@field ColonialTechTree ATechTree
---@field WardenTechTree ATechTree
---@field ConquestWinner EFactionId
---@field WarPhase EWarPhase
---@field WarPhaseEndTime FDateTime
---@field bIsPatchRequired boolean
---@field bIsShortWar boolean
---@field RegionMaintenanceBitMask uint64
---@field EnabledRegionBitMask uint64
local ASimGameState = {}

function ASimGameState:OnRep_WorldWeatherState() end
function ASimGameState:OnRep_WardenTechTree() end
function ASimGameState:OnRep_InitialReplicatedServerTimestamp() end
function ASimGameState:OnRep_GameplayFlags() end
function ASimGameState:OnRep_ColonialTechTree() end
function ASimGameState:MulticastToggleEarlyWarRestrictionOverride() end
---@param ServerTimestamp FQuantizedTimestamp
function ASimGameState:MulticastServerTimestamp(ServerTimestamp) end
---@param OnlineID FString
function ASimGameState:MulticastRemoveOfflinePlayerState(OnlineID) end
---@return FVector2D
function ASimGameState:GetWindVector() end


---@class ASimPainCausingVolume : APainCausingVolume
local ASimPainCausingVolume = {}


---@class ASimPlayerCameraManager : APlayerCameraManager
---@field PostProcessComponent UPostProcessComponent
---@field FogMaterialDynamic UMaterialInstanceDynamic
---@field SpectateTarget FSpectateTarget
local ASimPlayerCameraManager = {}



---@class ASimPlayerController : AWarPlayerController
---@field UpgradeTarget TWeakObjectPtr<AStructure>
---@field UpgradeTargetDecayPreventer TWeakObjectPtr<AStructure>
---@field MapIntelRefreshRate float
---@field MapIntelItemsPerChunk int32
---@field MapIntelProviderRangeSquared float
---@field CommsRating FCommsRating
---@field SpawnPointInfo FPlayerSpawnPointsInfo
---@field BuildGhost ABuildGhost
---@field UpgradeBuildGhost ABuildGhost
---@field DeathCamTime float
---@field ChatRange float
---@field PlaceInDeploymentQueue int32
---@field StockpileEffects FStockpileEffects
---@field UserComponents TArray<UUserComponent>
---@field StatsForNearybyStructures TArray<FStructureStats>
---@field RailHUDTarget TWeakObjectPtr<ARailVehicle>
---@field RailHUDTargetDismountTime float
---@field CalloutMarkerGhost ACalloutMarkerGhost
---@field LandscapeCullRVTVolumeClass TSubclassOf<ARuntimeVirtualTextureVolume>
---@field FoliageCullRVTVolumeClass TSubclassOf<ARuntimeVirtualTextureVolume>
---@field LandscapeCullRVTVolume ARuntimeVirtualTextureVolume
---@field FoliageCullRVTVolume ARuntimeVirtualTextureVolume
---@field FoliageCullParameterCollectionInstance UMaterialParameterCollectionInstance
local ASimPlayerController = {}

---@param TestInt int32
---@param TestFloat float
---@param TestBool boolean
---@param TestStr FString
---@param TestEnum ETestEnum
function ASimPlayerController:WarMessageTest(TestInt, TestFloat, TestBool, TestStr, TestEnum) end
function ASimPlayerController:TunnelNetworkDebugDraw() end
function ASimPlayerController:ToggleStabilityDebug() end
function ASimPlayerController:ToggleShowMouseCursor() end
---@param SearchBorderOffset float
---@param SearchMaxRadius float
---@param bWaterTravel boolean
---@param ShipDepth float
---@param SearchMinimumWaterDepth float
---@param WorldX float
---@param WorldY float
---@param WorldZ float
---@param Yaw float
function ASimPlayerController:TestTravel(SearchBorderOffset, SearchMaxRadius, bWaterTravel, ShipDepth, SearchMinimumWaterDepth, WorldX, WorldY, WorldZ, Yaw) end
function ASimPlayerController:StructureIslandDebugDraw() end
function ASimPlayerController:StopRequestingGarrisonInfo() end
function ASimPlayerController:StartRequestingGarrisonInfo() end
---@param PerVehicleCount int32
function ASimPlayerController:SpawnAllVehicles(PerVehicleCount) end
---@param PerStructureCount int32
function ASimPlayerController:SpawnAllStructures(PerStructureCount) end
---@param bWipeItems boolean
---@param AfterSeconds int32
function ASimPlayerController:SimulateDeath(bWipeItems, AfterSeconds) end
---@param TargetOnlineID FString
---@param Message FString
function ASimPlayerController:ServerWhisper(TargetOnlineID, Message) end
---@param Message FWarMessageTest
function ASimPlayerController:ServerWarMessageTest(Message) end
---@param bIsUpVote boolean
---@param TargetSignPost ASignPost
function ASimPlayerController:ServerVoteOnSignPost(bIsUpVote, TargetSignPost) end
---@param TargetOnlineID FString
---@param bIsUpVote boolean
---@param MessageContent FString
---@param MessageType EChatMessageType
function ASimPlayerController:ServerVoteOnChatMessage(TargetOnlineID, bIsUpVote, MessageContent, MessageType) end
---@param PlayerOnlineId FString
---@param VoteKickCategory EUserVoteKickCategory
function ASimPlayerController:ServerVoteKick(PlayerOnlineId, VoteKickCategory) end
---@param UseComponent UUseComponent
function ASimPlayerController:ServerUseUseComponent(UseComponent) end
---@param Ramp UGangwayRamp
function ASimPlayerController:ServerUseShipRamp(Ramp) end
---@param AssemblyStation AAssemblyStation
---@param TargetSimVehicle ASimVehicle
function ASimPlayerController:ServerUpgradeVehicle(AssemblyStation, TargetSimVehicle) end
---@param TargetStructure AStructure
---@param UpgradeCodename FName
---@param UpgradeRotation FRotator
function ASimPlayerController:ServerUpgradeTargetStructure(TargetStructure, UpgradeCodename, UpgradeRotation) end
---@param TargetStructure AStructure
---@param UpgradeCodename FName
function ASimPlayerController:ServerUpgradeStaticTargetStructure(TargetStructure, UpgradeCodename) end
---@param Info uint32
function ASimPlayerController:ServerUpdateInfo(Info) end
---@param SourceComponent UActorComponent
---@param TargetComponent UActorComponent
---@param StockpileType EStockpileEntryType
---@param CodeName FName
---@param TargetStockpileName FString
function ASimPlayerController:ServerUnpackShippableCrate(SourceComponent, TargetComponent, StockpileType, CodeName, TargetStockpileName) end
---@param TargetItemHolder UItemHolderComponent
---@param ItemSlotIndex int32
function ASimPlayerController:ServerUnCrateItems(TargetItemHolder, ItemSlotIndex) end
function ASimPlayerController:ServerTravelToHomeRegion() end
---@param SourceItemHolder UItemHolderComponent
---@param SourceItemIndex int8
---@param DestItemHolder UItemHolderComponent
---@param bUseStackTransferLimit boolean
function ASimPlayerController:ServerTransferItem(SourceItemHolder, SourceItemIndex, DestItemHolder, bUseStackTransferLimit) end
---@param SimVehicle ASimVehicle
function ASimPlayerController:ServerToggleVehicleLock(SimVehicle) end
---@param RequestTime float
function ASimPlayerController:ServerTimeRequest(RequestTime) end
---@param WorldPosition FVector
function ASimPlayerController:ServerTeleportToLocation(WorldPosition) end
function ASimPlayerController:ServerSyncWorldPlayerId() end
function ASimPlayerController:ServerSyncTravelMaps() end
function ASimPlayerController:ServerSyncTimeToNextWar() end
function ASimPlayerController:ServerSyncStaticRegionMapData() end
function ASimPlayerController:ServerSyncDynamicRegionMapData() end
---@param BackpackItemIndex int8
function ASimPlayerController:ServerSwapEquipment(BackpackItemIndex) end
---@param SimVehicle ASimVehicle
---@param TargetStockpile UActorComponent
function ASimPlayerController:ServerSubmitVehicleToStockpile(SimVehicle, TargetStockpile) end
---@param TechStructure AStructure
---@param CategoryIndex uint8
---@param LevelIndex uint8
---@param ItemIndex uint8
function ASimPlayerController:ServerSubmitTech(TechStructure, CategoryIndex, LevelIndex, ItemIndex) end
---@param Structure ABuildableStructure
---@param TargetStockpile UActorComponent
---@param TargetStockpileName FString
function ASimPlayerController:ServerSubmitStructureToStockpile(Structure, TargetStockpile, TargetStockpileName) end
---@param Actor AActor
---@param Bitmask uint16
function ASimPlayerController:ServerSubmitStarterKit(Actor, Bitmask) end
---@param TargetActor AActor
---@param RefinableItemIndex int32
---@param bTransferAll boolean
function ASimPlayerController:ServerSubmitResourceConverterOrder(TargetActor, RefinableItemIndex, bTransferAll) end
---@param TargetRefinery ARefinery
---@param RefinableItemIndex int32
---@param UserQuantityLimit int32
function ASimPlayerController:ServerSubmitRefinementOrderWithLimit(TargetRefinery, RefinableItemIndex, UserQuantityLimit) end
---@param TargetRefinery ARefinery
---@param RefinableItemIndex int32
---@param bTransferAll boolean
function ASimPlayerController:ServerSubmitRefinementOrder(TargetRefinery, RefinableItemIndex, bTransferAll) end
---@param HospitalComponent UHospitalComponent
function ASimPlayerController:ServerSubmitPatients(HospitalComponent) end
---@param Actor AActor
function ASimPlayerController:ServerSubmitLargeItem(Actor) end
---@param SourceItemHolder UItemHolderComponent
---@param TargetStockpile UActorComponent
---@param ItemFilter FStockpileItemFilter
function ASimPlayerController:ServerSubmitItemsToStockpileFromItemHolderWithItemFilter(SourceItemHolder, TargetStockpile, ItemFilter) end
---@param SourceItemHolder UItemHolderComponent
---@param TargetStockpile UActorComponent
function ASimPlayerController:ServerSubmitItemsToStockpileFromItemHolder(SourceItemHolder, TargetStockpile) end
---@param TargetStockpile UActorComponent
---@param ItemFilter FStockpileEntry
function ASimPlayerController:ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered(TargetStockpile, ItemFilter) end
---@param TargetStockpile UActorComponent
function ASimPlayerController:ServerSubmitItemsFromPlayerStockpileToTargetStockpile(TargetStockpile) end
---@param FactoryComponent USpecializedFactoryComponent
---@param Type EFactoryQueueType
---@param AccessLevel EFactoryOrderAccess
---@param SquadId int32
---@param OrderItems TArray<FSpecializedFactoryOrderItem>
function ASimPlayerController:ServerSubmitFactoryOrder(FactoryComponent, Type, AccessLevel, SquadId, OrderItems) end
---@param ShippableCrate AShippableCrate
---@param TargetStockpile UActorComponent
---@param bSubmitToPublic boolean
function ASimPlayerController:ServerSubmitCrateToStockpile(ShippableCrate, TargetStockpile, bSubmitToPublic) end
---@param Container AContainer
---@param TargetStockpile UActorComponent
function ASimPlayerController:ServerSubmitContainerToStockpile(Container, TargetStockpile) end
---@param AssemblyStation AAssemblyStation
function ASimPlayerController:ServerStopRepairVehicle(AssemblyStation) end
---@param RefuelSourceActor AActor
---@param RefuelTargetActor AActor
function ASimPlayerController:ServerStopRefuelingActorInUse(RefuelSourceActor, RefuelTargetActor) end
---@param TargetItemHolder UItemHolderComponent
---@param SplitPercentageQuantized uint8
---@param FromIndex int8
function ASimPlayerController:ServerSplitItemStack(TargetItemHolder, SplitPercentageQuantized, FromIndex) end
function ASimPlayerController:ServerSpectateSpawnPoint() end
---@param Delta int8
---@param bAllowSpectatorCameraFallback boolean
function ASimPlayerController:ServerSpectate(Delta, bAllowSpectatorCameraFallback) end
---@param PerVehicleCount int32
function ASimPlayerController:ServerSpawnAllVehicles(PerVehicleCount) end
---@param PerStructureCount int32
function ASimPlayerController:ServerSpawnAllStructures(PerStructureCount) end
---@param SourceItemHolder UItemHolderComponent
function ASimPlayerController:ServerSortWreckage(SourceItemHolder) end
---@param TargetItemHolder UItemHolderComponent
function ASimPlayerController:ServerSortItemHolder(TargetItemHolder) end
---@param bWipeItems boolean
---@param AfterSeconds int32
function ASimPlayerController:ServerSimulateDeath(bWipeItems, AfterSeconds) end
function ASimPlayerController:ServerSignalAttemptServerTravel() end
---@param SimVehicle ASimVehicle
---@param bIsLocked boolean
function ASimPlayerController:ServerSetVehicleLock(SimVehicle, bIsLocked) end
---@param Container AContainer
---@param Color uint8
function ASimPlayerController:ServerSetStructureColor(Container, Color) end
---@param StockpileTargetOverride UGenericStockpileComponent
function ASimPlayerController:ServerSetStockpileTargetOverride(StockpileTargetOverride) end
---@param AssignableSPActor AActor
function ASimPlayerController:ServerSetSpawnPoint(AssignableSPActor) end
---@param LargeShip ALargeShip
---@param bShouldBeRaised boolean
function ASimPlayerController:ServerSetShipAnchorState(LargeShip, bShouldBeRaised) end
---@param TargetRefinery ARefinery
---@param AccessLevel ERefineryOrderAccessLevel
function ASimPlayerController:ServerSetRefineryOrderAccessLevel(TargetRefinery, AccessLevel) end
---@param LHSActor AActor
---@param RHSActor AActor
function ASimPlayerController:ServerSetPowerGridConnectionState(LHSActor, RHSActor) end
---@param InventorySourceOverride UActorComponent
function ASimPlayerController:ServerSetInventorySourceOverride(InventorySourceOverride) end
---@param RailVehicleHospital ARailVehicleHospital
---@param bWantsItDeployed boolean
function ASimPlayerController:ServerSetHospitalDeployState(RailVehicleHospital, bWantsItDeployed) end
---@param FortEmp AFortEmp
---@param StructureType uint8
function ASimPlayerController:ServerSetFortEmpStructure(FortEmp, StructureType) end
---@param CustomizationInfo FCharacterCustomizationInfo
function ASimPlayerController:ServerSetCharacterCustomizationInfo(CustomizationInfo) end
---@param Flags int32
---@param Actor AActor
function ASimPlayerController:ServerSetCameraFlags(Flags, Actor) end
---@param AssemblyStation AAssemblyStation
---@param bWantsItOpen boolean
function ASimPlayerController:ServerSetAssemblyAreaState(AssemblyStation, bWantsItOpen) end
---@param TargetActor AActor
function ASimPlayerController:ServerSetAdminCommandTarget(TargetActor) end
---@param HospitalComponent UHospitalComponent
function ASimPlayerController:ServerRetrievePatient(HospitalComponent) end
---@param RetrieveFromStockpileComponent UActorComponent
---@param RetrieveToStockpileComponent UGenericStockpileComponent
---@param StockpileName FString
---@param CodeName FName
---@param EntryType EStockpileEntryType
---@param RequestedAmount uint16
function ASimPlayerController:ServerRetrieveFromStockpile(RetrieveFromStockpileComponent, RetrieveToStockpileComponent, StockpileName, CodeName, EntryType, RequestedAmount) end
function ASimPlayerController:ServerRespawnDefault() end
function ASimPlayerController:ServerRespawnAtNearestStaticBase() end
function ASimPlayerController:ServerRespawnAtNearestSafeHouse() end
---@param Category uint8
function ASimPlayerController:ServerRespawnAtAssignedPoint(Category) end
function ASimPlayerController:ServerResetStockpileTargetOverride() end
---@param Actor AActor
function ASimPlayerController:ServerResetPowerGridConnectionState(Actor) end
function ASimPlayerController:ServerResetInventorySourceOverride() end
---@param Vehicle ASimVehicle
---@param PageIndex uint32
function ASimPlayerController:ServerRequestVehicleLog(Vehicle, PageIndex) end
---@param Structure AStructure
---@param PageIndex uint32
function ASimPlayerController:ServerRequestStructureLog(Structure, PageIndex) end
---@param Structure AStructure
---@param bIsInitialRequest boolean
function ASimPlayerController:ServerRequestStructureInfo(Structure, bIsInitialRequest) end
---@param GenericStockpileComponent UGenericStockpileComponent
---@param CategoryType EStockpileCategoryType
function ASimPlayerController:ServerRequestStockpileAccessEvents(GenericStockpileComponent, CategoryType) end
---@param Structure AStructure
---@param StockpileName FString
---@param PageIndex uint32
function ASimPlayerController:ServerRequestReserveStockpileLog(Structure, StockpileName, PageIndex) end
---@param MapId EWorldConquestMapId
function ASimPlayerController:ServerRequestRegionMinimalData(MapId) end
---@param LogPageIndex uint32
function ASimPlayerController:ServerRequestRegionLog(LogPageIndex) end
---@param OnlineID FString
function ASimPlayerController:ServerRequestOfflineActivityLog(OnlineID) end
---@param Structure AStructure
function ASimPlayerController:ServerRequestNetworkTechStatus(Structure) end
---@param MapPostID int32
function ASimPlayerController:ServerRequestMapPostDetails(MapPostID) end
---@param MapId EWorldConquestMapId
---@param Index int32
---@param SerialNumber int32
function ASimPlayerController:ServerRequestMapItemDetails(MapId, Index, SerialNumber) end
function ASimPlayerController:ServerRequestMapIntelligence() end
---@param SimVehicle ASimVehicle
function ASimPlayerController:ServerRequestCachedDriverInfo(SimVehicle) end
---@param TargetPlayerState ASimPlayerState
function ASimPlayerController:ServerRequestActivityLog(TargetPlayerState) end
---@param AssemblyStation AAssemblyStation
---@param TargetSimVehicle ASimVehicle
function ASimPlayerController:ServerRepairVehicle(AssemblyStation, TargetSimVehicle) end
---@param FuelCodeName FName
---@param RefuelSourceActor AActor
---@param RefuelTargetActor AActor
function ASimPlayerController:ServerRefuelActorInUse(FuelCodeName, RefuelSourceActor, RefuelTargetActor) end
function ASimPlayerController:ServerReconnectToVoiceChat() end
function ASimPlayerController:ServerReceieveInfo() end
---@param TargetMapID EWorldConquestMapId
---@param TravelPoint FSpawnPoint
---@param bIsRecovery boolean
function ASimPlayerController:ServerQueueForDeployment(TargetMapID, TravelPoint, bIsRecovery) end
---@param ID int32
---@param Data TArray<uint8>
function ASimPlayerController:ServerProcessCommand(ID, Data) end
---@param CodeName FName
---@param Location FVector
---@param Rotation FRotator
---@param SnapInfo FRepSnapInfo
---@param ConnectorSnapInfo FRepSnapInfo
---@param ManualConnectorConfiguration FConnectorConfiguration
function ASimPlayerController:ServerPlaceTrench(CodeName, Location, Rotation, SnapInfo, ConnectorSnapInfo, ManualConnectorConfiguration) end
---@param CalloutInfoIndex int8
---@param Location FVector_NetQuantize
function ASimPlayerController:ServerPlaceCalloutMarker(CalloutInfoIndex, Location) end
---@param FactoryComponent USpecializedFactoryComponent
---@param Type EFactoryQueueType
---@param TargetOrderOnlineID FString
function ASimPlayerController:ServerPickUpFactoryOrder(FactoryComponent, Type, TargetOrderOnlineID) end
---@param CalloutInfoIndex int8
function ASimPlayerController:ServerPerformCallOut(CalloutInfoIndex) end
---@param ShippableActor AActor
---@param bWantsItPackaged boolean
---@param bIsCargoOnly boolean
function ASimPlayerController:ServerPackageShippable(ShippableActor, bWantsItPackaged, bIsCargoOnly) end
---@param SimVehicle ASimVehicle
function ASimPlayerController:ServerOpenVehicleInventory(SimVehicle) end
function ASimPlayerController:ServerOnUserResetAFKTimer() end
function ASimPlayerController:ServerOnPlayerLogOut() end
---@param AccessedBaseActor AActor
function ASimPlayerController:ServerOnNewSpawnPointAccessed(AccessedBaseActor) end
---@param TeamId EFactionId
function ASimPlayerController:ServerJoinWar(TeamId) end
---@param TargetMapID EWorldConquestMapId
---@param TravelPoint FSpawnPoint
---@param bIsRecovery boolean
function ASimPlayerController:ServerGetTravelInfo(TargetMapID, TravelPoint, bIsRecovery) end
---@param ChannelType EVoiceChannelType
---@param ChannelName FString
---@param AccountSIPAddress FString
---@param ChannelSIPAddress FString
function ASimPlayerController:ServerGenerateVivoxChannelJoinToken(ChannelType, ChannelName, AccountSIPAddress, ChannelSIPAddress) end
---@param VehicleFactory AVehicleFactory
function ASimPlayerController:ServerFullRepair(VehicleFactory) end
---@param TeamStructure ATeamStructure
function ASimPlayerController:ServerFlagDisruptivePlacement(TeamStructure) end
---@param Request FRocketLaunchCodeRequest
function ASimPlayerController:ServerEnterRocketLaunchCode(Request) end
function ASimPlayerController:ServerEjectDriver() end
---@param Text FText
---@param TargetSignPost ASignPost
function ASimPlayerController:ServerEditSignPost(Text, TargetSignPost) end
function ASimPlayerController:ServerDropLargeItem() end
---@param ItemHolder UItemHolderComponent
---@param ItemIndex int8
function ASimPlayerController:ServerDropItem(ItemHolder, ItemIndex) end
---@param Structure AStructure
function ASimPlayerController:ServerDrainPipes(Structure) end
function ASimPlayerController:ServerDetachUserComponents() end
---@param DetachTarget AActor
---@param Index uint8
function ASimPlayerController:ServerDetachLargeItem(DetachTarget, Index) end
---@param TargetSignPost ASignPost
function ASimPlayerController:ServerDestroySignPost(TargetSignPost) end
---@param Location FVector
---@param Rotation FRotator
function ASimPlayerController:ServerDeployLargeItem(Location, Rotation) end
---@param TargetVehicle ASimVehicle
function ASimPlayerController:ServerDemolishVehicle(TargetVehicle) end
---@param Structure AStructure
function ASimPlayerController:ServerDemolishStructure(Structure) end
---@param TargetItemHolder UItemHolderComponent
---@param ItemSlotIndex int32
function ASimPlayerController:ServerCrateItems(TargetItemHolder, ItemSlotIndex) end
---@param HospitalComponent UHospitalComponent
function ASimPlayerController:ServerConvertPatient(HospitalComponent) end
---@param ObjectName FName
function ASimPlayerController:ServerConfirmAdminDestroy(ObjectName) end
---@param PlayerOnlineId FString
function ASimPlayerController:ServerCommend(PlayerOnlineId) end
---@param ID FString
function ASimPlayerController:ServerCommandStringID(ID) end
---@param ID int8
function ASimPlayerController:ServerCommandID(ID) end
---@param Actor AActor
function ASimPlayerController:ServerClearSquad(Actor) end
---@param Structure AStructure
---@param SelectedSquadID int32
---@param bWantsItClaimed boolean
---@param bIsMultiClaim boolean
function ASimPlayerController:ServerClaimStructure(Structure, SelectedSquadID, bWantsItClaimed, bIsMultiClaim) end
---@param TargetActor AActor
---@param RefinableItemIndex int32
---@param bTransferAll boolean
function ASimPlayerController:ServerClaimResourceConverterOrder(TargetActor, RefinableItemIndex, bTransferAll) end
---@param TargetRefinery ARefinery
---@param RefinableItemIndex int32
---@param ClaimType ERefineryClaimType
function ASimPlayerController:ServerClaimRefinementOrder(TargetRefinery, RefinableItemIndex, ClaimType) end
---@param Message FString
---@param ChatChannel EChatChannel
---@param BroadcastLanguage EChatLanguage
function ASimPlayerController:ServerChat(Message, ChatChannel, BroadcastLanguage) end
---@param SimVehicle ASimVehicle
function ASimPlayerController:ServerChangeVehicleFuelType(SimVehicle) end
---@param FactoryComponent USpecializedFactoryComponent
---@param Type EFactoryQueueType
---@param AccessLevel EFactoryOrderAccess
---@param SquadId int32
function ASimPlayerController:ServerChangeFactoryOrderAccess(FactoryComponent, Type, AccessLevel, SquadId) end
---@param RocketFacility ARocketFacility
function ASimPlayerController:ServerCancelRocketLaunch(RocketFacility) end
function ASimPlayerController:ServerCancelRetrieval() end
---@param TargetRefinery ARefinery
---@param RefinableItemIndex int32
function ASimPlayerController:ServerCancelRefinementOrder(TargetRefinery, RefinableItemIndex) end
function ASimPlayerController:ServerCancelPackaging() end
---@param FactoryComponent USpecializedFactoryComponent
---@param Type EFactoryQueueType
function ASimPlayerController:ServerCancelFactoryOrder(FactoryComponent, Type) end
---@param BuildLocationActor AActor
---@param CodeName FName
---@param bIsPrototype boolean
---@param BuildLocationTag FName
function ASimPlayerController:ServerBuildVehicleFromStructure(BuildLocationActor, CodeName, bIsPrototype, BuildLocationTag) end
---@param CodeName FName
---@param Location FVector
---@param Rotation FRotator
function ASimPlayerController:ServerBuildVehicle(CodeName, Location, Rotation) end
---@param ConstructionSite AConstructionSite
---@param CodeName FName
---@param bIsPrototype boolean
function ASimPlayerController:ServerBuildStructureFromStructure(ConstructionSite, CodeName, bIsPrototype) end
---@param StructureCodeName FName
---@param BuildLocation FVector
---@param BuildRotation FRotator
---@param SnapInfo FRepSnapInfo
---@param ConnectorSnapInfo FRepSnapInfo
---@param ManualConnectorConfiguration FConnectorConfiguration
function ASimPlayerController:ServerBuildStructure(StructureCodeName, BuildLocation, BuildRotation, SnapInfo, ConnectorSnapInfo, ManualConnectorConfiguration) end
---@param CodeName FName
---@param SnapInfo FRepSnapInfo
function ASimPlayerController:ServerBuildRailVehicle(CodeName, SnapInfo) end
---@param AssociatedActor AActor
function ASimPlayerController:ServerAttachUserComponents(AssociatedActor) end
---@param AttachTarget AActor
---@param Index uint8
function ASimPlayerController:ServerAttachLargeItem(AttachTarget, Index) end
---@param Actor AActor
---@param NewSquadID int32
function ASimPlayerController:ServerAssignSquad(Actor, NewSquadID) end
---@param AssemblyStation AAssemblyStation
---@param CodeName FName
---@param SelectedSquadID int32
function ASimPlayerController:ServerAssembleStructureOrVehicle(AssemblyStation, CodeName, SelectedSquadID) end
function ASimPlayerController:OnRep_UserComponents() end
function ASimPlayerController:OnRep_PlaceInDeploymentQueue() end
---@param URL FString
function ASimPlayerController:OnClientTravelWaitComplete(URL) end
function ASimPlayerController:MaybeRequestGarrisonInfo() end
function ASimPlayerController:DisconnectWarService() end
---@param OnlineID FString
function ASimPlayerController:DeleteMapPost(OnlineID) end
function ASimPlayerController:DebugRecreateLandscapeHoles() end
function ASimPlayerController:DebugDrawCurrentLandscape() end
function ASimPlayerController:ConnectWarService() end
---@param Message FString
---@param SenderName FString
---@param SenderRegimentTag FString
---@param SenderOnlineId FString
---@param SenderTeamID uint8
---@param Channel EChatChannel
---@param BroadcastLanguage EChatLanguage
---@param MapId EWorldConquestMapId
---@param bReportingWhisperToSelf boolean
---@param bIsEnabled boolean
function ASimPlayerController:ClientWorldChatMessage(Message, SenderName, SenderRegimentTag, SenderOnlineId, SenderTeamID, Channel, BroadcastLanguage, MapId, bReportingWhisperToSelf, bIsEnabled) end
---@param SecondsUntilWarEnd int32
---@param Duration int32
function ASimPlayerController:ClientWarEndingAlert(SecondsUntilWarEnd, Duration) end
---@param VoiceLoginInfo FVoiceLoginInfo
function ASimPlayerController:ClientVoiceLogin(VoiceLoginInfo) end
---@param ServerDateTimeTicks int64
function ASimPlayerController:ClientUpdateUTCOffset(ServerDateTimeTicks) end
---@param ClientShardConfig FClientShardConfig
function ASimPlayerController:ClientUpdateShardConfig(ClientShardConfig) end
---@param RegionMinimalData FRegionMinimalData
function ASimPlayerController:ClientUpdateRegionMinimalData(RegionMinimalData) end
---@param RegionLogPage FRegionLogPage
---@param MaxAvailablePages uint32
function ASimPlayerController:ClientUpdateRegionLog(RegionLogPage, MaxAvailablePages) end
---@param SimVehicle ASimVehicle
---@param OnlineID FString
---@param PlayerName FString
function ASimPlayerController:ClientUpdateCachedDriverInfo(SimVehicle, OnlineID, PlayerName) end
---@param LogPage FActorLogPage
---@param PageCount uint32
---@param VehicleID int64
function ASimPlayerController:ClientUpdateActorLog(LogPage, PageCount, VehicleID) end
---@param Activity FPlayerActivity
function ASimPlayerController:ClientUpdateActivityLog(Activity) end
---@param UnstuckMessage EUnstuckMessage
---@param Value int32
function ASimPlayerController:ClientUnstuckMessage(UnstuckMessage, Value) end
---@param TargetMapID EWorldConquestMapId
---@param TravelPoint FSpawnPoint
function ASimPlayerController:ClientTravelToWorldConquestMap(TargetMapID, TravelPoint) end
---@param RegionConnectionInfo FRegionConnectionInfo
function ASimPlayerController:ClientTravelToHomeRegion(RegionConnectionInfo) end
---@param NewTrace FActivityStateDebugTrace
---@param SimCharacter ASimCharacter
function ASimPlayerController:ClientTraceActivity(NewTrace, SimCharacter) end
---@param RequestTime float
---@param ServerTime float
function ASimPlayerController:ClientTimeResponse(RequestTime, ServerTime) end
---@param TargetMapMarkerName FString
function ASimPlayerController:ClientTeleportToMapMarker(TargetMapMarkerName) end
---@param KillerName FString
---@param DeadPlayerName FString
---@param DamageSource EDamageSource
function ASimPlayerController:ClientTeamKillMessage(KillerName, DeadPlayerName, DamageSource) end
---@param ID FString
function ASimPlayerController:ClientSyncWorldPlayerId(ID) end
---@param TravelMaps TArray<FRegionConnectionInfo>
function ASimPlayerController:ClientSyncTravelMaps(TravelMaps) end
---@param Seconds int32
function ASimPlayerController:ClientSyncTimeToNextWar(Seconds) end
---@param TargetStructure AStructure
---@param FactionId EFactionId
---@param SquadId int32
---@param ClaimTime int64
---@param DecayPreventer AStructure
function ASimPlayerController:ClientSyncStructureStatus(TargetStructure, FactionId, SquadId, ClaimTime, DecayPreventer) end
---@param TargetStructure AStructure
---@param BuilderOnlineID FString
---@param BuilderName FString
function ASimPlayerController:ClientSyncStructureBuilderInfo(TargetStructure, BuilderOnlineID, BuilderName) end
---@param StatList TArray<FStructureStats>
function ASimPlayerController:ClientSyncStatsForNearbyStructures(StatList) end
---@param StaticMapData FRegionMapData
function ASimPlayerController:ClientSyncStaticRegionMapData(StaticMapData) end
---@param NewWarRepTweakables FWarReplicatedTweakables
function ASimPlayerController:ClientSyncReplicatedTweakables(NewWarRepTweakables) end
---@param bOnlySyncIfMapIsOpen boolean
function ASimPlayerController:ClientSyncMapIntelligence(bOnlySyncIfMapIsOpen) end
---@param GameplayParams FGameplayParams
function ASimPlayerController:ClientSyncGameplayParams(GameplayParams) end
---@param RegionMapData FRegionMapData
function ASimPlayerController:ClientSyncDynamicRegionMapData(RegionMapData) end
function ASimPlayerController:ClientStopSpectateTargetTick() end
---@param RespawnTime float
function ASimPlayerController:ClientStartRespawnTimer(RespawnTime) end
---@param bInIsLeavingDueToServerTravel boolean
function ASimPlayerController:ClientSimReset(bInIsLeavingDueToServerTravel) end
---@param Response uint8
function ASimPlayerController:ClientShowWeatherStationResponse(Response) end
---@param Response EVehicleStockpileResponse
function ASimPlayerController:ClientShowVehicleStockpileResponse(Response) end
---@param PlayerName FString
function ASimPlayerController:ClientShowVehicleLostMessage(PlayerName) end
---@param UnrestrictedState ERestrictedState
function ASimPlayerController:ClientShowUnrestrictedNotification(UnrestrictedState) end
function ASimPlayerController:ClientShowTravelReservationAlert() end
function ASimPlayerController:ClientShowTeamKillWarning() end
---@param StockpileBroadcastAlertInfo FStockpileBroadcastAlertInfo
function ASimPlayerController:ClientShowStockpileAlert(StockpileBroadcastAlertInfo) end
---@param Actor AActor
---@param Response EAssignCoalitionResponse
function ASimPlayerController:ClientShowSquadResponse(Actor, Response) end
---@param CodeName FName
---@param SquadId int32
function ASimPlayerController:ClientShowSquadClaimedNotification(CodeName, SquadId) end
---@param ShippableStatus uint8
function ASimPlayerController:ClientShowShippableResponse(ShippableStatus) end
---@param RocketFacility ARocketFacility
---@param ActionResult ERocketConsoleActionResult
function ASimPlayerController:ClientShowRocketFacilityResult(RocketFacility, ActionResult) end
---@param RocketFacility ARocketFacility
---@param Response ERocketLaunchResponse
function ASimPlayerController:ClientShowRocketFacilityResponse(RocketFacility, Response) end
---@param ConquestWinner EFactionId
function ASimPlayerController:ClientShowResistanceStart(ConquestWinner) end
---@param ItemCodeName FName
---@param StackSize int32
function ASimPlayerController:ClientShowRecentItem(ItemCodeName, StackSize) end
---@param PlacementStatus EPlacementStatus
function ASimPlayerController:ClientShowPlacementStatus(PlacementStatus) end
---@param bShow boolean
function ASimPlayerController:ClientShowMapNames(bShow) end
---@param Response uint8
function ASimPlayerController:ClientShowLongRangeArtilleryResponse(Response) end
---@param Response uint8
function ASimPlayerController:ClientShowIntelCenterResponse(Response) end
---@param HUDNotification EHUDNotification
function ASimPlayerController:ClientShowHUDNotification(HUDNotification) end
---@param HUDNotification EHUDNotification
---@param CodeName FName
function ASimPlayerController:ClientShowHUDCodeNameNotification(HUDNotification, CodeName) end
---@param HUDNotification EHUDNotification
---@param Actor AActor
---@param SquadId int32
function ASimPlayerController:ClientShowHUDClaimNotification(HUDNotification, Actor, SquadId) end
---@param HUDNotification EHUDNotification
---@param Actor AActor
function ASimPlayerController:ClientShowHUDActorNotification(HUDNotification, Actor) end
---@param Response EHospitalResponse
function ASimPlayerController:ClientShowHospitalResponse(Response) end
---@param FactionWinner EFactionId
function ASimPlayerController:ClientShowEventVictory(FactionWinner) end
---@param DeployResponse EDeployResponse
function ASimPlayerController:ClientShowDeployResponse(DeployResponse) end
---@param Reason uint8
function ASimPlayerController:ClientShowDeploymentFailureNotification(Reason) end
---@param ConquestOverInfo FConquestOverNotificationInfo
function ASimPlayerController:ClientShowConquestVictory(ConquestOverInfo) end
function ASimPlayerController:ClientShowChatOnCooldown() end
---@param BuildResponse FBuildResponse
function ASimPlayerController:ClientShowBuildResponse(BuildResponse) end
---@param Response uint8
function ASimPlayerController:ClientShowBorderBaseResponse(Response) end
---@param CompletionInfo FWarAchievementCompletedInfo
function ASimPlayerController:ClientShowAchievementCompleted(CompletionInfo) end
---@param Vehicle ASimVehicle
---@param MovementInfo FBasedMovementInfo
function ASimPlayerController:ClientSetVehicleReplicatedBasedMovement(Vehicle, MovementInfo) end
---@param bIsMapTeleport boolean
---@param bIsAwaitingClick boolean
function ASimPlayerController:ClientSetTeleport(bIsMapTeleport, bIsAwaitingClick) end
---@param AssignableSP AActor
---@param Response uint8
function ASimPlayerController:ClientSetSpawnPointResponse(AssignableSP, Response) end
---@param bShow boolean
function ASimPlayerController:ClientSetShowVisibilityDebug(bShow) end
---@param bShow boolean
function ASimPlayerController:ClientSetShowStructureStats(bShow) end
---@param Show boolean
function ASimPlayerController:ClientSetShowHP(Show) end
---@param RailVehicle ARailVehicle
---@param RepTrainMovement FRepTrainMovement
function ASimPlayerController:ClientSetRepTrainMovement(RailVehicle, RepTrainMovement) end
---@param ItemCodeName FName
function ASimPlayerController:ClientSetItemAsStackableCheat(ItemCodeName) end
---@param bIsFastBuild boolean
function ASimPlayerController:ClientSetFastBuild(bIsFastBuild) end
---@param NewCameraRotateSpeed float
---@param NewCameraZoom float
---@param bInAreCharacterStencilsEnabled boolean
function ASimPlayerController:ClientSetCinematicCamera(NewCameraRotateSpeed, NewCameraZoom, bInAreCharacterStencilsEnabled) end
---@param Flags int32
function ASimPlayerController:ClientSetCameraFlags(Flags) end
---@param SecsToRestart float
function ASimPlayerController:ClientSendAutoRestartMessage(SecsToRestart) end
---@param PlayerName FString
---@param RestrictedState ERestrictedState
---@param DurationMinutes int32
function ASimPlayerController:ClientRestrictedMessage(PlayerName, RestrictedState, DurationMinutes) end
---@param Category uint8
function ASimPlayerController:ClientRespawnAtAssignedPoint(Category) end
function ASimPlayerController:ClientRespawnAlert() end
---@param SecondsUntilResistanceEnd int32
---@param Duration int32
function ASimPlayerController:ClientResistanceStartingAlert(SecondsUntilResistanceEnd, Duration) end
---@param TargetStructure AStructure
function ASimPlayerController:ClientResetStructureClaimStatus(TargetStructure) end
---@param Response ETransactionResponse
function ASimPlayerController:ClientResetRetrieveState(Response) end
---@param Response ERefinementOrderResponse
function ASimPlayerController:ClientRefinementOrderResponse(Response) end
function ASimPlayerController:ClientReconnectToVoiceChat() end
---@param TravelInfo FRegionConnectionInfo
---@param TargetMapID EWorldConquestMapId
---@param TravelPoint FSpawnPoint
---@param Success boolean
---@param bIsRecovery boolean
function ASimPlayerController:ClientReceiveTravelInfo(TravelInfo, TargetMapID, TravelPoint, Success, bIsRecovery) end
---@param Response ETransactionResponse
function ASimPlayerController:ClientReceiveTransactionResponse(Response) end
---@param TechResponse uint8
function ASimPlayerController:ClientReceiveTechResponse(TechResponse) end
---@param GenericStockpileComponent UGenericStockpileComponent
---@param CategoryType EStockpileCategoryType
---@param Events TArray<FStockpileAccessEvent>
function ASimPlayerController:ClientReceiveStockpileAccessEvents(GenericStockpileComponent, CategoryType, Events) end
---@param LaunchUpdateAlert FRPCRocketPreLaunchUpdateAlert
function ASimPlayerController:ClientReceiveRocketUpdateAlert(LaunchUpdateAlert) end
---@param LaunchAlert FRPCRocketPreLaunchAlert
function ASimPlayerController:ClientReceiveRocketAlert(LaunchAlert) end
---@param MapId EWorldConquestMapId
---@param RegionMinimalData FRegionMinimalData
function ASimPlayerController:ClientReceiveRegionMinimalData(MapId, RegionMinimalData) end
---@param OnlineID FString
function ASimPlayerController:ClientReceiveOnlineIDInfo(OnlineID) end
---@param Structure AStructure
---@param NetworkStatus FTechTreeComponentNetworkStatus
function ASimPlayerController:ClientReceiveNetworkTechStatus(Structure, NetworkStatus) end
---@param MapPostID int32
---@param MapPostDetails FMapPostDetails
function ASimPlayerController:ClientReceiveMapPostDetails(MapPostID, MapPostDetails) end
---@param MapId EWorldConquestMapId
---@param Index uint32
---@param SerialNumber int32
---@param MapItemDetails FMapItemDetails
function ASimPlayerController:ClientReceiveMapItemDetails(MapId, Index, SerialNumber, MapItemDetails) end
---@param InListeningAreaDetails TArray<FListeningAreaDebugData>
function ASimPlayerController:ClientReceiveListeningAreaDetails(InListeningAreaDetails) end
function ASimPlayerController:ClientReceiveInfo() end
---@param MapPostID int32
function ASimPlayerController:ClientReceiveEmptyMapPostDetails(MapPostID) end
---@param MapId EWorldConquestMapId
---@param Index uint32
---@param SerialNumber int32
function ASimPlayerController:ClientReceiveEmptyMapItemDetails(MapId, Index, SerialNumber) end
---@param PromptType EMainMenuPromptType
function ASimPlayerController:ClientQueueMainMenuPrompt(PromptType) end
---@param ID int32
---@param Data TArray<uint8>
function ASimPlayerController:ClientProcessCommand(ID, Data) end
---@param SimVehicle ASimVehicle
---@param OpenVehicleInventoryResponse EOpenVehicleInventoryResponse
function ASimPlayerController:ClientOpenVehicleResponse(SimVehicle, OpenVehicleInventoryResponse) end
function ASimPlayerController:ClientOnVehicleMountError() end
function ASimPlayerController:ClientOnVehicleExitFailure() end
function ASimPlayerController:ClientOnVacateSuccess() end
---@param UseComponent UUseComponent
function ASimPlayerController:ClientOnUseComponentUsed(UseComponent) end
---@param ShippableStatus uint8
function ASimPlayerController:ClientOnShippableResponse(ShippableStatus) end
function ASimPlayerController:ClientOnServerTravelAllowed() end
---@param Location FVector_NetQuantize
function ASimPlayerController:ClientOnRocketGroundZeroEvent(Location) end
---@param bIsRegionTravelling boolean
function ASimPlayerController:ClientOnProfileDownloadComplete(bIsRegionTravelling) end
function ASimPlayerController:ClientOnOutgoingSensorPing() end
function ASimPlayerController:ClientOnOccupySuccess() end
function ASimPlayerController:ClientOnOccupyError() end
---@param LongRangeArtillery AActor
---@param Location FVector_NetQuantize
---@param LongRangeArtilleryType ELongRangeArtilleryType
function ASimPlayerController:ClientOnLongRangeArtilleryFireShellEvent(LongRangeArtillery, Location, LongRangeArtilleryType) end
---@param IntelCenter AActor
---@param Location FVector_NetQuantize
function ASimPlayerController:ClientOnIntelCenterFireListeningAreaEvent(IntelCenter, Location) end
---@param SensorPingResponse FSensorPingResponse
function ASimPlayerController:ClientOnIncomingSensorPing(SensorPingResponse) end
---@param ChannelType EVoiceChannelType
---@param ChannelName FString
---@param ChannelJoinToken FString
function ASimPlayerController:ClientOnChannelJoinTokenReceived(ChannelType, ChannelName, ChannelJoinToken) end
---@param PlayerName FString
---@param OnlineID FString
function ASimPlayerController:ClientNotifyCommend(PlayerName, OnlineID) end
function ASimPlayerController:ClientModDestroySignPost() end
---@param ResponseType EJoinWarResponse
---@param GameplayParams FGameplayParams
---@param bHadTravelReservation boolean
---@param StructureLayers uint32
---@param ShardId int32
---@param SignedPlayerServerData FSignedPayload
function ASimPlayerController:ClientJoinWarResponse(ResponseType, GameplayParams, bHadTravelReservation, StructureLayers, ShardId, SignedPlayerServerData) end
---@param SimScreen ESimScreen
function ASimPlayerController:ClientGotoScreen(SimScreen) end
---@param SquadName FString
function ASimPlayerController:ClientGetSquadIdFromSquadName(SquadName) end
---@param ImageWidth float
---@param MapPositionOffset FVector2D
function ASimPlayerController:ClientGenerateWarStartImage(ImageWidth, MapPositionOffset) end
---@param Response EFullRepairResponse
function ASimPlayerController:ClientFullRepairResponse(Response) end
---@param PlayerName FString
function ASimPlayerController:ClientFriendlyFireMessage(PlayerName) end
---@param TeamId EFactionId
---@param FactionLockTimespan FTimespan
function ASimPlayerController:ClientFactionLockAlert(TeamId, FactionLockTimespan) end
function ASimPlayerController:ClientExitRecoveryMode() end
---@param Duration float
function ASimPlayerController:ClientEnterRecoveryMode(Duration) end
---@param StructureCodeName FName
function ASimPlayerController:ClientEnterBuildGhostMode(StructureCodeName) end
---@param SimVehicle ASimVehicle
---@param Position FVector
---@param Extents FVector
---@param Rotation FQuat
---@param CollisionResponseToPawn ECollisionResponse
function ASimPlayerController:ClientDrawDebugVehicleHitbox(SimVehicle, Position, Extents, Rotation, CollisionResponseToPawn) end
---@param PlayerName FString
---@param CodeName FName
---@param WarGridCoordinate FWarGridCoordinate
function ASimPlayerController:ClientDisruptivePlacementMessage(PlayerName, CodeName, WarGridCoordinate) end
---@param Text FText
function ASimPlayerController:ClientCreateDebugMapPost(Text) end
---@param String FString
function ASimPlayerController:ClientCopyToClipboard(String) end
---@param ObjectName FName
function ASimPlayerController:ClientConfirmAdminDestroy(ObjectName) end
function ASimPlayerController:ClientClearSquadList() end
function ASimPlayerController:ClientClearAdminAlertMessages() end
---@param Amount int32
---@param bIsRefresh boolean
function ASimPlayerController:ClientClaimStructureMulti(Amount, bIsRefresh) end
---@param Channel EChatChannel
---@param SenderPlayerState APlayerState
---@param SenderRegimentTag FString
---@param MsgString FString
---@param BroadcastLanguage EChatLanguage
---@param ReportingWhisperToSelf boolean
---@param bIsEnabled boolean
function ASimPlayerController:ClientChatMessageWithTag(Channel, SenderPlayerState, SenderRegimentTag, MsgString, BroadcastLanguage, ReportingWhisperToSelf, bIsEnabled) end
---@param Channel EChatChannel
---@param SenderPlayerState APlayerState
---@param MsgString FString
---@param BroadcastLanguage EChatLanguage
---@param ReportingWhisperToSelf boolean
---@param bIsEnabled boolean
function ASimPlayerController:ClientChatMessage(Channel, SenderPlayerState, MsgString, BroadcastLanguage, ReportingWhisperToSelf, bIsEnabled) end
---@param RegionConnectionInfo FRegionConnectionInfo
---@param MapCodename FString
---@param NumBeacons uint32
---@param Interval uint32
---@param Duration uint32
function ASimPlayerController:ClientBeaconLoadTest(RegionConnectionInfo, MapCodename, NumBeacons, Interval, Duration) end
---@param bAllowHammerToBuildAll boolean
function ASimPlayerController:ClientAllowHammerToBuildAll(bAllowHammerToBuildAll) end
---@param AlertInfo FAlertWarOpsMessageRPCInfo
function ASimPlayerController:ClientAlertWarOpsMessage(AlertInfo) end
---@param AlertInfo FAlertTownUnderAttackRPCInfo
function ASimPlayerController:ClientAlertTownUnderAttack(AlertInfo) end
---@param AlertInfo FAlertTownDestroyedRPCInfo
function ASimPlayerController:ClientAlertTownDestroyed(AlertInfo) end
---@param AlertInfo FAlertTownBuiltRPCInfo
function ASimPlayerController:ClientAlertTownBuilt(AlertInfo) end
function ASimPlayerController:ClientAlertTeamKill() end
---@param MsgString FString
---@param DurationSecs float
function ASimPlayerController:ClientAlertMessage(MsgString, DurationSecs) end
function ASimPlayerController:ClientAlertAFKTimeoutPending() end
---@param Message FString
function ASimPlayerController:ClientAdminMessageUnformatted(Message) end
---@param MessageList TArray<FString>
function ASimPlayerController:ClientAdminMessageList(MessageList) end
---@param S FString
function ASimPlayerController:ClientAdminMessage(S) end
---@param ClientConfigTypeName FName
function ASimPlayerController:ClientAdminDownloadClientConfig(ClientConfigTypeName) end
---@param MsgString FString
---@param DurationSecs float
function ASimPlayerController:ClientAdminAlertMessage(MsgString, DurationSecs) end
---@param Damage float
---@param Range float
function ASimPlayerController:Client_ShowTargetingRangeResults(Damage, Range) end
---@param NotificationText FText
---@param Duration float
function ASimPlayerController:Client_ShowHUDNotificationDuration(NotificationText, Duration) end
---@param NotificationText FText
function ASimPlayerController:Client_ShowHUDNotification(NotificationText) end
---@param NotificationText FText
function ASimPlayerController:Client_ShowCommendNotification(NotificationText) end
function ASimPlayerController:CaptureDebugScreenshot() end


---@class ASimPlayerState : AWarPlayerState
---@field TeamId int8
---@field Level int8
---@field Rank int8
---@field XP int32
---@field CP int16
---@field CPToGive int8
---@field SquadLeaderDirection uint8
---@field TimeOfLastVoteKick int64
---@field DailyVoteKickCount uint16
---@field RestrictedState ERestrictedState
---@field SquadId int32
---@field InactiveSquadIds int32
---@field RegimentID int32
local ASimPlayerState = {}

---@param PreviousSquadId int32
function ASimPlayerState:OnRep_SquadId(PreviousSquadId) end
function ASimPlayerState:OnRep_RestrictedState() end
function ASimPlayerState:OnRep_RegimentId() end
function ASimPlayerState:OnRep_InactiveSquadIds() end
---@param bIsGodMode boolean
function ASimPlayerState:ClientSetIsGodMode(bIsGodMode) end


---@class ASimVehicle : AWarCharacter
---@field BuildOffset FVector
---@field BuildRotation FRotator
---@field RearTraceMaterial TWeakObjectPtr<UPhysicalMaterial>
---@field FrontTraceMaterial TWeakObjectPtr<UPhysicalMaterial>
---@field FrontTraceActor TWeakObjectPtr<AActor>
---@field RearTraceActor TWeakObjectPtr<AActor>
---@field bInterpolatePitch boolean
---@field DisplayName FText
---@field ChassisName FText
---@field Description FText
---@field Icon UTexture
---@field TechID ETechID
---@field ShippableInfo FShippableInfo
---@field BuildSiteClass TSubclassOf<AVehicleBuildSite>
---@field VehicleBuildType EVehicleBuildType
---@field FactionVariant EFactionId
---@field CodeName FName
---@field VehicleProfileType EVehicleProfileType
---@field VehicleMovementProfileType EVehicleMovementProfileType
---@field ArmourType EArmourType
---@field bCanDriveOverTrenches boolean
---@field DepthOffset float
---@field GlobalVehicleID FGlobalVehicleID
---@field ActorLog FActorLog
---@field MinShipRammingVelocityChangeForDestruction float
---@field bIgnoreNonRootComponentsDuringVehicleMovement boolean
---@field bCanCarryVehicles boolean
---@field ArmourDirectionBoneNamesList TArray<FArmourDirectionBoneNamesList>
---@field Health int32
---@field TankArmour int32
---@field Subsystems uint8
---@field ActiveModularMounts uint8
---@field FuelTank FFuelTank
---@field bAllowAnySeatSwitches boolean
---@field bCanUseStructures boolean
---@field bIsStockpilable boolean
---@field bIsReserveStockpiled boolean
---@field bIsUsableFromVehicle boolean
---@field bCanBeDemolished boolean
---@field bCanBeDisabled boolean
---@field bAllowItemDrop boolean
---@field bRestrictMovementFromItems boolean
---@field bIsVehicleOn boolean
---@field bIsVehicleLocked boolean
---@field bIsCommanderHatchOpen boolean
---@field bIsReservable boolean
---@field bIsShipCargo boolean
---@field bAllowsDirectPackaging boolean
---@field TeamId uint8
---@field DepthCuttoffForSwimDamage float
---@field SquadLockDuration int32
---@field CommanderIndex int32
---@field MaxPlatformPlayers int32
---@field DestroyedMesh UStaticMeshComponent
---@field MinorDamagePS UParticleSystemComponent
---@field MajorDamagePS UParticleSystemComponent
---@field DestroyedFX UParticleSystem
---@field DisabledTurretFX UParticleSystemComponent
---@field DisabledTurret2FX UParticleSystemComponent
---@field DisabledTurret3FX UParticleSystemComponent
---@field DisabledTurret4FX UParticleSystemComponent
---@field DisabledTurret5FX UParticleSystemComponent
---@field PenetrateFX UParticleSystem
---@field PenetrateSoundCue USoundCue
---@field PenetrateSmallFX UParticleSystem
---@field PenetrateSmallSoundCue USoundCue
---@field DeflectFX UParticleSystem
---@field DeflectSoundCue USoundCue
---@field DestroyedSoundCue USoundCue
---@field BreakdownSoundCue USoundCue
---@field BoostSoundCue USoundCue
---@field CharatcerHitSound USoundCue
---@field EnvironmentHitSound USoundCue
---@field FrozenEnterSound USoundCue
---@field DriveLoop UAudioComponent
---@field BackUpSFXLoop UAudioComponent
---@field LockSound USoundCue
---@field Horn FHornData
---@field VehicleMapIntelligenceProvider FVehicleMapIntelligenceProvider
---@field CameraRigComponent UPlayerCameraRigComponent
---@field FrontAxleCastLocation USceneComponent
---@field RearAxleCastLocation USceneComponent
---@field FrontLeftRollCastLocation USceneComponent
---@field FrontRightRollCastLocation USceneComponent
---@field LeftSideTrackLocation USceneComponent
---@field RightSideTrackLocation USceneComponent
---@field BoxCollision UBoxComponent
---@field PassengerArea UBoxComponent
---@field AFKTimeoutComponent UAFKTimeoutComponent
---@field ItemHolder UItemHolderComponent
---@field ItemHolderItems TArray<FItemInstance>
---@field TreadInfo TArray<FTreadActorInfo>
---@field DefaultTreadTime float
---@field Treads FTreadData
---@field LinearSpeedToTurnSpeedMapCurve UCurveFloat
---@field LinearSpeedToWaterTurnSpeedMapCurve UCurveFloat
---@field BoostSpeedModifier float
---@field BoostGasUsageModifier float
---@field MuzzleInfo TArray<FMuzzleInfo>
---@field SpoolingHandler FSpoolingHandler
---@field MapIconType EMapIconType
---@field bCanMoveUnderBridges boolean
---@field bUsesTraces boolean
---@field ServerAnimTickMode EServerAnimTickMode
---@field CoalitionId int32
---@field Tier ETechTreeTier
---@field bIncludeInRecoverySaves boolean
---@field OriginatorBuildSiteName FName
---@field bDoPenetratingShotsReduceTankArmour boolean
---@field SeatComponents TArray<UVehicleSeatComponent>
---@field ModularSeatComponents TArray<USeatComponent>
---@field StockpileComponents TArray<UGenericStockpileComponent>
---@field LockingPlayerId FString
---@field TimeOfLastUseCoalition FDateTime
---@field BuilderPlayerOnlineID FString
---@field VehiclesPerCrateBonusQuantity int32
---@field LastSavedTime FDateTime
---@field bSupportsFastAttachedMove boolean
---@field PackagedMesh UStaticMesh
---@field ViewabilityRadiusExtension float
---@field FloodableComponent UFloodableComponent
---@field CarriedVehicles TArray<ASimVehicle>
---@field CarriedVehicleNames TArray<FName>
---@field bCargoSealed boolean
---@field TravelBorderSizeOverride float
---@field DeploymentLogic FVehicleDeploymentLogic
---@field bShowOnMapIntel boolean
---@field bCheckPassengerEncumbrance boolean
---@field bIsVisibleOnSonar boolean
---@field bDestroysIceWhenWaterTravelling boolean
---@field FuelTankerInfo FFuelTankerInfo
local ASimVehicle = {}

---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ASimVehicle:VehicleCollisionTouched(OverlappedComp, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param NewSeatIndex int32
function ASimVehicle:ServerSwitchSeats(NewSeatIndex) end
function ASimVehicle:ServerStartBoost() end
---@param PlayerCharacter ASimCharacter
function ASimVehicle:ServerOnMount(PlayerCharacter) end
function ASimVehicle:ServerFire() end
function ASimVehicle:ServerDeployGunner() end
function ASimVehicle:OnRep_Tier() end
function ASimVehicle:OnRep_TeamID() end
function ASimVehicle:OnRep_TankArmour() end
---@param PreviousSubsystems uint8
function ASimVehicle:OnRep_Subsystems(PreviousSubsystems) end
function ASimVehicle:OnRep_ItemHolderItems() end
function ASimVehicle:OnRep_IsVehicleOn() end
function ASimVehicle:OnRep_IsCommanderHatchOpen() end
function ASimVehicle:OnRep_Health() end
function ASimVehicle:OnRep_FuelTankerInfo() end
---@param PreviousFuelTank FFuelTank
function ASimVehicle:OnRep_FuelTank(PreviousFuelTank) end
---@param bPrevCargoSealed boolean
function ASimVehicle:OnRep_CargoSealed(bPrevCargoSealed) end
function ASimVehicle:OnRep_ActiveModularMounts() end
function ASimVehicle:MulticastPlayLockFX() end
---@param SeatIndex int32
function ASimVehicle:MulticastPassengerExited(SeatIndex) end
---@param SeatIndex int32
function ASimVehicle:MulticastPassengerEntered(SeatIndex) end
function ASimVehicle:MulticastOnBoostEntered() end
---@param ImpactLocation FVector
---@param ImpactNormal FVector
---@param TankArmourEffectType ETankArmourEffectType
function ASimVehicle:MulticastApplyPenetrateHit(ImpactLocation, ImpactNormal, TankArmourEffectType) end
---@param bDisableCollisions boolean
function ASimVehicle:MulticastApplyFatalHit(bDisableCollisions) end
---@param ImpactLocation FVector
---@param ImpactNormal FVector
---@param TankArmourEffectType ETankArmourEffectType
function ASimVehicle:MulticastApplyDeflectHit(ImpactLocation, ImpactNormal, TankArmourEffectType) end
---@return float
function ASimVehicle:GetTurnAngle() end
---@return boolean
function ASimVehicle:GetTopHatchOpen() end
---@param CharacterToInterrupt ASimCharacter
function ASimVehicle:ClientEndActivityState(CharacterToInterrupt) end
---@param SuppressAmount float
function ASimVehicle:ClientAddDriverSuppression(SuppressAmount) end
---@param IsOn boolean
function ASimVehicle:BPOnVehicleOn(IsOn) end
function ASimVehicle:AllFire() end


---@class ASimWaterVolume : ASimPainCausingVolume
local ASimWaterVolume = {}


---@class ASimulatedBombardment : AActor
local ASimulatedBombardment = {}


---@class ASkySphere : AActor
local ASkySphere = {}

function ASkySphere:BP_UpdateSunDirection() end


---@class ASmokeGrenadeExplosionEffect : AWarExplosionEffect
---@field ObscuringSphere UObscuringSphereComponent
---@field MinimumVisibilityRadius float
---@field VisibilityRadiusCurve UCurveFloat
local ASmokeGrenadeExplosionEffect = {}



---@class ASoldierItemPickUp : AItemPickup
---@field Torso USkeletalMeshComponent
---@field Legs USkeletalMeshComponent
---@field Head USkeletalMeshComponent
---@field Hands USkeletalMeshComponent
---@field Helmet USkeletalMeshComponent
local ASoldierItemPickUp = {}



---@class ASpecializedFactory : ATeamStructure
---@field SpecializedFactoryComponent USpecializedFactoryComponent
local ASpecializedFactory = {}



---@class ASpecializedFactoryBuildSite : AStructureBuildSite
---@field SpecializedFactoryComponent USpecializedFactoryComponent
local ASpecializedFactoryBuildSite = {}



---@class ASpiderMech : ATankBase
---@field GunnerYaw float
---@field AltGunnerYawAndPitch FVector2D
---@field StashedAmmo int32
---@field AltStashedAmmo int32
local ASpiderMech = {}



---@class ASpoolProjectile : AWarProjectile
---@field FiringAudioComponent UAudioComponent
---@field AccuracyModifiedVelocity FVector
---@field InitialVelocity FVector
---@field SpoolDuration float
---@field LerpStartDistance float
---@field LerpDuration float
local ASpoolProjectile = {}

function ASpoolProjectile:OnRep_InitialVelocity() end


---@class AStaticBase : ATownHall
---@field AITurretsController UAITurretsControllerComponent
---@field DynamicTierInfo FDynamicTierInfo
---@field bIsVictoryTownRep boolean
---@field TownConnectionLevel int32
local AStaticBase = {}

function AStaticBase:OnRep_IsVictoryTown() end


---@class AStaticCrane : ATeamStructure
---@field MainMesh USkeletalMeshComponent
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field ShippableCollision UBoxComponent
---@field ArmMovementSFXLoop UAudioComponent
---@field DeployingSFXLoop UAudioComponent
---@field PulleyMovementSFXLoop UAudioComponent
---@field PowerSocket UBuildSocketComponent
---@field LightComponent UFacilityLightComponent
---@field CraneComponent UCraneComponent
---@field PowerGridInfo FPowerGridInfo
local AStaticCrane = {}

function AStaticCrane:OnRep_PowerGridInfo() end


---@class AStickyBombExplosive : AExplosive
---@field TotalFuseTime float
---@field FuseTime float
local AStickyBombExplosive = {}



---@class AStickyBombProjectile : AWarProjectile
---@field BombMesh USkeletalMeshComponent
---@field AttachCue USoundCue
---@field DetonationDelay float
local AStickyBombProjectile = {}

function AStickyBombProjectile:CallDetonateWithLastHitResult() end


---@class AStorageBox : ABuildableStructure
---@field MeshComponent UStaticMeshComponent
---@field ItemsToReplenish TArray<FItemInstance>
---@field ReplenishRate float
---@field bReplenishFirstItem boolean
---@field bReplenishedOnce boolean
local AStorageBox = {}



---@class AStorageFacility : ATunnelNode
---@field GenericStockpileComponent UGenericStockpileComponent
---@field ReserveStockpileComponent UReserveStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
---@field TransferLocation USceneComponent
---@field AITurretsController UAITurretsControllerComponent
local AStorageFacility = {}



---@class AStorageFacilityBuildSite : AStructureBuildSite
---@field GenericStockpileComponent UGenericStockpileComponent
---@field ReserveStockpileComponent UReserveStockpileComponent
---@field CraneSpawnLocationComponent UCraneSpawnLocationComponent
local AStorageFacilityBuildSite = {}



---@class AStructure : AActor
---@field ConversionCodeNames TArray<FName>
---@field CodeName FName
---@field ChassisName FText
---@field DisplayName FText
---@field ProfileType EStructureProfileType
---@field ArmourType EArmourType
---@field ArrowComponent UArrowComponent
---@field UseAreaBox UBoxComponent
---@field KillVolume UBoxComponent
---@field DestroyedFX UParticleSystem
---@field DestroyedSoundCue USoundCue
---@field ItemHolder UItemHolderComponent
---@field ItemHolderItems TArray<FItemInstance>
---@field ActorLog FActorLog
---@field TechID ETechID
---@field TechComponentIDs TArray<ETechComponentID>
---@field GarrisonComponent UGarrisonComponent
---@field ModularMountsComponent UModularMountsComponent
---@field InfrastructureComponent UInfrastructureComponent
---@field MeshVisibilityComponent UMeshVisibilityComponent
---@field MaxHealth int32
---@field Health int32
---@field DynamicTier EDynamicTier
---@field UpgradeStructureCodeName FName
---@field MapIconType EMapIconType
---@field bIsMapIconVisibleToAll boolean
---@field bIsBuildSiteMapIconVisible boolean
---@field bCanBeDismantled boolean
---@field bOverrideIsBurnable boolean
---@field bIsBurnable boolean
---@field bLogWhenDestroyed boolean
---@field bIsTrackedClimbable boolean
---@field DropLocationOffset FVector
---@field bRotateDropLocation boolean
---@field IsVaultable boolean
---@field ScreenToUse ESimScreen
---@field bIsDeployed boolean
---@field DecayRemainingTime float
---@field MapIntelligenceType EMapIntelligenceType
---@field StructureFlags uint8
---@field bIgnoreFriendlyFire boolean
---@field bAllowsShippablePlacement boolean
---@field ShippablePlacementFilter FName
---@field StructureNetRelevancySize EStructureNetRelevancySize
---@field bIsStockpilable boolean
---@field bIsReserveStockpiled boolean
---@field bProvidesBasedShelter boolean
---@field bIsBuiltNearBorder boolean
---@field bIgnoresRapidDecay boolean
---@field bIsPrototype boolean
---@field bIsPowered boolean
---@field bIsScorchable boolean
---@field bIsScorched boolean
---@field InteractionDistanceOverride float
---@field BuilderPlayerOnlineID FString
---@field BuilderName FString
---@field ClaimStatus FClaimStatus
---@field BuildStepProgress uint8
---@field BuildSteps TArray<FStructureBuildStep>
---@field bHasMeshVisibilityComponent boolean
---@field bIsBlankFortPiece boolean
---@field LandscapeHoleComponents TArray<UBoxComponent>
---@field Island TWeakObjectPtr<AStructureIsland>
---@field MultiplexedStaticMeshComponents TArray<UMultiplexedStaticMeshComponent>
---@field MultiplexedSkeletalMeshComponents TArray<UMultiplexedSkeletalMeshComponent>
---@field StealthComponent UStealthComponent
---@field Rainfall float
---@field QuantizedRainfall uint8
---@field PuddleVisualsMesh UStaticMeshComponent
---@field bReceivesRainfall boolean
---@field StructureFlameCountFactor float
---@field DecaySupplyDrain int32
---@field FireIntensity EFireIntensity
---@field PreMitigationFireDamagePerTick float
---@field BurningHeatArea UTemperatureModifierBoxComponent
---@field WarmingHeatArea UTemperatureModifierBoxComponent
---@field FlameActors TArray<AFlameActor>
---@field bRecentExtinguishingHit boolean
---@field SeatComponents TArray<UStructureSeatComponent>
---@field ModularSeatComponents TArray<USeatComponent>
---@field ParkingSpotComponent UParkingSpotComponent
---@field FirePitComponent UFirePitComponent
local AStructure = {}

---@param UsingPlayer AWarCharacter
function AStructure:Use(UsingPlayer) end
---@param Previous boolean
function AStructure:OnRep_RecentExtinguishingHit(Previous) end
function AStructure:OnRep_QuantizedRainfall() end
function AStructure:OnRep_IsPrototype() end
function AStructure:OnRep_Health() end
---@param Previous EFireIntensity
function AStructure:OnRep_FireIntensity(Previous) end
function AStructure:OnRep_DynamicTier() end
function AStructure:OnRep_BuildStepProgress() end
function AStructure:MulticastOnVehicleDrivingOverDamage() end
---@return boolean
function AStructure:IsCollidingWithDuplicate() end
---@return UTechTreeComponent
function AStructure:GetTechTreeComponent() end
function AStructure:BPOnVehicleDrivingOverDamage() end
---@param OldIntensity int32
---@param NewIntensity int32
function AStructure:BPOnFireIntensityReduced(OldIntensity, NewIntensity) end
---@param OldIntensity int32
---@param NewIntensity int32
function AStructure:BPOnFireIntensityIncreased(OldIntensity, NewIntensity) end


---@class AStructureBuildSite : ABuildSite
---@field StructureBeingBuiltCodeName FName
---@field ModificationSlots TArray<UModificationSlotComponent>
---@field ModificationMask uint32
---@field ModificationSlotMigrations TArray<FModificationSlotMigration>
---@field DisabledSockets TArray<FName>
---@field MigratedModificationMask uint32
---@field ObstructionCheckVolume UBoxComponent
---@field bIsUpgrade boolean
---@field BaseStructureClassToRespawn TSubclassOf<AStructure>
---@field BaseStructureHealth int32
---@field BaseStructureTeamId uint8
---@field LastHeldFactionID EFactionId
---@field bHasSavedRotation boolean
---@field BaseStructureRotation FQuat
---@field DecayStartHours float
---@field DecayDurationHours float
---@field PreviousBuilderOnlineID FString
---@field PreviousBuilderName FString
---@field ConnectorConfiguration FConnectorConfiguration
local AStructureBuildSite = {}

function AStructureBuildSite:OnRep_MigratedModificationMask() end
function AStructureBuildSite:OnRep_IsUpgrade() end


---@class AStructureCrate : AShippableCrate
local AStructureCrate = {}


---@class AStructureIsland : AActor
---@field Structures TArray<AStructure>
---@field StructuralIntegrity float
---@field CachedStructuralIntegrityBonus float
---@field CachedFortConnections uint8
---@field CachedNonFortConnections uint8
---@field CachedUnconnectedSockets uint8
---@field TeamId uint8
---@field SafeHouses TArray<AFortGarrisonStation>
---@field HealthPool float
---@field HealthPoolMax float
---@field FireIntensity EFireIntensity
local AStructureIsland = {}

function AStructureIsland:OnRep_Structures() end


---@class AStructureProfileList : AInfo
---@field StructureProfileMap TMap<EStructureProfileType, FStructureProfileData>
local AStructureProfileList = {}



---@class ASubmarineAudioVolume : AAudioVolume
---@field AssociatedSubmarine ASubmarineVehicle
local ASubmarineAudioVolume = {}



---@class ASubmarineVehicle : ALargeShip
---@field MaxDepthForMapIntel float
---@field MinDepthForStealth float
---@field MinDepthForAlternateDamageRules float
---@field AlternateDamageRulesCodeNames TArray<FName>
---@field SubmergedViewableDistance float
---@field SubmergedSurfaceAreaPct float
---@field SubmergedViewRadiusCurve UCurveFloat
---@field SubmarineVisibilityToggleComponent USubmarineVisibilityToggleComponent
---@field SeaFloorMesh UStaticMeshComponent
---@field LadderComponents TArray<ULadderComponent>
---@field Ballasts TArray<FBallastInfo>
---@field SavedBallasts TArray<FSavedBallastInfo>
---@field HatchState FDynamicState
---@field MaxElectricity float
---@field SubmergedElectricityPerSecond float
---@field ElectricityRechargePerSecond float
---@field ZeroElectricityEngineThrustMultiplier float
---@field Electricity float
---@field ReplicatedElectricity uint8
---@field TorpedoRangeIndex uint8
---@field TorpedoTubeSeats TMap<int32, int32>
---@field TorpedoStaticMesh UStaticMesh
---@field MinDamageDepth float
---@field MaxDamageDepth float
---@field MinCrushDamageInterval float
---@field MaxCrushDamageInterval float
---@field CrushDamageIntervalVariance float
---@field CrushDamage float
---@field CrushSoundCue USoundCue
---@field TorpedoTubeStates EDynamicState
---@field LeftTorpedoMesh UStaticMeshComponent
---@field RightTorpedoMesh UStaticMeshComponent
---@field VeryMajorDamageUnderWaterPS UParticleSystemComponent
---@field MajorDamageUnderWaterPS UParticleSystemComponent
---@field MediumDamageUnderWaterPS UParticleSystemComponent
---@field MinorDamageUnderWaterPS UParticleSystemComponent
---@field VeryMinorDamageUnderWaterPS UParticleSystemComponent
---@field UnderWaterDamagePSDepth float
---@field ActiveTorpedoes TArray<ATorpedoProjectile>
local ASubmarineVehicle = {}

function ASubmarineVehicle:ShowDamageDepthWarning() end
function ASubmarineVehicle:OnRep_TorpedoTubeStates() end
---@param PrevReplicatedElectricity uint8
function ASubmarineVehicle:OnRep_ReplicatedElectricity(PrevReplicatedElectricity) end
---@param PrevBallastsInfo TArray<FBallastInfo>
function ASubmarineVehicle:OnRep_Ballasts(PrevBallastsInfo) end
---@param Location FVector
function ASubmarineVehicle:MulticastPlayCrushFX(Location) end
function ASubmarineVehicle:CheckDamageDepthWarning() end


---@class ATankAmmoPickup : AExplosiveAmmoPickup
local ATankAmmoPickup = {}


---@class ATankBase : ARWDSimVehicle
---@field DisabledFuelTankFX UParticleSystemComponent
---@field FuelSpillDecal TSubclassOf<ADecalActor>
local ATankBase = {}



---@class ATargetingRange : AActor
local ATargetingRange = {}


---@class ATargetingWall : AActor
---@field DamageEvents TArray<FPointDamageEvent>
---@field ResetTrigger UStaticMeshComponent
local ATargetingWall = {}

function ATargetingWall:OnRep_DamageEvents() end


---@class ATeamStructure : ABuildableStructure
---@field TeamId uint8
---@field bAllowUseByEnemy boolean
---@field bCanBeFlaggedForDisruptivePlacement boolean
---@field bCanBlockAIUpgrade boolean
---@field DisruptivePlacementVoteMultiplier float
local ATeamStructure = {}

function ATeamStructure:OnRep_TeamIdNotify() end
---@param VisualTeamId int32
function ATeamStructure:BPSetTeamVisuals(VisualTeamId) end


---@class ATechTree : AInfo
---@field ItemInfo TMap<ETechID, FTechTreeItemInfo>
---@field Categories FTechTreeCategories
---@field TechUnlockBits TArray<uint32>
---@field TechUnlockProgress TArray<float>
local ATechTree = {}

---@param PreviousTechUnlockBits TArray<uint32>
function ATechTree:OnRep_TechUnlockBits(PreviousTechUnlockBits) end


---@class ATemplate : AActor
local ATemplate = {}


---@class ATimedProjectile : AWarProjectile
---@field FuseTimer float
local ATimedProjectile = {}



---@class ATorpedoProjectile : AWarProjectile
---@field WaterSurfaceDirectHitExplosionTemplate TSubclassOf<AWarExplosionEffect>
---@field LaunchSoundCue USoundCue
---@field Target FVector
---@field SiblingProjectiles TArray<ATorpedoProjectile>
---@field WaterSurfacePS UParticleSystemComponent
---@field WaterSurfaceVFXVisibilityDepth float
---@field WaterSurfaceVFXOffset float
---@field ImpactInducedVelocity float
---@field ConeStartRadius float
---@field ConeEndRadius float
---@field ConeLength float
local ATorpedoProjectile = {}

function ATorpedoProjectile:OnRep_SiblingProjectiles() end


---@class ATownBase : AStaticBase
local ATownBase = {}


---@class ATownBaseBuildSite : ATownHallBuildSite
local ATownBaseBuildSite = {}


---@class ATownHall : ABase
---@field bIsFort boolean
---@field MapIntelligenceSourceComponent UMapIntelligenceSourceComponent
local ATownHall = {}



---@class ATownHallBuildSite : ABaseBuildSite
local ATownHallBuildSite = {}


---@class ATractor : ARWDSimVehicle
local ATractor = {}


---@class ATrailerVehicle : ARWDSimVehicle
---@field UseAreaBox UBoxComponent
local ATrailerVehicle = {}



---@class ATrailerVehicleStockpile : ATrailerVehicle
---@field GenericStockpileComponent UGenericStockpileComponent
local ATrailerVehicleStockpile = {}



---@class ATransportTruck : ARWDSimVehicle
---@field GunnerYawAndPitch FVector2D
---@field StashedAmmo int32
---@field StashedAmmoType FName
---@field PayloadMeshes FPayloadMeshes
local ATransportTruck = {}

function ATransportTruck:OnRep_StashedAmmo() end
function ATransportTruck:OnRep_GunnerYawAndPitch() end


---@class ATravelBlockingArea : AActor
---@field TravelBlockingComponent UBoxComponent
---@field bBlockOutgoing boolean
local ATravelBlockingArea = {}



---@class ATripodMountedStructure : ADeployedStructure
---@field TripodMesh USkeletalMeshComponent
---@field GunMesh USkeletalMeshComponent
---@field ItemCodeName FName
---@field BaseItemCodeName FName
local ATripodMountedStructure = {}



---@class ATunnelNode : ATeamStructure
---@field ObstructionCheckOverrideExtents FVector
---@field VisibilityTraceOffsetZ float
---@field bAggroSingleStructureOnDamage boolean
---@field TunnelNodeType ETunnelNodeType
---@field bCanBeHidden boolean
---@field TunnelConnectionState ETunnelConnectionState
---@field ConnectedTunnelNodes TArray<ATunnelNode>
local ATunnelNode = {}

function ATunnelNode:OnRep_TunnelConnectionState() end
---@param NewTunnelConnectionState ETunnelConnectionState
function ATunnelNode:BPSetTunnelConnectionStateVisuals(NewTunnelConnectionState) end


---@class ATunnelNodeProxy : ATunnelNode
---@field ProxyConnectionRange float
local ATunnelNodeProxy = {}



---@class AUniformPickup : AItemPickup
---@field UniformType EUniformType
local AUniformPickup = {}



---@class AVehicleBuildSite : ABuildSite
---@field OriginatorVehicleName FName
---@field SquadId int32
---@field GlobalVehicleID FGlobalVehicleID
---@field VehicleLog FActorLog
---@field BuildOffset FVector
---@field BuildRotation FRotator
---@field VehicleCodeName FName
local AVehicleBuildSite = {}



---@class AVehicleCrate : AShippableCrate
local AVehicleCrate = {}


---@class AVehicleFactory : AConstructionSite
local AVehicleFactory = {}


---@class AVehicleFactoryBuildSite : AConstructionSiteBuildSite
local AVehicleFactoryBuildSite = {}


---@class AVehicleMovementProfileList : AInfo
---@field VehicleMovementProfileMap TMap<EVehicleMovementProfileType, FVehicleMovementProfileData>
local AVehicleMovementProfileList = {}



---@class AVehicleProfileList : AInfo
---@field VehicleProfileMap TMap<EVehicleProfileType, FVehicleProfileData>
local AVehicleProfileList = {}



---@class AVehiclesRenderInfo : AInfo
---@field PhysicalMaterialResolver FPhysicalMaterialResolver
local AVehiclesRenderInfo = {}



---@class AWall : ABuildableStructure
---@field bAllowStanding boolean
---@field UpgradeRequiresConnectedWalls boolean
local AWall = {}



---@class AWallBuildSite : AStructureBuildSite
local AWallBuildSite = {}


---@class AWarBaseHUD : AHUD
local AWarBaseHUD = {}


---@class AWarBeaconClient : AOnlineBeaconClient
local AWarBeaconClient = {}

function AWarBeaconClient:ServerRequestQueueStatusUpdate() end
function AWarBeaconClient:ServerLeaveQueue() end
---@param JoinRequestData FWarBeaconJoinRequestData
function AWarBeaconClient:ServerJoinQueue(JoinRequestData) end
---@param NumPlayersAhead int32
function AWarBeaconClient:ClientUpdateQueueStatus(NumPlayersAhead) end
---@param IsBanned boolean
---@param BanDurationTicks int64
---@param BanReasonInfo FBanReasonInfo
function AWarBeaconClient:ClientPlayerIsBannedResponse(IsBanned, BanDurationTicks, BanReasonInfo) end
function AWarBeaconClient:ClientOnServerTravelling() end
function AWarBeaconClient:ClientOfflineCharacterExpired() end
---@param TeamId EFactionId
function AWarBeaconClient:ClientJoinServer(TeamId) end
---@param JoinWarResponse EJoinWarResponse
function AWarBeaconClient:ClientJoinQueueResponse(JoinWarResponse) end


---@class AWarBeaconHost : AOnlineBeaconHostObject
local AWarBeaconHost = {}


---@class AWarBenchmarkPlayerController : ASimPlayerController
local AWarBenchmarkPlayerController = {}


---@class AWarCharacter : ACharacter
---@field ViewRadiusDegrees float
---@field Temperature float
---@field ReplicatedTemperature uint8
---@field ReplicatedMuddyness uint8
---@field PlayerFlags uint8
---@field EncumbranceManager FEncumbranceManager
---@field StealthComponent UStealthComponent
---@field Muddyness float
---@field NearbyFlares TArray<TWeakObjectPtr<AFlareExplosionEffect>>
local AWarCharacter = {}

---@param Structure AStructure
function AWarCharacter:ServerUseStructure(Structure) end
function AWarCharacter:ServerUnstuck() end
---@param PreviousTemperature uint8
function AWarCharacter:OnRep_Temperature(PreviousTemperature) end
---@param PreviousMuddyness uint8
function AWarCharacter:OnRep_Muddyness(PreviousMuddyness) end
---@param FactionId EFactionId
---@param CalloutInfoIndex int8
---@param Location FVector_NetQuantize
function AWarCharacter:MulticastPlaceCalloutMarker(FactionId, CalloutInfoIndex, Location) end
---@param FactionId EFactionId
---@param CalloutInfoIndex int8
function AWarCharacter:MulticastPerformCallOut(FactionId, CalloutInfoIndex) end
---@param TargetPawn APawn
---@return boolean
function AWarCharacter:IsPawnVisible(TargetPawn) end


---@class AWarExplosionEffect : AActor
---@field ParticleSystemOverrides TArray<FExplosionMaterialOverride>
---@field RadialHitImpact TSubclassOf<AImpactEffect>
---@field ImpactEffectDamage float
---@field ExplosionLightFadeOut float
---@field ExplosionSound USoundCue
---@field CameraShake TSubclassOf<UCameraShake>
---@field CameraShakeOuterRadius float
---@field bDoNotOrientToImpactNormal boolean
---@field bOrientToDirectionOfTravel boolean
---@field bManualDestruction boolean
---@field bDestroyWhenParticleSystemCompletes boolean
---@field bParentToImpactSurface boolean
---@field ManualDeactivateTime float
---@field bFadeSoundOnDeactivate boolean
---@field SoundFadeDuration float
---@field PainVolume TSubclassOf<AWarPainVolume>
---@field PainVolumeDelay float
---@field bIsDelayed boolean
---@field bHasPersistentEffect boolean
---@field TankArmourEffectBehaviour ETankArmourEffectBehaviour
---@field bHasManuallyDeactivated boolean
---@field SpawnedExplosionSound UAudioComponent
---@field DetonationDelay float
---@field TelegraphDelay float
---@field ExplosionLight UPointLightComponent
---@field SurfaceHit FHitResult
---@field ServerDetonationTime float
---@field ProjectileImpactVelocity FVector
---@field ExplosionParticleSystem UParticleSystemComponent
local AWarExplosionEffect = {}

---@param PSystem UParticleSystemComponent
function AWarExplosionEffect:OnParticleSystemFinished(PSystem) end
---@param TimeUntilDetonation float
function AWarExplosionEffect:MulticastTelegraph(TimeUntilDetonation) end
function AWarExplosionEffect:MulticastDetonate() end
---@return float
function AWarExplosionEffect:GetTimeSinceDetonation() end
---@param ImpactVelocity FVector
---@param TimeUntilDetonation float
function AWarExplosionEffect:BPTelegraphProjectile(ImpactVelocity, TimeUntilDetonation) end
function AWarExplosionEffect:BPTelegraph() end
function AWarExplosionEffect:BPDetonate() end


---@class AWarGameMode : AGameMode
local AWarGameMode = {}


---@class AWarGameSession : AGameSession
local AWarGameSession = {}


---@class AWarGameState : AGameState
local AWarGameState = {}


---@class AWarHUD : AWarBaseHUD
---@field HudMode EHUDMode
---@field LevelPostVolume APostProcessVolume
---@field LocalMapImage UTexture2D
---@field OtherPlayerNamesFont UFont
---@field WarTimerFont UFont
---@field ReticleFont UFont
---@field MapGridFont UFont
local AWarHUD = {}



---@class AWarPainVolume : AActor
---@field Damage float
---@field Radius float
---@field DamageType TSubclassOf<UDamageType>
local AWarPainVolume = {}



---@class AWarPlayerController : APlayerController
---@field bTravelRequestIsPending boolean
---@field bTravelRequestWasSuccessful boolean
---@field bTravelReservationIsPending boolean
---@field bTravelReservationIsComplete boolean
---@field bQueuedViaBorderTravel boolean
---@field bAllowedToContinueTravelling boolean
---@field WarBeaconClient AWarBeaconClient
local AWarPlayerController = {}

function AWarPlayerController:ServerInitiateTravel() end
function AWarPlayerController:ServerClientTravelLoadComplete() end
function AWarPlayerController:SelectWarDrawDebugWorld() end
---@param TravelId uint64
---@param RegionConnectionInfo FRegionConnectionInfo
---@param Delay float
function AWarPlayerController:ClientTravelSuccess(TravelId, RegionConnectionInfo, Delay) end
---@param NumPlayersConnected uint32
---@param NumPlayersTotal uint32
---@param AdditionalDelay float
function AWarPlayerController:ClientTravelProgress(NumPlayersConnected, NumPlayersTotal, AdditionalDelay) end
---@param PendingTravelId int32
---@param DestinationMapId EWorldConquestMapId
function AWarPlayerController:ClientTravelPending(PendingTravelId, DestinationMapId) end
---@param Result ETravelResult
---@param PartySize int32
function AWarPlayerController:ClientTravelFailure(Result, PartySize) end
---@param TravelId uint64
---@param InvulnerabilityDuration float
function AWarPlayerController:ClientTravelComplete(TravelId, InvulnerabilityDuration) end
---@param ReservationLocation FTransform
function AWarPlayerController:ClientTravelArrived(ReservationLocation) end
---@param DestinationMapId EWorldConquestMapId
---@param RegionConnectionInfo FRegionConnectionInfo
function AWarPlayerController:ClientQueueForTravel(DestinationMapId, RegionConnectionInfo) end


---@class AWarPlayerStart : APlayerStart
---@field PlayerStartOwner AActor
local AWarPlayerStart = {}



---@class AWarPlayerState : APlayerState
local AWarPlayerState = {}


---@class AWarProjectile : AActor
---@field MovementComp UProjectileMovementComponent
---@field CollisionComp USphereComponent
---@field ParticleComp UParticleSystemComponent
---@field LoopingAudio UAudioComponent
---@field SkeletalMesh USkeletalMesh
---@field ExplosionTemplate TSubclassOf<AWarExplosionEffect>
---@field MyController TWeakObjectPtr<AController>
---@field ExplosiveCodeName FName
---@field ProjectileLife float
---@field AutoDetonateTime float
---@field ProjectileDeathDelay float
---@field ExplosionImpactBumpDistance float
---@field PenetrationBonusMaxRange float
---@field bUseAccurateHitReplication boolean
---@field bProjectImpactDownward boolean
---@field bHideMeshOnExplode boolean
---@field bSpawnExplosionOnServer boolean
---@field bImpactsWater boolean
---@field bDebugDraw boolean
---@field bExploded boolean
---@field RotationSpeed FRotator
---@field bRotationRequiresVelocity boolean
---@field RotationVelocityRequirement float
---@field UnderWaterExplosionTemplate TSubclassOf<AWarExplosionEffect>
---@field WaterSurfaceExplosionTemplate TSubclassOf<AWarExplosionEffect>
local AWarProjectile = {}

---@param Target AActor
function AWarProjectile:SetHomingTarget(Target) end
function AWarProjectile:OnRep_Exploded() end
---@param HitResult FHitResult
function AWarProjectile:OnProjectileStop(HitResult) end
---@param NewVolume APhysicsVolume
function AWarProjectile:OnPhysicsVolumeChanged(NewVolume) end
---@param HitResult FProjectileHitInfo_NetQuantize
function AWarProjectile:OnExploded(HitResult) end
---@param Impact FProjectileHitInfo_NetQuantize
function AWarProjectile:MulticastExplodeAll(Impact) end
---@param HitResult FProjectileHitInfo_NetQuantize
function AWarProjectile:Detonate(HitResult) end
---@param HitResult FProjectileHitInfo_NetQuantize
function AWarProjectile:ApplyExplosiveDamageAndSpawnFx(HitResult) end


---@class AWarReplicationGraphDebugActor : AReplicationGraphDebugActor
local AWarReplicationGraphDebugActor = {}

---@param Delay float
function AWarReplicationGraphDebugActor:ServerViewTargets(Delay) end
---@param MatchString FString
function AWarReplicationGraphDebugActor:ServerActorInfo(MatchString) end
---@param NetViewer FNetViewer
function AWarReplicationGraphDebugActor:ClientViewTargets(NetViewer) end
---@param DebugInfo TArray<FWarReplicationGraphActorDebugInfo>
---@param ViewLocation FVector
function AWarReplicationGraphDebugActor:ClientActorInfo(DebugInfo, ViewLocation) end


---@class AWatchTower : ATeamStructure
---@field MapIntelligenceSourceComponent UMapIntelligenceSourceComponent
---@field TeamFlagMeshComponent UTeamFlagMeshComponent
---@field GunnerYaw float
local AWatchTower = {}



---@class AWaterMeshActor : AStaticMeshActor
local AWaterMeshActor = {}


---@class AWaterMine : AMine
local AWaterMine = {}


---@class AWaterProjectile : AWarProjectile
---@field InstigatorRoom URoomComponent
---@field LastRoom URoomComponent
local AWaterProjectile = {}



---@class AWeaponFireFX : AActor
---@field MovementComp UProjectileMovementComponent
---@field CollisionComp USphereComponent
local AWeaponFireFX = {}

---@param HitResult FHitResult
function AWeaponFireFX:OnProjectileStop(HitResult) end


---@class AWearablePickup : AItemPickup
local AWearablePickup = {}


---@class AWeatherActor : AActor
---@field ArrowComponent UArrowComponent
---@field FreezeBoxComponent UBoxComponent
---@field WeatherType EWeatherType
---@field ParameterName FName
---@field ParameterCurve UCurveFloat
---@field TransitionDuration float
local AWeatherActor = {}



---@class AWeatherEffectsActor : AActor
local AWeatherEffectsActor = {}


---@class AWeatherIceActor : AActor
---@field AllIceMeshData TArray<FWeatherIceMeshData>
---@field MeshGridSize int32
---@field MeshSize float
---@field MeshHeight float
---@field MeshHealth uint16
---@field HeightAboveWaterLevel float
---@field MeshSetsAmount int32
---@field AnimationDuration float
---@field DefaultMaterial UMaterialInterface
---@field DamagedMaterial UMaterialInterface
---@field CriticalMaterial UMaterialInterface
---@field DamageStateSFX USoundCue
---@field DamageStateVFX UParticleSystem
---@field DestroyedSFX USoundCue
---@field DestroyedVFX UParticleSystem
---@field States TArray<FWeatherIceState>
---@field ReplicatedStates TArray<uint32>
---@field IceActorDataIndex int16
---@field WeatherIceMapData AWeatherIceMapData
local AWeatherIceActor = {}

---@param PreviousReplicatedStates TArray<uint32>
function AWeatherIceActor:OnRep_ReplicatedStates(PreviousReplicatedStates) end


---@class AWeatherIceMapData : AActor
---@field IceActorClass TSubclassOf<AWeatherIceActor>
---@field AllIceActorData TArray<FWeatherIceActorData>
local AWeatherIceMapData = {}



---@class AWeatherStation : ATeamStructure
---@field Mesh USkeletalMeshComponent
---@field BaseMesh USkeletalMeshComponent
---@field ActiveSFXLoop UWarAudioComponent
---@field RotationSFXLoop UWarAudioComponent
---@field LightComponent UFacilityLightComponent
---@field ActivateSFX USoundCue
---@field DeactivateSFX USoundCue
---@field MaxPower float
---@field RequiredPowerForFiring float
---@field RequiredPowerForRotation float
---@field ActiveDuration float
---@field MaxTargetAngle float
---@field ConnectionDistance float
---@field State EWeatherStationState
---@field NetworkedStations uint8
---@field PredictionOffset int8
---@field RequiredSquadMembers uint8
---@field SquadId int32
---@field Yaw float
---@field GlobalID FWeatherStationID
---@field ConnectionTo FWeatherStationID
---@field CoordConnectionTo FWarGridCoordinate
---@field ConnectionFrom FWeatherStationID
---@field CoordConnectionFrom FWarGridCoordinate
---@field RemainingActiveTime float
local AWeatherStation = {}

---@param PreviousYaw float
function AWeatherStation:OnRep_Yaw(PreviousYaw) end
function AWeatherStation:OnRep_State() end


---@class AWorldProxyActor : AActor
---@field ActorTypes TArray<TSubclassOf<AActor>>
local AWorldProxyActor = {}



---@class AWorldResource : AResource
local AWorldResource = {}


---@class AWoundedCarriedItemPickup : AItemPickup
local AWoundedCarriedItemPickup = {}


---@class FAcceptInviteToRegimentMessage
---@field InviteToAccept FInviteToRegimentMessage
---@field TargetPlayerName FString
local FAcceptInviteToRegimentMessage = {}



---@class FAcceptJoinSquadWarMessage
---@field JoinMessage FJoinSquadWarMessage
local FAcceptJoinSquadWarMessage = {}



---@class FAcceptSquadInviteWarMessage
---@field SquadInviteInfo FSquadInviteInfo
---@field NewMemberName FString
local FAcceptSquadInviteWarMessage = {}



---@class FActionStyle
---@field ButtonStyle FButtonStyle
---@field ToolTipText FText
---@field ToolTipDescription FText
local FActionStyle = {}



---@class FActionsStyle
---@field AllStyles FActionStyle
local FActionsStyle = {}



---@class FActivateSquadWarMessage
---@field SquadId int32
local FActivateSquadWarMessage = {}



---@class FActivityIndicatorStyle
---@field AlphaCurve UCurveFloat
---@field ScaleCurve UCurveFloat
local FActivityIndicatorStyle = {}



---@class FActivityResource
---@field AmountC float
---@field AmountW float
local FActivityResource = {}



---@class FActivityStateChange
---@field LastAckedSequence uint8
---@field Sequence uint8
---@field State ECharacterActivityState
local FActivityStateChange = {}



---@class FActivityStateDebugTrace
---@field Timestamp double
---@field Role ENetRole
---@field Type EActivityStateDebugTraceType
---@field ActivityState ECharacterActivityState
---@field SequenceNumber uint8
local FActivityStateDebugTrace = {}



---@class FActivityStateInfo
---@field ActivityMontage UAnimMontage
---@field IsLooping boolean
---@field bIsReversed boolean
---@field Duration float
---@field SectionName FName
local FActivityStateInfo = {}



---@class FActorLog
---@field Entries TArray<FActorLogEntry>
local FActorLog = {}



---@class FActorLogEntry
---@field OnlineID FString
---@field PlayerName FString
---@field Type EActorLogEntryType
---@field AltType uint16
---@field Value int32
---@field EventTime FDateTime
---@field CodeName FName
local FActorLogEntry = {}



---@class FActorLogPage
---@field EntryList TArray<FActorLogEntry>
local FActorLogPage = {}



---@class FAddGlobalLogEntryRequest
---@field OnlineID FString
---@field PlayerName FString
---@field Type EGlobalLogEntryType
---@field MapId int8
---@field FactionId EFactionId
---@field Value int32
---@field Timestamp int64
local FAddGlobalLogEntryRequest = {}



---@class FAdminCommandHttpResponse
---@field Result FString
---@field Message FString
---@field ServerName FString
local FAdminCommandHttpResponse = {}



---@class FAdminCommandHttpResponseGroup
---@field ResponseList TArray<FAdminCommandHttpResponse>
---@field AdminOnlineID FString
local FAdminCommandHttpResponseGroup = {}



---@class FAdminCommandPlayerContext
---@field World UWorld
---@field AdminSimController ASimPlayerController
---@field AdminOnlineID FString
---@field AdminPlayerName FString
local FAdminCommandPlayerContext = {}



---@class FAdminCommandResult
---@field Result FString
---@field Message FString
local FAdminCommandResult = {}



---@class FAdminSteamInfo
---@field steamId FString
---@field PlayerName FString
local FAdminSteamInfo = {}



---@class FAlert
local FAlert = {}


---@class FAlertAllPlayersOnTeamRPCInfo
---@field AlertText FString
---@field Duration_Sec float
---@field TeamId uint8
local FAlertAllPlayersOnTeamRPCInfo = {}



---@class FAlertAllPlayersRPCInfo
---@field AlertText FString
---@field Duration_Sec float
local FAlertAllPlayersRPCInfo = {}



---@class FAlertTownBuiltRPCInfo
---@field TownName FString
---@field MapId EWorldConquestMapId
---@field TeamId uint8
local FAlertTownBuiltRPCInfo = {}



---@class FAlertTownDestroyedRPCInfo
---@field TownName FString
---@field MapId EWorldConquestMapId
---@field TeamId uint8
local FAlertTownDestroyedRPCInfo = {}



---@class FAlertTownUnderAttackRPCInfo
---@field TownName FString
---@field MapId EWorldConquestMapId
---@field TeamId uint8
local FAlertTownUnderAttackRPCInfo = {}



---@class FAlertWarOpsMessageRPCInfo
---@field MessageType EWarOpsAlertMessage
---@field bVar1Set boolean
---@field bVar2Set boolean
---@field Var1 int32
---@field Var2 int32
---@field DurationSecs float
local FAlertWarOpsMessageRPCInfo = {}



---@class FAmmoDynamicData : FTableRowBase
---@field Damage float
---@field Suppression float
---@field ExplosionRadius float
---@field DamageType TSubclassOf<UDamageType>
---@field DamageInnerRadius float
---@field DamageFalloff float
---@field AccuracyRadius float
---@field EnvironmentImpactAmount int16
---@field AddedBurning float
---@field AddedHeat float
---@field BreachingModifier float
local FAmmoDynamicData = {}



---@class FAnalayticsReleaseReserveStockpileItemInfo
---@field StockpileName FString
---@field CodeName FName
---@field QuantityReleased int32
---@field TotalQuantity int32
local FAnalayticsReleaseReserveStockpileItemInfo = {}



---@class FAnalyticsChatInfo
---@field ChatChannel EChatChannel
---@field ChatLanguage EChatLanguage
---@field Message FString
local FAnalyticsChatInfo = {}



---@class FAnalyticsEvent
---@field WarId FString
---@field EventType EAnalyticsEventType
---@field UnixTimeStamp int64
---@field AccessLevel EAnalyticsAccessLevel
---@field MapId EWorldConquestMapId
---@field ServerName FString
---@field WorldPosX float
---@field WorldPosY float
---@field WorldPosZ float
---@field OnlineID FString
---@field PlayerName FString
---@field DeviceID FString
---@field TeamId uint8
---@field JsonPayload FString
local FAnalyticsEvent = {}



---@class FAnalyticsFactoryOrderCompleteInfo
---@field OrderItems TArray<FSpecializedFactoryOrderItem>
---@field AccessLevel EFactoryOrderAccess
---@field SquadId int16
local FAnalyticsFactoryOrderCompleteInfo = {}



---@class FAnalyticsItem
---@field Name FString
---@field Quantity int32
local FAnalyticsItem = {}



---@class FAnalyticsItemList
---@field ItemList TArray<FAnalyticsItem>
local FAnalyticsItemList = {}



---@class FAnalyticsModBanInfo
---@field AdminPlayerName FString
---@field AdminOnlineID FString
---@field DurationMins float
---@field BanReason EBanReason
local FAnalyticsModBanInfo = {}



---@class FAnalyticsPlayerRestrictedInfo
---@field FriendlyFireStats FFriendlyFireStats
---@field RestrictionType FString
---@field DurationMins float
---@field bWasRestrictedByAdmin boolean
local FAnalyticsPlayerRestrictedInfo = {}



---@class FAnalyticsPrototypeResult
---@field PrototypeCodeName FName
---@field bPrototypeComplete boolean
---@field bPrototypeSucceeded boolean
local FAnalyticsPrototypeResult = {}



---@class FAnalyticsReserveItem
---@field StockpileName FString
---@field Item FAnalyticsItem
local FAnalyticsReserveItem = {}



---@class FAnalyticsReserveItemList
---@field StockpileName FString
---@field ItemList FAnalyticsItemList
local FAnalyticsReserveItemList = {}



---@class FAnalyticsTeamKillInfo
---@field DeadPlayerName FString
---@field DeadPlayerOnlineID FString
---@field TeamKillSource FString
local FAnalyticsTeamKillInfo = {}



---@class FAnalyticsUnstuckInfo
---@field NewLocation FVector
---@field NumUnstuckCommandsUsed int32
local FAnalyticsUnstuckInfo = {}



---@class FAnalyticsVehicleWrenchUnlockedInfo
---@field VehicleCodeName FName
---@field SquadId int16
---@field FactionId EFactionId
---@field LastDriverOnlineID FString
local FAnalyticsVehicleWrenchUnlockedInfo = {}



---@class FAnalyticsWhisperInfo
---@field ChatLanguage EChatLanguage
---@field TargetOnlineID FString
---@field TargetPlayerName FString
---@field Message FString
local FAnalyticsWhisperInfo = {}



---@class FArmourDirectionBoneNamesList
---@field ArmourDirection EArmourDirection
---@field BoneNamesList TArray<FName>
local FArmourDirectionBoneNamesList = {}



---@class FArmourProfile : FTableRowBase
---@field SuppressionModifier float
local FArmourProfile = {}



---@class FAssemblyItem
---@field CodeName FName
---@field Duration int32
---@field RequiredCodeName FName
local FAssemblyItem = {}



---@class FAssemblyModification
---@field AssemblyItems TArray<FAssemblyItem>
local FAssemblyModification = {}



---@class FAssignSquadOfficerToLeaderWarMessage
---@field SquadId int32
---@field OfficerOnlineId FString
local FAssignSquadOfficerToLeaderWarMessage = {}



---@class FBallastInfo
---@field Type EBallastType
---@field Offset FVector
---@field FloodRate float
---@field BlowRate float
---@field BlowRateNoElectricity float
---@field BlowElectricityCost float
---@field FloodedMass float
---@field TargetFloodPercent float
---@field FloodPercent float
local FBallastInfo = {}



---@class FBanReasonInfo
---@field BanReason EBanReason
local FBanReasonInfo = {}



---@class FBaseStyle : FSlateWidgetStyle
---@field BuildStyle FBuildStyle
---@field ContainerStyle FContainerStyle
---@field FacilityStyle FFacilityStyle
---@field FuelStyle FFuelStyle
---@field ListEntryBGImage FSlateBrush
---@field ListEntryHighlightBGImage FSlateBrush
---@field AlternatingRowLightColour FSlateBrush
---@field EquipmentSilhouetteMale FSlateBrush
---@field EquipmentSilhouetteFemale FSlateBrush
---@field BasicScrollBarStyle FScrollBarStyle
---@field BasicIconButtonStyle FButtonStyle
---@field InvariantBasicIconButtonStyle FButtonStyle
---@field ExpandButtonStyle FButtonStyle
---@field CollapseButtonStyle FButtonStyle
---@field NextButtonStyle FButtonStyle
---@field PrevButtonStyle FButtonStyle
---@field NoBGIconButtonStyle FButtonStyle
---@field ButtonStyles FButtonStyles
---@field TextStyles FTextStyles
---@field LogStyle FLogStyle
---@field QueueStyle FQueueStyle
---@field IconsStyle FIconsStyle
---@field InputStyle FInputStyle
---@field InventoryStyle FInventoryStyle
---@field ItemStyle FItemStyle
---@field ItemSubtypeStyle FItemSubtypeStyle
---@field StatusEntriesStyle FStatusStyle
---@field ActionEntriesStyle FActionsStyle
---@field ColorsStyle FColorsStyle
---@field DialogBoxStyle FDialogBoxStyle
---@field ProgressBarButtonStyle FProgressBarButtonStyle
---@field PrototypeButtonStyle FButtonStyle
---@field HelpToolTipStyle FHelpToolTipStyle
---@field ShortWarHelpToolTipStyle FHelpToolTipStyle
---@field RocketSiteStyle FRocketSiteStyle
---@field StaticCheckBoxStyle FStaticCheckBoxStyle
---@field InteractContextMenuStyle FInteractContextMenuStyle
---@field XSpaceBetweenColumns float
---@field YSpaceBetweenWidgets float
---@field SimScreenSideColumnWidth float
---@field SimScreenCenterColumnWidth float
---@field SimScreenColumnHeight float
---@field BackgroundBlurStrength float
---@field DropdownStyle FComboBoxStyle
---@field DropdownRowStyle FTableRowStyle
---@field ListViewStyle FListViewStyle
---@field FactionSelectStyle FFactionSelectStyle
---@field LobbyStyle FLobbyStyle
---@field SquadStyle FSquadStyle
---@field TechTreeComponentStyle FTechTreeStyle
---@field TechTreeStyle FTechTreeStyle
---@field HospitalStyle FHospitalStyle
---@field InfrastructuresStyle FInfrastructuresStyle
---@field StandardColour FWarStandardColour
---@field ReserveStockpileStyle FReserveStockpileStyle
---@field WarAchievementsStyle FWarAchievementsStyle
---@field FactionIcons FSlateBrush
---@field PlayerOnlineStatusIcons FSlateBrush
---@field GeneralPurposeIcons FGeneralPurposeIcons
---@field WeatherStyle FWeatherStyle
---@field ListeningAreaStyle FListeningAreaStyle
---@field GearboxStyle FGearboxStyle
---@field ItemHolderSortButtonStyle FButtonStyle
---@field MapSearchBarStyle FSearchBarStyle
local FBaseStyle = {}



---@class FBatchModifiedRegimentIdMessage
---@field ID int32
---@field FactionId int8
---@field OnlineIdList TArray<FString>
local FBatchModifiedRegimentIdMessage = {}



---@class FBatchRegimentIdRequest
---@field RequestID int32
---@field OnlineIds TArray<FString>
local FBatchRegimentIdRequest = {}



---@class FBatchRegimentIdResponse
---@field RequestID int32
---@field RegimentIds TArray<int32>
local FBatchRegimentIdResponse = {}



---@class FBenchmarkReplay
---@field StartPosition FVector
---@field StartRotation FRotator
---@field Frames TArray<FBenchmarkReplayFrame>
local FBenchmarkReplay = {}



---@class FBenchmarkReplayFrame
---@field Frame int32
---@field Input FVector
---@field bWantsToSprint boolean
local FBenchmarkReplayFrame = {}



---@class FBorderBaseInfo
---@field BorderMapID EWorldConquestMapId
---@field HexDirection EHexDirection
---@field RoadID uint8
---@field NextClaimTime FDateTime
local FBorderBaseInfo = {}



---@class FBridgeSideState
---@field bIsControlEnabled boolean
local FBridgeSideState = {}



---@class FBuildFootprintInfo
---@field bCheckForLandscape boolean
---@field bCheckForObstructions boolean
---@field IgnoreMask uint8
local FBuildFootprintInfo = {}



---@class FBuildResponse
---@field Result EBuildResponse
---@field PlacementStatus EPlacementStatus
---@field Structure AStructure
---@field CodeName FName
local FBuildResponse = {}



---@class FBuildSocketTag
---@field SocketTypeMask int64
---@field SocketTypeCategory int64
---@field Tag FName
---@field ShowsTag FName
---@field ShowsTagBoth FName
---@field ShowsTagHigher FName
---@field HidesTagBoth FName
---@field HidesTagHigher FName
---@field MaxZOffset float
---@field ApplicationRule EBuildSocketTagRule
---@field ConnectorAttachmentTag FName
---@field bIgnoreHidesTag boolean
local FBuildSocketTag = {}



---@class FBuildStyle
---@field Categories FSlateBrush
local FBuildStyle = {}



---@class FButtonStyles
---@field OrangeHighlight FButtonStyle
---@field NoBGOrangeHighlight FButtonStyle
---@field Grey FButtonStyle
---@field Red FButtonStyle
local FButtonStyles = {}



---@class FCachedLandscape
---@field LandscapeActorToWorld FTransform
---@field Bounds FBox
---@field Proxy ALandscapeProxy
local FCachedLandscape = {}



---@class FCachedPlayerState
---@field OnlineID FString
---@field DeviceID FString
---@field RegimentID int32
---@field SquadId int32
---@field Level int8
---@field Rank int8
---@field PlayerName FString
---@field TeamId int8
---@field RecentTeamKills float
---@field RecentFriendlyCharacterDamage float
---@field RecentFriendlyStructureDamage float
---@field RecentFriendlyVehicleDamage float
---@field RecentNameChanges int16
---@field TimeWhenCached FDateTime
local FCachedPlayerState = {}



---@class FCachedWorldStructure
---@field StructureClass TSubclassOf<AStructure>
---@field WorldPosition FVector
local FCachedWorldStructure = {}



---@class FCalloutInfo
---@field Message FText
---@field RequiresWorldMarker boolean
local FCalloutInfo = {}



---@class FCharacterConditions
---@field GripType EEquippedWeaponGripType
---@field WeatherType EWeatherType
---@field MaxVelocity float
---@field TriggerChance float
---@field bRequiresGripType boolean
---@field bRequiresWeather boolean
---@field bRequiresWarming boolean
local FCharacterConditions = {}



---@class FCharacterCustomizationInfo
---@field bIsFemale boolean
---@field SkinTone int8
local FCharacterCustomizationInfo = {}



---@class FCharacterInvokeInfo
---@field ImpactPoint FVector_NetQuantize
---@field MuzzleOffset FMuzzleOffsetVector_NetQuantize
---@field RenderTimestamp FQuantizedTimestamp
local FCharacterInvokeInfo = {}



---@class FCharacterRenderInfo
---@field Torso USkeletalMesh
---@field TorsoMaterial UMaterialInterface
---@field Legs USkeletalMesh
---@field LegsMaterial UMaterialInterface
---@field Back USkeletalMesh
---@field BackMaterial UMaterialInterface
---@field Head USkeletalMesh
---@field HeadMaterial UMaterialInterface
---@field Hands USkeletalMesh
---@field HandsMaterial UMaterialInterface
---@field Helmet USkeletalMesh
---@field bCanUpdateHeadSkinTone boolean
---@field bCanUpdateHandSkinTone boolean
local FCharacterRenderInfo = {}



---@class FCharacterSkinToneInfo
---@field HeadMaterial UMaterialInstance
---@field HandsMaterial UMaterialInstance
local FCharacterSkinToneInfo = {}



---@class FChatChannelStyle
---@field Color FRichTextFieldColor
---@field MessageColor FRichTextFieldColor
local FChatChannelStyle = {}



---@class FChatStyle
---@field ChannelStyleMap TMap<EChatChannel, FChatChannelStyle>
---@field EnemyNameColor FRichTextFieldColor
local FChatStyle = {}



---@class FCheatDisbandRegimentRequest
---@field Admin FUObjectHandle
---@field RegimentID int32
local FCheatDisbandRegimentRequest = {}



---@class FCheatDisbandRegimentResponse
---@field Request FCheatDisbandRegimentRequest
---@field RegimentName FString
---@field RegimentTag FString
local FCheatDisbandRegimentResponse = {}



---@class FCheatEditRegimentRequest
---@field Admin FUObjectHandle
---@field RegimentID int32
---@field Name FString
---@field Tag FString
local FCheatEditRegimentRequest = {}



---@class FCheatEditRegimentResponse
---@field Request FCheatEditRegimentRequest
local FCheatEditRegimentResponse = {}



---@class FCheatGetRegimentInfoRequest
---@field Admin FUObjectHandle
---@field QueryType ERegimentQueryType
---@field QueryValue FString
local FCheatGetRegimentInfoRequest = {}



---@class FCheatGetRegimentInfoResponse
---@field Request FCheatGetRegimentInfoRequest
---@field RegimentList TArray<FRegiment>
local FCheatGetRegimentInfoResponse = {}



---@class FCheatGetSquadInfoRequest
---@field AdminOnlineID FString
---@field TargetOnlineID FString
local FCheatGetSquadInfoRequest = {}



---@class FCheatGetSquadInfoResponse
---@field CheatGetSquadInfoRequest FCheatGetSquadInfoRequest
---@field ExpectedSquadId int32
---@field ColonialSquadIds TArray<int32>
---@field WardenSquadIds TArray<int32>
local FCheatGetSquadInfoResponse = {}



---@class FCheatMakeRegimentCommanderRequest
---@field Admin FUObjectHandle
---@field CurrentCommanderOnlineID FString
---@field NewCommanderOnlineID FString
local FCheatMakeRegimentCommanderRequest = {}



---@class FCheatMakeRegimentCommanderResponse
---@field Request FCheatMakeRegimentCommanderRequest
---@field bIsSuccess boolean
local FCheatMakeRegimentCommanderResponse = {}



---@class FCheatRemoveFromRegimentRequest
---@field Admin FUObjectHandle
---@field TargetOnlineID FString
local FCheatRemoveFromRegimentRequest = {}



---@class FCheatRemoveFromRegimentResponse
---@field Request FCheatRemoveFromRegimentRequest
---@field bIsSuccess boolean
local FCheatRemoveFromRegimentResponse = {}



---@class FCheatRemoveFromSquadRequest
---@field AdminOnlineID FString
---@field TargetOnlineID FString
local FCheatRemoveFromSquadRequest = {}



---@class FCheatRemoveFromSquadResponse
---@field CheatRemoveFromSquadRequest FCheatRemoveFromSquadRequest
---@field RemovedFromColonialSquadIds TArray<int32>
---@field RemovedFromWardenSquadIds TArray<int32>
local FCheatRemoveFromSquadResponse = {}



---@class FCheatViewRegimentInfoRequest
---@field Admin FUObjectHandle
---@field RegimentID int32
local FCheatViewRegimentInfoRequest = {}



---@class FCheatViewRegimentInfoResponse
---@field Request FCheatViewRegimentInfoRequest
---@field RegimentName FString
---@field RegimentTag FString
---@field Link FString
---@field FactionId EFactionId
---@field Members int32
local FCheatViewRegimentInfoResponse = {}



---@class FCheatViewSquadInfoRequest
---@field Admin FUObjectHandle
---@field SquadId int32
local FCheatViewSquadInfoRequest = {}



---@class FCheatViewSquadInfoResponse
---@field Admin FUObjectHandle
---@field SquadId int32
---@field Name FString
---@field LeaderOnlineID FString
---@field LeaderName FString
---@field MemberCount int16
---@field InactiveMemberCount int16
local FCheatViewSquadInfoResponse = {}



---@class FClaimStatus
---@field bIsEnabled boolean
---@field bAllowReclaim boolean
---@field bCanBeDemolished boolean
---@field bCanBuildSiteBeDemolished boolean
---@field FactionId EFactionId
---@field SquadId int32
---@field ClaimTime int64
---@field OriginalBuildTime int64
---@field ClaimDurationHours int16
---@field DemolishDurationHours int16
local FClaimStatus = {}



---@class FClearSquadsConditionalWarMessage
---@field MinAgeMinutes int32
---@field MaxHistoricalPlayers int32
local FClearSquadsConditionalWarMessage = {}



---@class FClientShardConfig
---@field PopulationCap int32
---@field RequiredVictoryTowns int32
---@field ShortRequiredVictoryTowns int32
---@field ScheduledConquestStartTime FDateTime
local FClientShardConfig = {}



---@class FCodeNameQuantity
---@field CodeName FName
---@field Quantity int32
local FCodeNameQuantity = {}



---@class FCodeNameSmallQuantity
---@field CodeName FName
---@field Quantity int16
local FCodeNameSmallQuantity = {}



---@class FColorsStyle
---@field ButtonBackground FSlateBrush
---@field Button FButtonStyle
local FColorsStyle = {}



---@class FCommendHistory
---@field CommendedPlayerID FString
---@field NumCommends int32
---@field LastCommendUnixTimestamp int64
local FCommendHistory = {}



---@class FCommsRating
---@field Condition ECommsRatingCondition
local FCommsRating = {}



---@class FCommsRatingChatVoteInfo
local FCommsRatingChatVoteInfo = {}


---@class FConcreteSettler
---@field StartTimeDateTimeTicks int64
---@field bEnabled boolean
---@field ConcreteSettleDurationMins float
---@field RoughnessStart float
---@field RoughnessEnd float
---@field ColourStart FLinearColor
---@field ColourEnd FLinearColor
local FConcreteSettler = {}



---@class FConnectionRule
---@field bDirectional boolean
---@field Direction ESocketDirection
---@field SocketTypeMask int64
---@field ShowsTags TArray<FName>
local FConnectionRule = {}



---@class FConnectorConfiguration
---@field SocketIndex int8
---@field TargetLocation FVector
---@field TargetRotation FQuat
---@field CustomData uint8
---@field Flags EConnectorConfigurationFlag
local FConnectorConfiguration = {}



---@class FConquestOverNotificationInfo
---@field ConquestWinner uint8
---@field NumColonialAchievements int8
---@field NumWardenAchievements int8
local FConquestOverNotificationInfo = {}



---@class FConstructionEquipmentConfig
---@field MaxDeltaAngleToIgnoreRotation float
---@field ScoopingAnimHalfwayDuration float
---@field ScoopingAnimCompletionDuration float
---@field MinAnimDuration float
---@field MaxAnimDuration float
---@field ScoopDoorOpenDuration float
---@field MaterialDropDuration float
---@field MinScoopRotation float
---@field MaxScoopRotation float
---@field MinScoopDoorRotation float
---@field MaxScoopDoorRotation float
---@field MinDistance float
---@field MaxDistance float
---@field MinHeight float
---@field MaxHeight float
---@field StartingScoopDoorRotation float
---@field StartingScoopRotation float
---@field StartingHeight float
---@field StartingDistance float
---@field StartingRotation float
---@field ScoopingAnimStartHeight float
---@field ScoopingAnimMidHeight float
---@field ScoopingAnimStartDistance float
---@field ScoopingAnimEndDistance float
---@field ScoopingAnimStartScoopRotation float
---@field ScoopingAnimEndScoopRotation float
---@field DumpMaterialHeight float
---@field GhostMaterialIndices int32
---@field GhostMaterial UMaterial
---@field ScoopMaterialMesh UStaticMesh
---@field ArmHalfDimensions FVector2D
---@field ScoopRadius float
local FConstructionEquipmentConfig = {}



---@class FConstructionEquipmentServerState
---@field TargetBuildSite TWeakObjectPtr<ABuildSite>
---@field ServerTimestamp float
local FConstructionEquipmentServerState = {}



---@class FContainerStyle
---@field HeaderHeight float
---@field HeaderImage FSlateBrush
---@field VeryLightContentImage FSlateBrush
---@field LightContentImage FSlateBrush
---@field ContentImage FSlateBrush
---@field DarkContentImage FSlateBrush
---@field CategoryImage FSlateBrush
local FContainerStyle = {}



---@class FContextMenuStyle
---@field WhisperOnIcon FSlateBrush
---@field CommendOnIcon FSlateBrush
---@field VoteKickOnIcon FSlateBrush
---@field ViolationLogIcon FSlateBrush
---@field VoiceMuteOnIcon FSlateBrush
---@field VoiceMuteOffIcon FSlateBrush
---@field MuteOffIcon FSlateBrush
---@field MuteOnIcon FSlateBrush
---@field SquadInviteOnIcon FSlateBrush
---@field RegimentInviteIcon FSlateBrush
---@field RegimentPromoteIcon FSlateBrush
---@field RegimentDemoteIcon FSlateBrush
---@field RegimentDischargeIcon FSlateBrush
---@field MenuLabel FTextBlockStyle
---@field MenuHeading FTextBlockStyle
---@field MenuBackground FSlateBrush
---@field MenuKeybinding FTextBlockStyle
---@field MenuCheckbox FCheckBoxStyle
local FContextMenuStyle = {}



---@class FControlSurface
---@field Verts FVector
---@field Pivot FVector
---@field Dimensions FVector2D
---@field bVertical boolean
---@field bInvertedControls boolean
local FControlSurface = {}



---@class FControlsPage
---@field MainColumn TArray<FControlsPageRow>
---@field AltColumn TArray<FControlsPageRow>
local FControlsPage = {}



---@class FControlsPageEntry
---@field Hotkeys TArray<FControlsPageEntryHotkey>
---@field OptionalImage FSlateBrush
local FControlsPageEntry = {}



---@class FControlsPageEntryHotkey
---@field Icon FSlateBrush
---@field IconText FText
---@field Text FText
local FControlsPageEntryHotkey = {}



---@class FControlsPageRow
---@field Entries TArray<FControlsPageEntry>
local FControlsPageRow = {}



---@class FConversionItem
---@field CodeName FName
---@field Quantity int32
---@field Limit int32
local FConversionItem = {}



---@class FConversionLiquid
---@field CodeName FName
---@field Quantity float
---@field Limit float
local FConversionLiquid = {}



---@class FCraneComponentConfig
---@field GlobalShippableInfo TSubclassOf<AGlobalShippableInfo>
---@field AimMarker TSubclassOf<ACraneMarker>
---@field GhostMaterial UMaterial
---@field GhostMaterialIndices int32
---@field ArmMovementSFXLoop USoundCue
---@field DeployingSFXLoop USoundCue
---@field PulleyMovementSFXLoop USoundCue
---@field DeployedSFXTrigger USoundCue
---@field PickUpSFXTrigger USoundCue
---@field DropOffSFXTrigger USoundCue
---@field MaxUndeployedShippableSize EShippableType
---@field DeployedCameraViewRadius float
---@field MinHorizontalDistanceToTarget float
---@field MaxHorizontalDistanceToTarget float
---@field MaxHeight float
---@field PulleyOffset float
---@field DefaultCabRotationZ float
---@field MinCabRotationZ float
---@field MaxCabRotationZ float
---@field CabRotationSpeed float
---@field CabRotationSpeedWithShippable float
---@field HorizontalArmSpeed float
---@field HorizontalArmSpeedWithShippable float
---@field VerticalArmSpeed float
---@field VerticalArmSpeedWithShippable float
---@field PulleySpeed float
---@field PulleySpeedWithShippable float
---@field HookRotationSpeed float
---@field HookRotationSpeedWithShippable float
---@field ArmHalfDimensions FVector2D
---@field ArmStartSocketName FName
---@field ArmEndSocketName FName
---@field bIsAlwaysDeployed boolean
---@field bRequiresPower boolean
---@field bUseClosestCabRotationZ boolean
---@field bAllowsInventoryAccess boolean
local FCraneComponentConfig = {}



---@class FCraneComponents
---@field MainMesh USkeletalMeshComponent
---@field BaseMesh UStaticMeshComponent
---@field RopeMesh UStaticMeshComponent
---@field ShippableCollision UBoxComponent
---@field ArmMovementSFXLoop UAudioComponent
---@field DeployingSFXLoop UAudioComponent
---@field PulleyMovementSFXLoop UAudioComponent
local FCraneComponents = {}



---@class FCraterInfo
---@field Crater TSubclassOf<ACrater>
---@field BlockingPhysicalMaterials TArray<UPhysicalMaterial>
---@field Radius float
---@field OuterRadius float
---@field SpawnWeight float
local FCraterInfo = {}



---@class FCreateDebugMapPostRequest
---@field Request FCreateMapPostRequest
local FCreateDebugMapPostRequest = {}



---@class FCreateMapPostRequest
---@field Text FString
---@field NormalizedMapCoords FVector2D
---@field MapId int8
---@field MapPostType EMapPostType
---@field FacilityMapPostType EFacilityMapPostType
---@field bIsModModeOn boolean
---@field GroupId int32
local FCreateMapPostRequest = {}



---@class FCreateRegimentWarMessage
---@field Name FString
---@field Tag FString
---@field Link FString
---@field FactionId int8
local FCreateRegimentWarMessage = {}



---@class FCreateSquadWarMessage
---@field Name FString
local FCreateSquadWarMessage = {}



---@class FCrossRegionActorData
---@field ID int32
---@field OriginLocation FVector2D
---@field OriginLocationZ float
---@field Rotation FRotator
---@field Serialized TArray<uint8>
local FCrossRegionActorData = {}



---@class FCrossRegionSerializedActor
---@field ActorClass UClass
---@field ActorBytes TArray<uint8>
local FCrossRegionSerializedActor = {}



---@class FCursorStyle
---@field Brush FSlateBrush
---@field Offset FVector2D
local FCursorStyle = {}



---@class FDamageAttributes
---@field WeaponFireFXClass TSubclassOf<AWeaponFireFX>
---@field ImpactEffect TSubclassOf<AImpactEffect>
---@field ExplosionEffect TSubclassOf<AWarExplosionEffect>
---@field DamageType TSubclassOf<USimDamageType>
---@field ShotSoundCue USoundCue
---@field MuzzleFlashPS UParticleSystem
---@field WeaponDamage float
---@field BestJitterConeHalfAngle float
---@field WorstJitterConeHalfAngle float
---@field FiringPeriod float
---@field TimeToFullFireRateAndAccuracy float
---@field EnemyPursueDuration float
---@field ArmourDamageModifier float
---@field TargetStabilityReductionPerShot float
local FDamageAttributes = {}



---@class FDamageMitigation
---@field Mitigation float
---@field SFX USoundBase
local FDamageMitigation = {}



---@class FDamageProfile : FTableRowBase
---@field LightVehicle float
---@field Tier1Tank float
---@field Tier2Tank float
---@field Tier0Structure float
---@field Tier1Structure float
---@field Tier2Structure float
---@field Tier2BStructure float
---@field Tier3Structure float
---@field Tier3BStructure float
---@field HeavyBuildSite float
---@field Tier1GarrisonHouse float
---@field Tier2GarrisonHouse float
---@field Tier3GarrisonHouse float
---@field Trench float
---@field Tier1LargeShip float
---@field Tier1Ship float
---@field WorldStructureHusk float
---@field Ice float
local FDamageProfile = {}



---@class FDayNightCycleCubemapInfo
---@field SunHeight float
---@field CubeMap UTextureCube
---@field WhiteBalanceTemp float
---@field FilmTint FLinearColor
---@field FilmTintShadow FLinearColor
---@field Saturation float
---@field Contrast float
---@field CrushShadows float
---@field CrushHighlights float
---@field Toe float
---@field DirectionalLightTemperature float
local FDayNightCycleCubemapInfo = {}



---@class FDecalData
---@field DecalMaterial UMaterialInterface
---@field DecalSize FVector
---@field LifeSpan float
---@field FadeScreenSize float
local FDecalData = {}



---@class FDecayInfo
---@field FractionalSuppliesConsumed float
local FDecayInfo = {}



---@class FDecayPreventionStructureCounts
---@field PossibleStructureCount int32
---@field ClosestStructureCount int32
---@field PreferredStructureCount int32
---@field PreferredSuppliesPerTick int32
local FDecayPreventionStructureCounts = {}



---@class FDeleteMapPostRequest
---@field OriginalPosterOnlineId FString
---@field RequesterOnlineID FString
local FDeleteMapPostRequest = {}



---@class FDeleteMapPostResponse
---@field bSuccess boolean
---@field DeletedPostOwnerOnlineID FString
local FDeleteMapPostResponse = {}



---@class FDenySquadOfficerToLeaderWarMessage
---@field SquadId int32
local FDenySquadOfficerToLeaderWarMessage = {}



---@class FDeployHistory
---@field LastDeployTime FDateTime
---@field LastDeployTimeAlt FDateTime
local FDeployHistory = {}



---@class FDeploymentQueueEntry
---@field Controller ASimPlayerController
---@field TargetMapID EWorldConquestMapId
---@field TravelPoint FSpawnPoint
---@field bIsRecovery boolean
local FDeploymentQueueEntry = {}



---@class FDeviceIdBanRequest
---@field TargetDeviceId FString
---@field BanDurationSec int64
---@field UnderReviewDurationSec int64
---@field BanReason EBanReason
---@field AdminOnlineID FString
---@field AdminPlayerName FString
local FDeviceIdBanRequest = {}



---@class FDeviceIdBannedMessage
---@field DeviceIdBanRequest FDeviceIdBanRequest
---@field bIsSenderServer boolean
local FDeviceIdBannedMessage = {}



---@class FDialogBoxStyle
---@field BackgroundImage FSlateBrush
---@field MessageTextStyle FTextBlockStyle
---@field TextInputBoxStyle FEditableTextBoxStyle
---@field ButtonTextStyle FTextBlockStyle
---@field BackgroundFillColour FSlateColor
---@field BackgroundBlurStrength float
local FDialogBoxStyle = {}



---@class FDisbandRegimentMessage
---@field RegimentID int32
local FDisbandRegimentMessage = {}



---@class FDynamicState
---@field OpenAnimationDuration float
---@field ClosedAnimationDuration float
---@field State EDynamicState
local FDynamicState = {}



---@class FDynamicTierInfo
---@field bIsEnabled boolean
---@field WindowMeshSet TSubclassOf<UWindowMeshSet>
local FDynamicTierInfo = {}



---@class FEmoteActivityOptions
---@field bLockStance boolean
---@field bHideWeapon boolean
---@field AllowedStances TArray<ESimCharacterStance>
local FEmoteActivityOptions = {}



---@class FEncumbranceManager
---@field bEnableItemEncumbrance boolean
---@field bEnableMudEncumbrance boolean
---@field EncumbranceModifiers FEncumbranceModifiers
---@field CurrentItemEncumbrance int32
---@field CurrentMudEncumbrance int32
local FEncumbranceManager = {}



---@class FEncumbranceModifiers
---@field BaselineEnc int32
---@field MaxEnc int32
---@field ZeroEncTurnRateMod float
---@field ZeroEncMoveSpeedMod float
---@field MaxEncTurnRateMod float
---@field MaxEncWalkingSpeedMod float
---@field MaxEncSprintingStaminaDrainMod float
---@field MaxEncStaminaRestoreMod float
---@field MaxEncEngineForceModifier float
---@field OverEncWalkingSpeedMod float
---@field OverEncTurnRateMod float
---@field OverEncSprintingStaminaDrainMod float
---@field OverEncStaminaRestoreMod float
---@field CurrentMaxSpeedMod float
---@field CurrentMaxSprintSpeedMod float
---@field CurrentTurnMod float
---@field CurrentSprintingStaminaDrainMod float
---@field CurrentStaminaRestoreMod float
---@field CurrentMassAlpha float
---@field CurrentEngineForceModifier float
local FEncumbranceModifiers = {}



---@class FEnvironmentModificationKey
local FEnvironmentModificationKey = {}


---@class FExplosionMaterialOverride
---@field PhysicalSurface EPhysicalSurface
---@field ExplosionFX UParticleSystem
---@field ExplosionSFX USoundCue
---@field Decal FDecalData
local FExplosionMaterialOverride = {}



---@class FExternalWarServiceReplicatedState
---@field RegimentClientReplicatedState FRegimentClientReplicatedState
local FExternalWarServiceReplicatedState = {}



---@class FFacilityLightRenderInfo
---@field MeshComponent UMeshComponent
local FFacilityLightRenderInfo = {}



---@class FFacilityModification
---@field ConversionEntries TArray<FMultiConversionInfo>
local FFacilityModification = {}



---@class FFacilityRefineryOrder
---@field OnlineID FString
---@field PlayerName FString
---@field Input TArray<FCodeNameQuantity>
---@field CrateInput TArray<FCodeNameQuantity>
---@field FuelInput TArray<FFuelQuantity>
---@field Output TArray<FCodeNameQuantity>
---@field CrateOutput TArray<FCodeNameQuantity>
---@field FuelOutput TArray<FFuelQuantity>
---@field Index int8
---@field AccessLevel EAccessLevel
---@field bHasConsumedMaterials boolean
---@field bIsBlocked boolean
---@field State EFacilityRefineryOrderState
---@field ConsumeAmountModifier float
---@field ProgressNormalized float
---@field LastUseTime int64
local FFacilityRefineryOrder = {}



---@class FFacilityStyle
---@field ArrowBrush FSlateBrush
---@field PowerBrush FSlateBrush
---@field DisabledButtonStyle FButtonStyle
---@field PausedButtonStyle FButtonStyle
---@field EnabledButtonStyle FButtonStyle
---@field ConversionInfoStyle FButtonStyle
local FFacilityStyle = {}



---@class FFactionResourceState
---@field AluminumAmount int32
---@field TargetAluminumAmount int32
---@field CopperAmount int32
---@field TargetCopperAmount int32
---@field IronAmount int32
---@field TargetIronAmount int32
---@field RareMetalAmount int32
---@field TargetRareMetalAmount int32
---@field ActivityAmount double
local FFactionResourceState = {}



---@class FFactionSelectStyle
---@field ColonialButtonStyle FButtonStyle
---@field WardenButtonStyle FButtonStyle
---@field ColonialHeader FText
---@field WardenHeader FText
---@field FactionHeadTextColour FSlateColor
---@field ColonialFlavourText FText
---@field WardenFlavourText FText
---@field QueueWarningImageColour FSlateColor
local FFactionSelectStyle = {}



---@class FFactoryProductionCategory
---@field Type EFactoryQueueType
---@field CategoryItems TArray<FFactoryProductionItem>
local FFactoryProductionCategory = {}



---@class FFactoryProductionItem
---@field CodeName FName
local FFactoryProductionItem = {}



---@class FFactoryQueue
---@field Type EFactoryQueueType
---@field CraftingProgress float
---@field CraftingSpeedFactor float
---@field Orders TArray<FSpecializedFactoryOrder>
---@field CompletedOrders TArray<FSpecializedFactoryOrder>
local FFactoryQueue = {}



---@class FFestivalRenderInfo
---@field MaterialOverrides TArray<FMaterialOverride>
local FFestivalRenderInfo = {}



---@class FFireIntensityThreshold
---@field Intensity EFireIntensity
---@field DamageThreshold float
---@field FlamesPerSquareMeter float
---@field CharacterBurn float
---@field FireDamageBaseGainRate float
---@field FireDamageBaseDecayRate float
local FFireIntensityThreshold = {}



---@class FFlameImpactFXInfo
---@field Location FVector
---@field bActive boolean
local FFlameImpactFXInfo = {}



---@class FFoliageModificationInfo
---@field OriginalMesh UStaticMesh
---@field Replacement TSubclassOf<AClientFoliageReplacement>
local FFoliageModificationInfo = {}



---@class FFootPrintActorInfo
---@field PhysicalMaterial UPhysicalMaterial
---@field FootPrintActorLeft TSubclassOf<ADecalActor>
---@field FootPrintActorRight TSubclassOf<ADecalActor>
local FFootPrintActorInfo = {}



---@class FFortEmpConfig
---@field FirstLRArtillerySegmentMesh UStaticMesh
---@field SecondLRArtillerySegmentMesh UStaticMesh
---@field FirstIntelCenterSegmentMesh UStaticMesh
---@field SecondIntelCenterSegmentMesh UStaticMesh
---@field FirstWeatherStationSegmentMesh UStaticMesh
---@field SecondWeatherStationSegmentMesh UStaticMesh
---@field FirstFortGarrisonSegmentMesh UStaticMesh
---@field SecondFortGarrisonSegmentMesh UStaticMesh
---@field LRArtilleryPartCodeName FName
---@field WeatherStationPartCodeName FName
---@field IntelCenterPartCodeName FName
---@field FortGarrisonPartCodeName FName
local FFortEmpConfig = {}



---@class FFreighterCargo
---@field CodeName FName
---@field SavedData FSavedShippableData
local FFreighterCargo = {}



---@class FFriendlyFireStats
---@field TeamKills int32
---@field CharacterDamage int32
---@field StructureDamage int32
---@field VehicleDamage int32
---@field NameChanges int32
local FFriendlyFireStats = {}



---@class FFuelInfo
---@field Tank FFuelTank
---@field ConsumptionRate float
local FFuelInfo = {}



---@class FFuelQuantity
---@field CodeName FName
---@field Quantity float
local FFuelQuantity = {}



---@class FFuelStyle
---@field Button FButtonStyle
local FFuelStyle = {}



---@class FFuelTank
---@field RemainingFuel float
---@field FuelCapacity float
---@field FuelItemCodeName FName
---@field bCanRefuelFromTanker boolean
---@field bCanSiphon boolean
local FFuelTank = {}



---@class FFuelTankerInfo
---@field OwnerActor AActor
---@field OwnerItemHolder UItemHolderComponent
---@field OwnerGenericStockpile UGenericStockpileComponent
---@field OwnerStealthComponent UStealthComponent
---@field RefuelAudioComponent UAudioComponent
---@field AmountRefueledPerSecond float
---@field RefuelCycleDuration float
---@field FuelLocation FVector
---@field RefuelActivateSound USoundCue
---@field RefuelSoundLoop USoundCue
---@field RefuelCableMaterial UMaterialInterface
---@field RefuelCableComponent UCableComponent
---@field TargetActorToRefuel AActor
---@field FuelBuffer FFuelQuantity
---@field bEnabled boolean
local FFuelTankerInfo = {}



---@class FGameServerProfile
---@field VoteKickCategoryCountMap TMap<EUserVoteKickCategory, int32>
---@field TimeOfLastVoteKickAgainstMe FDateTime
---@field TimeOfLastVoteKick int64
---@field FirstMonthlyVoteKickTime FDateTime
---@field MonthlyVoteKickCount uint16
---@field FirstDailyVoteKickTime FDateTime
---@field DailyVoteKickCount uint16
---@field LastLogin FDateTime
---@field LastVersion FString
---@field LastFriendlyFire FDateTime
---@field RecentTeamKills float
---@field RecentFriendlyCharacterDamage float
---@field RecentFriendlyStructureDamage float
---@field RecentFriendlyVehicleDamage float
---@field RecentNameChanges int16
---@field RestrictedState uint8
---@field RestrictionClearTimes TArray<FDateTime>
---@field PreviousPlayerName FString
---@field LastFreshLoginTime FDateTime
---@field RecentLoginCount int32
---@field UniqueDeviceID FString
---@field PlayerWarState FPlayerWarState
---@field CharacterInventory FSavedCharacterInventory
---@field Health float
---@field IsBleeding boolean
---@field PlayerFlags uint8
---@field bIsGodMode boolean
---@field NumSelfServeFactionUnlocksUsed int32
---@field OfflineCharacterServer FString
---@field OfflineCharacterCreationTime FDateTime
---@field NormalizedStamina float
---@field OutfitType EOutfitType
---@field CharacterCustomizationInfo FCharacterCustomizationInfo
---@field VoteKickImmunityTime FDateTime
local FGameServerProfile = {}



---@class FGameplayFlags
---@field Flags int32
local FGameplayFlags = {}



---@class FGameplayParams
---@field SuppressMultiplier float
---@field SuppressLossRate float
---@field StabilityGainRateMultiplier float
---@field CoverFactorFloor float
local FGameplayParams = {}



---@class FGangwayRampSaveState
---@field State ERampState
---@field RampAngle float
local FGangwayRampSaveState = {}



---@class FGatherResult
---@field ResourceCodeName FName
---@field GatheredAmount int32
local FGatherResult = {}



---@class FGearboxStyle
---@field GearboxLow FSlateBrush
---@field GearboxHigh FSlateBrush
local FGearboxStyle = {}



---@class FGeneralPurposeIcons
---@field DownwardTriangle FSlateBrush
local FGeneralPurposeIcons = {}



---@class FGenericStockpileConfig
---@field Type EStockpileEntryType
---@field QuantityLimit int32
---@field TotalQuantityLimit int32
---@field QuantityOverrides TMap<FName, int32>
---@field TotalQuantityOverrides TMap<FName, int32>
---@field ValidEntriesOverride TArray<FName>
---@field PreStockedEntries TArray<FStockpileEntry>
---@field RetrieveDurationModifiers TMap<FName, float>
local FGenericStockpileConfig = {}



---@class FGetAnalyticsEventsRequest
---@field WarId FString
---@field EventType EAnalyticsEventType
local FGetAnalyticsEventsRequest = {}



---@class FGetAnalyticsEventsResponse
---@field EventList TArray<FAnalyticsEvent>
local FGetAnalyticsEventsResponse = {}



---@class FGetBanAndProfileRequest
---@field OnlineID FString
---@field DeviceID FString
local FGetBanAndProfileRequest = {}



---@class FGetBanAndProfileResponse
---@field PlayerBan FPlayerBan
---@field ProfileResponse FGetProfileResponse
local FGetBanAndProfileResponse = {}



---@class FGetBanRequest
---@field OnlineID FString
---@field DeviceID FString
local FGetBanRequest = {}



---@class FGetBanResponse
---@field PlayerBan FPlayerBan
local FGetBanResponse = {}



---@class FGetMapPostsRequest
---@field bIsModModeOn boolean
local FGetMapPostsRequest = {}



---@class FGetMapPostsResponse
---@field MapPosts TArray<FRepMapPost>
local FGetMapPostsResponse = {}



---@class FGetProfileRequest
---@field OnlineID FString
local FGetProfileRequest = {}



---@class FGetProfileResponse
---@field ResponseCode EGetProfileResponseCode
---@field WarPlayerProfileSerializable FWarPlayerProfileSerialized
local FGetProfileResponse = {}



---@class FGetSquadInfoWarMessage
---@field OnlineID FString
---@field FactionId int8
local FGetSquadInfoWarMessage = {}



---@class FGetSquadInfosResponse
---@field SquadInfos TArray<FSquadInfo>
local FGetSquadInfosResponse = {}



---@class FGetSquadsResponse
---@field Squads TArray<FSquad>
local FGetSquadsResponse = {}



---@class FGetViolationsHttpRequest
---@field OnlineID FString
---@field DeviceID FString
local FGetViolationsHttpRequest = {}



---@class FGetViolationsHttpResponse
---@field EventList TArray<FViolationEvent>
local FGetViolationsHttpResponse = {}



---@class FGetViolationsRequest
local FGetViolationsRequest = {}


---@class FGetViolationsResponse
local FGetViolationsResponse = {}


---@class FGlobalAdminCommand
local FGlobalAdminCommand = {}


---@class FGlobalAdminCommandRequest
---@field Params TArray<FString>
---@field TargetServerName FString
---@field AdminOnlineID FString
local FGlobalAdminCommandRequest = {}



---@class FGlobalLogEntry
---@field OnlineID FString
---@field PlayerName FString
---@field Type EGlobalLogEntryType
---@field Value int32
---@field Timestamp FDateTime
---@field MapId int8
local FGlobalLogEntry = {}



---@class FGlobalLogPage
---@field Entries TArray<FGlobalLogEntry>
local FGlobalLogPage = {}



---@class FGlobalLogPageRequest
---@field LogPageIndex int32
local FGlobalLogPageRequest = {}



---@class FGlobalLogPageResponse
---@field LogPage FGlobalLogPage
---@field PageCount int32
local FGlobalLogPageResponse = {}



---@class FGlobalResourceState
---@field Colonials FFactionResourceState
---@field Wardens FFactionResourceState
local FGlobalResourceState = {}



---@class FGlobalShardConfig
---@field DefaultShardId int32
---@field bEnableOverpopMode boolean
---@field bRedirectToShardSelector boolean
---@field OverpopShardId int32
---@field OverpopTextType EOverpopText
---@field OverpopYesButtonType EOverpopButtonText
---@field OverpopNoButtonType EOverpopButtonText
local FGlobalShardConfig = {}



---@class FGlobalShardProfile
---@field XP int32
---@field CP int16
---@field CPToGive int8
---@field XPForCP int32
---@field Level int8
---@field CommendHistories TArray<FCommendHistory>
local FGlobalShardProfile = {}



---@class FGlobalSpawnPoint
---@field Local FSpawnPoint
---@field Location FVector2D
---@field MapId EWorldConquestMapId
local FGlobalSpawnPoint = {}



---@class FGlobalSpawnPointMinimal
---@field ID uint32
---@field MapId EWorldConquestMapId
local FGlobalSpawnPointMinimal = {}



---@class FGlobalVehicleID
---@field MapId EWorldConquestMapId
---@field ID int32
local FGlobalVehicleID = {}



---@class FGrenadeDynamicData : FTableRowBase
---@field MinTossSpeed float
---@field MaxTossSpeed float
---@field GrenadeFuseTimer float
---@field GrenadeRangeLimit float
---@field ArmourDamageModifier float
local FGrenadeDynamicData = {}



---@class FGunnerInfo
---@field AmmoName FName
---@field AmmoAmount int32
---@field YawAndPitch FVector2D
---@field bIsFiring boolean
local FGunnerInfo = {}



---@class FHUDInfo
local FHUDInfo = {}


---@class FHUDStyle : FSlateWidgetStyle
---@field ActiveItemSlotBrush FSlateBrush
---@field InventorySlotButtonStyle FButtonStyle
---@field InventorySlotImageBrush FSlateBrush
---@field EquipmentSlotImageBrush FSlateBrush
---@field EquippedInventorySlotBrush FSlateBrush
---@field UnequippedInventorySlotBrush FSlateBrush
---@field StackBackgroundBrush FSlateBrush
---@field CursorOverTargetBrush FSlateBrush
---@field CursorNotReadyBrush FSlateBrush
---@field CursorIdleBrush FSlateBrush
---@field ItemStackSizeTextBlockStyle FTextBlockStyle
---@field ItemStackSizeSmallTextBlockStyle FTextBlockStyle
---@field ButtonTextBlockStyle FTextBlockStyle
---@field MapMarkerNotifTextBlockStyle FTextBlockStyle
---@field ChatChannelTextBlockStyle FTextBlockStyle
---@field ChatTextBlockStyle FTextBlockStyle
---@field EndscreenHeadingStyle FTextBlockStyle
---@field EndscreenTextBlockStyle FTextBlockStyle
---@field WeeklyWarCountdownTextBlockStyle FTextBlockStyle
---@field WoundedTimeTextBlockStyle FTextBlockStyle
---@field WoundedTextOffsetNormalized float
---@field DefaultBlackBackground FSlateBrush
---@field StaminaBarTop FSlateBrush
---@field StaminaBarBackground FSlateBrush
---@field HotbarBackground FSlateBrush
---@field SideAlertBackground FSlateBrush
---@field StorageBoxBackground FSlateBrush
---@field EquippedBackground FSlateBrush
---@field CompasBackground FSlateBrush
---@field CompasPoints FSlateBrush
---@field CompasNeedle FSlateBrush
---@field CompassCustomArrow FSlateBrush
---@field FistIcon FSlateBrush
---@field EncumberedIcon FSlateBrush
---@field EncumberedOverIcon FSlateBrush
---@field GasMaskFilterFullIcon FSlateBrush
---@field GasMaskFilterLowIcon FSlateBrush
---@field GasMaskFilterEmptyIcon FSlateBrush
---@field RadioBackpackIcon FSlateBrush
---@field RadioBackpackInactiveIcon FSlateBrush
---@field InvisibleIcon FSlateBrush
---@field BleedingIcon FSlateBrush
---@field FlareIcon FSlateBrush
---@field SubsystemTrackIcon FSlateBrush
---@field SubsystemFuelTankIcon FSlateBrush
---@field SubsystemTurretIcon FSlateBrush
---@field CoverIcon1 FSlateBrush
---@field CoverIcon2 FSlateBrush
---@field CoverIcon3 FSlateBrush
---@field SuppressionIcon FSlateBrush
---@field LockIcon FSlateBrush
---@field MapMarkerNotifBackground FSlateBrush
---@field ChatTabIcon FSlateBrush
---@field ChatOptionsIcon FButtonStyle
---@field ChatDiscordButton FButtonStyle
---@field ChatTabNotificationBrush FSlateBrush
---@field ChatMainBackground FSlateBrush
---@field ChatTextFieldBackground FSlateBrush
---@field ChatChannelFieldBackground FSlateBrush
---@field ChatUpVoteButton FButtonStyle
---@field ChatWarserviceConnectivityIcon FSlateBrush
---@field DescHeaderTextStyle FTextBlockStyle
---@field DescBodyTextStyle FTextBlockStyle
---@field DescBackgroundBrush FSlateBrush
---@field DescBackgroundBrushNoBottom FSlateBrush
---@field GenericDescBackgroundBrush FSlateBrush
---@field GenericDescBackgroundBrush2 FSlateBrush
---@field CreationButtonStyle FButtonStyle
---@field CreationHeadingStyle FTextBlockStyle
---@field CreationBackgroundBrush FSlateBrush
---@field ButtonStyle FButtonStyle
---@field UseIconButtonStyle FButtonStyle
---@field RecruitIconButtonStyle FButtonStyle
---@field StorageIconButtonStyle FButtonStyle
---@field AlertsLogButtonStyle FButtonStyle
---@field HiddenAlertsLogButtonStyle FButtonStyle
---@field AlertToggleClosedButtonStyle FButtonStyle
---@field AlertToggleOpenButtonStyle FButtonStyle
---@field XButtonStyle FButtonStyle
---@field CheckmarkButtonStyle FButtonStyle
---@field ChatStyle FChatStyle
---@field WinResultSound FSlateSound
---@field WinResultVictorySound FSlateSound
---@field WinResultDefeatSound FSlateSound
---@field RailCouplerIcon FSlateBrush
local FHUDStyle = {}



---@class FHelpToolTipStyle
---@field Button FButtonStyle
---@field BackgroundImage FSlateBrush
local FHelpToolTipStyle = {}



---@class FHitNotify
---@field HitComponent USceneComponent
---@field HitLocation FVector_NetQuantize
---@field HitNormal FVector_NetQuantizeNormal
---@field HitFromDirection FVector_NetQuantizeNormal
---@field PhysMaterial TWeakObjectPtr<UPhysicalMaterial>
---@field Damage float
local FHitNotify = {}



---@class FHornData
---@field Sound USoundCue
---@field CooldownSeconds float
local FHornData = {}



---@class FHospitalStyle
---@field UnoccupiedBedImage FSlateBrush
---@field OccupiedBedImage FSlateBrush
---@field BedFillImage FSlateBrush
local FHospitalStyle = {}



---@class FIconInfo
local FIconInfo = {}


---@class FIconsStyle
---@field ShowAllItems FSlateBrush
---@field SmallArms FSlateBrush
---@field HeavyArms FSlateBrush
---@field HeavyAmmo FSlateBrush
---@field Utility FSlateBrush
---@field Medical FSlateBrush
---@field Supplies FSlateBrush
---@field Uniforms FSlateBrush
---@field Vehicles FSlateBrush
---@field Structures FSlateBrush
---@field BasicMaterials FSlateBrush
---@field RefinedMaterials FSlateBrush
---@field ExplosiveMaterials FSlateBrush
---@field RefinedFuel FSlateBrush
---@field SmallGarrison FSlateBrush
---@field LargeGarrison FSlateBrush
---@field AdvancedMining FSlateBrush
---@field Encumbrance FSlateBrush
---@field Personal FSlateBrush
---@field Squad FSlateBrush
---@field Orders FSlateBrush
---@field Time FSlateBrush
---@field Supporters FSlateBrush
---@field MaintenanceSupplies FSlateBrush
---@field CratesSubCategory FSlateBrush
---@field WeaponsStructures FSlateBrush
---@field Reservable FSlateBrush
local FIconsStyle = {}



---@class FIdleAnimation
---@field ActivityMontage UAnimMontage
---@field Conditions FCharacterConditions
local FIdleAnimation = {}



---@class FImpactEffectOverride
---@field PhysicalSurface EPhysicalSurface
---@field EmitterTemplate UParticleSystem
---@field HitSound USoundCue
---@field Decal FDecalData
---@field bOrientToHitDirection boolean
---@field DamageThreshold float
local FImpactEffectOverride = {}



---@class FInfrastructureStyle
---@field Icon FSlateBrush
---@field Name FText
local FInfrastructureStyle = {}



---@class FInfrastructuresStyle
---@field Entries FInfrastructureStyle
---@field Items FTechTreeComponentUIItem
---@field VoteBrush FSlateBrush
---@field ActivityBonusButton FButtonStyle
local FInfrastructuresStyle = {}



---@class FInitialCharacterState
---@field ItemInstances TArray<FItemInstance>
local FInitialCharacterState = {}



---@class FInputAction
---@field Name FText
---@field Category EInputActionCategory
local FInputAction = {}



---@class FInputActions
---@field Actions TMap<FName, FInputAction>
local FInputActions = {}



---@class FInputStyle
---@field PageUp FSlateBrush
---@field PageDown FSlateBrush
local FInputStyle = {}



---@class FInteractContextMenuStyle
---@field LadderIcon FSlateBrush
---@field ServerTravelPortalIcon FSlateBrush
---@field ReadableSignIcon FSlateBrush
local FInteractContextMenuStyle = {}



---@class FInventoryStyle
---@field EncumbranceBorderBrush FSlateBrush
---@field LowEncumbranceColor FLinearColor
---@field MediumEncumbranceColor FLinearColor
---@field HighEncumbranceColor FLinearColor
local FInventoryStyle = {}



---@class FInviteToRegimentMessage
---@field InviterRegimentId int32
---@field TargetOnlineID FString
---@field InviterOnlineId FString
---@field InviterPlayerName FString
---@field InviterFactionId int8
---@field RegimentName FString
---@field RegimentTag FString
local FInviteToRegimentMessage = {}



---@class FItemDynamicData : FTableRowBase
---@field CostPerCrate TArray<FProductionResource>
---@field QuantityPerCrate int32
---@field CrateProductionTime float
---@field SingleRetrieveTime float
---@field CrateRetrieveTime float
---@field ResearchLevel int32
local FItemDynamicData = {}



---@class FItemGroupLayer
---@field MeshSizeX float
---@field MeshSizeY float
---@field MeshesAlongX int32
---@field MeshesAlongY int32
---@field MeshOffset FVector
local FItemGroupLayer = {}



---@class FItemGroupRenderLayout
---@field StaticMesh UStaticMesh
---@field MaxAmount int32
---@field LayerConfig FItemGroupLayer
---@field OddLayerConfig FItemGroupLayer
---@field MeshSizeZ float
---@field YawJitter float
---@field PitchJitter float
---@field RollJitter float
---@field OffsetJitter float
---@field ScaleJitter float
---@field LayerScaleDownFactor float
---@field LayerScaleDownFactor2D FVector2D
---@field bAllowFlipX boolean
---@field bAllowFlipZ boolean
---@field bAllowOddLayerRotation boolean
---@field LocalRotation FVector
---@field LocalScale float
---@field bIgnoreGenerateLayoutData boolean
local FItemGroupRenderLayout = {}



---@class FItemHolderData
---@field Component UItemHolderComponent
---@field Items TArray<FItemInstance>
local FItemHolderData = {}



---@class FItemInstance
---@field PickupCDO AItemPickup
---@field ItemComponent UItemComponent
---@field CodeName FName
---@field StackSize int8
---@field Payload uint16
---@field HolderId uint16
local FItemInstance = {}



---@class FItemProfileData
---@field bIsStockpilable boolean
---@field bIsStackable boolean
---@field bIsConvertibleToCrate boolean
---@field bIsCratable boolean
---@field bIsStockpiledWithAmmo boolean
---@field bUsableInVehicle boolean
---@field StackTransferLimit int32
---@field RetrieveQuantity int32
---@field ReserveStockpileMaxQuantity int32
local FItemProfileData = {}



---@class FItemSlotFilter
---@field CodeName FName
---@field ExtraCodeNames TSet<FName>
---@field StackLimit int32
local FItemSlotFilter = {}



---@class FItemStyle
---@field Size float
---@field EnabledColor FSlateColor
---@field DisabledColor FSlateColor
---@field CornerWidgetColor FSlateColor
---@field CornerWidgetWidth float
---@field CornerWidgetHeight float
---@field CornerWidgetPadding float
---@field SlotFilterBrush FSlateBrush
---@field MultiSlotFilterBrush FSlateBrush
local FItemStyle = {}



---@class FItemSubtypeStyle
---@field Size float
---@field SecondaryHudSize float
---@field Padding float
---@field IconColour FSlateColor
local FItemSubtypeStyle = {}



---@class FJoinSquadRequestMessage
---@field JoinMessage FJoinSquadWarMessage
---@field LeaderOnlineID FString
local FJoinSquadRequestMessage = {}



---@class FJoinSquadWarMessage
---@field SquadId int32
---@field NewMember FSquadMember
---@field NewMemberRegimentTag FString
local FJoinSquadWarMessage = {}



---@class FLandscapeDeformationTickFunction : FTickFunction
local FLandscapeDeformationTickFunction = {}


---@class FLargeShipGunnerInfo
---@field YawAndPitch FVector2D
---@field bIsWorking boolean
---@field bIsFiring boolean
---@field AmmoAmount int32
---@field AmmoName FName
local FLargeShipGunnerInfo = {}



---@class FLeakOffsetRange
---@field RelativeStartX float
---@field RelativeEndX float
---@field Offset float
---@field Side ELeakOffsetRangeSide
local FLeakOffsetRange = {}



---@class FLiquidTank
---@field CodeName FName
---@field Amount float
---@field bIsTypeSet boolean
---@field MaxAmount float
local FLiquidTank = {}



---@class FListViewStyle
---@field ListHeaderRowStyle FHeaderRowStyle
local FListViewStyle = {}



---@class FListeningAreaDebugData
---@field Location FVector2D
---@field Radius float
local FListeningAreaDebugData = {}



---@class FListeningAreaStyle
---@field RadiusBrush FSlateBrush
local FListeningAreaStyle = {}



---@class FLoSTraceHandle
local FLoSTraceHandle = {}


---@class FLoadoutBackpackItem
---@field CodeName FName
---@field Quantity int32
local FLoadoutBackpackItem = {}



---@class FLoadoutData
---@field LoadoutName FString
---@field EquipmentItems TArray<FLoadoutEquipmentItem>
---@field BackpackItems TArray<FLoadoutBackpackItem>
---@field NumBackpackSlots uint8
---@field bHasUniform boolean
---@field bAllowPartialAssembly boolean
---@field bAutoSubmitStarterItems boolean
local FLoadoutData = {}



---@class FLoadoutEquipmentItem
---@field CodeName FName
---@field Quantity uint8
---@field EquipmentSlot EEquipmentSlot
local FLoadoutEquipmentItem = {}



---@class FLoadoutSaveData
---@field LoadoutDataC TArray<FLoadoutData>
---@field LoadoutDataW TArray<FLoadoutData>
---@field SelectedLoadoutIndexC int32
---@field SelectedLoadoutIndexW int32
local FLoadoutSaveData = {}



---@class FLobbyStyle
---@field ColonialImage FSlateBrush
---@field WardenImage FSlateBrush
---@field TitleTextColour FSlateColor
---@field EditButton FButtonStyle
local FLobbyStyle = {}



---@class FLocalModerationInfo
---@field LastUsedSteamID FString
local FLocalModerationInfo = {}



---@class FLocalShardProfile
---@field GameServerProfile FGameServerProfile
---@field LastWarId FString
---@field OfflineCharacterExpiry FDateTime
---@field OfflineCharacterMapId EWorldConquestMapId
local FLocalShardProfile = {}



---@class FLocalShardProfileSerialized
---@field GameServerProfileBytes TArray<uint8>
---@field LastWarId FString
---@field OfflineCharacterExpiry int64
---@field OfflineCharacterMapId uint8
local FLocalShardProfileSerialized = {}



---@class FLocationMeshStop
---@field StaticMesh UStaticMesh
local FLocationMeshStop = {}



---@class FLocationSkeletalMeshStop
---@field SkeletalMesh USkeletalMesh
local FLocationSkeletalMeshStop = {}



---@class FLogCommsRatingChangeMessage
---@field OnlineID FString
---@field NewCondition int8
local FLogCommsRatingChangeMessage = {}



---@class FLogCreateRegimentRequest
---@field RegimentID int32
---@field RegimentName FString
---@field RegimentTag FString
---@field CreatorOnlineID FString
---@field CreatorName FString
local FLogCreateRegimentRequest = {}



---@class FLogCreateSquadRequest
---@field SquadId int32
---@field SquadName FString
---@field CreatorOnlineID FString
---@field CreatorName FString
local FLogCreateSquadRequest = {}



---@class FLogDisbandRegimentRequest
---@field RegimentID int32
---@field RegimentName FString
---@field RegimentTag FString
---@field InstigatorOnlineId FString
---@field InstigatorName FString
local FLogDisbandRegimentRequest = {}



---@class FLogEditRegimentRequest
---@field RegimentID int32
---@field RegimentName FString
---@field RegimentTag FString
---@field RegimentLink FString
---@field EditorOnlineID FString
---@field EditorName FString
---@field OldRegimentName FString
---@field OldRegimentTag FString
---@field OldRegimentLink FString
local FLogEditRegimentRequest = {}



---@class FLogRegimentMessage
---@field SenderName FString
---@field SenderOnlineId FString
---@field SenderFactionId int8
---@field RegimentID int32
---@field RegimentName FString
---@field Text FString
local FLogRegimentMessage = {}



---@class FLogSquadMessage
---@field SenderName FString
---@field SenderOnlineId FString
---@field SenderFactionId int8
---@field SquadId int32
---@field SquadName FString
---@field Text FString
local FLogSquadMessage = {}



---@class FLogStyle
---@field RetrieveColor FSlateColor
---@field SubmitColor FSlateColor
---@field ItemColor FSlateColor
---@field QuantityColor FSlateColor
local FLogStyle = {}



---@class FLogWhisperMessage
---@field SenderName FString
---@field SenderOnlineId FString
---@field SenderFactionId int8
---@field RecipientName FString
---@field RecipientOnlineID FString
---@field Text FString
local FLogWhisperMessage = {}



---@class FLoreData
---@field HeaderText FText
---@field Icon FSlateBrush
---@field FlavourText FText
---@field BodyText FText
---@field HintText FText
---@field ActionNames TArray<FName>
local FLoreData = {}



---@class FMapData
---@field DisplayName FText
---@field WorldConquestMapId EWorldConquestMapId
---@field Image UTexture2D
---@field bIsInHexGrid boolean
---@field GridCoord FIntPoint
---@field bIsIsland boolean
---@field bCanOceanTravel boolean
local FMapData = {}



---@class FMapDetailStockpileInfo
---@field Items TArray<FStockpileEntry>
---@field ItemCrates TArray<FStockpileEntry>
---@field Vehicles TArray<FStockpileEntry>
---@field VehicleCrates TArray<FStockpileEntry>
---@field Structures TArray<FStockpileEntry>
---@field StructureCrates TArray<FStockpileEntry>
local FMapDetailStockpileInfo = {}



---@class FMapElementScale
---@field MapData float
---@field MapIntel float
---@field MapText float
local FMapElementScale = {}



---@class FMapElementVisibilityZoomThresholds
---@field MapNames FVector2D
---@field MapData FVector2D
---@field MajorMapMarkerText FVector2D
---@field MinorMapMarkerText FVector2D
---@field MapIntel FVector2D
---@field MapGrid FVector2D
---@field HexBorder FVector2D
---@field MapPostLowRank FVector2D
---@field MapPostHighRank FVector2D
---@field RegionZones FVector2D
---@field Weather FVector2D
---@field Railways FVector2D
local FMapElementVisibilityZoomThresholds = {}



---@class FMapGridConfig
---@field BackgroundColor FLinearColor
---@field BackgroundImage FSlateBrush
---@field BackgroundImageScale float
---@field LineColor FLinearColor
---@field KeypadLineColor FLinearColor
---@field LineThickness float
---@field LineExtension float
---@field KeypadHighlightColor FLinearColor
---@field KeypadTextItemScale float
---@field TextColor FLinearColor
---@field KeypadTextColor FLinearColor
---@field LetterPositionOffsetY float
---@field NumberPositionOffsetX float
---@field TextItemScale float
local FMapGridConfig = {}



---@class FMapIconStyle
---@field CodeName FName
---@field Category EMapIconCategory
---@field bHideInSecureMap boolean
---@field bUseTeamSpecificIcon boolean
---@field IntelDetectionRadius float
---@field HalfDetectionAngle float
---@field SortOrder uint32
---@field FactionIconBrushes FSlateBrush
local FMapIconStyle = {}



---@class FMapIntelHistoricSnapshot
local FMapIntelHistoricSnapshot = {}


---@class FMapIntelList
---@field MapId int8
---@field PackedIntelItems TArray<int64>
local FMapIntelList = {}



---@class FMapIntelLoSRequest
local FMapIntelLoSRequest = {}


---@class FMapIntelRequest
local FMapIntelRequest = {}


---@class FMapIntelResponse
---@field MapIntelLists TArray<FMapIntelList>
local FMapIntelResponse = {}



---@class FMapIntelUpdate
---@field MapId int8
---@field PackedColonialIntelItems TArray<int64>
---@field PackedWardenIntelItems TArray<int64>
local FMapIntelUpdate = {}



---@class FMapIntelligenceItem
---@field TeamId uint8
---@field Type EMapIntelligenceType
---@field TimeRemaining float
---@field Location FVector2D
---@field NormalizedMapLocation FVector2D
---@field bStructureWasAttackedRecently boolean
---@field ListeningTeamID uint8
local FMapIntelligenceItem = {}



---@class FMapIntelligenceTypeConfig
---@field Category EMapIntelCategory
---@field FadeSeconds float
---@field ExpirySeconds float
---@field FactionIconBrush FMapIntelligenceTypeIcon
---@field bRequiresPlayerLineOfSight boolean
local FMapIntelligenceTypeConfig = {}



---@class FMapIntelligenceTypeIcon
---@field IconBrush FSlateBrush
---@field FadedIconBrush FSlateBrush
local FMapIntelligenceTypeIcon = {}



---@class FMapItem
---@field ObjectIndex int32
---@field ObjectSerialNumber int32
---@field TeamId EMapTeamId
---@field ListeningTeamID EMapTeamId
---@field IconType EMapIconType
---@field Flags uint8
---@field NormalizedLocation FVector2D
---@field ViewDirection uint8
local FMapItem = {}



---@class FMapItemDetails
---@field Flags uint16
---@field DetailValue int16
---@field AltDetailValue int16
---@field StockpileInfo FMapDetailStockpileInfo
---@field ReserveStockpileInfoList TArray<FReserveStockpileMapDetailInfo>
---@field Values TArray<uint8>
local FMapItemDetails = {}



---@class FMapItemInfo
---@field CodeName FName
---@field DetailValue int16
local FMapItemInfo = {}



---@class FMapLegendFactionStyle
---@field InfantryBrush FSlateBrush
---@field VehicleBrush FSlateBrush
---@field LargeShipBrush FSlateBrush
---@field StructureBrush FSlateBrush
---@field DefenseBrush FSlateBrush
---@field HowitzerBrush FSlateBrush
---@field OutpostBrush FSlateBrush
---@field FieldHospitalBrush FSlateBrush
---@field FacilityBrush FSlateBrush
local FMapLegendFactionStyle = {}



---@class FMapLegendFilter
---@field VisibleCategories uint16
---@field VisibleIntelC uint16
---@field VisibleIntelW uint16
---@field VisibleIcons uint8
local FMapLegendFilter = {}



---@class FMapLegendStyle
---@field WinConditionBrush FSlateBrush
---@field Colonial FMapLegendFactionStyle
---@field Warden FMapLegendFactionStyle
local FMapLegendStyle = {}



---@class FMapPostDetails
---@field Flags uint16
---@field SummedItems TArray<FMapPostItemEntry>
---@field MapItemInfos TArray<FMapItemInfo>
local FMapPostDetails = {}



---@class FMapPostEntry
---@field Member FMapPostMember
---@field Text FString
---@field UnixTimeStamp int64
local FMapPostEntry = {}



---@class FMapPostItemEntry
---@field CodeName FName
---@field Quantity int32
local FMapPostItemEntry = {}



---@class FMapPostManager
local FMapPostManager = {}


---@class FMapPostMember
---@field OnlineID FString
---@field Name FString
local FMapPostMember = {}



---@class FMapPostQueryData
---@field MapPostID int32
---@field MapId int8
---@field FacilityMapPostType int8
---@field NormalizedMapCoords FVector2D
local FMapPostQueryData = {}



---@class FMapPostReplyRequest
---@field OriginalPosterOnlineId FString
---@field ReplyText FString
local FMapPostReplyRequest = {}



---@class FMapPostReplyResponse
---@field bSuccess boolean
local FMapPostReplyResponse = {}



---@class FMapPostRequest
---@field MapPostID int32
---@field OriginMapID int8
---@field RequesterFactionID EFactionId
---@field RequesterOnlineID FString
---@field Requester FUObjectHandle
local FMapPostRequest = {}



---@class FMapPostResponse
---@field QueryData FMapPostQueryData
---@field OriginMapID int8
---@field RequesterFactionID EFactionId
---@field RequesterOnlineID FString
---@field Requester FUObjectHandle
local FMapPostResponse = {}



---@class FMapPostStyle
---@field MarkerIcon FSlateBrush
---@field GlobalTeamColour FLinearColor
---@field SquadColour FLinearColor
---@field RegimentColour FLinearColor
---@field IntelligenceColour FLinearColor
---@field FacilityColour FLinearColor
---@field LogisticsColour FLinearColor
---@field UpVoteButton FButtonStyle
---@field UpVoteButtonVoted FButtonStyle
---@field DownVoteButton FButtonStyle
---@field DownVoteButtonVoted FButtonStyle
---@field ReplyButton FButtonStyle
---@field TextInputBoxStyle FEditableTextBoxStyle
---@field BackgroundImage FSlateBrush
---@field ContentBackgroundImage FSlateBrush
---@field FacilityPostMapIcons FSlateBrush
local FMapPostStyle = {}



---@class FMapPostVoteRequest
---@field OriginalPosterOnlineId FString
---@field VoteType EMapPostVoteType
local FMapPostVoteRequest = {}



---@class FMapPostVoteResponse
---@field bSuccess boolean
local FMapPostVoteResponse = {}



---@class FMapRailwayFactionMessage
---@field FactionId int8
---@field MapId int8
---@field Lines TArray<FMapRailwayLine>
local FMapRailwayFactionMessage = {}



---@class FMapRailwayLine
---@field P0 FVector2D
---@field P1 FVector2D
---@field P2 FVector2D
---@field P3 FVector2D
---@field P4 FVector2D
local FMapRailwayLine = {}



---@class FMapRailwayMessage
---@field MapId int8
---@field Version int32
---@field Lines TArray<FMapRailwayLine>
local FMapRailwayMessage = {}



---@class FMapRailwayRequest
local FMapRailwayRequest = {}


---@class FMapRailwayResponse
---@field Messages TArray<FMapRailwayMessage>
local FMapRailwayResponse = {}



---@class FMapSnapshotDatum
---@field IntelCount uint32
---@field RequesterScouted boolean
local FMapSnapshotDatum = {}



---@class FMapSnapshotRequest
local FMapSnapshotRequest = {}


---@class FMapStyle : FSlateWidgetStyle
---@field MapMarkerTextBlockStyle FTextBlockStyle
---@field MajorMapMarkerTextBlockStyle FTextBlockStyle
---@field MapNameTextBlockStyle FTextBlockStyle
---@field PlayerMarkerBrush FSlateBrush
---@field ClaimedTownColonial FSlateBrush
---@field ClaimedTownWarden FSlateBrush
---@field WatchTowerRadiusBrush FSlateBrush
---@field WatchTowerConeBrush FSlateBrush
---@field GridConfig FMapGridConfig
---@field DisabledRegionTint FLinearColor
---@field MinZoom float
---@field DefaultZoom float
---@field MaxZoom float
---@field MapElementVisibilityZoomThresholds FMapElementVisibilityZoomThresholds
---@field MapElementScale FMapElementScale
---@field HexBorderColour FLinearColor
---@field OceanZoneColour FLinearColor
---@field HexBorderThickness float
---@field MinIconScale float
---@field MaxIconScale float
---@field MinIntelIconScale float
---@field MaxIntelIconScale float
---@field MinPlayerMarkerScale float
---@field MaxPlayerMarkerScale float
---@field TownBaseBrush FSlateBrush
---@field LegendStyle FMapLegendStyle
---@field ScorchedIconColor FLinearColor
---@field RegionMapContextBG FSlateBrush
---@field WinConditionStyle FWinConditionStyle
---@field MapPostStyle FMapPostStyle
---@field TravelMapStyle FTravelMapStyle
---@field MapMaintenanceStyle FSlateBrush
---@field MapIconStyles FMapIconStyle
local FMapStyle = {}



---@class FMapTextItem
---@field NormalizedLocation FVector2D
---@field Text FString
---@field MapMarkerType EMapMarkerType
local FMapTextItem = {}



---@class FMaterialOverride
---@field Index int32
---@field Material UMaterialInstance
local FMaterialOverride = {}



---@class FMeleeAttackData
---@field StaminaCostNormalized float
---@field Damage float
---@field Delay float
local FMeleeAttackData = {}



---@class FMeleeDynamicData : FTableRowBase
---@field ChargingMaxSpeedModifier float
---@field BlockingMaxSpeedModifier float
---@field QuickAttack FMeleeAttackData
---@field LongAttack FMeleeAttackData
local FMeleeDynamicData = {}



---@class FMeshConfigSurfaceSettings
---@field bEnableSurfaceDeltaLowerBound boolean
---@field SurfaceDeltaLowerBound float
---@field bEnableSurfaceDeltaUpperBound boolean
---@field SurfaceDeltaUpperBound float
---@field bRequireBothSidesWithinBounds boolean
---@field PhysMatBlockList TArray<UPhysicalMaterial>
local FMeshConfigSurfaceSettings = {}



---@class FMeshStop
---@field Threshold int32
---@field StaticMesh UStaticMesh
local FMeshStop = {}



---@class FModBanRequest
---@field TargetOnlineID FString
---@field TargetPlayerName FString
---@field TargetDeviceId FString
---@field TargetPlayerTeamId int8
---@field BanDurationSec int64
---@field UnderReviewDurationSec int64
---@field BanReason EBanReason
---@field AdminOnlineID FString
---@field AdminPlayerName FString
local FModBanRequest = {}



---@class FModerationHelper
local FModerationHelper = {}


---@class FModificationDefinition
---@field DisplayName FText
---@field Description FText
---@field Icon FSlateBrush
---@field RequiredSocketConnectionMask int64
---@field HiddenBySocketConnectionMask int64
---@field bIsRemovable boolean
---@field bVehicleBlocksRemoval boolean
---@field bHiddenByDefault boolean
---@field bVisualsAreClientOnly boolean
---@field bShowInBuildSite boolean
---@field bBuildFootprintIgnoresConnectedActors boolean
---@field TechID ETechID
---@field InfrastructureType EInfrastructureType
---@field InfrastructureAmount int32
---@field BuildFootprintTemplate TSubclassOf<AModificationTemplate>
---@field Tiers TMap<EFortTier, FModificationTier>
local FModificationDefinition = {}



---@class FModificationSlotMigration
---@field PreviousComponentDirection uint8
---@field ModificationType EFortModificationType
---@field SlotName FName
local FModificationSlotMigration = {}



---@class FModificationSocketPreviewInfo
---@field ModificationSlotComponentName FName
---@field ModificationType EFortModificationType
---@field ModificationTier EFortTier
local FModificationSocketPreviewInfo = {}



---@class FModificationTier
---@field ResourceAmounts FResourceAmounts
---@field RemoveCostOverride FResourceAmounts
---@field bUseTemplateActor boolean
---@field TemplateMesh UStaticMesh
---@field TemplateActor TSubclassOf<AModificationTemplate>
---@field bUsePreviewMesh boolean
---@field PreviewMesh UStaticMesh
local FModificationTier = {}



---@class FModifiedFoliageInfo
local FModifiedFoliageInfo = {}


---@class FModifiedRegimentIdMessage
---@field ID int32
---@field FactionId int8
---@field OnlineID FString
local FModifiedRegimentIdMessage = {}



---@class FModifiedSquadIdMessage
---@field FactionId int8
---@field OnlineID FString
---@field Records TArray<FModifiedSquadIdRecord>
local FModifiedSquadIdMessage = {}



---@class FModifiedSquadIdRecord
---@field SquadId int32
---@field bIsLeader boolean
local FModifiedSquadIdRecord = {}



---@class FModifiedSquadInfoMessage
---@field SquadInfo FSquadInfo
local FModifiedSquadInfoMessage = {}



---@class FModifiedSquadMessage
---@field ModifiedSquad FSquad
local FModifiedSquadMessage = {}



---@class FModularMount
---@field ItemCodeName FName
---@field CodeName FName
---@field Component TSubclassOf<UMountComponent>
---@field SkeletalMesh USkeletalMesh
local FModularMount = {}



---@class FModularMounts
---@field Entries TArray<FModularMount>
local FModularMounts = {}



---@class FMountDynamicData : FTableRowBase
---@field SuppressionMultiplier float
---@field MaxHorizontalDeviation float
---@field MaxVerticalDeviation float
---@field CoverProvided float
---@field FiringConeInfo FWeaponFiringConeInfo
---@field TrackingSpeed float
---@field TrackingThreshold float
---@field MaxAmmo int32
---@field MinDistance float
---@field MaxDistance float
---@field MaxReachability float
---@field ScopeRadius int32
---@field MinYaw float
---@field MaxYaw float
---@field YawOffset float
---@field MinPitch float
---@field MaxPitch float
---@field FiringDuration float
---@field ReloadDuration float
---@field DamageMultiplier float
---@field ArtilleryAccuracyMinDist float
---@field ArtilleryAccuracyMaxDist float
---@field AddedBurningMultiplier float
---@field FiringImpulse float
---@field ArmourDamageModifier float
---@field TargetStabilityReductionPerShot float
---@field BreachingModifier float
local FMountDynamicData = {}



---@class FMovementModifierData
---@field Stances FMovementModifierForStanceData
local FMovementModifierData = {}



---@class FMovementModifierForStanceData
---@field TurnRateScale float
---@field WalkingSpeedScale float
local FMovementModifierForStanceData = {}



---@class FMultiAmmo
---@field Ammo int32
---@field AmmoType FName
---@field DesiredAmmoType FName
---@field CompatibleAmmoNames TArray<FName>
---@field AmmoSlotFilterAmounts TArray<int32>
local FMultiAmmo = {}



---@class FMultiConversionInfo
---@field ItemInput TArray<FConversionItem>
---@field CrateInput TArray<FConversionItem>
---@field LiquidInput TArray<FConversionLiquid>
---@field ItemOutput TArray<FConversionItem>
---@field CrateOutput TArray<FConversionItem>
---@field LiquidOutput TArray<FConversionLiquid>
---@field Duration int32
---@field PowerDelta int32
---@field bConsumeResourceNodes boolean
local FMultiConversionInfo = {}



---@class FMuzzleInfo
---@field GunnerIndex int32
---@field MuzzleIndex int32
---@field SocketName FName
local FMuzzleInfo = {}



---@class FMuzzleOffsetVector_NetQuantize : FVector
local FMuzzleOffsetVector_NetQuantize = {}


---@class FNamedParameterRange
---@field Name FName
---@field Start float
---@field End float
local FNamedParameterRange = {}



---@class FNewsItemInfo
---@field ImageTexture UTexture2DDynamic
local FNewsItemInfo = {}



---@class FOutfitMeshInfo
---@field OutfitMeshTable TMap<EOutfitMeshInfoType, FCharacterRenderInfo>
local FOutfitMeshInfo = {}



---@class FOutpostInfo
---@field TeamId int8
---@field Location FVector2D_NetQuantize
local FOutpostInfo = {}



---@class FPIDController
---@field PID FVector
---@field IntegralSaturation float
---@field OutputSaturation float
---@field bUseValueRate boolean
local FPIDController = {}



---@class FPathSocket
---@field ID uint8
---@field PackedAlpha float
---@field Socket TWeakObjectPtr<UBuildSocketComponent>
---@field CleanupHandle FTimerHandle
local FPathSocket = {}



---@class FPayloadMeshes
---@field GunnerIndex int32
---@field bUseForMuzzleTransform boolean
local FPayloadMeshes = {}



---@class FPhysicalMaterialResolver
---@field MaterialsEffectedByImpact TArray<UPhysicalMaterial>
---@field ImpactedMaterial UPhysicalMaterial
---@field SnowMaterial UPhysicalMaterial
local FPhysicalMaterialResolver = {}



---@class FPipelineSocket
---@field Type EPipeType
---@field Index uint8
local FPipelineSocket = {}



---@class FPipelineSystem
---@field CodeName FName
---@field Amount float
---@field MaxAmount float
local FPipelineSystem = {}



---@class FPlayerActivity
---@field EnemyPlayerDamage float
---@field FriendlyPlayerDamage float
---@field EnemyDamage float
---@field FriendlyDamage float
---@field FriendlyConstruction int32
---@field FriendlyRepairing int32
---@field FriendlyHealing float
---@field FriendlyRevivals int16
---@field VehiclesTransferred int16
---@field VehicleSelfDamage float
---@field VehicleSelfDamageC float
---@field VehicleSelfDamageW float
---@field MaterialsSubmitted int32
---@field MaterialsGathered int32
---@field SuppliesDelivered int32
local FPlayerActivity = {}



---@class FPlayerAdjustment
---@field NewLocation FVector
---@field NewVelocity FVector
---@field NewBase UPrimitiveComponent
---@field NewBaseBoneName FName
---@field bHasBase boolean
---@field bBaseRelativePosition boolean
---@field bBaseRelativeVelocity boolean
---@field ServerMovementMode uint8
---@field QuantizedStagger uint8
local FPlayerAdjustment = {}



---@class FPlayerBan
---@field BanLiftTimeUnix int64
---@field UnderReviewLiftTimeUnix int64
---@field BanReason EBanReason
local FPlayerBan = {}



---@class FPlayerModBannedMessage
---@field ModBanRequest FModBanRequest
---@field bIsSenderServer boolean
local FPlayerModBannedMessage = {}



---@class FPlayerServerData
---@field FactionId EFactionId
---@field RegionId EWorldConquestMapId
---@field PermissionLevel EPermissionLevel
---@field Name FString
---@field OnlineID FString
local FPlayerServerData = {}



---@class FPlayerSpawnPoints
---@field StaticBase FGlobalSpawnPoint
---@field ForwardBase FGlobalSpawnPoint
---@field MedicalBase FGlobalSpawnPoint
---@field SelectedCategory ESpawnPointCategory
local FPlayerSpawnPoints = {}



---@class FPlayerSpawnPointsInfo
---@field StaticBase FSpawnPointInfo
---@field ForwardBase FSpawnPointInfo
---@field MedicalBase FSpawnPointInfo
local FPlayerSpawnPointsInfo = {}



---@class FPlayerVoteBannedMessage
---@field VoteKickRequest FVoteKickRequest
---@field bIsSenderServer boolean
---@field BanDurationSec int64
local FPlayerVoteBannedMessage = {}



---@class FPlayerVoteKickInfo
---@field OnlineID FString
---@field PlayerName FString
---@field DeviceID FString
---@field RegimentID int32
---@field TeamId uint8
---@field VoteKickCategory EUserVoteKickCategory
---@field VoteKickCategoryCountMap TMap<EUserVoteKickCategory, int32>
---@field RecentTeamKills float
---@field RecentFriendlyCharacterDamage float
---@field RecentFriendlyStructureDamage float
---@field RecentFriendlyVehicleDamage float
---@field RecentNameChanges int16
local FPlayerVoteKickInfo = {}



---@class FPlayerWarState
---@field LastTeamId int8
---@field TimePlayedTeam0 float
---@field TimePlayedTeam1 float
---@field SpawnPoints FPlayerSpawnPoints
---@field DeployHistory FDeployHistory
---@field TechTreeVotes FTechTreeComponentVotes
---@field ZombieType EZombieType
---@field NumUnstuckCommandsUsed int32
---@field LastPostTravelInvul FDateTime
---@field LastResourceSpawn FDateTime
---@field TimeInConquest float
---@field Activity FPlayerActivity
local FPlayerWarState = {}



---@class FPowerGridInfo
---@field PowerDelta int32
---@field MaxConnections int32
---@field bAllowDisabling boolean
---@field bIsDisabled boolean
---@field PowerProvided int32
---@field PowerConsumed int32
---@field Connections TWeakObjectPtr<AActor>
---@field ConnectionNames FName
local FPowerGridInfo = {}



---@class FProductionResource
---@field ItemCodeName FName
---@field Quantity uint16
local FProductionResource = {}



---@class FProgressBarButtonStyle
---@field BGImage FSlateBrush
---@field FillImage FSlateBrush
---@field Button FButtonStyle
local FProgressBarButtonStyle = {}



---@class FProjectileHitInfo_NetQuantize
---@field ImpactPoint FVector_NetQuantize
---@field ImpactNormal FVector_NetQuantizeNormal
---@field Actor TWeakObjectPtr<AActor>
---@field Component TWeakObjectPtr<UPrimitiveComponent>
---@field BoneName FName
---@field PhysMaterial TWeakObjectPtr<UPhysicalMaterial>
local FProjectileHitInfo_NetQuantize = {}



---@class FPuddleDecalInfo
---@field Decal FDecalData
---@field RequiredPhysMats TArray<UPhysicalMaterial>
local FPuddleDecalInfo = {}



---@class FPuddleInfo
---@field Location FVector
---@field Rotation FQuat
---@field Volume UPuddleComponent
---@field Decal UDecalComponent
---@field SpawnBlocker TWeakObjectPtr<AActor>
---@field Radius float
---@field Rainfall float
---@field MaxRainfall float
---@field DecalIx int8
---@field DevastatedDecalIx int8
---@field SpawnedDecalIx int8
local FPuddleInfo = {}



---@class FPutProfileRequest
---@field OnlineID FString
---@field WarPlayerProfileSerialized FWarPlayerProfileSerialized
local FPutProfileRequest = {}



---@class FQuantizedTimestamp
---@field Value uint32
local FQuantizedTimestamp = {}



---@class FQueueStyle
---@field ProductionArrowRightBGImage FSlateBrush
---@field ProductionArrowRightFillImage FSlateBrush
---@field ProgressBarBGImage FSlateBrush
---@field ProgressBarFillImage FSlateBrush
---@field EmptyButtonImage FSlateBrush
---@field AddButtonStyle FButtonStyle
---@field CancelButtonStyle FButtonStyle
---@field SubmitButtonStyle FButtonStyle
---@field PickupButtonStyle FButtonStyle
---@field UpgradeButtonStyle FButtonStyle
---@field TimerIcon FSlateBrush
---@field CostBackgroundStyle FSlateBrush
---@field AccessLevelStyle FComboBoxStyle
---@field QueueTimerColor FSlateColor
local FQueueStyle = {}



---@class FQueuedPlayer
---@field UniqueId FUniqueNetIdRepl
---@field BeaconClient AWarBeaconClient
---@field TimeoutTime FDateTime
---@field IsConnected boolean
local FQueuedPlayer = {}



---@class FRPCBorderBaseClaimRequest
---@field ObjectHandle FUObjectHandle
---@field OriginMapID EWorldConquestMapId
---@field RoadID uint8
---@field ClaimingFaction EFactionId
local FRPCBorderBaseClaimRequest = {}



---@class FRPCBorderBaseClaimResponse
---@field ObjectHandle FUObjectHandle
---@field ClaimingFaction EFactionId
---@field Response uint8
---@field bIsUsable boolean
---@field bAllowClaimOverride boolean
local FRPCBorderBaseClaimResponse = {}



---@class FRPCCrossRegionActorBroadcast
---@field OriginServer EWorldConquestMapId
---@field InitTicks int64
---@field Ids TArray<int32>
local FRPCCrossRegionActorBroadcast = {}



---@class FRPCCrossRegionActorRequest
---@field RequestingServer EWorldConquestMapId
---@field Ids TArray<int32>
local FRPCCrossRegionActorRequest = {}



---@class FRPCCrossRegionChangelistBroadcast
---@field OriginServer EWorldConquestMapId
---@field NewActors TArray<FCrossRegionActorData>
---@field RemovedActors TArray<int32>
local FRPCCrossRegionChangelistBroadcast = {}



---@class FRPCIntelCenterFireListeningAreaEvent
---@field Location2D FVector2D
---@field FactionId EFactionId
---@field Radius float
---@field Duration float
local FRPCIntelCenterFireListeningAreaEvent = {}



---@class FRPCLRAFireShellEvent
---@field Location2D FVector2D
---@field FactionId EFactionId
---@field ArtilleryType ELongRangeArtilleryType
---@field ShooterLocation FVector2D
local FRPCLRAFireShellEvent = {}



---@class FRPCMapItemRequest
---@field Origin EWorldConquestMapId
---@field RequesterFactionID EFactionId
---@field RequesterOnlineID FString
---@field Requester FUObjectHandle
---@field MapItem FUObjectHandle
local FRPCMapItemRequest = {}



---@class FRPCMapItemResponse
---@field Origin EWorldConquestMapId
---@field Requester FUObjectHandle
---@field MapItem FUObjectHandle
---@field MapItemDetails FMapItemDetails
local FRPCMapItemResponse = {}



---@class FRPCMapPostMessage
---@field bFoundMapPostDetails boolean
---@field MapPostID int32
---@field MapPostDetails FMapPostDetails
---@field Requester FUObjectHandle
local FRPCMapPostMessage = {}



---@class FRPCRegionZoneRequest
---@field Origin EWorldConquestMapId
---@field Requester FUObjectHandle
---@field Faction EFactionId
local FRPCRegionZoneRequest = {}



---@class FRPCRegionZoneResponse
---@field Origin EWorldConquestMapId
---@field Requester FUObjectHandle
---@field Data FRegionMinimalData
local FRPCRegionZoneResponse = {}



---@class FRPCRocketLaunchCodeRequest
---@field Requester FUObjectHandle
---@field LaunchCodeID uint16
---@field Origin EWorldConquestMapId
---@field FactionId EFactionId
---@field LocalStrikeLocation FVector_NetQuantize
local FRPCRocketLaunchCodeRequest = {}



---@class FRPCRocketLaunchCodeResponse
---@field Requester FUObjectHandle
---@field LaunchCodeID uint16
---@field Origin EWorldConquestMapId
---@field TraceResult ERocketLaunchResponse
---@field LocalStrikeLocation FVector_NetQuantize
---@field Coordinate FWarGridCoordinate
local FRPCRocketLaunchCodeResponse = {}



---@class FRPCRocketLaunchFail
---@field LaunchCodeID uint16
---@field Origin EWorldConquestMapId
local FRPCRocketLaunchFail = {}



---@class FRPCRocketPreLaunchAlert
---@field LaunchCodeID uint16
---@field Origin EWorldConquestMapId
---@field FactionId EFactionId
---@field TargetMapID EWorldConquestMapId
---@field Coordinate FWarGridCoordinate
---@field LocalStrikeLocation FVector_NetQuantize
local FRPCRocketPreLaunchAlert = {}



---@class FRPCRocketPreLaunchUpdateAlert
---@field Origin EWorldConquestMapId
---@field FactionId EFactionId
---@field TargetMapID EWorldConquestMapId
local FRPCRocketPreLaunchUpdateAlert = {}



---@class FRPCRocketTargetUpdate
---@field LaunchCodeID uint16
---@field Origin EWorldConquestMapId
---@field FactionId EFactionId
---@field LocalStrikeLocation FVector_NetQuantize
---@field LaunchTimeRemaining float
local FRPCRocketTargetUpdate = {}



---@class FRPCRocketTravel
---@field Origin EWorldConquestMapId
---@field FactionId EFactionId
---@field Info FRocketLaunchCodeInfo
---@field LocalStrikeLocation FVector_NetQuantize
local FRPCRocketTravel = {}



---@class FRPCWeatherConnectRequest
---@field SenderID FWeatherStationID
---@field SenderCoordinate FWarGridCoordinate
---@field WorldLocation2D FVector2D
---@field TargetLocalID uint8
---@field FactionId EFactionId
local FRPCWeatherConnectRequest = {}



---@class FRPCWeatherConnectResponse
---@field SenderID FWeatherStationID
---@field SenderCoordinate FWarGridCoordinate
---@field TargetLocalID uint8
---@field Result EWeatherStationResult
local FRPCWeatherConnectResponse = {}



---@class FRPCWeatherDisconnectEvent
---@field SenderID FWeatherStationID
---@field TargetLocalID uint8
local FRPCWeatherDisconnectEvent = {}



---@class FRPCWeatherDisconnectRequest
---@field SenderID FWeatherStationID
---@field TargetLocalID uint8
---@field FactionId EFactionId
local FRPCWeatherDisconnectRequest = {}



---@class FRPCWeatherDisconnectResponse
---@field SenderID FWeatherStationID
---@field TargetLocalID uint8
---@field Result EWeatherStationResult
local FRPCWeatherDisconnectResponse = {}



---@class FRWDAdjustment
---@field NewLoc FVector
---@field NewRot FQuat
---@field NewVelocity FVector
---@field NewAngularMomentum FVector
---@field ServerMovementMode uint8
---@field NewBase UPrimitiveComponent
---@field NewBaseBoneName FName
---@field bHasBase boolean
---@field bBaseRelativePosition boolean
---@field QuantizedMuddyness uint8
local FRWDAdjustment = {}



---@class FRWDMove
---@field Loc FVector_NetQuantize100
---@field InAccel FVector2D_NetQuantize10
---@field Timestamp float
---@field View uint32
---@field Roll uint8
---@field CompressedMoveFlags uint8
---@field MovementMode uint8
---@field QuantizedMuddyness uint8
local FRWDMove = {}



---@class FRWDMoveBase
---@field MovementBase UPrimitiveComponent
---@field BoneName FName
local FRWDMoveBase = {}



---@class FRWDMoveDual
---@field InAccel FVector2D_NetQuantize10
---@field Timestamp float
---@field View uint32
---@field CompressedMoveFlags uint8
local FRWDMoveDual = {}



---@class FRWDMoveTrailer
---@field Loc FVector_NetQuantize100
---@field MovementMode uint8
local FRWDMoveTrailer = {}



---@class FRWDVeryShortAdjustment
---@field NewLoc FVector
---@field NewRot FQuat
---@field ServerMovementMode uint8
---@field NewBase UPrimitiveComponent
---@field NewBaseBoneName FName
---@field bHasBase boolean
---@field bBaseRelativePosition boolean
---@field QuantizedMuddyness uint8
local FRWDVeryShortAdjustment = {}



---@class FRailParticleSystem
---@field System UParticleSystemComponent
---@field OriginalYaw float
---@field CurrentYaw float
local FRailParticleSystem = {}



---@class FRailPhysicsState
---@field WorldRotation FQuat
---@field FrontTrack ARailwayTrack
---@field RearTrack ARailwayTrack
---@field WorldLocation FVector
---@field LinearMomentum float
---@field DeferredImpulses float
---@field Forces float
---@field LinearSpeed float
---@field FrontAlpha float
---@field RearAlpha float
---@field bFrontWagonToRail boolean
---@field bRearWagonToRail boolean
---@field bWasCollidingWithTrailer boolean
---@field bWasBlocked boolean
local FRailPhysicsState = {}



---@class FRailSwitchState
---@field ID uint8
---@field bIsActive boolean
local FRailSwitchState = {}



---@class FRampData
---@field bUseGangwayRampTransformAsPivot boolean
---@field Pivot FTransform
---@field MaxExtension float
---@field SurfaceOffset float
---@field Width float
---@field MinimumAngle float
---@field MaximumAngle float
---@field AnimationAngleOffset float
---@field bCanOpenWithoutSurface boolean
---@field RampAngleWithNoDock float
---@field bRequireSandWhenNotAtDock boolean
local FRampData = {}



---@class FRay_NetQuantize
---@field Origin FVector_NetQuantize
---@field Direction FVector_NetQuantizeNormal
local FRay_NetQuantize = {}



---@class FReassignSquadLeaderWarMessage
---@field SquadId int32
---@field NewLeaderOnlineId FString
local FReassignSquadLeaderWarMessage = {}



---@class FRefinableItemInfo
---@field SourceItemClass TSubclassOf<AItemPickup>
---@field RefinedItemClass TSubclassOf<AItemPickup>
---@field SpeedModifier float
---@field YieldModifier float
---@field MaxRefinedItemCount int32
---@field TransferStackSize int32
local FRefinableItemInfo = {}



---@class FRefinableItemModifier
---@field SourceItemCodeName FName
---@field RefinedItemCodeName FName
---@field SpeedModifier float
---@field YieldModifier float
local FRefinableItemModifier = {}



---@class FRefinementOrder
---@field SourceItemCodeName FName
---@field RefinedItemCodeName FName
---@field ResourcesRefinedPerMinute float
---@field RemainingSourceCount int32
---@field CompletedCount float
---@field ProgressForCurrentUnit float
---@field OrderOwnerFactionId EFactionId
local FRefinementOrder = {}



---@class FRefinementOrderInfo
---@field AccessLevel ERefineryOrderAccessLevel
---@field OrderList TArray<FRefinementOrder>
---@field ExpiryTimestampTicks int64
local FRefinementOrderInfo = {}



---@class FRegiment
---@field ID int32
---@field TeamId int8
---@field Name FString
---@field Tag FString
---@field Link FString
---@field Members TArray<FRegimentMember>
---@field LastActiveWarId FString
local FRegiment = {}



---@class FRegimentChangeRoleMessage
---@field RegimentID int32
---@field TargetOnlineID FString
---@field DesiredTargetRole ERegimentRole
local FRegimentChangeRoleMessage = {}



---@class FRegimentChatMessage
---@field RegimentID int32
---@field SenderOnlineId FString
---@field SenderName FString
---@field Message FString
---@field ChatLanguage int8
local FRegimentChatMessage = {}



---@class FRegimentClientReplicatedState
---@field ActiveRegimentList TArray<FRegiment>
local FRegimentClientReplicatedState = {}



---@class FRegimentCreatedMessage
---@field CreatorOnlineID FString
---@field RegimentInfo FRegimentInfo
local FRegimentCreatedMessage = {}



---@class FRegimentEditMessage
---@field RegimentID int32
---@field Name FString
---@field Tag FString
---@field Link FString
local FRegimentEditMessage = {}



---@class FRegimentFullMessage
---@field RegimentID int32
local FRegimentFullMessage = {}



---@class FRegimentIdChangedMessage
---@field OnlineID FString
---@field RegimentID int32
local FRegimentIdChangedMessage = {}



---@class FRegimentIdClearedMessage
---@field OnlineID FString
local FRegimentIdClearedMessage = {}



---@class FRegimentInfo
---@field ID int32
---@field Tag FString
local FRegimentInfo = {}



---@class FRegimentInfoRequest
---@field RequestID int32
---@field RegimentIds TArray<int32>
---@field OnlineIds TArray<FString>
local FRegimentInfoRequest = {}



---@class FRegimentInfoResponse
---@field RequestID int32
---@field RegimentInfos TArray<FRegimentInfo>
---@field RegimentIds TArray<int32>
local FRegimentInfoResponse = {}



---@class FRegimentManager
local FRegimentManager = {}


---@class FRegimentMember
---@field OnlineID FString
---@field PlayerName FString
---@field Role ERegimentRole
local FRegimentMember = {}



---@class FRegimentMemberSquadIdMessage
---@field OnlineID FString
---@field SquadId int32
local FRegimentMemberSquadIdMessage = {}



---@class FRegimentMemberSquadIdsMessage
---@field Messages TArray<FRegimentMemberSquadIdMessage>
local FRegimentMemberSquadIdsMessage = {}



---@class FRegimentMessage
---@field Regiment FRegiment
local FRegimentMessage = {}



---@class FRegimentNotificationMessage
---@field RegimentID int32
---@field Type ERegimentNotificationType
---@field TargetOnlineID FString
---@field TargetPlayerName FString
---@field NewRole ERegimentRole
---@field NewRegimentName FString
---@field NewRegimentTag FString
local FRegimentNotificationMessage = {}



---@class FRegimentPromptParams
---@field Name FText
---@field Tag FText
---@field Link FText
local FRegimentPromptParams = {}



---@class FRegionConnectionInfo
---@field MapCodename FString
---@field ServerName FString
---@field serverType int8
---@field Version FString
---@field steamId FString
---@field ipAddress FString
---@field Port uint16
---@field PortBeacon uint16
---@field packedWarStatus uint64
---@field packedServerState uint64
---@field colonialQueueSize int16
---@field wardenQueueSize int16
---@field ColonialOpenSlots int16
---@field WardenOpenSlots int16
local FRegionConnectionInfo = {}



---@class FRegionLog
---@field Entries TArray<FRegionLogEntry>
---@field NextEntryIndex int32
---@field NextRegionLogID uint32
local FRegionLog = {}



---@class FRegionLogEntry
---@field OnlineID FString
---@field PlayerName FString
---@field Type ERegionLogEntryType
---@field Value uint32
---@field EventTime FDateTime
---@field LocationX float
---@field LocationY float
---@field RegionLogID uint32
---@field CodeName FName
local FRegionLogEntry = {}



---@class FRegionLogPage
---@field Entries TArray<FRegionLogEntry>
local FRegionLogPage = {}



---@class FRegionLogs
---@field Colonial FRegionLog
---@field Warden FRegionLog
local FRegionLogs = {}



---@class FRegionMapData
---@field Version int32
---@field RegionId EWorldConquestMapId
---@field ScorchedVictoryTowns int8
---@field MapItems TArray<FMapItem>
---@field MapItemsC TArray<FMapItem>
---@field MapItemsW TArray<FMapItem>
---@field TextItems TArray<FMapTextItem>
local FRegionMapData = {}



---@class FRegionMinimalData
---@field StarterRegionTeamID EFactionId
---@field ColonialStarterRegionZones TArray<FVector2D>
---@field WardenStarterRegionZones TArray<FVector2D>
local FRegionMinimalData = {}



---@class FRegionZoneManager
local FRegionZoneManager = {}


---@class FRemoveFromSquadWarMessage
---@field SquadId int32
---@field TargetOnlineID FString
local FRemoveFromSquadWarMessage = {}



---@class FRemoveMemberFromRegimentMessage
---@field RegimentID int32
---@field MemberToRemoveOnlineId FString
local FRemoveMemberFromRegimentMessage = {}



---@class FRenameSquadWarMessage
---@field SquadId int32
---@field NewName FString
local FRenameSquadWarMessage = {}



---@class FRepMapPost
---@field ID int32
---@field OriginalEntry FMapPostEntry
---@field ReplyList TArray<FMapPostEntry>
---@field NormalizedMapCoords FVector2D
---@field MapId int8
---@field MapPostType EMapPostType
---@field FacilityMapPostType EFacilityMapPostType
---@field LocalVoteType EMapPostVoteType
---@field GroupId int32
---@field TotalVotes int32
---@field Rank int32
local FRepMapPost = {}



---@class FRepPipelineSystem
---@field Index int32
---@field CodeName FName
---@field Amount float
---@field MaxAmount float
---@field ThroughputNormalized float
local FRepPipelineSystem = {}



---@class FRepPlayerMovement
---@field LinearVelocity FVector
---@field Location FVector
---@field Rotation FRotator
---@field MovementBase UPrimitiveComponent
---@field BoneName FName
---@field Timestamp FQuantizedTimestamp
---@field bServerHasBaseComponent boolean
---@field MovementMode uint8
---@field LocationQuantizationLevel EVectorQuantization
---@field VelocityQuantizationLevel EVectorQuantization
---@field RotationQuantizationLevel ERotatorQuantization
local FRepPlayerMovement = {}



---@class FRepRWDMovement
---@field LinearVelocity FVector
---@field AngularMomentum FVector
---@field Location FVector
---@field Rotation FRotator
---@field LastUpdateClientTimeStamp float
---@field ForwardInput float
---@field SteeringInput float
---@field bHandbrakeActivated boolean
---@field bBoostActivated boolean
---@field bIsInManualLowGear boolean
---@field SteeringAngle float
---@field bHasTractor boolean
---@field bHasTrailer boolean
---@field bIsForcedUpdate boolean
---@field TrailerMovement FRepRWDTrailerMovement
local FRepRWDMovement = {}



---@class FRepRWDTrailerMovement
---@field Trailer ARWDSimVehicle
---@field LinearVelocity FVector
---@field AngularMomentum FVector
---@field RelativeLocation FVector
---@field Rotation FRotator
---@field MovementMode uint8
local FRepRWDTrailerMovement = {}



---@class FRepRailwayMovement
---@field FrontTrack ARailwayTrack
---@field bFrontTrackSet boolean
---@field RearTrack ARailwayTrack
---@field bRearTrackSet boolean
---@field Actor ARailVehicle
---@field LinearMomentum float
---@field PackedPrimaryAlpha float
---@field Location FVector
---@field Rotation FRotator
local FRepRailwayMovement = {}



---@class FRepShipMovement
---@field LinearVelocity FVector
---@field AngularMomentum FVector
---@field Location FVector
---@field Rotation FRotator
---@field LastUpdateClientTimeStamp float
---@field ForwardInput float
---@field RudderInput float
---@field RudderAngle float
---@field DivePlaneAngle float
---@field bStabilizerActivated boolean
---@field bIsForcedUpdate boolean
local FRepShipMovement = {}



---@class FRepSnapInfo
---@field Type ESnapType
---@field SocketName FName
---@field ModificationSocketPreviewInfo FModificationSocketPreviewInfo
---@field TargetSocket UBuildSocketComponent
---@field RotationZ float
---@field TargetPath USplineConnectorComponent
---@field PathPackedAlpha float
local FRepSnapInfo = {}



---@class FRepTrainMovement
---@field Cars TArray<FRepRailwayMovement>
---@field LastUpdateClientTimeStamp float
---@field Acceleration int8
---@field bIsBoosting boolean
local FRepTrainMovement = {}



---@class FReplicatedShippableData
---@field Payload uint8
---@field AltPayload uint8
---@field Temperature uint8
---@field Items TArray<FStockpileEntry>
local FReplicatedShippableData = {}



---@class FRequestSquadOfficerToLeaderMessage
---@field SquadId int32
---@field OfficerOnlineId FString
local FRequestSquadOfficerToLeaderMessage = {}



---@class FReservePower
---@field MaxAmount float
---@field Amount float
local FReservePower = {}



---@class FReserveStockpileActionStyle
---@field ButtonStyle FButtonStyle
---@field ToolTipText FText
---@field ToolTipDescription FText
local FReserveStockpileActionStyle = {}



---@class FReserveStockpileData
---@field StockpileName FString
---@field OwnerOnlineID FString
---@field OwnerName FString
---@field AllowedUserOnlineIDList TArray<FString>
---@field AccessLevel EReserveStockpileAccessLevel
---@field PassCode int32
---@field ExpiryTimestampTicks int64
---@field Items TArray<FStockpileEntry>
---@field Vehicles TArray<FStockpileEntry>
---@field VehicleCrates TArray<FStockpileEntry>
---@field Structures TArray<FStockpileEntry>
---@field StructureCrates TArray<FStockpileEntry>
local FReserveStockpileData = {}



---@class FReserveStockpileFailedPassCodeInfo
---@field NumFailedAttempts int32
---@field LastAttemptTimestampTicks int64
local FReserveStockpileFailedPassCodeInfo = {}



---@class FReserveStockpileMapDetailInfo
---@field StockpileName FString
---@field StockpileInfo FMapDetailStockpileInfo
local FReserveStockpileMapDetailInfo = {}



---@class FReserveStockpileStyle
---@field ReleaseButtonStyle FReserveStockpileActionStyle
---@field MakeHiddenButtonStyle FReserveStockpileActionStyle
---@field MakeVisibleButtonStyle FReserveStockpileActionStyle
---@field ViewAccessCodeButtonStyle FReserveStockpileActionStyle
---@field CopyAccessCodeButtonStyle FReserveStockpileActionStyle
---@field ResetAccessButtonStyle FReserveStockpileActionStyle
---@field TabIcon FSlateBrush
local FReserveStockpileStyle = {}



---@class FResourceAmounts
---@field Resource FCodeNameSmallQuantity
---@field OtherResources TArray<FCodeNameSmallQuantity>
local FResourceAmounts = {}



---@class FResourceConverter
---@field OrderList TArray<FRefinementOrder>
---@field RefinableItems TArray<FRefinableItemInfo>
local FResourceConverter = {}



---@class FResourceRenderInfo
---@field CodeName FName
---@field StaticMesh UStaticMesh
local FResourceRenderInfo = {}



---@class FRewindContext
local FRewindContext = {}


---@class FRichTextFieldColor
---@field ID FString
---@field Color FLinearColor
local FRichTextFieldColor = {}



---@class FRocketLaunchCodeInfo
---@field TargetMapID EWorldConquestMapId
---@field LaunchCodeID uint16
---@field StrikeLocation FVector
---@field LocalStrikeLocation FVector
local FRocketLaunchCodeInfo = {}



---@class FRocketLaunchCodeRequest
---@field RocketFacility ARocketFacility
---@field LaunchCodeID uint16
local FRocketLaunchCodeRequest = {}



---@class FRocketLaunchFire
---@field StartTime float
---@field EndTime float
---@field Radius float
---@field AddedHeat float
---@field DamageType TSubclassOf<UDamageType>
local FRocketLaunchFire = {}



---@class FRocketSiteStyle
---@field SectionBGImage FSlateBrush
---@field ProgressBarBGImage FSlateBrush
---@field ProgressBarFillImage FSlateBrush
---@field ProgressBarMarker FSlateBrush
---@field ToolTipTextColor FLinearColor
local FRocketSiteStyle = {}



---@class FRoomComponentSaveState
---@field WaterLevel float
local FRoomComponentSaveState = {}



---@class FRoomDynamicData : FTableRowBase
---@field RepairCost uint8
---@field LargeRepairCost uint8
---@field LeakChance float
---@field FloodedMass float
local FRoomDynamicData = {}



---@class FRoomLeak : FFastArraySerializerItem
---@field Location FVector_NetQuantize
---@field RoomIx uint8
---@field Damage uint8
---@field Radius uint8
---@field ExteriorDecal TWeakObjectPtr<UDecalComponent>
---@field InteriorDecal TWeakObjectPtr<UDecalComponent>
---@field WaterFX TWeakObjectPtr<UParticleSystemComponent>
---@field AboveWaterFX TWeakObjectPtr<UParticleSystemComponent>
---@field LeakingSFXLoop TWeakObjectPtr<UAudioComponent>
local FRoomLeak = {}



---@class FRoomLeakArray : FFastArraySerializer
---@field Items TArray<FRoomLeak>
local FRoomLeakArray = {}



---@class FSavedActor
---@field Transform FTransform
---@field Name FString
---@field ActorClass UClass
---@field bIsLoadedFromMap boolean
---@field ByteStream TArray<uint8>
local FSavedActor = {}



---@class FSavedBallastInfo
---@field TargetFloodPercent float
---@field FloodPercent float
local FSavedBallastInfo = {}



---@class FSavedCharacter
---@field Health float
---@field BagItems TArray<FItemInstance>
---@field EquippedItems TArray<FItemInstance>
local FSavedCharacter = {}



---@class FSavedCharacterInventory
---@field BagItems TArray<FItemInstance>
---@field EquippedItems TArray<FItemInstance>
---@field OverrideStarterGear boolean
local FSavedCharacterInventory = {}



---@class FSavedRecoveryCharacter
---@field OnlineID FString
---@field TeamId uint8
---@field Transform FTransform
---@field VisualCustomizationMask uint8
---@field Temperature float
---@field Muddyness float
---@field SavedCharacter FSavedCharacter
---@field ParentShipName FString
local FSavedRecoveryCharacter = {}



---@class FSavedRecoveryVehicle : FSavedActor
---@field LastAutoSaveTimestamp FDateTime
---@field OriginatorBuildSiteName FString
local FSavedRecoveryVehicle = {}



---@class FSavedShippableData
---@field CodeName FName
---@field ContainedCodeName FName
---@field Items TArray<FItemInstance>
---@field StoredItems TArray<FStockpileEntry>
---@field ItemCrates TArray<FStockpileEntry>
---@field ReservableItemCrates TArray<FStockpileEntry>
---@field Fuel float
---@field FuelType FName
---@field Payload uint8
---@field AltPayload uint8
---@field Temperature uint8
---@field TeamId uint8
---@field bIsReservable boolean
---@field TankArmour int32
---@field GlobalSpawnPoint FGlobalSpawnPointMinimal
---@field BuilderPlayerOnlineID FString
---@field BuilderName FString
---@field OriginalBuildTime int64
---@field VehicleLogID FGlobalVehicleID
local FSavedShippableData = {}



---@class FSavedVehicle
---@field Transform FTransform
---@field ActorClass UClass
---@field Bytes TArray<uint8>
---@field bHasTrailer boolean
---@field bFacingForward boolean
---@field RailEntryTrackId int32
---@field RailEntryPackedAlpha float
---@field bRailIsTailFirst boolean
---@field ShipDepth float
local FSavedVehicle = {}



---@class FScheduledWeatherState
---@field State FWeatherState
---@field NormalizedLocation FVector2D
---@field StartTime FDateTime
---@field EndTime FDateTime
---@field IntensityCurve int8
local FScheduledWeatherState = {}



---@class FSearchBarStyle
---@field SearchBarBrush FSlateBrush
---@field SearchImage FSlateBrush
---@field BarPadding FMargin
---@field MenuBorderBrush FSlateBrush
---@field MenuBorderPadding FMargin
---@field ItemStyle FTableRowStyle
---@field TextInputBoxStyle FEditableTextBoxStyle
local FSearchBarStyle = {}



---@class FSecondaryHUDInfo
local FSecondaryHUDInfo = {}


---@class FSecondaryResourceWeight
---@field ResourcePickupType TSubclassOf<AItemPickup>
---@field Weight int32
local FSecondaryResourceWeight = {}



---@class FSensorPingResponse
---@field CodeName FName
---@field Location FVector
---@field Rotation FRotator
---@field QuantizedStrength uint8
---@field bIsIntel boolean
---@field ReceivedWorldTime float
local FSensorPingResponse = {}



---@class FServerTravelClientState
---@field Status EServerTravelStatusOnClient
---@field OriginType EServerTravelOriginType
---@field OriginServerType EWarServerType
---@field bIsBorderTravel boolean
local FServerTravelClientState = {}



---@class FSessionServerState
local FSessionServerState = {}


---@class FSessionWarStatus
local FSessionWarStatus = {}


---@class FShardConfig
---@field PopulationCap int32
---@field EnabledRegions TArray<FString>
---@field ScheduledConquestStartTime FDateTime
local FShardConfig = {}



---@class FShardStatus
---@field bShowColonialQueueWarning boolean
---@field bShowWardenQueueWarning boolean
---@field WarId FString
---@field SquadMaxSize int32
---@field bUseCustomSignaling boolean
local FShardStatus = {}



---@class FShardStatusServerConnectionInfo
---@field currentMap FString
---@field steamId FString
---@field ipAddress FString
---@field Port int32
---@field BeaconPort int32
---@field packedWarStatus uint64
---@field packedServerState uint64
---@field colonialQueueSize int16
---@field wardenQueueSize int16
---@field Name FString
---@field Version FString
---@field serverType int32
---@field openColonialSlots int16
---@field openWardenSlots int16
local FShardStatusServerConnectionInfo = {}



---@class FShipAdjustment
---@field NewLoc FVector
---@field NewRot FQuat
---@field NewVelocity FVector
---@field NewAngularMomentum FVector
---@field RudderAngle float
---@field DivePlaneAngle float
---@field ServerMovementMode uint8
local FShipAdjustment = {}



---@class FShipDynamicData : FTableRowBase
---@field SecondsToMaxRPM float
---@field MaxPropellerRPM float
---@field MaxRudderAngle float
---@field RudderTurnRate float
---@field Fp float
---@field Fs float
---@field DragReferenceSpeed float
---@field Cpd1 float
---@field Cpd2 float
---@field Csd1 float
---@field Csd2 float
---@field SlammingPower float
---@field GammaMax float
---@field Cad float
---@field RudderLength float
---@field RudderDepth float
---@field ThrustVectoringPercent float
---@field MaxDivePlaneAngle float
---@field DivePlaneTurnRate float
---@field VerticalThrustVectoringPercent float
---@field BallastFloodRate float
---@field BallastBlowRate float
---@field FullyFloodedEngineForceMultiplier float
---@field BeachedEngineForceMultiplier float
local FShipDynamicData = {}



---@class FShipVeryShortAdjustment
---@field NewLoc FVector
---@field NewRot FQuat
---@field RudderAngle float
---@field DivePlaneAngle float
---@field ServerMovementMode uint8
local FShipVeryShortAdjustment = {}



---@class FShippableInfo
---@field Type EShippableType
---@field bAllowShippableTransfer boolean
---@field MaxSupportedSize EShippableType
local FShippableInfo = {}



---@class FShippableRenderInfo
---@field Base UStaticMesh
---@field BaseDanglingRope UStaticMesh
---@field BaseRope UStaticMesh
---@field ContainerDanglingRope UStaticMesh
---@field ContainerRope UStaticMesh
---@field CollisionExtents FVector
---@field DanglingRopeOffsetZ float
local FShippableRenderInfo = {}



---@class FSignPostVote
---@field VoterOnlineID FString
---@field bIsUpVote boolean
local FSignPostVote = {}



---@class FSignedPayload
---@field Signature uint8
---@field Payload TArray<uint8>
local FSignedPayload = {}



---@class FSkeletalMeshStop
---@field Threshold int32
---@field SkeletalMesh USkeletalMesh
local FSkeletalMeshStop = {}



---@class FSnapshotManagerTickFunction : FTickFunction
local FSnapshotManagerTickFunction = {}


---@class FSoundClassVolume
---@field ClassName FString
---@field Value float
local FSoundClassVolume = {}



---@class FSpawnPoint
---@field ID uint32
local FSpawnPoint = {}



---@class FSpawnPointInfo
---@field MapId EWorldConquestMapId
---@field SpawnPointType uint8
---@field bIsAvailable boolean
---@field SpawnCharges uint16
local FSpawnPointInfo = {}



---@class FSpawnPoints
---@field Type ESpawnPointType
---@field Category ESpawnPointCategory
---@field SpawnPointID FSpawnPoint
---@field HighPrioritySpawns TArray<USpawnPointComponent>
---@field LowPrioritySpawn TArray<USpawnPointComponent>
local FSpawnPoints = {}



---@class FSpecializedFactoryOrder
---@field OnlineID FString
---@field FactionId EFactionId
---@field AccessLevel EFactoryOrderAccess
---@field SquadId int32
---@field OrderItems TArray<FSpecializedFactoryOrderItem>
---@field ProductionTimeMultiplier float
---@field CompleteTime float
local FSpecializedFactoryOrder = {}



---@class FSpecializedFactoryOrderItem
---@field CodeName FName
---@field bIsPrototype boolean
local FSpecializedFactoryOrderItem = {}



---@class FSpectateTarget
---@field PlayerState APlayerState
local FSpectateTarget = {}



---@class FSplineConnectorComponentConfig
---@field ComponentName FName
---@field RelativeTransform FTransform
---@field Distance float
local FSplineConnectorComponentConfig = {}



---@class FSplineConnectorMeshConfig
---@field Mesh UStaticMesh
---@field Meshes TArray<UStaticMesh>
---@field Decals TArray<FDecalData>
---@field Sequence EIntervalSequence
---@field bReceivesDecals boolean
---@field BuildGhostMaterialOverride UMaterialInterface
---@field BuildSiteMaterialOverride UMaterialInterface
---@field Mode ESplineConnectorMeshMode
---@field ComponentTags TArray<FName>
---@field CollisionProfileName FName
---@field bCollisionOnly boolean
---@field PhysMaterialOverride UPhysicalMaterial
---@field CollisionIgnoreFlags uint8
---@field CanCharacterStepUpOn ECanBeCharacterBase
---@field StartIndex uint32
---@field EndIndex uint32
---@field BoxWidth float
---@field BoxHeight float
---@field BoxLengthPadding float
---@field SpawnPoints TArray<FSplineConnectorMeshConfigPoint>
---@field SplineMeshAxis ESplineMeshAxis::Type
---@field SplineStartOffset FVector2D
---@field SplineEndOffset FVector2D
---@field SplineBoundaryMin float
---@field SplineBoundaryMax float
---@field MinSplineLength float
---@field bExtendSplineToMinLength boolean
---@field MinSplineLengthForCollision float
---@field SplineMaterialScaling FVector2D
---@field Interval float
---@field IntervalDeltaPerDegree float
---@field bEvenlySpace boolean
---@field bCenter boolean
---@field bLinearPlacement boolean
---@field bFillRemainder boolean
---@field bScaleRemainder boolean
---@field bApplySlopeOffset boolean
---@field bAlternateY boolean
---@field bFixedPitch boolean
---@field FixedPitch float
---@field StartOffset float
---@field EndOffset float
---@field MaxSnapToLandscapeOffset float
---@field MaxInstances int32
---@field RelativeTransform FTransform
---@field RandomRotationVariance FRotator
---@field RandomPositionVariance FVector
---@field bDisplayOnInvalidPath boolean
---@field CopyPlacementRangeFrom int32
---@field bIsEndCap boolean
---@field bEndCapReactsToSockets boolean
---@field bReactToSurface boolean
---@field SurfaceSettings FMeshConfigSurfaceSettings
---@field RuntimeVirtualTextures TArray<URuntimeVirtualTexture>
---@field VirtualTextureRenderPassType ERuntimeVirtualTextureMainPassType
local FSplineConnectorMeshConfig = {}



---@class FSplineConnectorMeshConfigPoint
---@field PointIndex int32
---@field MinPrevDistance float
---@field MinNextDistance float
local FSplineConnectorMeshConfigPoint = {}



---@class FSplineConnectorMeshConfigTransient
local FSplineConnectorMeshConfigTransient = {}


---@class FSplineConnectorTickFunction : FTickFunction
local FSplineConnectorTickFunction = {}


---@class FSpoolingHandler
---@field bIsEnabled boolean
local FSpoolingHandler = {}



---@class FSquad
---@field SquadId int32
---@field SquadName FString
---@field AccessLevel int8
---@field Leader FSquadMember
---@field MemberList TArray<FSquadMember>
---@field InactiveMemberList TArray<FSquadMember>
local FSquad = {}



---@class FSquadAccessLevelChangedMessage
---@field SquadId int32
---@field AccessLevel int8
local FSquadAccessLevelChangedMessage = {}



---@class FSquadDeletedMessage
---@field SquadId int32
local FSquadDeletedMessage = {}



---@class FSquadErrorResponse
---@field bSquadFull boolean
---@field bTooManySquads boolean
local FSquadErrorResponse = {}



---@class FSquadInfo
---@field ID int32
---@field Name FString
---@field LeaderName FString
---@field LeaderOnlineID FString
---@field OnlineActiveCount int16
---@field OnlineInactiveCount int16
---@field AccessLevel int8
local FSquadInfo = {}



---@class FSquadInviteInfo
---@field SquadId int32
---@field SquadName FString
---@field LeaderMember FSquadMember
---@field TargetOnlineID FString
---@field FactionId int8
local FSquadInviteInfo = {}



---@class FSquadInviteWarMessage
---@field SquadInviteInfo FSquadInviteInfo
local FSquadInviteWarMessage = {}



---@class FSquadLeaderChangedMessage
---@field SquadId int32
---@field LeaderOnlineID FString
---@field LeaderName FString
local FSquadLeaderChangedMessage = {}



---@class FSquadManager
local FSquadManager = {}


---@class FSquadMember
---@field OnlineID FString
---@field Name FString
---@field bIsOfficer boolean
local FSquadMember = {}



---@class FSquadMemberDeltaMessage
---@field SquadId int32
---@field OnlineID FString
---@field Name FString
---@field bIsAdd boolean
---@field bIsActive boolean
---@field bIsOfficer boolean
local FSquadMemberDeltaMessage = {}



---@class FSquadMessageMessage
---@field OnlineID FString
---@field Name FString
---@field Message FString
---@field SquadId int32
---@field Language int8
local FSquadMessageMessage = {}



---@class FSquadMessageWarMessage
---@field Message FString
---@field Language int8
local FSquadMessageWarMessage = {}



---@class FSquadOfficerDeltaMessage
---@field SquadId int32
---@field OnlineID FString
---@field bNewOfficerState boolean
local FSquadOfficerDeltaMessage = {}



---@class FSquadOfficerDeltaWarMessage
---@field SquadId int32
---@field OnlineID FString
---@field bNewOfficerState boolean
local FSquadOfficerDeltaWarMessage = {}



---@class FSquadOfficerToLeaderResponseMessage
---@field SquadId int32
---@field bRequestSuccessful boolean
local FSquadOfficerToLeaderResponseMessage = {}



---@class FSquadOnlineCounts
---@field SquadId int32
---@field Active int16
---@field Inactive int16
local FSquadOnlineCounts = {}



---@class FSquadOnlineCountsMessage
---@field SquadOnlineCounts TArray<FSquadOnlineCounts>
local FSquadOnlineCountsMessage = {}



---@class FSquadRemovedMessage
---@field SquadId int32
local FSquadRemovedMessage = {}



---@class FSquadRenamedMessage
---@field SquadId int32
---@field Name FString
local FSquadRenamedMessage = {}



---@class FSquadReplicatedState
---@field ActiveSquadIdList TArray<int32>
local FSquadReplicatedState = {}



---@class FSquadStyle
---@field CreateButton FButtonStyle
---@field LeaveButton FButtonStyle
---@field SquadPanelToggleOnButton FButtonStyle
---@field SquadPanelToggleOffButton FButtonStyle
---@field SquadPanelActivateButton FButtonStyle
---@field SquadActiveBrush FSlateBrush
---@field PrivacyCheckBox FCheckBoxStyle
---@field PrivateIcon FSlateBrush
---@field LeaderIcon FSlateBrush
---@field OfficerIcon FSlateBrush
---@field SquadNameColour FSlateColor
---@field LeaderNameColour FSlateColor
---@field InactiveLeaderNameColour FSlateColor
---@field MemberNameColour FSlateColor
---@field InactiveMemberNameColour FSlateColor
---@field SquadListElementButton FButtonStyle
local FSquadStyle = {}



---@class FStaticArtilleryDamageParams
---@field Type TSubclassOf<UDamageType>
---@field BaseAmount float
---@field Radius float
---@field InnerRadius float
---@field Falloff float
---@field AccuracyRadius float
---@field ExplosionClass TSubclassOf<AWarExplosionEffect>
---@field ShotSoundCue USoundCue
local FStaticArtilleryDamageParams = {}



---@class FStaticCheckBoxStyle
---@field BGImage FSlateBrush
---@field FGImage FSlateBrush
local FStaticCheckBoxStyle = {}



---@class FStaticMeshOverride
---@field Target UStaticMesh
---@field Override UStaticMesh
local FStaticMeshOverride = {}



---@class FStatusStyle
---@field BleedingImage FSlateBrush
---@field BleedingModerateImage FSlateBrush
---@field BleedingCriticalImage FSlateBrush
---@field EncumberedImage FSlateBrush
---@field EncumberedModerateImage FSlateBrush
---@field EncumberedCriticalImage FSlateBrush
---@field HiddenImage FSlateBrush
---@field HiddenModerateImage FSlateBrush
---@field HiddenCriticalImage FSlateBrush
---@field WoundedImage FSlateBrush
---@field WoundedModerateImage FSlateBrush
---@field WoundedCriticalImage FSlateBrush
---@field LowHealthImage FSlateBrush
---@field LowHealthModerateImage FSlateBrush
---@field LowHealthCriticalImage FSlateBrush
---@field LockedImage FSlateBrush
---@field UnlockedImage FSlateBrush
local FStatusStyle = {}



---@class FStealthChecker
local FStealthChecker = {}


---@class FStockpileAccessEvent
---@field CodeName FName
---@field Quantity int16
---@field bIsCrate boolean
---@field OnlineID FString
---@field Name FString
local FStockpileAccessEvent = {}



---@class FStockpileBroadcastAlertInfo
---@field StockpilerOnlineID FString
---@field StockpilerPlayerName FString
---@field StockpiledStructure AStructure
---@field Submissions TArray<FStockpileEntry>
---@field bAreSubmissionsCrates boolean
local FStockpileBroadcastAlertInfo = {}



---@class FStockpileEffects
---@field DebuffPercent uint8
local FStockpileEffects = {}



---@class FStockpileEntry
---@field CodeName FName
---@field Quantity int16
local FStockpileEntry = {}



---@class FStockpileEvents
---@field ItemEvents TArray<FStockpileAccessEvent>
---@field VehicleEvents TArray<FStockpileAccessEvent>
---@field StructureEvents TArray<FStockpileAccessEvent>
local FStockpileEvents = {}



---@class FStockpileItemFilter
---@field ItemHolderSlotIndex int32
---@field QuantityToSubmit int32
local FStockpileItemFilter = {}



---@class FStructureBuildStep
---@field RequiredCodeName FName
---@field NextStructureCodeName FName
local FStructureBuildStep = {}



---@class FStructureDynamicData : FTableRowBase
---@field MaxHealth int32
---@field ResourceAmounts FResourceAmounts
---@field AltResourceAmounts FResourceAmounts
---@field DecayStartHours float
---@field DecayDurationHours float
---@field RepairCost int32
---@field StructuralIntegrity float
---@field StoredItemCapacity int32
---@field RamDamageReceivedFlags int32
---@field bCanBeHarvested boolean
---@field IsVaultable boolean
---@field bIsDamagedWhileDrivingOver boolean
local FStructureDynamicData = {}



---@class FStructureProfileData
---@field bHasDynamicStartingCondition boolean
---@field bIsRepairable boolean
---@field bIsOnlyMountableByFriendly boolean
---@field bIsUpgradeRotationAllowed boolean
---@field bIsUsableFromVehicle boolean
---@field bAllowUpgradeWhenDamaged boolean
---@field bCanOverlapNonBlockingFoliage boolean
---@field bDisallowAdjacentUpgradesInIsland boolean
---@field bIncludeInStructureIslands boolean
---@field bCanDecayBePrevented boolean
---@field VerticalEjectionDistance float
---@field bEnableStealth boolean
---@field bIsRuinable boolean
---@field bBypassesRapidDecayForNearbyStructures boolean
---@field bUsesImpactsMaterial boolean
---@field bIsBurnable boolean
local FStructureProfileData = {}



---@class FStructureStats
---@field Structure AActor
---@field DecayRemainingTime_Sec float
---@field DecayAmount float
---@field bShouldDecay boolean
---@field bCanApplyDecay boolean
---@field bIsBuildSite boolean
---@field Health int32
---@field MaxHealth int32
---@field ResourceRequirements FResourceAmounts
---@field ConcreteProgress float
---@field IslandHealth float
---@field IslandIntegrityBonus float
---@field Suppression float
---@field ShelterBonus float
local FStructureStats = {}



---@class FSubmarineDivePlane
---@field Pivot FVector
---@field Size FVector2D
local FSubmarineDivePlane = {}



---@class FSurfaceMovementData
---@field PhysicalMaterial UPhysicalMaterial
---@field StaminaDrainModifier float
---@field MovementSpeedModifier float
local FSurfaceMovementData = {}



---@class FTechResource
---@field FactionId EFactionId
---@field ID ETechResourceID
---@field Amount int16
local FTechResource = {}



---@class FTechStateDataFormat
---@field Name FString
---@field UniqueId int32
---@field TechIndexToItemIndex TArray<int32>
local FTechStateDataFormat = {}



---@class FTechStateEndMessage
---@field TechStateID int32
---@field CompletedTimes TArray<int64>
---@field ActivityWeights TArray<float>
local FTechStateEndMessage = {}



---@class FTechStateStartMessage
---@field TechStateID int32
---@field DataUniqueID int8
---@field TeamId int8
---@field Territory int8
---@field bIsContested boolean
local FTechStateStartMessage = {}



---@class FTechStateToolData
---@field MapNames TArray<FString>
---@field TechNames TArray<FString>
---@field Formats TArray<FTechStateDataFormat>
local FTechStateToolData = {}



---@class FTechStateUpdateMessage
---@field TechStateID int32
---@field CompletedTimes TArray<int64>
---@field ActivityWeights TArray<float>
local FTechStateUpdateMessage = {}



---@class FTechTreeCategories
---@field Vehicles FTechTreeCategory
---@field Misc FTechTreeCategory
local FTechTreeCategories = {}



---@class FTechTreeCategory
---@field Levels TArray<FTechTreeLevel>
local FTechTreeCategory = {}



---@class FTechTreeComponentItem
---@field TechID ETechComponentID
---@field NextTechID ETechComponentID
---@field InfrastructureType EInfrastructureType
---@field Requirement int32
---@field ModRequirement int32
local FTechTreeComponentItem = {}



---@class FTechTreeComponentItemProgress
---@field TechID ETechComponentID
---@field Amount float
local FTechTreeComponentItemProgress = {}



---@class FTechTreeComponentNetworkStatus
---@field ItemUnlockBits int32
---@field InfrastructureModCounts int32
local FTechTreeComponentNetworkStatus = {}



---@class FTechTreeComponentUIItem
---@field NameOverride FText
---@field DescriptionOverride FText
---@field FadedBrush FSlateBrush
---@field Brush FSlateBrush
---@field CodeNames TArray<FName>
local FTechTreeComponentUIItem = {}



---@class FTechTreeComponentVotes
---@field StaticBaseVote EInfrastructureType
---@field ForwardBaseVote EInfrastructureType
local FTechTreeComponentVotes = {}



---@class FTechTreeItem
---@field CodeName FName
---@field TechID ETechID
local FTechTreeItem = {}



---@class FTechTreeItemInfo
---@field BrushOverride FSlateBrush
---@field DisplayNameOverride FText
---@field DescriptionOverride FText
local FTechTreeItemInfo = {}



---@class FTechTreeLevel
---@field ItemCodeName FName
---@field ItemsRequired uint16
---@field TechRequired uint16
---@field Items TArray<FTechTreeItem>
---@field SecondaryItems TArray<FTechTreeItem>
local FTechTreeLevel = {}



---@class FTechTreeLineStyle
---@field SolidColour FSlateBrush
local FTechTreeLineStyle = {}



---@class FTechTreeStyle
---@field LineStyle FTechTreeLineStyle
---@field LineHighlightStyle FTechTreeLineStyle
---@field Separator FSlateBrush
---@field Status FSlateBrush
---@field Locked FSlateBrush
---@field Unlocked FSlateBrush
---@field Unknown FSlateBrush
---@field LevelBG FSlateBrush
---@field CurrentLevelBG FSlateBrush
---@field TechLevels FSlateBrush
local FTechTreeStyle = {}



---@class FTextStyles
---@field ColumnLableTextStyle FTextBlockStyle
---@field HeaderTextStyle FTextBlockStyle
---@field Header16ptTextStyle FTextBlockStyle
---@field Regular10ptTextStyle FTextBlockStyle
---@field Regular12ptTextStyle FTextBlockStyle
---@field Regular14ptTextStyle FTextBlockStyle
---@field Regular16ptTextStyle FTextBlockStyle
---@field Regular24ptTextStyle FTextBlockStyle
---@field Bold10ptTextStyle FTextBlockStyle
---@field Bold12ptTextStyle FTextBlockStyle
---@field Italic10ptTextStyle FTextBlockStyle
---@field Italic12TextStyle FTextBlockStyle
---@field HighlightColor FLinearColor
local FTextStyles = {}



---@class FThrowingStabilityInfo
---@field MaxApexHalfAngle float
---@field BaselineApexHalfAngle float
---@field YawSettleTime float
---@field YawPeneltyPct float
---@field DistancePeneltyPct float
---@field DistanceForMaxPenelty float
local FThrowingStabilityInfo = {}



---@class FToggleSquadPrivacyWarMessage
---@field SquadId int32
local FToggleSquadPrivacyWarMessage = {}



---@class FTooltipDetailText
---@field TooltipDetailType ETooltipDetailType
---@field Text FText
local FTooltipDetailText = {}



---@class FTownHallInfo
---@field TeamId int8
---@field TownHallState ETownHallState
---@field Location FVector2D_NetQuantize
local FTownHallInfo = {}



---@class FTrainInfo
---@field Front ARailVehicle
---@field Back ARailVehicle
local FTrainInfo = {}



---@class FTrainRepInfo
local FTrainRepInfo = {}


---@class FTravelMapStyle
---@field TravelPoint FButtonStyle
---@field RecoveryTravelPoint FButtonStyle
---@field MinTravelPointSize float
---@field MaxTravelPointSize float
---@field ActivityStyles TArray<FActivityIndicatorStyle>
---@field DefaultActivityColor FLinearColor
---@field ReinforceActivityColor FLinearColor
---@field ActivityAnimationTime float
---@field ActivityTimeOffset float
local FTravelMapStyle = {}



---@class FTreadActorInfo
---@field PhysicalMaterial UPhysicalMaterial
---@field TreadActor TSubclassOf<ADecalActor>
local FTreadActorInfo = {}



---@class FTreadData
---@field TrackMaterialIndices int32
---@field TrackLength float
local FTreadData = {}



---@class FTripodHeightConfig
---@field MaxHeight float
local FTripodHeightConfig = {}



---@class FTutorialStyle
---@field HomeRegionC FSlateBrush
---@field HomeRegionW FSlateBrush
---@field ControlsPage FControlsPage
---@field MiscControlsPage FControlsPage
---@field Arrow FSlateBrush
local FTutorialStyle = {}



---@class FTweakables
local FTweakables = {}


---@class FUITargetingInfo
---@field MaxRange int32
---@field MaxReachability int32
---@field MuzzleLocation FVector
---@field ActorToIgnore TWeakObjectPtr<AActor>
---@field bHasLOS boolean
---@field bWeaponReady boolean
---@field TargetPoint FVector
---@field BlockPoint FVector
---@field ImpactPoint FVector
---@field GroundReference FVector
---@field bMuzzleBlocked boolean
---@field bOverrideMouseAimDirection boolean
local FUITargetingInfo = {}



---@class FUObjectHandle
---@field ObjectIndex int32
---@field ObjectSerialNumber int32
local FUObjectHandle = {}



---@class FUniform
---@field ItemHolderCapacity int32
---@field StackFilter uint32
---@field StackSize int8
---@field EncumbranceFilter uint32
---@field EncumbranceModifier float
---@field DeepWaterSpeedModifier float
---@field DetectionChance float
---@field SnowStormMitigation float
---@field RainStormMitigation float
---@field DamageMitigation TMap<EDamageType, FDamageMitigation>
---@field BleedChanceModifier float
---@field bAllowRegimentFriendlyFire boolean
local FUniform = {}



---@class FUniformRenderInfo
---@field Male FCharacterRenderInfo
---@field Female FCharacterRenderInfo
local FUniformRenderInfo = {}



---@class FVIPModeChangedMessage
---@field bIsVipMode boolean
local FVIPModeChangedMessage = {}



---@class FVector2D_Byte
---@field X int8
---@field Y int8
local FVector2D_Byte = {}



---@class FVector2D_NetQuantize : FVector
local FVector2D_NetQuantize = {}


---@class FVector2D_NetQuantize10 : FVector2D
local FVector2D_NetQuantize10 = {}


---@class FVehicleDeploymentLogic
---@field bRequiresDeployment boolean
---@field bRequiresHorizontalResetForUndeployment boolean
---@field bDeploymentAdjustsPitch boolean
---@field bUndeployingCountAsDeployed boolean
---@field UndeployedAngle float
---@field DeploymentTime float
---@field MaxGroundAngleDeviation float
---@field HorizontalResetSpeed float
---@field DeploymentState EVehicleDeploymentState
local FVehicleDeploymentLogic = {}



---@class FVehicleDynamicData : FTableRowBase
---@field ResourceAmounts FResourceAmounts
---@field AltResourceAmounts FResourceAmounts
---@field bHasTierUpgrades boolean
---@field UpgradeResourceAmounts FResourceAmounts
---@field MaxHealth int32
---@field MinorDamagePercent float
---@field MajorDamagePercent float
---@field RepairCost int32
---@field ResourcesPerBuildCycle int32
---@field ItemHolderCapacity int32
---@field ItemSlotFilters TArray<FItemSlotFilter>
---@field FuelCapacity float
---@field FuelConsumptionPerSecond float
---@field SwimmingFuelConsumptionModifier float
---@field DefaultSurfaceMovementRate float
---@field OffroadSnowPenalty float
---@field ReverseSpeedModifier float
---@field RotationRate float
---@field RotationSpeedCuttoff float
---@field SpeedSqrThreshold float
---@field EngineForce float
---@field MassOverride float
---@field MaxEncumbranceMassOverride float
---@field TowingResistanceOverride float
---@field TankArmour int32
---@field MinTankArmourPercent float
---@field TankArmourMinPenetrationChance float
---@field VehicleSubsystemDisableChances float
local FVehicleDynamicData = {}



---@class FVehicleGunnerInfo
---@field YawAndPitch FVector2D
---@field bIsWorking boolean
---@field bIsFiring boolean
---@field AmmoAmount int32
---@field AmmoName FName
local FVehicleGunnerInfo = {}



---@class FVehicleMapIntelligenceProvider
---@field TransmitPeriodSeconds float
---@field DetectionRadius float
local FVehicleMapIntelligenceProvider = {}



---@class FVehicleMovementProfileData
---@field Mass float
---@field MaxEncumbranceMassOverride float
---@field BrakeForce float
---@field HandbrakeForce float
---@field AirResistance float
---@field RollingResistance float
---@field TowingResistance float
---@field bSupportsManualLowGear boolean
---@field LowSpeedEngineForceMultiplier float
---@field LowGearCutoff float
---@field CenterOfGravityHeight float
---@field FrontGripCurve UCurveFloat
---@field RearGripCurve UCurveFloat
---@field EngineForceMultiplierCurve UCurveFloat
---@field LowGearEngineForceMultiplierCurve UCurveFloat
---@field bUsesDifferentialSteering boolean
---@field bCanRotateInPlace boolean
---@field MuddynessPerDistanceCurve UCurveFloat
---@field MuddynessDecayPerDistance float
---@field MuddynessDecayPerDistanceInWater float
---@field EncumbrancePerMuddyness float
---@field MassPerMuddyness float
---@field ExtinguishingDamageMultiplier float
---@field DamageToMuddyness float
local FVehicleMovementProfileData = {}



---@class FVehicleProfileData
---@field bUsesRollTrace boolean
---@field bCanTriggerMine boolean
---@field bCanTriggerInfantryMine boolean
---@field RamDamageDealtFlags int32
---@field bUsesGas boolean
---@field DrivingSpeedThreshold float
---@field MaxVehicleAngle float
---@field bEnableStealth boolean
---@field DamageDrivingOverStructures float
---@field DamageDrivingOverIce float
---@field bIsAllowedToLoadMultiple boolean
local FVehicleProfileData = {}



---@class FViolationEvent
---@field OnlineID FString
---@field DeviceID FString
---@field PlayerName FString
---@field Timestamp int64
---@field LogType EViolationLogType
---@field Reason EBanReason
---@field DurationMins double
---@field InstigatorOnlineId FString
---@field Rtk float
---@field Rtd float
---@field Rsd float
---@field Rvd float
---@field Rnc int16
---@field Note FString
local FViolationEvent = {}



---@class FViolationLog
local FViolationLog = {}


---@class FVoiceLoginInfo
---@field OnlineID FString
---@field LoginToken FString
---@field ChannelType EVoiceChannelType
---@field ChannelName FString
---@field ChannelJoinToken FString
local FVoiceLoginInfo = {}



---@class FVoteKickRequest
---@field InstigatorOnlineId FString
---@field TargetOnlineID FString
---@field PlayerName FString
---@field DeviceID FString
---@field TeamId int8
---@field RecentTeamKills float
---@field RecentFriendlyCharacterDamage float
---@field RecentFriendlyStructureDamage float
---@field RecentFriendlyVehicleDamage float
---@field RecentNameChanges int16
local FVoteKickRequest = {}



---@class FWarAPIClient
local FWarAPIClient = {}


---@class FWarAPIRequestInfo
---@field LastRequestTime FDateTime
---@field ETag FString
local FWarAPIRequestInfo = {}



---@class FWarAPIWarReportSummary
---@field DayOfWar int32
---@field ColonialCasualties int32
---@field WardenCasualties int32
local FWarAPIWarReportSummary = {}



---@class FWarAchievementCompletedInfo
---@field Type EWarAchievementType
---@field FactionId EFactionId
local FWarAchievementCompletedInfo = {}



---@class FWarAchievementConfig
---@field Type EWarAchievementType
---@field Icon FSlateBrush
---@field DisplayName FText
---@field Description FText
local FWarAchievementConfig = {}



---@class FWarAchievementParamResponse
local FWarAchievementParamResponse = {}


---@class FWarAchievementProgress
---@field ColonialProgress TArray<float>
---@field WardenProgress TArray<float>
local FWarAchievementProgress = {}



---@class FWarAchievementTownNumbersResponse
local FWarAchievementTownNumbersResponse = {}


---@class FWarAchievements
local FWarAchievements = {}


---@class FWarAchievementsStyle
---@field WarAchievementConfigList TArray<FWarAchievementConfig>
---@field ProgressBarFill FSlateBrush
local FWarAchievementsStyle = {}



---@class FWarAlwaysRelevantActorInfo
---@field Connection UNetConnection
---@field LastActors TArray<AActor>
local FWarAlwaysRelevantActorInfo = {}



---@class FWarBalancer
---@field NumImbalanceIterations int32
---@field RunningPopulationImbalancePercent float
---@field CurrentAbsoluteMaxPopulation int32
local FWarBalancer = {}



---@class FWarBeaconJoinRequestData
---@field ClientVersion TArray<int32>
---@field TeamId EFactionId
---@field ServerTravelOrigin EServerTravelOriginType
---@field bConsumeSelfServeFactionUnlock boolean
---@field QueueType EQueueType
---@field bSpawnAtOfflineCharacter boolean
---@field TravelPoint FSpawnPoint
---@field DeviceID FString
local FWarBeaconJoinRequestData = {}



---@class FWarBenchmarkAlgorithmBase : FTickFunction
---@field SimulatedConnections TArray<USimulatedClientNetConnection>
---@field SimulatedControllers TArray<ASimPlayerController>
local FWarBenchmarkAlgorithmBase = {}



---@class FWarBenchmarkMovementRecorderTickFunction : FTickFunction
local FWarBenchmarkMovementRecorderTickFunction = {}


---@class FWarBlueprints
---@field Characters UObjectLibrary
---@field ItemPickups UObjectLibrary
---@field Modifications UObjectLibrary
---@field Structures UObjectLibrary
---@field Vehicles UObjectLibrary
local FWarBlueprints = {}



---@class FWarClientConfig
---@field bDisableOneWorld boolean
---@field GlobalShardConfig FGlobalShardConfig
---@field AvailableShardList TArray<FWarShardInfo>
---@field ConquestNews TArray<FString>
local FWarClientConfig = {}



---@class FWarDebugVariables
---@field FastMode int32
---@field Build int32
---@field Crane int32
---@field Package int32
---@field Retrieve int32
---@field Placement int32
local FWarDebugVariables = {}



---@class FWarGridCoordinate
---@field Letter int16
---@field Number int16
---@field KeypadX int8
---@field KeypadY int8
local FWarGridCoordinate = {}



---@class FWarMapUI
local FWarMapUI = {}


---@class FWarMenuStyle : FSlateWidgetStyle
---@field InputActions FInputActions
---@field TutorialStyle FTutorialStyle
---@field WarStartStyle FWarStartStyle
---@field MenuButtonStyle FButtonStyle
---@field MenuButtonStyleA FButtonStyle
---@field MenuButtonStyleB FButtonStyle
---@field OpeningMenuTopButtonStyle FButtonStyle
---@field FullscreenButtonStyle FButtonStyle
---@field NavigationMenuButtonStyle FButtonStyle
---@field VoiceImageBrush FSlateBrush
---@field NewsItemBgButtonStyle FButtonStyle
---@field OptionsDropDownStyle FComboButtonStyle
---@field OptionsEditableTextBoxStyle FEditableTextBoxStyle
---@field OptionsSliderStyle FSliderStyle
---@field OptionsSliderStyleB FSliderStyle
---@field OptionsTextComboBoxStyle FComboBoxStyle
---@field OptionsTextComboBoxFont FSlateFontInfo
---@field OptionsCheckboxStyle FCheckBoxStyle
---@field OptionsTabButtonStyle FButtonStyle
---@field KeybindCategoryTitleTextBlockStyle FTextBlockStyle
---@field ExtraLargeTitleOutlinedTextBlockStyle FTextBlockStyle
---@field LargeTitleTextBlockStyle FTextBlockStyle
---@field SmallTitleTextBlockStyle FTextBlockStyle
---@field LargeBodyTextBlockStyle FTextBlockStyle
---@field BigCenteredBodyTextBlockStyle FTextBlockStyle
---@field MediumStrokedBodyTextBlockStyle FTextBlockStyle
---@field SmallStrokedBodyTextBlockStyle FTextBlockStyle
---@field Tiny20pStrokedBodyTextBlockStyle FTextBlockStyle
---@field Tiny16pStrokedBodyTextBlockStyle FTextBlockStyle
---@field Tiny12pStrokedBodyTextBlockStyle FTextBlockStyle
---@field Tiny8pStrokedBodyTextBlockStyle FTextBlockStyle
---@field NormalBodyTextBlockStyle FTextBlockStyle
---@field SmallBodyTextBlockStyle FTextBlockStyle
---@field SmallBodyTextBlockGreyedStyle FTextBlockStyle
---@field VerySmallBodyTextBlockStyle FTextBlockStyle
---@field ExtremelySmallBodyTextBlockStyle FTextBlockStyle
---@field ListHeaderTextBlockStyle FTextBlockStyle
---@field LargeHeaderTextBlockStyle FTextBlockStyle
---@field MenuButtonTextBlockStyle FTextBlockStyle
---@field ColonialLogoBrush FSlateBrush
---@field WardenLogoBrush FSlateBrush
---@field NeutralFactionLogoBrush FSlateBrush
---@field OpeningScreenBgBrush FSlateBrush
---@field OpeningMenuBgBrush FSlateBrush
---@field PauseMenuBgBrush FSlateBrush
---@field NewsMenuBgBrush FSlateBrush
---@field KeyboardConfigBgBrush FSlateBrush
---@field TitleLogoBrush FSlateBrush
---@field TitleLogoSmallBrush FSlateBrush
---@field OptionsLogoBrush FSlateBrush
---@field SolidColorBgBrush FSlateBrush
---@field CreditsBGBrush FSlateBrush
---@field GameModeDetailsBGBrush FSlateBrush
---@field GameModeWarningBGBrush FSlateBrush
---@field PlayerProfileBgBrush FSlateBrush
---@field ServerListBgBrush FSlateBrush
---@field ServerBrowserDetailsMenuBg FSlateBrush
---@field CalloutButtonBackgroundStyle FButtonStyle
---@field CalloutIconBrush FSlateBrush
---@field CalloutPinpointIconBrush FSlateBrush
---@field SquadTabBgBrush FSlateBrush
---@field SquadTabTooltipBrush FSlateBrush
---@field LoadingScreenBgBrush FSlateBrush
---@field EmptyTransparentImage FSlateBrush
---@field ListHeaderRowStyle FHeaderRowStyle
---@field WorldMapStyle FWorldMapStyle
---@field ContextMenuStyle FContextMenuStyle
---@field ErrorMessageBg FSlateBrush
---@field WelcomeMessageBg FSlateBrush
---@field OpeningMenuTopTextStyle FTextBlockStyle
---@field DeployTextStyle FTextBlockStyle
---@field NavigationMenuTextStyle FTextBlockStyle
---@field DiscordButtonStyle FButtonStyle
---@field TwitchButtonStyle FButtonStyle
---@field TwitterButtonStyle FButtonStyle
---@field RedditButtonStyle FButtonStyle
---@field DiscordMessageBrush FSlateBrush
---@field ProfileNameTextStyle FTextBlockStyle
---@field ProfileWardenLogoBrush FSlateBrush
---@field ProfileColonialLogoBrush FSlateBrush
---@field PotraitScrollLeftButton FButtonStyle
---@field PotraitScrollRightButton FButtonStyle
---@field FemaleSexIcon FSlateBrush
---@field MaleSexIcon FSlateBrush
---@field SkinToneTiles TArray<FSlateBrush>
---@field VeteranPreAlphaMedals TArray<FSlateBrush>
---@field ServerPasswordLockedImage FSlateBrush
---@field FrameRateWarningTextStyle FTextBlockStyle
---@field MapHoverDetailsBG FSlateBrush
---@field GameModeSelectionButtonStye FButtonStyle
---@field MapIconFilterCheckBoxStyle FCheckBoxStyle
---@field VivoxLogoBrush FSlateBrush
---@field SiegeCampLogoBrush FSlateBrush
---@field PlayerOnlineIcon FSlateBrush
---@field PlayerOfflineIcon FSlateBrush
---@field SupportMenuTitleTextStyle FTextBlockStyle
---@field SupportMenuComboBoxLabelStyle FTextBlockStyle
---@field SupportButtonStyle FButtonStyle
---@field DeployButtonStyle FButtonStyle
---@field NavigationButtonWidth float
---@field NavigationButtonHeight float
---@field NavigationButtonBoxPadding FMargin
---@field NavigationButtonVerticalBoxPadding FMargin
local FWarMenuStyle = {}



---@class FWarMessageTest
---@field TestInt int32
---@field TestFloat float
---@field TestBool boolean
---@field TestStr FString
---@field TestEnum ETestEnum
local FWarMessageTest = {}



---@class FWarOpsContent
---@field Items TArray<FWarOpsItem>
---@field Structures TArray<FWarOpsStructure>
---@field Vehicles TArray<FWarOpsVehicle>
local FWarOpsContent = {}



---@class FWarOpsDataExport
---@field P4ChangeList FString
---@field Version FString
---@field StructureLayers TArray<FString>
---@field Content FWarOpsContent
---@field Maps TArray<FWarOpsMap>
---@field Techs TArray<FWarOpsTech>
local FWarOpsDataExport = {}



---@class FWarOpsItem
---@field CodeName FName
---@field FactionVariant EFactionId
---@field TechID ETechID
---@field bCanBePrototyped boolean
local FWarOpsItem = {}



---@class FWarOpsMap
---@field DisplayName FString
---@field MapId EWorldConquestMapId
---@field GridCoord FIntPoint
---@field MapMarkers TArray<FWarOpsMapMarkerInstance>
---@field Structures TArray<FWarOpsStructureInstance>
local FWarOpsMap = {}



---@class FWarOpsMapMarkerInstance
---@field MajorText FString
---@field Position FVector
local FWarOpsMapMarkerInstance = {}



---@class FWarOpsStructure
---@field CodeName FName
---@field FactionVariant EFactionId
---@field TechID ETechID
---@field MapIconType uint8
---@field bCanBePrototyped boolean
local FWarOpsStructure = {}



---@class FWarOpsStructureInstance
---@field CodeName FName
---@field Position FVector
---@field IncludedInLayers int32
---@field ExcludedByLayers int32
local FWarOpsStructureInstance = {}



---@class FWarOpsTech
---@field TechID ETechID
---@field CodeNames TArray<FName>
local FWarOpsTech = {}



---@class FWarOpsVehicle
---@field CodeName FName
---@field FactionVariant EFactionId
---@field TechID ETechID
---@field bCanBePrototyped boolean
local FWarOpsVehicle = {}



---@class FWarPlayerProfile
---@field GlobalShardProfile FGlobalShardProfile
---@field LocalShardProfile FLocalShardProfile
local FWarPlayerProfile = {}



---@class FWarPlayerProfileSerialized
---@field GlobalShardProfile FGlobalShardProfile
---@field LocalShardProfileSerialized FLocalShardProfileSerialized
local FWarPlayerProfileSerialized = {}



---@class FWarPropertyUtil
local FWarPropertyUtil = {}


---@class FWarRecord
---@field ConquestWinner uint8
---@field StartTime int64
---@field ColonialWarAchievementProgressList TArray<float>
---@field WardenWarAchievementProgressList TArray<float>
---@field bIsShortWar boolean
local FWarRecord = {}



---@class FWarRecordList
---@field WarRecordList TArray<FWarRecord>
local FWarRecordList = {}



---@class FWarReplicatedTweakables : FTweakables
---@field ReinforcementsMinimumPopulation int32
---@field ReinforcementsThresholdPercent float
---@field FOVMode int32
---@field CameraUseVerticalBlend int32
---@field CameraMaxArmLength float
---@field CameraTopPadding float
---@field CameraBottomPadding float
---@field CameraDeadZone float
---@field CameraClampRadius int32
---@field CameraLerpSpeedXY float
---@field CameraLerpSpeedZ float
---@field DownvoteCooldownSeconds float
---@field VehicleBridgeDamageDepth float
---@field RoadClearanceHeight float
---@field DebuffMaxRangeModifier float
---@field DebuffTimeToMaxEffectivenessModifier float
---@field DebuffFiringConeModifier float
---@field DebuffFiringPeriodModifier float
---@field MaxSquadsValidation int32
---@field MaxFacilityMinesPerField int32
---@field PipelineVolumeDeltaPerSecond float
---@field bIsTestShard boolean
---@field bEnableAssemblyLoadouts boolean
---@field RetrieveCustomMaxMultiplier uint8
---@field RequiredRocketLaunchCodes uint8
---@field DragonsTeethMinDistanceToBorder float
---@field EnemyVehicleCheckDistance float
---@field HeavilyFloodedSpeedModifier float
---@field MaxTiltAngleForProjectiles float
---@field RetrieveTimeBonus float
---@field MaxDoorWaterDelta float
---@field IncomingSensorPingMaxStrengthRange float
---@field IncomingSensorPingMinStrengthRange float
---@field LargeShipTravelCountdownDuration float
---@field MaxAttachedItemStashes uint8
---@field MaxAttachedItemPickups uint8
---@field bEnableAimAssist boolean
---@field bOceanTravelEnabled boolean
---@field LargeShipAnchorWaterLimit float
---@field LeakRepairCostMultiplier float
---@field ConcreteSettleDurationModifier float
---@field RainfallMultiplier float
---@field RainfallDryingMultiplier float
---@field WindSpeedMax float
---@field SubmarineIceHideDepth float
---@field FoundationMaxHitHeight float
---@field FoundationHitsThreshold float
---@field StructuralIntegrityBonus float
---@field bIsFastBuild boolean
---@field AirCameraMode int32
---@field AirAssistMode int32
local FWarReplicatedTweakables = {}



---@class FWarReplicationGraphActorDebugInfo
---@field Actor AActor
---@field WorldLocation FVector
---@field GlobalCullDistance float
---@field ConnectionCullDistance float
local FWarReplicationGraphActorDebugInfo = {}



---@class FWarReport
---@field TotalEnlistments int32
---@field ColonialCasualties int32
---@field WardenCasualties int32
---@field DayOfWar int32
---@field Version int32
local FWarReport = {}



---@class FWarReporter
---@field CasualtiesC int32
---@field CasualtiesW int32
---@field OnlineIDListOfAllPlayersJoined TSet<FString>
local FWarReporter = {}



---@class FWarRichTextStyle
local FWarRichTextStyle = {}


---@class FWarServerQueue
---@field RegularQueue TArray<FQueuedPlayer>
---@field PrioritizedQueue TArray<FQueuedPlayer>
---@field ModQueue TArray<FQueuedPlayer>
---@field ReservedList TArray<FQueuedPlayer>
local FWarServerQueue = {}



---@class FWarServiceReplicatedState
---@field SquadReplicatedState FSquadReplicatedState
local FWarServiceReplicatedState = {}



---@class FWarShardInfo
---@field ShardName FString
---@field ShardId int32
---@field bEnabled boolean
---@field bEnableJoinEventsColonial boolean
---@field bEnableJoinEventsWarden boolean
---@field bEnableZombieButton boolean
---@field ColonialQueueWarning EQueueWarningState
---@field WardenQueueWarning EQueueWarningState
---@field WarServiceExternalURL FString
---@field WarSupportURL FString
---@field TravelMapMinimumOpenSlots int32
---@field EnableJoinEventsQueueThreshold int32
---@field UprisingChanceType EUprisingChanceType
---@field EventMapName FString
---@field EventServerPassword FString
---@field NormalizedGlobalPopulation float
---@field DescriptionType EShardDescription
---@field bFactionLock boolean
local FWarShardInfo = {}



---@class FWarStandardColour
---@field Orange FLinearColor
---@field Colonial FLinearColor
---@field Warden FLinearColor
---@field Green FLinearColor
---@field Red FLinearColor
---@field Yellow FLinearColor
---@field Beige FLinearColor
local FWarStandardColour = {}



---@class FWarStartStyle
---@field FlavourImage FSlateBrush
local FWarStartStyle = {}



---@class FWarTimeDiscrepancy
---@field MaxTimeMargin float
---@field MinTimeMargin float
---@field DriftAllowance float
---@field ResolutionRate float
local FWarTimeDiscrepancy = {}



---@class FWarTweakables : FTweakables
---@field bRequireAuth boolean
---@field bLogAuthToDiscord boolean
---@field bEnableRestrictions boolean
---@field VehicleWrenchPreventionTime_Min float
---@field AWSLogEnableStatus EAWSLogEnableStatus
---@field UprisingPhaseDuration float
---@field MineDecayTimeSec int32
---@field MaxVehicleAFKDurationSeconds float
---@field MaxStructureAFKDurationSeconds float
---@field GasMaskFilterAbsorbPerPoint float
---@field StockpileDecimation float
---@field ResearchDecimation float
---@field bEnableUprisings boolean
---@field bEnableResourceTestMode boolean
---@field ScrapReplenishRates float
---@field ComponentReplenishRates float
---@field SulfurReplenishRates float
---@field SpawnTimeColonial float
---@field SpawnTimeWarden float
---@field SpawnTimeCap float
---@field StructureRecentAttackDurationMin float
---@field StructureUnderAttackAlertCooldownMin float
---@field PostTravelInvulnerabilityTime float
---@field PostTravelInvulCooldownSeconds float
---@field GarrisonFrequency float
---@field GarrisonActivityFactor float
---@field GarrisonActivityFactorOverride float
---@field SmallGarrisonActivityFactor float
---@field LargeGarrisonActivityFactor float
---@field GarrisonDeployCost float
---@field GarrisonDecay float
---@field GarrisonStarterSize float
---@field GarrisonMinSize float
---@field DesiredFriendlyGarrisonSize float
---@field FriendlyGarrisonGrowth float
---@field DeployRechargeTime int32
---@field TimeBetweenDeadlyGasEffect float
---@field ZombieRegularHealthModifier float
---@field ZombieSpitterHealthModifier float
---@field ZombieTankHealthModifier float
---@field ZombieRegularDamage float
---@field ZombieSpitterDamage float
---@field ZombieTankDamage float
---@field HitMitigation float
---@field HitMitigationRifle float
---@field HitMitigationCarbine float
---@field HitMitigationSniper float
---@field HitMitigationAssault float
---@field HitMitigationOptimalDistance float
---@field ForwardArcDot float
---@field CriticalWoundChanceNormalized float
---@field PatientConversionTimeModifier float
---@field HospitalSpawnChargesModifier float
---@field HomeRegionTestPopulation int32
---@field HomeRegionPlayersPerBase int32
---@field UnexplodedOrdnanceChance float
---@field FortBaseNetworkDistance int32
---@field LRADamage float
---@field LRAReduceHeatTime float
---@field RailLRAReduceHeatTime float
---@field LRADamageInnerRadius float
---@field LRAAccuracyRadiusMultiplier float
---@field FSAAccuracyRadiusMultiplier float
---@field LRALaunchVelocity float
---@field LRALaunchVelocityZ float
---@field LRALaunchVelocityZDistanceFactor float
---@field IntelCenterListeningRadiusMin float
---@field IntelCenterListeningRadiusMax float
---@field bPreventSaveWithZeroActors boolean
---@field bLogIncompleteValidations boolean
---@field ValidationThreshold float
---@field FastDecayOnRoadFactor float
---@field FortDecayFactor float
---@field FortChanceToAggro float
---@field BorderFOBDeploymentDistance float
---@field NumUnstuckCommandsPerWar int32
---@field UnstuckWaitTime float
---@field ReserveStockpileExpiryHours float
---@field RefineryExpiryHours float
---@field StockpileAlertMinValue int32
---@field DistributionCenterAlertMinValue int32
---@field DistributionCenterSubmitCooldown int32
---@field FactoryScalingPopulationMin int32
---@field FactoryScalingPopulationMax int32
---@field FactoryScalingModifierMin float
---@field FactoryScalingModifierMax float
---@field FactoryExpiryMultiplier float
---@field FactoryOrderTimeMultiplier float
---@field MassProductionSpeedFactor float
---@field MassProductionMaxCompletedOrders int32
---@field ResourceHighYieldChance float
---@field ResourceHighYieldRandomFloor float
---@field ResourceHighYieldRandomCeiling float
---@field ResourceFieldScalingPopulationMin int32
---@field ResourceFieldScalingPopulationMax int32
---@field ResourceFieldScalingModifierMin float
---@field ResourceFieldScalingModifierMax float
---@field ResourceFieldReplenishmentVariation float
---@field TechNodeMinSpawnChance float
---@field TechNodeMaxSpawnChance float
---@field TechNodeMinThreshold int32
---@field TechNodeMaxThreshold int32
---@field ResourceMineScalingPopulationMin int32
---@field ResourceMineScalingPopulationMax int32
---@field ResourceMineScalingModifierMin float
---@field ResourceMineScalingModifierMax float
---@field MinVehicleSpawnTimeSeconds float
---@field MaxVehicleSpawnTimeSeconds float
---@field ResearchTickRate float
---@field StockpileActivityModifier float
---@field MaxStockpileActivityPerHour float
---@field SuppliesActivityModifier float
---@field MaxSuppliesActivityPerHour float
---@field SpawnPointActivityModifier float
---@field MaxSpawnPointActivityPerHour float
---@field TeamStructureActivityModifier float
---@field MaxTeamStructureActivityPerHour float
---@field FriendlyTerritoryActivityModifier float
---@field EarlyWarActivityModifier float
---@field EarlyWarActivityMaxAmount float
---@field MaxActivityPerHour float
---@field ProvisionalGarrisonSpawnsRequired int32
---@field MinTankArmourMultiplier float
---@field SubsystemDisableChanceMultiplier float
---@field FrontierMapIntelLimitDistance float
---@field ZombieHeavyStructureThreshold float
---@field ZombieHeavyStructureHitChance float
---@field ZombieTankHeavyStructureHitChance float
---@field BorderBaseCooldownSeconds float
---@field BorderBaseSuppliesPopulationMin int32
---@field BorderBaseSuppliesPopulationMax int32
---@field BorderBaseSuppliesModifierOverride float
---@field JoinServerReservationMinutes float
---@field TravelReservationMinutes float
---@field MaxReservedQueueSlots int32
---@field TimeInConquestQueueThreshold float
---@field AISupppressionMax float
---@field AISuppressionDecayRate float
---@field AISuppressionGrowthRate float
---@field AISuppressionGrowthMax float
---@field VoiceChatChannelNameSuffix int32
---@field bFactionSpecificVoice boolean
---@field MaxResourceNodesOfAnyKind int32
---@field WorldResourceSpawnChance float
---@field WorldResourceRoadMultiplier float
---@field WorldResourceMaxBadLuckMins float
---@field WorldResourceMaxBadLuckMultiplier float
---@field WorldResourceDistanceCheck float
---@field WorldResourceDistance float
---@field WorldResourceCooldown float
---@field WreckageToBMatMax int32
---@field WreckageToRMatMax int32
---@field WreckageToRelicMax int32
---@field WreckageBMatWeight int32
---@field WreckageRMatWeight int32
---@field BallisticPenetrationMaxDistance float
---@field BallisticPenetrationDistanceExponent float
---@field BallisticPenetrationMaxAngleBonus float
---@field BallisticPenetrationMaxRangeBonus float
---@field MuddynessGain float
---@field MuddynessLost float
---@field PlayerSnowStormTemperatureLoss float
---@field VehicleSnowStormTemperatureLoss float
---@field PlayerInVehicleTemperatureGain float
---@field PlayerInStructureTemperatureGain float
---@field PlayerNoWeatherTemperatureGain float
---@field VehicleNoWeatherTemperatureGain float
---@field FrozenPipePenalty float
---@field PlayerFirePitTemperatureGain float
---@field VehicleFirePitTemperatureGain float
---@field VehicleEngineOnTemperatureGain float
---@field VehicleShelteredTemperatureGain float
---@field NaturalHeatDecay float
---@field NaturalHeatGrowth float
---@field StructurePrototypeRepairModifier float
---@field VehiclePrototypeRepairModifier float
---@field FirePitFuelUseMultiplier float
---@field MHTAllowedExtraDistance float
---@field WindDirectionOverride float
---@field WindSpeedOverride float
---@field WindFactor float
---@field WindSpeedMin float
---@field WindSpeedChangeRateMin float
---@field WindSpeedChangeRateMax float
---@field WindDirectionChangeRateMin float
---@field WindDirectionChangeRateMax float
---@field WindDirectionChangeDurationMin float
---@field WindDirectionChangeDurationMax float
---@field WindDirectionMaxDelta float
---@field WeatherWindChangeMultiplier float
---@field StructureDamageDevastationSize float
---@field StructureDamageDevastationFactor float
---@field StructureDamageDevastationMultiplierMax float
---@field StructureDamageDevastationMinThreshold float
---@field StructureBreachingDevastationMultiplierMax float
---@field RuinedStructureDevstationSize float
---@field RuinedStructureDevstationThreshold float
---@field MinFortArtilleryShots int32
---@field MaxFortArtilleryShots int32
---@field DecayDamageMultiplier float
---@field ExtraColonialStarterTowns FString
---@field ExtraWardenStarterTowns FString
---@field DeployQueueTimerSec float
---@field AutoSaveSeconds float
---@field RecoverySaveSeconds float
---@field WarBalancerEnabled boolean
---@field WarBalancerTickRate float
---@field WarBalancerDryRunMode boolean
---@field WarBalancerMaxPlayers int32
---@field WarBalancerMinPlayersBasedOnTick int32
---@field WarBalancerFalloffStartDay int32
---@field WarBalancerFalloffPerDay float
---@field WarBalancerWinFactorMinZoneDelta int32
---@field WarBalancerLocalPopulationFactorSmallFaction int32
---@field WarBalancerLocalPopulationFactorMinDelta int32
---@field WarBalancerMostlyFriendlyRegionZoneDelta int32
---@field WarBalancerContestedPopulation int32
---@field WarBalancerContestedMinFreeSlots int32
---@field WarBalancerDisadvantagedImbalance float
---@field WarBalancerImbalanceLimit float
---@field WarBalancerContestedMaxPopulationMultiplier float
---@field WarBalancerSpawnTimeAveragePopulationWeight float
---@field WarBalancerSpawnTimeMultiplier float
---@field WarBalancerSpawnTimeEnemyRegionMultiplier float
---@field WarBalancerSpawnTimeMax float
---@field WarBalancerMaxTickMs float
---@field WarBalancerContestedMaxQueueSize int32
---@field WarBalancerAbsoluteMinPopulation int32
---@field WarBalancerAbsoluteMinPopulationIsland int32
---@field WarBalancerMaxLoweredPopulation int32
---@field WarBalancerSmallerFactionHeadroom int32
---@field WarBalancerIslandEndDay int32
---@field MaxProfilesToProcessAtOnce int32
---@field MergeDestUrl FString
---@field MergeSourceUrl FString
---@field bKickForVacTimeout boolean
---@field bEnableInfoUpdate boolean
---@field RecoveryModeDurationSeconds float
---@field bEnableDamageDebug boolean
---@field BridgeVehicleDecayPercent float
---@field BridgeVehicleGracePeriod float
---@field BridgeLargeShipDecayPercent float
---@field BridgeLargeShipGracePeriod float
---@field IntelLeakVoteKicksRequired int32
---@field PreAutoRestartAlertTime float
---@field PreAutoRestartAlertInterval float
---@field SameStructureRadius float
---@field SameStructureMaxOverlapCount int32
---@field NetStatsInterval float
---@field AbandonedBaseTickRate float
---@field AbandonedBaseNormalizedDamage float
---@field FacilityDurationModifier float
---@field FacilityPowerDurationModifier float
---@field FacilityPendingOrderTime float
---@field FacilityOrderTime float
---@field FacilityCompletedOrderTime float
---@field BuildingFireSpreadChanceFactor float
---@field MaxPowerNodeDistance int32
---@field MaxRailTravelPassengers int32
---@field MaxLargeShipTravelPassengers int32
---@field MaxLargeShipDeploymentPassengers int32
---@field MaxLargeShipAnchoredDeploymentPassengers int32
---@field NumDisruptivePlacementVotes int32
---@field FireBaseChance float
---@field FireMaxDevastationBonusToFireChance float
---@field FireMaxAddedBurningFromHitsPerTick float
---@field FireMinAddedBurningFromHitsPerTick float
---@field FireBurningCharacterRange float
---@field FireMinFireDamageToContinueBurning float
---@field FireExtinguishEffectivenessMultiplier float
---@field FireAddedBurningEffectivenessMultiplier float
---@field FireBuildingCharacterBurnMultiplier float
---@field FireDamageToGuaranteedIgnite float
---@field ArtilleryTravelFiringPreventionSeconds float
---@field TrackSupplyDrainSkipChance float
---@field bFireSpreadFromNeutralStructures boolean
---@field bCheckReservationsOnLogin boolean
---@field bCheckMaxPlayersOnLogin boolean
---@field RailwayTrackRepairPercentMS float
---@field RailwayTrackRepairPercentCM float
---@field RailwayTrackRepairCooldown float
---@field DestroyItemComponentsDelay float
---@field bDestroyItemComponents boolean
---@field bDisableItemComponentsRep boolean
---@field MaintenanceRepairPercent float
---@field RegionZoneStructureCountInterval float
---@field LeakSizeIncrease float
---@field LeakWaterPerSecond float
---@field LargeLeakWaterPerSecond float
---@field MaxLeakSpreadPerSecond float
---@field bStopFireOnNeutralJoin boolean
---@field DrivingRestrictionThreshold float
---@field bEnableVehicleRestore boolean
---@field VehicleRestoreChance float
---@field VehicleRestoreTimeMin float
---@field VehicleRestoreTimeMax float
---@field IgnoredZoneCountCodeNames TArray<FName>
---@field RetrieveTimePerSecond float
---@field MaxRetrieveTimeSpent float
---@field bEnableVehicleAI boolean
---@field SensorListeningRange float
---@field AutoRepairAmountNormalized float
---@field LargeShipAIBorderDeadZoneOverride float
---@field ItemDecayDurationOverride float
---@field FloodableRainStormWaterPerSecond float
---@field FloodableRainStormMaxWaterLevel float
---@field SubmarineRecoveryTimeSeconds float
---@field bAllowEjectDriver boolean
---@field bAllowLargeShipUnstuck boolean
---@field PostRecoveryModeDurationSeconds float
---@field PostVehicleDriverDisconnectDurationSeconds float
---@field MaxAFKDurationSeconds float
---@field bAutomaticallyDisableAuth boolean
---@field NumFailuresToDisableAuth int32
---@field AuthFailureDurationRequiredSeconds float
---@field AuthReEnableSeconds float
---@field BorderDecayFactor float
---@field WarBalancerMaxPopulationChangePerTick int32
---@field RareMetalWeightAdjustment int32
---@field CommendHistoryExpirySecs float
---@field GlobalRefineSpeedModifier float
---@field FacilityMapPostItemRadius float
---@field MaxBreachChance float
---@field MinBreachChance float
---@field MultipleShelterModifier float
---@field bAllowStockpileExternalUser boolean
---@field bGateLongRangeArtilleryFiringOnTech boolean
---@field bAllowSquadMissingMembers boolean
---@field bUseDevVotesRequiredCount boolean
---@field bUseDevRestrictionDuration boolean
---@field bFactionLock boolean
local FWarTweakables = {}



---@class FWeaponDynamicData : FTableRowBase
---@field SuppressionMultiplier float
---@field MaxAmmo int32
---@field MaxApexHalfAngle float
---@field BaselineApexHalfAngle float
---@field StabilityCostPerShot float
---@field Agility float
---@field ShoulderingDuration float
---@field MinShoulderingDuration float
---@field StaggerModifier float
---@field CoverProvided float
---@field StabilityFloorFromMovement float
---@field StabilityGainRate float
---@field StabilityGainRateFromCover float
---@field MaximumRange int32
---@field MaximumReachability int32
---@field DamageMultiplier float
---@field MovementData FMovementModifierData
---@field ArtilleryAccuracyMinDist float
---@field ArtilleryAccuracyMaxDist float
---@field MaxVehicleDeviationAngle float
---@field AddedBurningMultiplier float
---@field ArmourDamageModifier float
---@field TargetStabilityReductionPerShot float
---@field BreachingModifier float
local FWeaponDynamicData = {}



---@class FWeaponFiringConeInfo
---@field MaxApexHalfAngle float
---@field BaselineApexHalfAngle float
---@field StabilityCostPerShot float
---@field Agility float
---@field StabilityFloorFromMovement float
---@field StabilityGainRate float
---@field StabilityGainRateFromCover float
local FWeaponFiringConeInfo = {}



---@class FWeaponShotSFX
---@field FiringLoop USoundCue
---@field FiringStopped USoundCue
local FWeaponShotSFX = {}



---@class FWeatherEffects
---@field EffectsActors TArray<FWeatherEffectsActorTrigger>
---@field MaterialParameter FNamedParameterRange
---@field OffroadPenalty float
---@field MinVisibility float
---@field MaxVisibility float
local FWeatherEffects = {}



---@class FWeatherEffectsActorTrigger
---@field ActorClass TSubclassOf<AWeatherEffectsActor>
---@field IntensityThreshold float
local FWeatherEffectsActorTrigger = {}



---@class FWeatherEvent
---@field MapId EWorldConquestMapId
---@field Type EWeatherType
---@field NormalizedLocation FVector2D
---@field InnerRadius float
---@field OuterRadius float
---@field Intensity float
---@field Delay int32
---@field Duration int32
---@field IntensityCurveIndex int32
local FWeatherEvent = {}



---@class FWeatherEventStyle
---@field MapIcon FSlateBrush
---@field Name FText
---@field Description FText
local FWeatherEventStyle = {}



---@class FWeatherIceActorData
---@field WorldLocation FVector
---@field GridX uint16
---@field GridY uint16
---@field EnabledFlags uint32
---@field WorldLocationsZ TArray<float>
local FWeatherIceActorData = {}



---@class FWeatherIceMeshData
---@field Mesh UStaticMesh
local FWeatherIceMeshData = {}



---@class FWeatherIceState
---@field Health uint16
local FWeatherIceState = {}



---@class FWeatherManagerState
---@field WorldState FWorldWeatherState
---@field StateTimes TArray<FScheduledWeatherState>
local FWeatherManagerState = {}



---@class FWeatherPattern
---@field Events TArray<FWeatherEvent>
---@field PerWarSkipChance float
---@field MinPostEventsDuration int32
---@field MaxPostEventsDuration int32
local FWeatherPattern = {}



---@class FWeatherState
---@field MapId EWorldConquestMapId
---@field UniqueId uint8
---@field Type EWeatherType
---@field Intensity uint8
---@field PeakIntensity uint8
---@field WorldLocation FVector2D
---@field InnerRadius float
---@field OuterRadius float
---@field DryingStartTime float
---@field StartTime FDateTime
local FWeatherState = {}



---@class FWeatherStationGlobalMessage
---@field Entries TArray<FWeatherStationGlobalState>
local FWeatherStationGlobalMessage = {}



---@class FWeatherStationGlobalState
---@field GlobalID FWeatherStationIDValues
---@field ConnectionTo FWeatherStationIDValues
---@field bIsActive boolean
local FWeatherStationGlobalState = {}



---@class FWeatherStationID
---@field MapId EWorldConquestMapId
---@field LocalID uint8
local FWeatherStationID = {}



---@class FWeatherStationIDValues
---@field MapId int8
---@field LocalID int8
local FWeatherStationIDValues = {}



---@class FWeatherStationRegionMessage
---@field MapId int8
---@field Entries TArray<FWeatherStationGlobalState>
local FWeatherStationRegionMessage = {}



---@class FWeatherStyle
---@field EventStyles FWeatherEventStyle
---@field RadiusBrush FSlateBrush
---@field MuddyIcon FSlateBrush
---@field MuddyVehicleIcon FSlateBrush
---@field BurningIcon FSlateBrush
---@field HotIcon FSlateBrush
---@field NormalizingIcon FSlateBrush
---@field SlowlyNormalizingIcon FSlateBrush
---@field FreezingIcon FSlateBrush
---@field CriticalFreezingIcon FSlateBrush
---@field WeatherStationStatus FSlateBrush
local FWeatherStyle = {}



---@class FWinConditionStyle
---@field ColonialIcon FSlateBrush
---@field WardenIcon FSlateBrush
---@field CountTextBG FSlateBrush
---@field ScorchedTownBrush FSlateBrush
---@field UprisingBrush FSlateBrush
---@field VictoryTownBrush FSlateBrush
local FWinConditionStyle = {}



---@class FWindowMeshes
---@field Colonial UStaticMesh
---@field Warden UStaticMesh
local FWindowMeshes = {}



---@class FWorldMapRegionStyle
---@field Offset FVector2D
---@field ButtonStyle FButtonStyle
local FWorldMapRegionStyle = {}



---@class FWorldMapStyle
---@field RegionAvailableIcon FSlateBrush
---@field RegionQueuesIcon FSlateBrush
---@field RegionContestedIcon FSlateBrush
---@field RegionFocusImage FSlateBrush
---@field RegionFocusAlphaCurves TArray<UCurveFloat>
---@field RegionFocusScaleCurves TArray<UCurveFloat>
---@field TitleTextStyle FTextBlockStyle
local FWorldMapStyle = {}



---@class FWorldWeatherState
---@field GameplayState FWeatherState
---@field States TArray<FWeatherState>
---@field bIsWeatherVisibleC boolean
---@field bIsWeatherVisibleW boolean
local FWorldWeatherState = {}



---@class FZombieFootPrintActorInfo
---@field Colonial FFootPrintActorInfo
---@field Warden FFootPrintActorInfo
local FZombieFootPrintActorInfo = {}



---@class FZombieWeaponInfo
---@field Type EZombieType
---@field Name FText
---@field Icon UTexture2D
---@field MeleeDamageType TSubclassOf<UDamageType>
---@field SecondaryAttack EZombieSecondaryAttack
---@field ActivityState ECharacterActivityState
---@field Cooldown float
local FZombieWeaponInfo = {}



---@class IAssignableSpawnPoint : IInterface
local IAssignableSpawnPoint = {}


---@class ICharacterInvokableInterface : IInterface
local ICharacterInvokableInterface = {}


---@class ICoalitionAssignable : IInterface
local ICoalitionAssignable = {}


---@class ICraneOperatorInterface : IInterface
local ICraneOperatorInterface = {}


---@class IDamageableActor : IInterface
local IDamageableActor = {}


---@class IDecayPreventer : IInterface
local IDecayPreventer = {}


---@class IFuelTanker : IInterface
local IFuelTanker = {}


---@class IGenericActor : IInterface
local IGenericActor = {}


---@class IGenericInventory : IInterface
local IGenericInventory = {}


---@class IGunnerSupport : IInterface
local IGunnerSupport = {}

---@param GunnerIndex int32
---@param YawAndPitch FVector2D
function IGunnerSupport:UpdateGunnerYawAndPitch(GunnerIndex, YawAndPitch) end
---@param GunnerIndex int32
---@param AmmoAmount int32
---@param AmmoName FName
function IGunnerSupport:SetStashedAmmo(GunnerIndex, AmmoAmount, AmmoName) end
---@param GunnerIndex int32
---@param IsFiring boolean
function IGunnerSupport:SetIsFiring(GunnerIndex, IsFiring) end
---@param GunnerIndex int32
---@param IsWorking boolean
function IGunnerSupport:SetGunnerWorking(GunnerIndex, IsWorking) end
---@param GunnerIndex int32
---@return boolean
function IGunnerSupport:IsGunnerWorking(GunnerIndex) end
---@param GunnerIndex int32
---@param bTestFullDeploy boolean
---@return boolean
function IGunnerSupport:IsGunnerDeployed(GunnerIndex, bTestFullDeploy) end
---@param GunnerIndex int32
---@return boolean
function IGunnerSupport:IsFiring(GunnerIndex) end
---@param GunnerIndex int32
---@return float
function IGunnerSupport:GetTrackingSpeedModifier(GunnerIndex) end
---@param GunnerIndex int32
---@return FName
function IGunnerSupport:GetStashedAmmoType(GunnerIndex) end
---@param GunnerIndex int32
---@return int32
function IGunnerSupport:GetStashedAmmo(GunnerIndex) end
---@param GunnerIndex int32
---@return int32
function IGunnerSupport:GetNumMuzzleSockets(GunnerIndex) end
---@param GunnerIndex int32
---@param MuzzleIndex int32
---@return FTransform
function IGunnerSupport:GetMuzzleTransformFromIndex(GunnerIndex, MuzzleIndex) end
---@param GunnerIndex int32
---@param MuzzleIndex int32
---@return FName
function IGunnerSupport:GetMuzzleSocketName(GunnerIndex, MuzzleIndex) end
---@param GunnerIndex int32
---@param MuzzleIndex int32
---@return FVector
function IGunnerSupport:GetLineOfSightLocation(GunnerIndex, MuzzleIndex) end
---@param GunnerIndex int32
---@return FVector2D
function IGunnerSupport:GetGunnerYawAndPitch(GunnerIndex) end
---@param GunnerIndex int32
---@return boolean
function IGunnerSupport:CanRotate(GunnerIndex) end
---@param GunnerIndex int32
---@return boolean
function IGunnerSupport:CanFire(GunnerIndex) end


---@class ILongRangeArtillerySupport : IInterface
local ILongRangeArtillerySupport = {}


---@class IMapIntelligenceInterface : IInterface
local IMapIntelligenceInterface = {}


---@class IMaterialOverrideInterface : IInterface
local IMaterialOverrideInterface = {}


---@class IPayloadMeshGroup : IInterface
local IPayloadMeshGroup = {}


---@class IPersistentActor : IInterface
local IPersistentActor = {}


---@class IPowerGridNode : IInterface
local IPowerGridNode = {}


---@class ISeatSupport : IInterface
local ISeatSupport = {}


---@class IWaterReloadSupport : IInterface
local IWaterReloadSupport = {}


---@class UAFKTimeoutComponent : UActorComponent
---@field TimeUntilTimeoutHours float
---@field LastUsageTime FDateTime
local UAFKTimeoutComponent = {}



---@class UAIArtilleryGunTurretComponent : UAIGunTurretComponent
---@field bUseWarningShots boolean
---@field WarningShotMinRange float
---@field WarningShotRadius float
---@field bUseArtilleryTrace boolean
---@field AccuracyRadius float
local UAIArtilleryGunTurretComponent = {}



---@class UAIGunTurretComponent : UAITurretComponent
---@field ExplosionRadius float
---@field FiringThreshold float
---@field DamageDelay float
---@field ExplosionTemplate TSubclassOf<AWarExplosionEffect>
local UAIGunTurretComponent = {}

---@param HitResult FHitResult
function UAIGunTurretComponent:MulticastPlayFiringFX(HitResult) end


---@class UAITurretComponent : USceneComponent
---@field AllowedTargetTypes uint8
---@field MuzzleType ETurretMuzzleType
---@field GunnerIndex int32
---@field NumMuzzles int32
---@field TrackingMode ETurretTrackingMode
---@field TrackingSpeed float
---@field TrackingThreshold float
---@field YawToPitchCurve UCurveFloat
---@field MinimumRange float
---@field MaximumRange float
---@field MaximumReachability float
---@field BorderDeadZone float
---@field bReduceRangeAtNight boolean
---@field bIgnoreLineOfSight boolean
---@field bFlaresNegateNightRangeReduction boolean
---@field SeatOffset FVector
---@field TriggerBoxOffset FVector
---@field TriggerBoxExtents FVector
---@field bIs360ViewWhenMounted boolean
---@field SuppressionPercentage uint8
---@field bIsSuppressible boolean
---@field bShowExtraTracers boolean
---@field bLimitOccupantFiringArc boolean
---@field MaxOccupantFiringArcDeviation float
---@field OccupantFiringConeAngle float
---@field bUsesLegacyFoxholeTurretDamageSelection boolean
---@field bUseATDamageForVehicle boolean
---@field DamageAttributes FDamageAttributes
---@field DamageAttributesAlternate FDamageAttributes
---@field FiringConeAngle float
---@field EnemyType ECollisionChannel
---@field CurrentEnemy TWeakObjectPtr<AActor>
---@field CurrentEnemyTargetYaw float
---@field SimulatedHitNotify FHitNotify
---@field bIsEnemyObscured boolean
---@field bIsSuppressedOverride boolean
---@field NearbyFlares TSet<TWeakObjectPtr<AFlareExplosionEffect>>
---@field AITurretBlueprintCDO UAITurretComponent
local UAITurretComponent = {}

function UAITurretComponent:OnRep_SimulatedHitNotify() end
function UAITurretComponent:OnRep_IsEnemyObscured() end
function UAITurretComponent:OnRep_CurrentEnemy() end


---@class UAITurretsControllerComponent : UActorComponent
---@field AITurretComponents TArray<UAITurretComponent>
local UAITurretsControllerComponent = {}



---@class UATRifleComponent : UHitScanWeaponComponent
---@field bRequiresOpenVehiclePlatform boolean
local UATRifleComponent = {}



---@class UAccessBoxComponent : UUseComponent
---@field Priority int8
---@field ItemHolderIndex int32
---@field StockpileIndex int32
local UAccessBoxComponent = {}



---@class UAmmoBackpackItemComponent : UMiscItemComponent
---@field ProvidedAmmoName FName
local UAmmoBackpackItemComponent = {}



---@class UAnchorComponent : USceneComponent
---@field RaisingSoundCue USoundCue
---@field DroppingSoundCue USoundCue
---@field RaisedAnchorMeshComponent UStaticMeshComponent
---@field DroppedAnchorMeshComponent UStaticMeshComponent
---@field SoundComponent UAudioComponent
local UAnchorComponent = {}



---@class UAnchorUseComponent : UUseComponent
local UAnchorUseComponent = {}


---@class UArtilleryGunnerMountComponent : UMultiAmmoVehicleMountComponent
---@field DummyProjectileActorType TSoftClassPtr<ARocketLauncherProjectileDummy>
---@field MuzzleFlashPS UParticleSystem
---@field TelegraphOffset float
---@field DamageDelay float
---@field FireDelay float
---@field SpoolupDelay float
---@field FiringAngleOverride float
---@field bUseMuzzleRotationForFiringAngleOverride boolean
---@field bUseCustomDelayScaling boolean
---@field bCanRotate boolean
---@field bUseClampTrjectoryToDistanceHack boolean
---@field bIsAutomaticFire boolean
---@field bHighArc boolean
---@field FlightObstructionCheckDistance float
---@field bUsePerBarrelFX boolean
---@field bSupportsDirectFireMode boolean
---@field DirectFireScopeRange float
---@field DirectFireMaxDistance float
---@field DirectFireDropOffset float
---@field bDisableRotationForFiringDuration boolean
local UArtilleryGunnerMountComponent = {}

function UArtilleryGunnerMountComponent:ServerStopInvoke() end
---@param Pitch float
function UArtilleryGunnerMountComponent:ServerSetPitch(Pitch) end
---@param ActivityStateChange FActivityStateChange
---@param bInIsDirectFireMode boolean
function UArtilleryGunnerMountComponent:ServerFireShell(ActivityStateChange, bInIsDirectFireMode) end
---@param AmmoPickupCDO AExplosiveAmmoPickup
---@param MuzzleIndex uint8
function UArtilleryGunnerMountComponent:MulticastPlayRocketFiringFX(AmmoPickupCDO, MuzzleIndex) end
---@param AmmoPickupCDO AExplosiveAmmoPickup
function UArtilleryGunnerMountComponent:MulticastPlayFiringFX(AmmoPickupCDO) end


---@class UAssaultRifleComponent : UHeavyMachineGunItemComponent
---@field SingleShotCodeName FName
---@field SingleShotAmmoCodeName FName
---@field SingleShotDisplayName FText
---@field ChangeShootingModeSoundCue USoundCue
---@field FiringActivityStateInfoSemiMode FActivityStateInfo
---@field SingleShotScopeRange float
---@field bIsInSingleShotMode boolean
local UAssaultRifleComponent = {}

function UAssaultRifleComponent:ServerToggleFireMode() end


---@class UAssemblyAreaAnimInstance : UAnimInstance
---@field AssemblyAreaState EAssemblyAreaState
local UAssemblyAreaAnimInstance = {}



---@class UAssemblyAreaComponent : USceneComponent
---@field AnimationDuration float
---@field WaterAnimationDuration float
---@field WaterDepth float
---@field WaterCullingName FName
---@field WaterMeshName FName
---@field WaterStencilName FName
---@field WaterMaterialOverrides UMaterialInterface
---@field BoxComponents TArray<UBoxComponent>
---@field WaterCullingComponent UBoxComponent
---@field WaterMeshComponent UMeshComponent
---@field WaterStencilComponent UMeshComponent
---@field WaterRaiseVFX TArray<UParticleSystemComponent>
---@field WaterLowerVFX TArray<UParticleSystemComponent>
---@field WaterRaiseSFX UWarAudioComponent
---@field WaterLowerSFX UWarAudioComponent
---@field GateMovingSFX UWarAudioComponent
---@field GateStopSFX UWarAudioComponent
---@field GeneralAnimationSFX UWarAudioComponent
---@field WaterState EAssemblyAreaWaterState
---@field WaterLevel uint8
local UAssemblyAreaComponent = {}

function UAssemblyAreaComponent:OnRep_WaterState() end
function UAssemblyAreaComponent:OnRep_WaterLevel() end


---@class UAssemblyStationAnimInstance : UAnimInstance
---@field bIsActive boolean
local UAssemblyStationAnimInstance = {}



---@class UBadWordFilter : UObject
---@field RegularMatch FString
---@field ExactMatch FString
local UBadWordFilter = {}



---@class UBallastMountComponent : UMountComponent
---@field BallastType EBallastType
---@field TargetFloodPercent float
local UBallastMountComponent = {}

---@param InTargetFloodPercent float
function UBallastMountComponent:ServerSetTargetFloodPercent(InTargetFloodPercent) end


---@class UBandagesComponent : UItemComponent
---@field BandagesMesh USkeletalMesh
---@field BanadagesSoundCue USoundCue
---@field bIsEquipped boolean
local UBandagesComponent = {}

---@param ActivityStateChange FActivityStateChange
function UBandagesComponent:ServerUseBandages(ActivityStateChange) end
function UBandagesComponent:OnRep_IsEquipped() end


---@class UBannerAnimInstance : UAnimInstance
---@field WindSpeedNormalized float
local UBannerAnimInstance = {}



---@class UBarbedWireComponent : UBoxComponent
local UBarbedWireComponent = {}


---@class UBargeAnimInstance : USimVehicleAnimInstance
---@field RampAngle float
---@field RampExtension float
---@field PropellerSpeed float
---@field PropellerAnimIndex int32
---@field DockState EDockedState
local UBargeAnimInstance = {}



---@class UBaseWidgetStyle : USlateWidgetStyleContainerBase
---@field WidgetStyle FBaseStyle
local UBaseWidgetStyle = {}



---@class UBicycleAnimInstance : USimVehicleAnimInstance
---@field bIsInUse boolean
local UBicycleAnimInstance = {}



---@class UBinocularsItemComponent : UItemComponent
---@field CameraArmLengthCurve UCurveFloat
---@field SkeletalMesh USkeletalMesh
---@field bIsEquipped boolean
local UBinocularsItemComponent = {}

---@param IsStartScope boolean
---@param ActivityStateChange FActivityStateChange
function UBinocularsItemComponent:ServerStartStopScope(IsStartScope, ActivityStateChange) end
function UBinocularsItemComponent:OnRep_IsEquipped() end


---@class UBoatHullComponent : UBoxComponent
local UBoatHullComponent = {}


---@class UBoatHullMeshComponent : UStaticMeshComponent
local UBoatHullMeshComponent = {}


---@class UBorderBaseManager : UObject
local UBorderBaseManager = {}


---@class UBuildArmAnimInstance : UAnimInstance
---@field BuildSoundCue USoundCue
---@field Type EBuildArmType
---@field HorizontalArmSpeed float
---@field RotationZSpeed float
---@field SideDistanceSpeed float
---@field PulleySpeed float
---@field MinHorizontalDistance float
---@field MaxHorizontalDistance float
---@field MaxSideDistanceOffset float
---@field MaxYawOffset float
---@field WaitTime float
---@field HorizontalDistanceToTarget float
---@field PulleyLength float
---@field Yaw float
---@field SideDistance float
local UBuildArmAnimInstance = {}



---@class UBuildFootprintBoxComponent : UBoxComponent
---@field Info FBuildFootprintInfo
local UBuildFootprintBoxComponent = {}



---@class UBuildSocketComponent : USceneComponent
---@field ConnectedActor TWeakObjectPtr<AActor>
---@field ConnectedSocket TWeakObjectPtr<UBuildSocketComponent>
---@field ConnectedTag FBuildSocketTag
---@field SocketTags TArray<FBuildSocketTag>
---@field PipeInfo FPipelineSocket
---@field bDisabled boolean
---@field bIsUnidirectional boolean
---@field bIgnoreUnidirectionalityForModifications boolean
---@field bDisabledInBuildGhost boolean
---@field Direction ESocketDirection
---@field MaxRotation float
---@field SlopeRotationMode ESlopeRotationMode
---@field MaxZRotation float
---@field bDoLandscapeChecks boolean
---@field bDisallowBuildingOnWater boolean
---@field bMustBeBuiltOnWater boolean
---@field MaxHeightAboveLandscape float
---@field MaxDepthBelowLandscape float
---@field MaxSurfaceSamplePadding float
---@field MaxSurfaceSampleSlopeAngle float
---@field bAllowMultipleOverlaps boolean
---@field bContributeToIslandIntegrityBonus boolean
---@field MinimumPathSeparation float
---@field bOnlyTestMinimumPathSeparationOnUnconnected boolean
---@field bAllowRotatedPlacement boolean
---@field bIgnoreOwnerConnectedActorsWhenSnapped boolean
local UBuildSocketComponent = {}



---@class UBulkheadDoor : USkeletalMeshComponent
---@field InteractionVolumeOffset FVector
---@field InteractionVolumeExtents FVector
---@field ObstructionVolumeName FName
---@field DoorState EDynamicState
---@field bAllowsShippableTransfer boolean
---@field Index int32
---@field OpenSoundCue USoundCue
---@field CloseSoundCue USoundCue
---@field InteractionVolume UBoxComponent
---@field ObstructionVolume UBoxComponent
---@field WaterSpreadFXInstance UParticleSystemComponent
local UBulkheadDoor = {}

function UBulkheadDoor:OnRep_DoorState() end


---@class UBulkheadDoorAnimInstance : UAnimInstance
---@field DoorState EDynamicState
local UBulkheadDoorAnimInstance = {}



---@class UBulkheadDoorUseComponent : UUseComponent
local UBulkheadDoorUseComponent = {}


---@class UCalloutComponent : UActorComponent
---@field Cooldown float
---@field CalloutMarkerGhostClass TSubclassOf<ACalloutMarkerGhost>
---@field CalloutMarkerClass TSubclassOf<ACalloutMarker>
---@field WorldCalloutInfoList TArray<FCalloutInfo>
local UCalloutComponent = {}



---@class UCharacterAnimInstance : UAnimInstance
---@field FootstepsAudioComp UAudioComponent
---@field Speed float
---@field AngularSpeedNative float
---@field LadderClimbSpeedNormalized float
---@field MovementDirection float
---@field bIsFalling boolean
---@field bIsScoping boolean
---@field ShoulderingDuration float
---@field bIsBlocking boolean
---@field bIsWorking boolean
---@field bIsTrapped boolean
---@field bIsInHeavilyFlooded boolean
---@field bIsSwimming boolean
---@field bIsDrowning boolean
---@field AimOffsetYaw float
---@field AimOffsetPitch float
---@field PlayRateNative float
---@field CrankingPlayRateNative float
---@field CharacterStance ESimCharacterStance
---@field ActivityState ECharacterActivityState
---@field EquippedWeaponGripType EEquippedWeaponGripType
---@field StaggerAmount float
---@field AttackChargingProgress float
---@field CurrentFallingPose uint8
---@field bStanceIsCrouched boolean
---@field bStanceIsProne boolean
---@field bIsCommander boolean
---@field bIsSitting boolean
---@field bIsZombie boolean
---@field ZombieType EZombieType
---@field bHasLeftHandIK boolean
---@field bHasRightHandIK boolean
---@field LeftHandIKTransform FTransform
---@field RightHandIKTransform FTransform
local UCharacterAnimInstance = {}

---@param ActivityState ECharacterActivityState
---@return float
function UCharacterAnimInstance:OnStartActivityState(ActivityState) end
---@param InActivityState ECharacterActivityState
---@return float
function UCharacterAnimInstance:GetActivityStateDuration(InActivityState) end
---@param Notify UAnimNotify
function UCharacterAnimInstance:AnimNotify_ShowEquippedMesh(Notify) end
---@param Notify UAnimNotify
function UCharacterAnimInstance:AnimNotify_HideEquippedMesh(Notify) end
---@param Notify UAnimNotify
function UCharacterAnimInstance:AnimNotify_FootFallR(Notify) end
---@param Notify UAnimNotify
function UCharacterAnimInstance:AnimNotify_FootFallL(Notify) end


---@class UClientConfigManager : UObject
local UClientConfigManager = {}


---@class UClientStreamingManager : UObject
---@field StreamingCheckInterval float
---@field CullDistance float
---@field StreamingLevels TArray<ULevelStreamingHex>
local UClientStreamingManager = {}

---@param LevelStreaming ULevelStreamingHex
function UClientStreamingManager:OnLevelUnloaded(LevelStreaming) end
---@param LevelStreaming ULevelStreamingHex
function UClientStreamingManager:OnLevelShown(LevelStreaming) end
---@param LevelStreaming ULevelStreamingHex
function UClientStreamingManager:OnLevelLoadComplete(LevelStreaming) end
---@param LevelStreaming ULevelStreamingHex
function UClientStreamingManager:OnLevelHidden(LevelStreaming) end


---@class UCoastalGunAnimInstance : UAnimInstance
---@field TrackingAngle float
local UCoastalGunAnimInstance = {}



---@class UConnectionRulesComponent : UActorComponent
---@field Rules TArray<FConnectionRule>
---@field DefaultRule FConnectionRule
local UConnectionRulesComponent = {}



---@class UConstructionEquipmentAnimInstance : UAnimInstance
---@field Angle float
---@field Pitch float
---@field Yaw float
---@field HorizontalDistance float
---@field VerticalDistance float
local UConstructionEquipmentAnimInstance = {}



---@class UConstructionGunnerComponent : UMountComponent
---@field bSupportsAdvancedConstruction boolean
local UConstructionGunnerComponent = {}



---@class UConstructionVehicleAnimInstance : USimVehicleAnimInstance
---@field LeftTreadPlayrate float
---@field RightTreadPlayrate float
---@field CabinYaw float
---@field bIsDoingWork boolean
local UConstructionVehicleAnimInstance = {}



---@class UCraneComponent : UActorComponent
---@field Components FCraneComponents
---@field Config FCraneComponentConfig
---@field State ECraneState
---@field HorizontalDistanceToTarget float
---@field CraneHeight float
---@field PulleyLength float
---@field CabRotationZ float
---@field HookRotationZ float
---@field CurrentShippable FName
---@field ShippableData FReplicatedShippableData
---@field RelevantShippable AActor
---@field RelevantShippableTarget AActor
---@field SavedData FSavedShippableData
---@field DynamicMeshComponent UMeshComponent
local UCraneComponent = {}

---@param HookRotation float
function UCraneComponent:ServerUpdateHookRotation(HookRotation) end
---@param AimLocation FVector_NetQuantize
function UCraneComponent:ServerUpdateAimLocation(AimLocation) end
---@param Actor AActor
function UCraneComponent:ServerTransferShippableTo(Actor) end
function UCraneComponent:ServerToggleDeployment() end
---@param bInIsScoping boolean
function UCraneComponent:ServerSetIsScoping(bInIsScoping) end
---@param Vehicle ASimVehicle
function UCraneComponent:ServerPickUpShippableFrom(Vehicle) end
---@param Actor AActor
function UCraneComponent:ServerPickUpShippable(Actor) end
function UCraneComponent:ServerDropShippable() end
---@param PreviousState ECraneState
function UCraneComponent:OnRep_State(PreviousState) end
function UCraneComponent:OnRep_ShippableData() end
function UCraneComponent:OnRep_RelevantShippable() end
---@param PreviousPulleyLength float
function UCraneComponent:OnRep_PulleyLength(PreviousPulleyLength) end
---@param PreviousHorizontalDistanceToTarget float
function UCraneComponent:OnRep_HorizontalDistanceToTarget(PreviousHorizontalDistanceToTarget) end
function UCraneComponent:OnRep_CurrentShippable() end
---@param PreviousCabRotationZ float
function UCraneComponent:OnRep_CabRotationZ(PreviousCabRotationZ) end
---@param Status EShippableStatus
function UCraneComponent:ClientShowShippableStatus(Status) end


---@class UCraneComponentAnimInstance : UAnimInstance
---@field Speed float
---@field WheelRadius float
---@field Yaw float
---@field HookYaw float
---@field HorizontalDistanceToTarget float
---@field CraneHeight float
---@field PulleyLength float
---@field bIsDestroyed boolean
---@field bIsEmplaced boolean
local UCraneComponentAnimInstance = {}



---@class UCraneOperatorComponent : UMountComponent
local UCraneOperatorComponent = {}

---@param HookRotation float
function UCraneOperatorComponent:ServerUpdateHookRotation(HookRotation) end
---@param AimLocation FVector_NetQuantize
function UCraneOperatorComponent:ServerUpdateAimLocation(AimLocation) end
---@param Actor AActor
function UCraneOperatorComponent:ServerTransferShippableTo(Actor) end
function UCraneOperatorComponent:ServerToggleDeployment() end
---@param bIsScoping boolean
function UCraneOperatorComponent:ServerSetIsScoping(bIsScoping) end
---@param Vehicle ASimVehicle
function UCraneOperatorComponent:ServerPickUpShippableFrom(Vehicle) end
---@param Actor AActor
function UCraneOperatorComponent:ServerPickUpShippable(Actor) end
function UCraneOperatorComponent:ServerDropShippable() end
---@param Status EShippableStatus
function UCraneOperatorComponent:ClientShowShippableStatus(Status) end


---@class UCraneSpawnLocationComponent : USceneComponent
---@field CraneClass TSubclassOf<AStaticCrane>
---@field Crane AStructure
---@field UseAreaBox UBoxComponent
---@field bIsSpawned boolean
local UCraneSpawnLocationComponent = {}



---@class UCrossRegionActorManager : UObject
---@field AllRemoteActors TSet<AActor>
local UCrossRegionActorManager = {}



---@class UCursorWidget : UUserWidget
local UCursorWidget = {}

---@return FSlateBrush
function UCursorWidget:GetCursorBrush() end


---@class UDecayDamageType : USimDamageType
local UDecayDamageType = {}


---@class UDecayPreventionUserComponent : UUserComponent
---@field StructureCounts FDecayPreventionStructureCounts
local UDecayPreventionUserComponent = {}

function UDecayPreventionUserComponent:ServerUpdateStructureCount() end


---@class UDeployUseComponent : UUseComponent
local UDeployUseComponent = {}


---@class UDeployableItemComponent : ULargeItemComponent
local UDeployableItemComponent = {}


---@class UDeployedTripodAnimInstance : UAnimInstance
---@field bIsDeployed boolean
---@field Height float
---@field RelativeYaw float
---@field RelativePitch float
local UDeployedTripodAnimInstance = {}



---@class UDepthProjectileMovementComponent : UProjectileMovementComponent
local UDepthProjectileMovementComponent = {}


---@class UDockComponent : UBoxComponent
---@field bRequiresDynamicHeightCheck boolean
---@field MaximumAngle float
---@field SurfaceOffset float
---@field bUseComponentForwardVector boolean
local UDockComponent = {}



---@class UDrawStructureLayerComponent : UPrimitiveComponent
local UDrawStructureLayerComponent = {}


---@class UDrawbridgeAnimInstance : UAnimInstance
---@field bIsSwitchOpen boolean
---@field OpenProgress float
local UDrawbridgeAnimInstance = {}



---@class UEmplacedFoundationAnimInstance : UAnimInstance
---@field Yaw float
local UEmplacedFoundationAnimInstance = {}



---@class UEmplacedWeaponAnimInstance : UAnimInstance
---@field Yaw float
---@field Pitch float
---@field bIsCranking boolean
---@field bIsShooting boolean
local UEmplacedWeaponAnimInstance = {}

function UEmplacedWeaponAnimInstance:OnFiringComplete() end
---@param Notify UAnimNotify
function UEmplacedWeaponAnimInstance:AnimNotify_OnFiringComplete(Notify) end


---@class UEmplacementMortarMountComponent : UMultiAmmoStructureMountComponent
---@field ScopeRange float
---@field MuzzleFlashPS UParticleSystem
---@field TelegraphDelay float
---@field MortarFlightTime float
local UEmplacementMortarMountComponent = {}

---@param ActivityStateChange FActivityStateChange
---@param Distance float
function UEmplacementMortarMountComponent:ServerStartInvoke(ActivityStateChange, Distance) end
---@param AmmoPickupCDO AExplosiveAmmoPickup
function UEmplacementMortarMountComponent:MulticastPlayFiringFX(AmmoPickupCDO) end
---@param TraceStart FVector
---@param TraceEnd FVector
---@param Location FVector
---@param AmmoPickupCDO AExplosiveAmmoPickup
function UEmplacementMortarMountComponent:MulticastDamageDebug(TraceStart, TraceEnd, Location, AmmoPickupCDO) end


---@class UEnterVehicleUseComponent : UUseComponent
local UEnterVehicleUseComponent = {}


---@class UEnvironmentDamageType : USimDamageType
local UEnvironmentDamageType = {}


---@class UEnvironmentalModificationData : UObject
---@field CraterS TArray<FCraterInfo>
---@field MaxCraterCoverage float
---@field MinCraterSpawnDevastation float
---@field CraterSpawnProbability float
---@field MaxCraterAngle float
---@field Decal FDecalData
---@field TownDecal FDecalData
---@field TownDecalDistance float
---@field DecalSortOrder int32
---@field PuddleDecalSortOrder int32
---@field FoliageReplacements TArray<FFoliageModificationInfo>
---@field MaxTreeRemovalPercentage float
---@field FoliageCullInstancedStaticMeshClass TSubclassOf<UInstancedStaticMeshComponent>
---@field FoliageCullMeshZOffset float
---@field FoliageRemovalThresholdWeights float
---@field SampleExtents float
---@field DevastationToContrast UCurveFloat
---@field DevastationToSaturation UCurveFloat
---@field SunHeightToDevastationPostProcessMultiplier UCurveFloat
---@field MaxPuddleCoverage float
---@field PuddlesInGroupDistribution UCurveFloat
---@field PuddleGroupRadiusDistribution UCurveFloat
---@field PuddleMinDistance float
---@field PuddleMinDistanceDistribution UCurveFloat
---@field PuddleRadiusDistribution UCurveFloat
---@field PuddleMaximumRainfallDistribution UCurveFloat
---@field StructureMaximumRainfallDistribution UCurveFloat
---@field RainfallVisualMappingCurve UCurveFloat
---@field RainfallPerIntensitySecond float
---@field RainfallDevastationMultiplier float
---@field RainfallDryingRate float
---@field MaximumPuddleSlopeAngle float
---@field PuddleDecals TArray<FPuddleDecalInfo>
---@field PuddleBlockingPhysicalMaterials TArray<UPhysicalMaterial>
---@field RainfallPerShovel float
---@field RainfallPerWaterBucket float
local UEnvironmentalModificationData = {}



---@class UEquipmentHolderComponent : UItemHolderComponent
local UEquipmentHolderComponent = {}


---@class UExitComponent : USceneComponent
local UExitComponent = {}


---@class UExplodeOnDeathComponent : UActorComponent
---@field ExplosionTemplate TSubclassOf<AWarExplosionEffect>
---@field ExplosiveCodeName FName
---@field ExplosionOffsetZ float
---@field AcceptDamageTypes TArray<EDamageType>
local UExplodeOnDeathComponent = {}



---@class UExplosiveItemComponent : UItemComponent
---@field DeployDuration float
---@field ExplosiveClass TSubclassOf<AExplosive>
---@field DeploySound USoundCue
---@field ShouldShowDetonationMessage boolean
---@field bPreventBorderPlacement boolean
---@field ShouldDoLandscapeCheck boolean
---@field bIsEquipped boolean
local UExplosiveItemComponent = {}

---@param ActivityStateChange FActivityStateChange
function UExplosiveItemComponent:ServerStartInvoke(ActivityStateChange) end
function UExplosiveItemComponent:OnRep_IsEquipped() end
function UExplosiveItemComponent:MulticastPlayDeploySFX() end


---@class UFacilityFuelLightComponent : USceneComponent
---@field MaterialIndex int32
local UFacilityFuelLightComponent = {}



---@class UFacilityLightComponent : UActorComponent
---@field TargetTag FName
---@field Materials TArray<UMaterialInterface>
---@field RenderInfoArray TArray<FFacilityLightRenderInfo>
local UFacilityLightComponent = {}



---@class UFacilityRefineryAnimInstance : UAnimInstance
---@field bIsActive boolean
---@field AnimatedMaterial UMaterialInterface
---@field AnimatedSocketName FName
---@field UVOffsetSpeed float
local UFacilityRefineryAnimInstance = {}



---@class UFacilityRefineryUserComponent : UUserComponent
---@field Order FFacilityRefineryOrder
---@field PendingOrderCount uint8
---@field OrderCount uint8
---@field ItemInputBuffer int16
local UFacilityRefineryUserComponent = {}

---@param ItemsType EFacilityRefineryItemsType
---@param ItemIndex uint8
---@param Amount uint16
function UFacilityRefineryUserComponent:ServerSubmitResources(ItemsType, ItemIndex, Amount) end
---@param Index uint8
---@param ItemsType EFacilityRefineryItemsType
---@param ItemIndex uint8
---@param Amount uint16
function UFacilityRefineryUserComponent:ServerStartNewOrderWithResources(Index, ItemsType, ItemIndex, Amount) end
---@param Index int8
function UFacilityRefineryUserComponent:ServerSetConversionInfo(Index) end
---@param AccessLevel EAccessLevel
function UFacilityRefineryUserComponent:ServerSetAccessLevel(AccessLevel) end
---@param ItemsType EFacilityRefineryItemsType
---@param ItemIndex uint8
---@param Amount uint16
---@param bRetrieveAsCrates boolean
---@param bSubmitToStockpile boolean
function UFacilityRefineryUserComponent:ServerRetrieveResources(ItemsType, ItemIndex, Amount, bRetrieveAsCrates, bSubmitToStockpile) end
function UFacilityRefineryUserComponent:OnRep_PendingOrderCount() end
function UFacilityRefineryUserComponent:OnRep_OrderCount() end
function UFacilityRefineryUserComponent:OnRep_Order() end
function UFacilityRefineryUserComponent:OnRep_ItemInputBuffer() end


---@class UFestivalFlagItemComponent : ULargeItemComponent
---@field WalkingSpeedScale float
---@field TeamId uint8
local UFestivalFlagItemComponent = {}

function UFestivalFlagItemComponent:OnRep_TeamID() end


---@class UFirePitComponent : USceneComponent
---@field TemperatureModifierSphereComponent UTemperatureModifierSphereComponent
---@field TemperatureModifierBoxComponent UTemperatureModifierBoxComponent
---@field FireMesh UStaticMeshComponent
---@field Fire1ParticleSystem UParticleSystemComponent
---@field Fire2ParticleSystem UParticleSystemComponent
---@field Fire3ParticleSystem UParticleSystemComponent
---@field FireSFXLoop UWarAudioComponent
---@field DieselConsumptionRate float
local UFirePitComponent = {}



---@class UFiremanMountComponent : UMountComponent
---@field CoalPerBoost int32
local UFiremanMountComponent = {}

---@param ActivityStateChange FActivityStateChange
function UFiremanMountComponent:ServerBoost(ActivityStateChange) end
function UFiremanMountComponent:MulticastBoostFX() end


---@class UFirstAidKitComponent : UItemComponent
---@field HealAmountPerApplication float
---@field HealApplicationInterval_Sec float
---@field HealingChargesPerBandage uint8
---@field FirstAidKitMesh USkeletalMesh
---@field FirstAidApplicationSound USoundCue
---@field bIsEquipped boolean
local UFirstAidKitComponent = {}

function UFirstAidKitComponent:ServerUseFirstAidKit() end
---@param ActivityStateChange FActivityStateChange
function UFirstAidKitComponent:ServerStartActivityState(ActivityStateChange) end
function UFirstAidKitComponent:ServerCancelActivityState() end
function UFirstAidKitComponent:OnRep_IsEquipped() end


---@class UFlameMountComponent : UHitScanMountComponent
---@field FlameStreamFX UParticleSystem
---@field FlameBurstFX UParticleSystem
---@field AttachedFlameComponent UParticleSystemComponent
---@field ImpactBurstFXComponent UParticleSystemComponent
---@field FuelReloadAmount float
---@field FlameSpeedPredictionFactor float
---@field FlameStreamFXParam float
---@field FlameImpactFXInfo FFlameImpactFXInfo
local UFlameMountComponent = {}

function UFlameMountComponent:OnRep_FlameStreamFXParam() end
function UFlameMountComponent:OnRep_FlameImpactFXInfo() end


---@class UFlamethrowerWeaponComponent : UHeavyMachineGunItemComponent
---@field FlameStreamFX UParticleSystem
---@field FlameBurstFX UParticleSystem
---@field FlameIdleFX UParticleSystem
---@field AttachedFlameComponent UParticleSystemComponent
---@field ImpactBurstFXComponent UParticleSystemComponent
---@field IdleFlameFXComponent UParticleSystemComponent
---@field FlameSpeedPredictionFactor float
---@field FlameStreamFXParam float
---@field FlameImpactFXInfo FFlameImpactFXInfo
---@field CachedAmmoPickupCDO AAmmoPickup
---@field IdleFlameFXOffset FVector
local UFlamethrowerWeaponComponent = {}

function UFlamethrowerWeaponComponent:OnRep_FlameStreamFXParam() end
function UFlamethrowerWeaponComponent:OnRep_FlameImpactFXInfo() end


---@class UFloodableComponent : UActorComponent
---@field Rooms TArray<URoomComponent>
---@field Doors TArray<UBulkheadDoor>
---@field LeakRepairCostMultiplier float
---@field LeakWaterPerSecondMultiplier float
---@field WaterSpreadFX UParticleSystem
---@field WaterStencilName FName
---@field MaxWaterLevel float
---@field MaxWaterHeight float
local UFloodableComponent = {}



---@class UFortFireSuppressionAnimInstance : UAnimInstance
---@field bIsDispensingWater boolean
local UFortFireSuppressionAnimInstance = {}



---@class UFortStaticArtilleryAnimInstance : UAnimInstance
---@field HorizontalAngle float
---@field VerticalAngle float
local UFortStaticArtilleryAnimInstance = {}



---@class UFoxholeTurretAnimInstance : UAnimInstance
---@field TrackingAngle float
local UFoxholeTurretAnimInstance = {}



---@class UFreighterAnimInstance : USimVehicleAnimInstance
---@field FreighterState EFreighterState
local UFreighterAnimInstance = {}



---@class UFuelItemComponent : UItemComponent
---@field FuelItemCodeName FName
---@field FuelCapacity int32
---@field RefuelSound USoundCue
---@field bIsEquipped boolean
local UFuelItemComponent = {}

---@param ActivityStateChange FActivityStateChange
function UFuelItemComponent:ServerStartActivityState(ActivityStateChange) end
function UFuelItemComponent:ServerRefuelTarget() end
function UFuelItemComponent:ServerCancelActivityState() end
function UFuelItemComponent:OnRep_IsEquipped() end


---@class UGangwayRamp : USkeletalMeshComponent
---@field RampData FRampData
---@field InteractionVolumeOffset FVector
---@field InteractionVolumeExtents FVector
---@field DeployLoopSoundCue USoundCue
---@field DeployCompleteSoundCue USoundCue
---@field InteractionVolume UBoxComponent
---@field PassengerVolume UBoxComponent
---@field State ERampState
---@field RampAngle float
---@field DeployAudioComponent UAudioComponent
local UGangwayRamp = {}

---@param PrevState ERampState
function UGangwayRamp:OnRep_State(PrevState) end


---@class UGangwayRampAnimInstance : UAnimInstance
---@field RampState ERampState
---@field RampAngle float
local UGangwayRampAnimInstance = {}



---@class UGangwayRampUseComponent : UUseComponent
local UGangwayRampUseComponent = {}


---@class UGarrisonComponent : UActorComponent
---@field GarrisonSize float
---@field bIsGarrisonEnabled boolean
---@field bIsToggledDynamically boolean
local UGarrisonComponent = {}



---@class UGateAnimInstance : UAnimInstance
---@field GateState EGateState
local UGateAnimInstance = {}



---@class UGenericCrateStockpileComponent : UGenericStockpileComponent
local UGenericCrateStockpileComponent = {}


---@class UGenericItemStockpileComponent : UGenericStockpileComponent
local UGenericItemStockpileComponent = {}


---@class UGenericStockpileComponent : UActorComponent
---@field Configs TArray<FGenericStockpileConfig>
---@field RetrieveDurationModifier float
---@field CustomRetrieveDurationModifiers TMap<FName, float>
---@field bAllowWaterVehicles boolean
---@field bCloseUIWhenRetrieving boolean
---@field bRequireFullItemStockpileToSubmit boolean
---@field bAllowNeutralSubmissions boolean
---@field bAllowDirectRetrievals boolean
---@field bAllowContainerSubmission boolean
---@field bAllowTrainPassengerSubmission boolean
---@field bIsRestrictedByClaimStatus boolean
---@field bAreCratesDisassembled boolean
---@field Items TArray<FStockpileEntry>
---@field ReservableItemCrates TArray<FStockpileEntry>
---@field Vehicles TArray<FStockpileEntry>
---@field VehicleCrates TArray<FStockpileEntry>
---@field Structures TArray<FStockpileEntry>
---@field StructureCrates TArray<FStockpileEntry>
---@field Events FStockpileEvents
local UGenericStockpileComponent = {}

function UGenericStockpileComponent:OnRep_Items() end


---@class UGrenadeAdapterComponent : UHitScanWeaponComponent
---@field GrenadeAdapterMesh USkeletalMesh
---@field GrenadeReloadActivityStateInfo FActivityStateInfo
---@field GrenadeClasses TArray<TSubclassOf<AWarProjectile>>
---@field GrenadeFireSound USoundCue
---@field BayonetMesh USkeletalMesh
---@field AttachAccessorySound USoundCue
---@field BayonetAttackSound USoundCue
---@field GrenadeMultiAmmo FMultiAmmo
---@field bIsGrenadeMode boolean
---@field bIsBayonetMode boolean
local UGrenadeAdapterComponent = {}

---@param ActivityStateChange FActivityStateChange
function UGrenadeAdapterComponent:ServerToggleFireMode(ActivityStateChange) end
---@param InDesiredAmmoType FName
function UGrenadeAdapterComponent:ServerSetDesiredAmmoType(InDesiredAmmoType) end
---@param WeaponInvokeInfo FCharacterInvokeInfo
---@param ActivityStateChange FActivityStateChange
function UGrenadeAdapterComponent:ServerReleaseGrenade(WeaponInvokeInfo, ActivityStateChange) end
---@param ActivityStateChange FActivityStateChange
function UGrenadeAdapterComponent:ServerBayonetAttack(ActivityStateChange) end
function UGrenadeAdapterComponent:OnRep_IsGrenadeMode() end
function UGrenadeAdapterComponent:OnRep_IsBayonetMode() end
function UGrenadeAdapterComponent:OnRep_GrenadeMultiAmmo() end
function UGrenadeAdapterComponent:MulticastPlayFX() end
---@param InDesiredAmmoType FName
function UGrenadeAdapterComponent:ClientSetDesiredAmmoType(InDesiredAmmoType) end


---@class UGrenadeGunnerMountComponent : UProjectileGunnerMountComponent
---@field MultiAmmo FMultiAmmo
---@field GrenadeClasses TArray<TSubclassOf<AWarProjectile>>
local UGrenadeGunnerMountComponent = {}

---@param InDesiredAmmoType FName
function UGrenadeGunnerMountComponent:ServerSetDesiredAmmoType(InDesiredAmmoType) end


---@class UGrenadeItemComponent : UItemComponent
---@field GrenadeClass TSubclassOf<AWarProjectile>
---@field PostTossDelay float
---@field AimLineThickness float
---@field bCanCook boolean
---@field ThrowingStabilityInfo FThrowingStabilityInfo
---@field PinPullSound USoundCue
---@field bIsEquipped boolean
local UGrenadeItemComponent = {}

---@param WeaponInvokeInfo FCharacterInvokeInfo
---@param SecondsOnFuse float
---@param ActivityStateChange FActivityStateChange
---@param Target FVector
function UGrenadeItemComponent:ServerThrowGrenade(WeaponInvokeInfo, SecondsOnFuse, ActivityStateChange, Target) end
---@param ActivityStateChange FActivityStateChange
function UGrenadeItemComponent:ServerPullPin(ActivityStateChange) end
---@param WeaponInvokeInfo FCharacterInvokeInfo
---@param Target FVector
function UGrenadeItemComponent:ServerOnFuseExpired(WeaponInvokeInfo, Target) end
function UGrenadeItemComponent:OnRep_IsEquipped() end


---@class UGroundZeroDamageType : USimDamageType
local UGroundZeroDamageType = {}


---@class UGunTurretAnimInstance : UAnimInstance
---@field TrackingAngle float
local UGunTurretAnimInstance = {}



---@class UHUDWidgetStyle : USlateWidgetStyleContainerBase
---@field WidgetStyle FHUDStyle
local UHUDWidgetStyle = {}



---@class UHammerComponent : UTaskItemComponent
---@field DamageType TSubclassOf<UDamageType>
---@field ImpactEffectClass TSubclassOf<AImpactEffect>
---@field HammerHeadSocketName FName
---@field bCanBuild boolean
---@field ResourceLevel int32
---@field GatherXPMultiplier int32
local UHammerComponent = {}

function UHammerComponent:MulticastPlayImpactFX() end
---@param Resource AResource
---@param ImpactEffect TSubclassOf<AImpactEffect>
---@param GatherResult FGatherResult
function UHammerComponent:MulticastOnGather(Resource, ImpactEffect, GatherResult) end


---@class UHarvestDamageType : USimDamageType
local UHarvestDamageType = {}


---@class UHarvesterAnimInstance : USimVehicleAnimInstance
---@field bIsGrinding boolean
---@field bIsSplitting boolean
local UHarvesterAnimInstance = {}



---@class UHatchComponent : UUseComponent
---@field ExitNames TArray<FName>
---@field bIsExternal boolean
---@field bIsEntrance boolean
---@field bIsExit boolean
---@field bUserCantBeBasedOnOwner boolean
---@field bIsPseudoLadder boolean
---@field bTeleportToClosestPoint boolean
---@field Exits TArray<UHatchComponent>
local UHatchComponent = {}



---@class UHeadlessLocalPlayer : UWarLocalPlayer
local UHeadlessLocalPlayer = {}


---@class UHeavyMachineGunItemComponent : UItemComponent
---@field SkeletalMesh USkeletalMesh
---@field FireCameraShake TSubclassOf<UCameraShake>
---@field ImpactEffect TSubclassOf<AImpactEffect>
---@field WeaponFireFXClass TSubclassOf<AWeaponFireFX>
---@field WeaponShotSFX FWeaponShotSFX
---@field ShotSoundCue USoundCue
---@field MuzzleFlashPS UParticleSystem
---@field FiringRate float
---@field bSpawnFakeTracerFX boolean
---@field MitigationType ECoverMitigationType
---@field bRequiresOpenVehiclePlatform boolean
---@field bIsVehiclePlatformHeavyWeaponsRestricted boolean
---@field bCheckForOpenSpaceWhenFiring boolean
---@field bCanFireFromVehicle boolean
---@field bIsEquipped boolean
---@field SimulatedHitNotify FHitNotify
local UHeavyMachineGunItemComponent = {}

function UHeavyMachineGunItemComponent:ServerStopInvoke() end
---@param InvokeInfo FCharacterInvokeInfo
---@param ActivityStateChange FActivityStateChange
function UHeavyMachineGunItemComponent:ServerStartInvoke(InvokeInfo, ActivityStateChange) end
function UHeavyMachineGunItemComponent:OnRep_SimulatedHitNotify() end
function UHeavyMachineGunItemComponent:OnRep_IsEquipped() end


---@class UHitScanMountComponent : UMountComponent
---@field FiringRate float
---@field bIsAutomaticFire boolean
---@field bSpawnExtraTracers boolean
---@field bUsePerBarrelFX boolean
---@field ImpactEffect TSubclassOf<AImpactEffect>
---@field WeaponFireFXClass TSubclassOf<AWeaponFireFX>
---@field ExplosionClass TSubclassOf<AWarExplosionEffect>
---@field WeaponShotSFX FWeaponShotSFX
---@field ShotSoundCue USoundCue
---@field MuzzleFlashPS UParticleSystem
---@field SimulatedHitNotify FHitNotify
---@field Ammo int32
local UHitScanMountComponent = {}

function UHitScanMountComponent:ServerStopInvoke() end
---@param InvokeInfo FCharacterInvokeInfo
---@param ActivityStateChange FActivityStateChange
function UHitScanMountComponent:ServerStartInvoke(InvokeInfo, ActivityStateChange) end
function UHitScanMountComponent:OnRep_SimulatedHitNotify() end
function UHitScanMountComponent:MulticastSpawnTracerFX() end


---@class UHitScanWeaponComponent : UItemComponent
---@field FireCameraShake TSubclassOf<UCameraShake>
---@field ImpactEffect TSubclassOf<AImpactEffect>
---@field WeaponFireFXClass TSubclassOf<AWeaponFireFX>
---@field ShotSoundCue USoundCue
---@field ShotNoAmmoSoundCue USoundCue
---@field ClipEmptiedSoundCue USoundCue
---@field MuzzleFlashPS UParticleSystem
---@field SkeletalMesh USkeletalMesh
---@field TotalShotsFired uint8
---@field BurstFiringRate float
---@field MitigationType ECoverMitigationType
---@field bCanFireFromVehicle boolean
---@field bIsEquipped boolean
---@field AimAssistOffsetZ float
---@field SimulatedHitNotify FHitNotify
local UHitScanWeaponComponent = {}

---@param InvokeInfo FCharacterInvokeInfo
---@param ActivityStateChange FActivityStateChange
function UHitScanWeaponComponent:ServerStartInvoke(InvokeInfo, ActivityStateChange) end
function UHitScanWeaponComponent:OnRep_SimulatedHitNotify() end
function UHitScanWeaponComponent:OnRep_IsEquipped() end


---@class UHospitalComponent : UActorComponent
---@field NumBeds int32
---@field SpawnChargesPerPatient int32
---@field PatientConversionSeconds float
---@field Patients TArray<float>
---@field PatientVisuals TArray<uint8>
---@field RecoveredPatients TArray<int8>
local UHospitalComponent = {}



---@class UInfantryRailVehicleAnimInstance : URailVehicleAnimInstance
---@field RightGunnerYaw float
---@field RightGunnerPitch float
---@field bRightGunnerIsFiring boolean
---@field LeftGunnerYaw float
---@field LeftGunnerPitch float
---@field bLeftGunnerIsFiring boolean
---@field bIsRightHatchOpen boolean
---@field bIsLeftHatchOpen boolean
---@field MainGunnerYaw float
---@field MainGunnerPitch float
---@field bMainGunnerIsFiring boolean
local UInfantryRailVehicleAnimInstance = {}

---@param Notify UAnimNotify
function UInfantryRailVehicleAnimInstance:AnimNotify_OnFiringOver(Notify) end
---@param Notify UAnimNotify
function UInfantryRailVehicleAnimInstance:AnimNotify_OnAltFiringOver(Notify) end
---@param Notify UAnimNotify
function UInfantryRailVehicleAnimInstance:AnimNotify_OnAlt02FiringOver(Notify) end


---@class UInfraModificationSlotComponent : UModificationSlotComponent
local UInfraModificationSlotComponent = {}


---@class UInfrastructureComponent : UActorComponent
---@field FilteredTypes EFortModificationType
---@field Effectiveness float
local UInfrastructureComponent = {}



---@class UIntelCenterAnimInstance : UAnimInstance
---@field Direction float
---@field Pitch float
local UIntelCenterAnimInstance = {}



---@class UIntelCenterMountComponent : UMountComponent
local UIntelCenterMountComponent = {}

---@param Pitch float
function UIntelCenterMountComponent:ServerSetDesiredPitch(Pitch) end
function UIntelCenterMountComponent:ServerFireListeningArea() end


---@class UInteractiveBlueprintComponent : UUseComponent
---@field BPOnUse FInteractiveBlueprintComponentBPOnUse
local UInteractiveBlueprintComponent = {}



---@class UItemComponent : UActorComponent
---@field EquippedGripType EEquippedWeaponGripType
---@field ActivityStateInfos FActivityStateInfo
---@field ReloadSoundCue USoundCue
---@field AnimClass TSubclassOf<UAnimInstance>
---@field MuzzleSocketName FName
---@field CompatibleAmmoCodeName FName
---@field DeployCodeName FName
---@field SafeItem boolean
---@field AttachedItemMesh USkeletalMesh
---@field MeshOffset FVector
---@field MeshRotation FRotator
---@field GroundItemMesh UStaticMesh
---@field GroundItemActivityState ECharacterActivityState
---@field GroundItemOffset FVector
---@field bRequiresCoverOrLowStanceToInvoke boolean
---@field bAllowsMovementDuringReload boolean
local UItemComponent = {}

---@param CurrentAmmo int32
function UItemComponent:ClientSyncAmmo(CurrentAmmo) end


---@class UItemGroupRenderComponent : USceneComponent
---@field DataClass TSubclassOf<UItemGroupRenderData>
---@field StockpileIndex int32
---@field CurrentMaterial UMaterialInterface
local UItemGroupRenderComponent = {}



---@class UItemGroupRenderData : UObject
---@field Layouts TMap<FName, FItemGroupRenderLayout>
---@field bGenerateLayoutData boolean
---@field LayoutSize FVector
local UItemGroupRenderData = {}



---@class UItemHolderComponent : UActorComponent
---@field InventoryType EInventoryType
---@field NextHolderId int16
---@field RestrictedItems TArray<FName>
---@field CustomStackableItems TArray<FName>
---@field bForceAllItemsAreStackable boolean
local UItemHolderComponent = {}

---@param ItemCDO AItemPickup
function UItemHolderComponent:ClientImportItem(ItemCDO) end
---@param SlotIndex int32
function UItemHolderComponent:ClientExportItem(SlotIndex) end


---@class UItemHolderUserComponent : UUserComponent
---@field Items TArray<FItemInstance>
local UItemHolderUserComponent = {}

function UItemHolderUserComponent:OnRep_Items() end


---@class UKarateDamageType : USimDamageType
local UKarateDamageType = {}


---@class ULRArtilleryCarAnimInstance : UInfantryRailVehicleAnimInstance
---@field bIsFiring boolean
---@field bIsCranking boolean
local ULRArtilleryCarAnimInstance = {}



---@class ULadderComponent : UBoxComponent
---@field EnterTransformTop FTransform
---@field EnterTransformBottom FTransform
---@field UpwardsExitZ float
---@field DownwardsExitZ float
---@field bIgnoreOwnerDuringMovement boolean
---@field bGenerateBlockingVolume boolean
---@field BlockingVolumeExtents FVector
---@field BlockingVolumeOffset FVector
---@field BlockingVolume UBoxComponent
local ULadderComponent = {}



---@class ULadderModificationSlotComponent : UModificationSlotComponent
---@field LadderType TSubclassOf<ALadder>
---@field Ladder ALadder
local ULadderModificationSlotComponent = {}



---@class ULandingCraftAnimInstance : USimVehicleGunnerSupportAnimInstance
---@field IsBackHatchOpen float
local ULandingCraftAnimInstance = {}



---@class ULandscapeDeformationManager : UObject
---@field LandscapeCache TArray<FCachedLandscape>
---@field EnvironmentalModifications TMap<FEnvironmentModificationKey, AEnvironmentModification>
---@field ModifiedFoliage TMap<UFoliageInstancedStaticMeshComponent, FModifiedFoliageInfo>
---@field InProgressTreeRebuilds TArray<UFoliageInstancedStaticMeshComponent>
local ULandscapeDeformationManager = {}

---@param X float
---@param Y float
---@param Extent float
function ULandscapeDeformationManager:VerifyLandscapeZ(X, Y, Extent) end
---@param Duration float
---@param bPersistent boolean
---@param bDrawOriginal boolean
---@param bDrawAll boolean
function ULandscapeDeformationManager:DebugDrawModifiedLandscapes(Duration, bPersistent, bDrawOriginal, bDrawAll) end
---@param Duration float
function ULandscapeDeformationManager:DebugDrawEnvironmentalModification(Duration) end


---@class ULargeItemComponent : UItemComponent
---@field Mesh USkeletalMesh
---@field bIsEquipped boolean
local ULargeItemComponent = {}

function ULargeItemComponent:OnRep_IsEquipped() end


---@class ULargeMaterialComponent : UTaskItemComponent
---@field ImpactEffect TSubclassOf<AImpactEffect>
local ULargeMaterialComponent = {}

function ULargeMaterialComponent:MulticastPlayFX() end


---@class ULargeShipAnimInstance : USimVehicleGunnerSupportAnimInstance
---@field AnchorState EAnchorState
---@field DockedState EDockedState
---@field RampExtension float
---@field RampAngle float
---@field bIsRampOpen boolean
---@field AltGunner05Yaw float
---@field AltGunner05Pitch float
---@field AltGunner06Yaw float
---@field AltGunner06Pitch float
---@field AltGunner07Yaw float
---@field AltGunner07Pitch float
---@field AltGunner08Yaw float
---@field AltGunner08Pitch float
---@field AltGunner09Yaw float
---@field AltGunner09Pitch float
---@field AltGunner10Yaw float
---@field AltGunner10Pitch float
---@field AltGunner11Yaw float
---@field AltGunner11Pitch float
---@field AltGunner12Yaw float
---@field AltGunner12Pitch float
---@field bIsAlt05Firing boolean
---@field bIsAlt06Firing boolean
---@field bIsAlt07Firing boolean
---@field bIsAlt08Firing boolean
---@field bIsAlt09Firing boolean
---@field bIsAlt10Firing boolean
---@field bIsAlt11Firing boolean
---@field bIsAlt12Firing boolean
---@field bIsAltGunner05Reloading boolean
---@field bIsAltGunner06Reloading boolean
---@field bIsAltGunner07Reloading boolean
---@field bIsAltGunner08Reloading boolean
---@field bIsAltGunner09Reloading boolean
---@field bIsAltGunner10Reloading boolean
---@field bIsAltGunner11Reloading boolean
---@field bIsAltGunner12Reloading boolean
---@field bIsAltGunner05Working boolean
---@field bIsAltGunner06Working boolean
---@field bIsAltGunner07Working boolean
---@field bIsAltGunner08Working boolean
---@field bIsAltGunner09Working boolean
---@field bIsAltGunner10Working boolean
---@field bIsAltGunner11Working boolean
---@field bIsAltGunner12Working boolean
---@field NormalizedRPM0 float
---@field NormalizedRPM1 float
---@field bIsThrustReversed0 boolean
---@field bIsThrustReversed1 boolean
local ULargeShipAnimInstance = {}

---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt12FiringOver(Notify) end
---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt11FiringOver(Notify) end
---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt10FiringOver(Notify) end
---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt09FiringOver(Notify) end
---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt08FiringOver(Notify) end
---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt07FiringOver(Notify) end
---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt06FiringOver(Notify) end
---@param Notify UAnimNotify
function ULargeShipAnimInstance:AnimNotify_OnAlt05FiringOver(Notify) end


---@class ULargeShipEngineAnimInstance : UAnimInstance
---@field DefaultPlayRate0 float
---@field DefaultPlayRate1 float
---@field PlayRate0 float
---@field PlayRate1 float
local ULargeShipEngineAnimInstance = {}



---@class ULevelStreamingHex : ULevelStreamingDynamic
local ULevelStreamingHex = {}

function ULevelStreamingHex:OnUnloaded() end
function ULevelStreamingHex:OnShown() end
function ULevelStreamingHex:OnLoaded() end
function ULevelStreamingHex:OnHidden() end


---@class UListeningAreaComponent : USceneComponent
---@field ListeningRadius float
---@field TeamId EMapTeamId
local UListeningAreaComponent = {}



---@class ULoadingAreaBoxComponent : UBoxComponent
---@field StorageType EStorageType
---@field bFlipSpawnOffsetY boolean
local ULoadingAreaBoxComponent = {}



---@class ULocationMultiplexedMeshComponent : UActorComponent
---@field TargetTag FName
---@field MeshStops TArray<FLocationMeshStop>
---@field SkeletalMeshStops TArray<FLocationSkeletalMeshStop>
local ULocationMultiplexedMeshComponent = {}



---@class ULongRangeArtilleryMountComponent : UMountComponent
---@field ExtendedMaxDistance float
---@field Ammo int8
---@field bCanDeploySelf boolean
local ULongRangeArtilleryMountComponent = {}

---@param Pitch float
function ULongRangeArtilleryMountComponent:ServerSetDesiredPitch(Pitch) end
---@param ActivityStateChange FActivityStateChange
function ULongRangeArtilleryMountComponent:ServerFireShell(ActivityStateChange) end
function ULongRangeArtilleryMountComponent:ServerDeploySelf() end


---@class ULoreKeyUseComponent : UUseComponent
---@field LoreListClass TSubclassOf<ALoreList>
---@field RemovedItemCodeName FName
---@field AddedItemCodeName FName
---@field StepIncompleteCodeName FName
---@field StepCompletedCodeName FName
local ULoreKeyUseComponent = {}



---@class UMaintenanceTunnelUserComponent : UUserComponent
---@field StructureCounts FDecayPreventionStructureCounts
local UMaintenanceTunnelUserComponent = {}

---@param Range float
---@param Filter uint16
function UMaintenanceTunnelUserComponent:ServerUpdateStructureCounts(Range, Filter) end
---@param Range float
---@param Filter uint16
function UMaintenanceTunnelUserComponent:ServerApplySettings(Range, Filter) end


---@class UMapIntelligenceSourceComponent : UActorComponent
---@field DetectionRadius float
---@field DefaultViewDirectionOffset float
---@field HalfDetectionAngle float
---@field OverlapCheckInterval float
local UMapIntelligenceSourceComponent = {}



---@class UMapWidgetStyle : USlateWidgetStyleContainerBase
---@field WidgetStyle FMapStyle
local UMapWidgetStyle = {}



---@class UMaterialOverrideBoxComponent : UBoxComponent
---@field Material UMaterialInterface
local UMaterialOverrideBoxComponent = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComponent UPrimitiveComponent
---@param OtherBodyIndex int32
function UMaterialOverrideBoxComponent:OnEndOverlap(OverlappedComponent, OtherActor, OtherComponent, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComponent UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function UMaterialOverrideBoxComponent:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComponent, OtherBodyIndex, bFromSweep, SweepResult) end


---@class UMechAnimInstance : UAnimInstance
---@field MechSpeed float
---@field RotationInPlaceSpeed float
---@field MovementDirection float
---@field HorizontalBodyAim float
---@field CannonVerticalAim float
---@field LeftHMGHorizontalAim float
---@field LeftHMGVerticalAim float
---@field RightHMGHorizontalAim float
---@field RightHMGVerticalAim float
---@field bIsDestroyed boolean
---@field bIsAnyWeaponAiming boolean
---@field bIsHatchOpen boolean
---@field MinSpeed float
---@field LegAngleCurve UCurveFloat
---@field LastYaw float
---@field LastAngularVelocity float
local UMechAnimInstance = {}



---@class UMeleeWeaponComponent : UItemComponent
---@field ChargeUpTime float
---@field QuickClickTime float
---@field bIsBlocking boolean
---@field bIsSustainingCharge boolean
---@field bIsEquipped boolean
---@field QuickAttackSound USoundCue
---@field LongAttackSound USoundCue
---@field ChargedSound USoundCue
---@field DefaultImpactEffectClass TSubclassOf<AImpactEffect>
---@field ChargedImpactEffectClass TSubclassOf<AImpactEffect>
---@field BlockedImpactEffectClass TSubclassOf<AImpactEffect>
local UMeleeWeaponComponent = {}

function UMeleeWeaponComponent:ServerStopInvoke() end
function UMeleeWeaponComponent:ServerStopCharging() end
function UMeleeWeaponComponent:ServerStartInvoke() end
---@param ActivityStateChange FActivityStateChange
function UMeleeWeaponComponent:ServerStartCharging(ActivityStateChange) end
---@param ActivityStateChange FActivityStateChange
function UMeleeWeaponComponent:ServerSimulateQuickAttack(ActivityStateChange) end
---@param ActivityStateChange FActivityStateChange
function UMeleeWeaponComponent:ServerSimulateLongAttack(ActivityStateChange) end
---@param bInIsblocking boolean
function UMeleeWeaponComponent:ServerSetIsBlocking(bInIsblocking) end
function UMeleeWeaponComponent:OnRep_IsEquipped() end
---@param SimulatedHitNotify FHitNotify
---@param bWasBlocked boolean
---@param bWasCharged boolean
function UMeleeWeaponComponent:MulticastSpawnImpactEffects(SimulatedHitNotify, bWasBlocked, bWasCharged) end
---@param bInIsblocking boolean
function UMeleeWeaponComponent:ClientSetIsBlocking(bInIsblocking) end


---@class UMeshVisibilityComponent : UActorComponent
---@field AnimatedMeshes TArray<UMeshComponent>
---@field AnimatedFloorMeshes TArray<UMeshComponent>
---@field Meshes TArray<UMeshComponent>
---@field FloorMeshes TArray<UMeshComponent>
---@field FloorIGRComponents TArray<UItemGroupRenderComponent>
local UMeshVisibilityComponent = {}



---@class UMiscItemComponent : UItemComponent
---@field bIsEquipped boolean
local UMiscItemComponent = {}

function UMiscItemComponent:OnRep_IsEquipped() end


---@class UModificationSlotComponent : USceneComponent
---@field bIsLinkedToSocket boolean
---@field LinkedSocketNames TArray<FName>
---@field bIsBlockedByLinkedSocket boolean
---@field BlockedByModSlotNames TArray<FName>
---@field BlockedByModTypes TSet<EFortModificationType>
---@field bOverrideSplineTarget boolean
---@field SplineTargetComponentNameOverride FName
---@field bIgnoreSocketModSiblings boolean
---@field SubComponentTags TArray<FName>
---@field Modifications TMap<EFortModificationType, FModificationDefinition>
---@field HighlightMaterial UMaterialInterface
---@field bIgnoreConcreteMaterial boolean
---@field bIsBuildableUnderRoads boolean
---@field bPreviewAllInGhost boolean
---@field ActiveType EFortModificationType
---@field ActiveTier FModificationTier
---@field ShownTier FModificationTier
---@field bRevertedToDefault boolean
---@field NumMaskBits int32
---@field MaskStartBit int32
---@field LinkedSockets TArray<TWeakObjectPtr<UBuildSocketComponent>>
---@field SpawnedActorComponents TMap<FName, TWeakObjectPtr<UActorComponent>>
local UModificationSlotComponent = {}



---@class UModularMountAnimInstance : UDeployedTripodAnimInstance
local UModularMountAnimInstance = {}


---@class UModularMountsComponent : UActorComponent
---@field ActiveModularMounts uint8
---@field GunnerInfo TArray<FGunnerInfo>
local UModularMountsComponent = {}

function UModularMountsComponent:OnRep_ActiveModularMounts() end


---@class UMonumentManager : UObject
local UMonumentManager = {}


---@class UMortarItemComponent : UMultiAmmoItemComponent
---@field SkeletalMesh USkeletalMesh
---@field MuzzleFlashPS UParticleSystem
---@field TelegraphDelay float
---@field MortarFlightTime float
---@field MinDistance float
---@field MaxDistance float
local UMortarItemComponent = {}

---@param Distance float
---@param ActivityStateChange FActivityStateChange
function UMortarItemComponent:ServerFire(Distance, ActivityStateChange) end
---@param AmmoPickup AExplosiveAmmoPickup
function UMortarItemComponent:MulticastPlayFiringFX(AmmoPickup) end
---@param HitLocation FVector
---@param Radius float
function UMortarItemComponent:ClientDrawDamageDebug(HitLocation, Radius) end


---@class UMountComponent : UActorComponent
---@field DisplayName FText
---@field AmmoName FName
---@field AmmoSlotFilterAmount int32
---@field ReloadSoundCue USoundCue
---@field Icon UTexture2D
---@field EquippedGripType EEquippedWeaponGripType
---@field ActivityStateInfos FActivityStateInfo
---@field RotationBaseSocketName FName
---@field bUseSingleItemSlotFilter boolean
---@field bMustBeStoppedToInvoke boolean
---@field bUseCharacterRotationForAim boolean
---@field bIsStationary boolean
---@field bUpdateCharacterRotation boolean
---@field LinkedVehicleSubsystem EVehicleSubsystem
---@field CachedAmmoPickupCDO AAmmoPickup
---@field bIsMultiWeapon boolean
---@field bIsDeployedGunner boolean
---@field bTriggerDriverFiringState boolean
---@field CameraLerpModifierOverride float
---@field MountIndex int8
---@field bIsEquipped boolean
local UMountComponent = {}

function UMountComponent:OnRep_MountIndex() end
function UMountComponent:OnRep_IsEquipped() end
---@param CurrentAmmo int32
function UMountComponent:ClientSyncAmmo(CurrentAmmo) end


---@class UMultiAmmoItemComponent : UItemComponent
---@field MultiAmmo FMultiAmmo
---@field bIsEquipped boolean
local UMultiAmmoItemComponent = {}

---@param InDesiredAmmoType FName
function UMultiAmmoItemComponent:ServerSetDesiredAmmoType(InDesiredAmmoType) end
function UMultiAmmoItemComponent:OnRep_MultiAmmo() end
function UMultiAmmoItemComponent:OnRep_IsEquipped() end
---@param InDesiredAmmoType FName
function UMultiAmmoItemComponent:ClientSetDesiredAmmoType(InDesiredAmmoType) end


---@class UMultiAmmoStructureMountComponent : UMountComponent
---@field MultiAmmo FMultiAmmo
local UMultiAmmoStructureMountComponent = {}

---@param InDesiredAmmoType FName
function UMultiAmmoStructureMountComponent:ServerSetDesiredAmmoType(InDesiredAmmoType) end


---@class UMultiAmmoVehicleMountComponent : UMountComponent
---@field bRequiresExternalReload boolean
---@field MultiAmmo FMultiAmmo
local UMultiAmmoVehicleMountComponent = {}

---@param InDesiredAmmoType FName
function UMultiAmmoVehicleMountComponent:ServerSetDesiredAmmoType(InDesiredAmmoType) end


---@class UMultiFloorVisibilityToggleComponent : UVisibilityToggleAreaComponent
---@field FloorVisibilityBitmask uint8
local UMultiFloorVisibilityToggleComponent = {}



---@class UMultiplexedSkeletalMeshComponent : UActorComponent
---@field TargetTag FName
---@field MeshStops TArray<FSkeletalMeshStop>
---@field InputValue int32
---@field SelectedMeshIndex uint8
---@field TransitionDownFX UParticleSystem
---@field TransitionUpSoundCue USoundCue
---@field Enabled boolean
---@field OnSelectedMeshChanged FMultiplexedSkeletalMeshComponentOnSelectedMeshChanged
local UMultiplexedSkeletalMeshComponent = {}

---@param IsEnabled boolean
function UMultiplexedSkeletalMeshComponent:SetEnabled(IsEnabled) end


---@class UMultiplexedStaticMeshComponent : UActorComponent
---@field TargetTag FName
---@field MeshStops TArray<FMeshStop>
---@field InputValue int32
---@field SelectedMeshIndex uint8
---@field MaterialOverridesC TArray<FMaterialOverride>
---@field MaterialOverridesW TArray<FMaterialOverride>
---@field TransitionDownFX UParticleSystem
---@field TransitionUpSoundCue USoundCue
---@field OnSelectedMeshChanged FMultiplexedStaticMeshComponentOnSelectedMeshChanged
---@field Enabled boolean
---@field MaterialOverrides TArray<FMaterialOverride>
local UMultiplexedStaticMeshComponent = {}

---@param IsEnabled boolean
function UMultiplexedStaticMeshComponent:SetEnabled(IsEnabled) end


---@class UNewsItemImageDownloadTask : UObject
---@field Owner AMainMenuPlayerController
---@field NewsItemInfo FNewsItemInfo
local UNewsItemImageDownloadTask = {}

---@param Texture UTexture2DDynamic
function UNewsItemImageDownloadTask:OnImageDownloadSuccess(Texture) end
---@param Texture UTexture2DDynamic
function UNewsItemImageDownloadTask:OnImageDownloadFailed(Texture) end


---@class UNonDamagingDamageType : USimDamageType
local UNonDamagingDamageType = {}


---@class UObscuringSphereComponent : USphereComponent
---@field MinimumVisibilityRadius float
local UObscuringSphereComponent = {}



---@class UObstructionCheckBoxComponent : UBoxComponent
local UObstructionCheckBoxComponent = {}


---@class UParkingSpotComponent : USceneComponent
local UParkingSpotComponent = {}


---@class UPayloadInstancedStaticMeshComponent : UInstancedStaticMeshComponent
---@field MeshRotation FRotator
---@field Rows uint8
---@field Columns uint8
---@field RowSpacing float
---@field ColumnSpacing float
---@field GroupIndex uint8
---@field MeshInstanceRemovalDelay float
local UPayloadInstancedStaticMeshComponent = {}



---@class UPayloadParticleSystemComponent : UParticleSystemComponent
---@field SlotCount uint8
---@field GroupIndex uint8
local UPayloadParticleSystemComponent = {}



---@class UPayloadStaticMeshComponent : UStaticMeshComponent
---@field GroupIndex uint8
---@field bLinkToSpecificGunnerIndex boolean
---@field GunnerIndex int32
local UPayloadStaticMeshComponent = {}



---@class UPersistentProxyComponent : UStaticMeshComponent
---@field MigrationTag FName
---@field ProxyLoadingDock TSubclassOf<APersistentProxy>
---@field bIsSpawned boolean
---@field SpawnedLoadingDock APersistentProxy
local UPersistentProxyComponent = {}



---@class UPipelineManager : UObject
local UPipelineManager = {}


---@class UPipelineUserComponent : UUserComponent
---@field RepPipelineSystem FRepPipelineSystem
local UPipelineUserComponent = {}

---@param DesiredCodeName FName
function UPipelineUserComponent:ServerSetLiquidType(DesiredCodeName) end
function UPipelineUserComponent:OnRep_System() end


---@class UPlayerAnimInstance2 : UCharacterAnimInstance
local UPlayerAnimInstance2 = {}


---@class UPlayerCameraRigComponent : USceneComponent
---@field TargetArmLength float
---@field AimRadiusToViewRangeCurve UCurveFloat
---@field NormalizedAimCurve UCurveVector
---@field ViewRangeToMaxArmLengthCurve UCurveFloat
local UPlayerCameraRigComponent = {}



---@class UPlayerCharacterMovementComponent : UCharacterMovementComponent
---@field MaxWalkSpeedProne float
---@field MaxLadderClimbingSpeed float
---@field ImmersionDepthHeightBias float
---@field WaterFrictionCoefficient float
local UPlayerCharacterMovementComponent = {}

---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function UPlayerCharacterMovementComponent:CapsuleEndOverlap(OverlappedComp, Other, OtherComp, OtherBodyIndex) end
---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function UPlayerCharacterMovementComponent:CapsuleBeginOverlap(OverlappedComp, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class UPlayerLOSRasterComponent : USceneComponent
---@field CharacterOutlineMaterial UMaterialInterface
---@field VisibilityIndicatorMaterial UMaterialInterface
---@field VisibilityIndicatorMaterialDynamic UMaterialInstanceDynamic
local UPlayerLOSRasterComponent = {}



---@class UPlayerProfileManager : UObject
---@field CachedWarProfileMap TMap<FString, FWarPlayerProfile>
local UPlayerProfileManager = {}



---@class UPlayerSaveGame : USaveGame
---@field Gamma float
---@field bSprintModeHeld boolean
---@field VolumeSettings TArray<FSoundClassVolume>
---@field bShowTutorial boolean
---@field bShowHomeTutorial boolean
---@field bShowMapTutorial boolean
---@field bShowZombieTutorial_2020 boolean
---@field bShowIntroductionScreen boolean
---@field TimesHammerTutorialShown int32
---@field bVoiceChatEnabled boolean
---@field bLocalChatEnabled boolean
---@field bSquadChatEnabled boolean
---@field ActiveVoiceOutputDeviceID FString
---@field ActiveMicDeviceID FString
---@field bMiniMapEnabled boolean
---@field ChatBroadcastLanguage EChatLanguage
---@field ChatListenLanguages TArray<EChatLanguage>
---@field LastJoinedServerName FString
---@field ClientLanguage ELanguageType
---@field StockpileSortMethod EItemSortMethod
---@field ActiveStockpileType EStockpileType
---@field LocalChatHistory TArray<FText>
---@field LocalVoiceMuteList TSet<FString>
---@field LocalVoicePlayerVolumeList TMap<FString, float>
---@field LocalTextChatMuteList TSet<FString>
---@field bPlayVoiceInBackground boolean
---@field bMuteEnemyPlayers boolean
---@field MutedTextChatChannels TSet<EChatChannel>
---@field LoadoutSaveData FLoadoutSaveData
---@field LastShardId int32
---@field SignpostVisibilityDistance float
---@field bStreamerModeEnabled boolean
---@field bIsBadWordFilterEnabled boolean
---@field LastFactionId EFactionId
---@field ReportTimes TMap<FString, FDateTime>
---@field QueuedModReplies TArray<FString>
---@field bUseDifferentialSteeringMode boolean
---@field MapLegendFilter FMapLegendFilter
---@field bTrainHUDModeEnabled boolean
---@field DeploymentWarningCount uint8
---@field WarIdsJoinedList TArray<FString>
local UPlayerSaveGame = {}



---@class UPowerConsumerComponent : UActorComponent
---@field TickRate float
---@field PowerConsumed float
---@field bAutoStart boolean
---@field bConsumeWhenVisibilityLimited boolean
local UPowerConsumerComponent = {}



---@class UPowerPoleUserComponent : UUserComponent
---@field bIsDisabled boolean
local UPowerPoleUserComponent = {}

---@param bInIsDisabled boolean
function UPowerPoleUserComponent:ServerSetIsDisabled(bInIsDisabled) end
function UPowerPoleUserComponent:OnRep_IsDisabled() end


---@class UProjectileGunnerMountComponent : UMountComponent
---@field MuzzleFlashPS UParticleSystem
---@field BackMuzzleFlashPS UParticleSystem
---@field ShotSoundCue USoundCue
---@field MinSpeed float
---@field MaxSpeed float
---@field SpeedVariation float
---@field SuggestedVelocitySpeed float
---@field FallbackAngle float
---@field DetonationDepthToggleIncrement float
---@field MinDetonationDepth float
---@field MaxDetonationDepth float
---@field ProjectileClass TSubclassOf<AWarProjectile>
---@field bIsArtilleryMode boolean
---@field bIsDepthMode boolean
---@field bShowAimMesh boolean
---@field bIsAutomaticFire boolean
---@field bApplyVehicleAngleLimit boolean
---@field Ammo int8
local UProjectileGunnerMountComponent = {}

function UProjectileGunnerMountComponent:ServerStopInvoke() end
---@param InvokeInfo FCharacterInvokeInfo
---@param ActivityStateChange FActivityStateChange
---@param InDetonationDepth float
function UProjectileGunnerMountComponent:ServerStartInvoke(InvokeInfo, ActivityStateChange, InDetonationDepth) end
---@param Pitch float
function UProjectileGunnerMountComponent:ServerSetPitch(Pitch) end
function UProjectileGunnerMountComponent:AllSpawnFiringEffects() end


---@class UProjectileItemComponent : UMultiAmmoItemComponent
---@field SkeletalMesh USkeletalMesh
---@field PayloadMesh USkeletalMesh
---@field MuzzleFlashPS UParticleSystem
---@field BackMuzzleFlashPS UParticleSystem
---@field ShotSoundCue USoundCue
---@field ProjectileClasses TArray<TSubclassOf<AWarProjectile>>
---@field FiringMode EProjectileFiringMode
---@field SuggestedVelocitySpeed float
---@field FallbackAngle float
---@field MinDistance float
---@field bIsSingleUse boolean
local UProjectileItemComponent = {}

---@param InvokeInfo FCharacterInvokeInfo
---@param ActivityStateChange FActivityStateChange
function UProjectileItemComponent:ServerStartInvoke(InvokeInfo, ActivityStateChange) end
function UProjectileItemComponent:AllSpawnFiringEffects() end


---@class UPuddleComponent : USphereComponent
local UPuddleComponent = {}


---@class UQuadrilateralCoverComponent : UInstancedStaticMeshComponent
---@field EndOffset float
---@field SideOffset float
---@field bUseMaxZ boolean
local UQuadrilateralCoverComponent = {}



---@class URWDVehicleMovementComponent : USimpleVehicleMovementComponent
---@field CenterOfGravityHeight float
---@field EngineForce float
---@field BrakeForce float
---@field HandbrakeForce float
---@field AirResistance float
---@field RollingResistance float
---@field TowingResistance float
---@field MaxEncumbranceMass float
---@field MassPerMuddynessOverride float
---@field bUseLegacyLateralCalc boolean
---@field TractorTowingResistanceModifier float
---@field TowingEngineForceMultiplier float
---@field Tractor ARWDSimVehicle
---@field Trailer ARWDSimVehicle
local URWDVehicleMovementComponent = {}



---@class URadioBackpackItemComponent : UMiscItemComponent
---@field DetectionCooldown float
---@field DetectionRadius float
local URadioBackpackItemComponent = {}



---@class URailCouplerUseComponent : UUseComponent
---@field ChainVisualOffset FVector
local URailCouplerUseComponent = {}



---@class URailSwitchUseComponent : UUseComponent
local URailSwitchUseComponent = {}


---@class URailVehicleAnimInstance : USimVehicleAnimInstance
---@field BufferYOffset float
---@field ExtendToDistance float
---@field MaxExtensionDistance float
---@field FrontBogieTurnAngle float
---@field RearBogieTurnAngle float
---@field BufferExtendFrontLeft float
---@field BufferExtendFrontRight float
---@field BufferExtendBackLeft float
---@field BufferExtendBackRight float
local URailVehicleAnimInstance = {}



---@class URailVehicleHospitalAnimInstance : URailVehicleAnimInstance
---@field GunnerYaw float
---@field GunnerPitch float
---@field bIsGunnerWorking boolean
local URailVehicleHospitalAnimInstance = {}



---@class URailVehicleMovementComponent : USimpleVehicleMovementComponent
---@field PhysicsState FRailPhysicsState
---@field NetworkUpdatePhysicsState FRailPhysicsState
---@field bNetworkPhysicsStateReceived boolean
---@field EngineForceCurve UCurveFloat
---@field BoostingEngineForceCurve UCurveFloat
---@field FrictionForceCurve UCurveFloat
---@field BrakingFrictionForceCurve UCurveFloat
---@field MaxRailSpeed float
---@field MaxRailSpeedBoosted float
local URailVehicleMovementComponent = {}



---@class URampRoomComponent : URoomComponent
---@field RampOperationVolumeName FName
---@field RampOperationVolume UPrimitiveComponent
local URampRoomComponent = {}



---@class UReadableTextComponent : UUseComponent
---@field LoreCodeName FName
local UReadableTextComponent = {}



---@class URefineryUserComponent : UUserComponent
---@field OrderInfo FRefinementOrderInfo
local URefineryUserComponent = {}



---@class UReplicatedGenericStockpileComponent : UGenericStockpileComponent
local UReplicatedGenericStockpileComponent = {}


---@class UReplicatedStockpileUserComponent : UStockpileUserComponent
local UReplicatedStockpileUserComponent = {}


---@class UReserveStockpileComponent : UActorComponent
---@field StockpileDataList TArray<FReserveStockpileData>
---@field ActivePassCodes TSet<uint16>
local UReserveStockpileComponent = {}



---@class UReserveStockpileUserComponent : UUserComponent
---@field StockpileDataList TArray<FReserveStockpileData>
---@field FailedPassCodeAttemptInfo FReserveStockpileFailedPassCodeInfo
---@field ReserveStockpileBeingUsed UReserveStockpileComponent
local UReserveStockpileUserComponent = {}

---@param SourceStockpileName FString
---@param CodeName FName
---@param Quantity int32
---@param StockpileType EStockpileEntryType
function UReserveStockpileUserComponent:ServerTransferRequestToPublic(SourceStockpileName, CodeName, Quantity, StockpileType) end
---@param SourceStockpileName FString
---@param DestinationStockpileName FString
---@param CodeName FName
---@param Quantity int32
---@param StockpileType EStockpileEntryType
function UReserveStockpileUserComponent:ServerTransferRequestFromReserveToReserve(SourceStockpileName, DestinationStockpileName, CodeName, Quantity, StockpileType) end
---@param SourceStockpileName FString
---@param DestinationStockpileName FString
---@param CodeName FName
---@param Quantity int32
function UReserveStockpileUserComponent:ServerTransferItemFromReserveToReserve(SourceStockpileName, DestinationStockpileName, CodeName, Quantity) end
---@param SourceStockpileName FString
---@param CodeName FName
---@param Quantity int32
function UReserveStockpileUserComponent:ServerTransferItemFromReserveToPublic(SourceStockpileName, CodeName, Quantity) end
---@param TargetStockpileName FString
---@param DestinationActor AActor
---@param Vehicle ASimVehicle
function UReserveStockpileUserComponent:ServerSubmitVehicle(TargetStockpileName, DestinationActor, Vehicle) end
---@param TargetStockpileName FString
---@param DestinationActor AActor
---@param ShippableCrate AShippableCrate
function UReserveStockpileUserComponent:ServerSubmitShippableCrate(TargetStockpileName, DestinationActor, ShippableCrate) end
---@param TargetStockpileName FString
---@param DestinationActor AActor
---@param ItemFilter FStockpileEntry
function UReserveStockpileUserComponent:ServerSubmitItemsFromPlayerStockpileFiltered(TargetStockpileName, DestinationActor, ItemFilter) end
---@param TargetStockpileName FString
---@param DestinationActor AActor
function UReserveStockpileUserComponent:ServerSubmitItemsFromPlayerStockpile(TargetStockpileName, DestinationActor) end
---@param TargetStockpileName FString
---@param DestinationActor AActor
---@param SourceItemHolder UItemHolderComponent
---@param ItemFilter FStockpileItemFilter
function UReserveStockpileUserComponent:ServerSubmitItemsFromItemHolderFiltered(TargetStockpileName, DestinationActor, SourceItemHolder, ItemFilter) end
---@param TargetStockpileName FString
---@param DestinationActor AActor
---@param SourceItemHolder UItemHolderComponent
function UReserveStockpileUserComponent:ServerSubmitItemsFromItemHolder(TargetStockpileName, DestinationActor, SourceItemHolder) end
---@param TargetStockpile FString
---@param DestinationActor AActor
---@param Container AContainer
function UReserveStockpileUserComponent:ServerSubmitContainer(TargetStockpile, DestinationActor, Container) end
---@param StockpileName FString
function UReserveStockpileUserComponent:ServerResetAccess(StockpileName) end
---@param StockpileName FString
function UReserveStockpileUserComponent:ServerReleaseStockpile(StockpileName) end
function UReserveStockpileUserComponent:ServerRefreshExpiryTime() end
---@param TargetStockpileName FString
---@param bMakeVisible boolean
function UReserveStockpileUserComponent:ServerMakeVisible(TargetStockpileName, bMakeVisible) end
---@param StockpileName FString
function UReserveStockpileUserComponent:ServerCreateStockpile(StockpileName) end
---@param PassCode int32
function UReserveStockpileUserComponent:ServerAccessStockpile(PassCode) end
---@param PreviousStockpileDataList TArray<FReserveStockpileData>
function UReserveStockpileUserComponent:OnRep_StockpileData(PreviousStockpileDataList) end
---@param Response ETransactionResponse
function UReserveStockpileUserComponent:ClientShowStockpileResponse(Response) end


---@class UResourceGroupRenderComponent : USceneComponent
---@field DataClass TSubclassOf<UResourceGroupRenderData>
---@field bSetItemHolderAllowedItems boolean
---@field ItemHolderIndex int32
---@field StockpileIndex int32
---@field LinkedItemHolder UItemHolderComponent
---@field LinkedGenericStockpile UGenericStockpileComponent
---@field ResourceNodes TArray<UStaticMeshComponent>
---@field CurrentMaterial UMaterialInterface
local UResourceGroupRenderComponent = {}



---@class UResourceGroupRenderData : UObject
---@field Info TArray<FResourceRenderInfo>
local UResourceGroupRenderData = {}



---@class UResourceMapping : UObject
---@field MineTypes TMap<FName, TSubclassOf<AResourceMine>>
---@field FieldTypes TMap<FName, TSubclassOf<AResourceField>>
---@field OilRigType TSubclassOf<AFacilityRefinery>
local UResourceMapping = {}



---@class URoomComponent : USceneComponent
---@field CodeName FName
---@field Index int8
---@field bIsSpawnRoom boolean
---@field SimScreenOverride ESimScreen
---@field MaxLeakZ float
---@field MinLeakZ float
---@field MaxLeakRadius float
---@field MinLeakRadius float
---@field LeakOffsetRanges TArray<FLeakOffsetRange>
---@field HullThickness float
---@field HullThicknessCurve UCurveFloat
---@field MinWaterSpreadThreshold float
---@field RoomVolumeNames TArray<FName>
---@field WaterVolumeNames TArray<FName>
---@field BoundMinExtension float
---@field BoundMaxExtension float
---@field BoundWidthExtension float
---@field CollisionBoneLeft FName
---@field CollisionBoneRight FName
---@field DeckCollisionBones TArray<FName>
---@field DoorIndices TSet<int8>
---@field WaterLeakFX UParticleSystem
---@field AboveWaterLeakFX UParticleSystem
---@field LeakDecalExterior UMaterialInterface
---@field LeakDecalInterior UMaterialInterface
---@field LargeLeakDecalExterior UMaterialInterface
---@field LargeLeakDecalInterior UMaterialInterface
---@field PatchedLargeLeakDecalExterior UMaterialInterface
---@field PatchedLargeLeakDecalInterior UMaterialInterface
---@field LeakCreatedSoundCue USoundCue
---@field LeakingSoundCue USoundCue
---@field FloodedSoundCue USoundCue
---@field MinLeakDecalSize FVector
---@field MaxLeakDecalSize FVector
---@field MinLeakFXSize float
---@field MaxLeakFXSize float
---@field PatchedLargeLeakFXScale float
---@field RoomVolumes TArray<UPrimitiveComponent>
---@field WaterVolumes TArray<UPrimitiveComponent>
---@field Floodable UFloodableComponent
---@field RoomBounds FBox
---@field WaterLevel float
---@field WaterLevelTickHandle FTimerHandle
---@field UsableVolumes TArray<UPrimitiveComponent>
---@field FloodedSFXLoop UAudioComponent
local URoomComponent = {}

function URoomComponent:OnRep_WaterLevel() end
---@param LocalLocation FVector
function URoomComponent:MulticastPlayLeakFX(LocalLocation) end


---@class URotatorMountComponent : UMountComponent
---@field PlayersRequiredToRotate int32
local URotatorMountComponent = {}

---@param Val float
function URotatorMountComponent:ServerOnMoveRight(Val) end


---@class URuinedComponent : USceneComponent
local URuinedComponent = {}


---@class URuinedMeshComponent : UStaticMeshComponent
local URuinedMeshComponent = {}


---@class USafeHouseVisibilityToggleComponent : UVisibilityToggleAreaComponent
local USafeHouseVisibilityToggleComponent = {}


---@class UScoutVehicleAnimInstance : USimVehicleAnimInstance
---@field bIsTransmitting boolean
local UScoutVehicleAnimInstance = {}



---@class USeatComponent : USceneComponent
---@field Index int32
---@field TriggerName FName
---@field ExitName FName
---@field Trigger UBoxComponent
---@field Exit USceneComponent
---@field MountCodeName FName
---@field bIsExposed boolean
---@field bExposedSeatRequiresLoS boolean
---@field MountComponent TSubclassOf<UMountComponent>
---@field ModularMounts FModularMounts
---@field ItemHolderIndex int32
---@field bOverrideHandIK boolean
---@field LeftHandIKSocketName FName
---@field RightHandIKSocketName FName
---@field bUsableWhenAnchored boolean
---@field bUsableWhenSubmerged boolean
---@field bIsEnabled boolean
---@field PC APlayerController
---@field Character ASimCharacter
local USeatComponent = {}



---@class USeatExitComponent : USceneComponent
local USeatExitComponent = {}


---@class USeatTriggerComponent : UBoxComponent
local USeatTriggerComponent = {}


---@class USensorOperatorMountComponent : USubmarineMountComponent
---@field ElectricityCost float
local USensorOperatorMountComponent = {}

---@param ActivityStateChange FActivityStateChange
---@param bIsOmnidirectional boolean
function USensorOperatorMountComponent:ServerStartInvoke(ActivityStateChange, bIsOmnidirectional) end


---@class UServerSettings : USaveGame
---@field bFriendlyFire boolean
---@field bLoginRestrictions boolean
---@field bAllowMods boolean
---@field ExcludedCodeNames TArray<FName>
---@field WelcomeMessage FText
---@field MaxPlayers int32
---@field ServerName FString
---@field IsCommunityServer boolean
---@field GameplayFlags FGameplayFlags
---@field ServerRegion ERegionType
---@field RefinableItemModifierList TArray<FRefinableItemModifier>
---@field GlobalRefineYieldModifier float
---@field SpawnInvulnerabilityTime float
---@field bEnableVehicleAFKTimeout boolean
---@field bEnableTravelPortalSearchFallback boolean
---@field bAdvertiseToSteam boolean
---@field MinClientVersion TArray<int32>
---@field bSelfServeFactionUnlockEnabled boolean
---@field WarTweakables FWarTweakables
---@field WarRepTweakables FWarReplicatedTweakables
---@field WarTimeDiscrepancy FWarTimeDiscrepancy
---@field NextWarTime FDateTime
---@field NextWarMapOverride FString
local UServerSettings = {}



---@class UShipControlSurfaceVisComponent : UPrimitiveComponent
local UShipControlSurfaceVisComponent = {}


---@class UShipEngineUseComponent : UShipFlagUseComponent
local UShipEngineUseComponent = {}


---@class UShipFlagUseComponent : UUseComponent
---@field FlagIndex int32
---@field bIsMovement boolean
---@field bRequiresWrench boolean
---@field WrenchingActivityState ECharacterActivityState
local UShipFlagUseComponent = {}



---@class UShipMovementComponent : USimpleVehicleMovementComponent
---@field ThrustCurve UCurveFloat
---@field SubmergedThrustCurve UCurveFloat
local UShipMovementComponent = {}



---@class UShipRammingDamageType : USimDamageType
local UShipRammingDamageType = {}


---@class UShippableUseComponent : UUseComponent
local UShippableUseComponent = {}


---@class UShotgunComponent : UHitScanWeaponComponent
---@field SimulatedHitNotifies TArray<FHitNotify>
---@field ShotRadius float
---@field MaxHitsPerShot uint32
local UShotgunComponent = {}

function UShotgunComponent:OnRep_SimulatedHitNotifies() end


---@class UShovelComponent : UTaskItemComponent
---@field ImpactEffect TSubclassOf<AImpactEffect>
local UShovelComponent = {}

function UShovelComponent:MulticastPlayFX() end


---@class USignPostDownVoteDamageType : USimDamageType
local USignPostDownVoteDamageType = {}


---@class USimDamageType : UDamageType
---@field Type EDamageType
---@field bAppliesBurning boolean
---@field bCanRuinStructures boolean
---@field bApplyDamageFalloff boolean
---@field bAlwaysAppliesBleeding boolean
---@field bNeverAppliesBleeding boolean
---@field bBypassesSpawnInvulnerability boolean
---@field bDisableVehicleCollisionsIfKilledBy boolean
---@field bCanCauseLeaks boolean
---@field bCanPenetrateArmour boolean
---@field bCanDisableSubsystems boolean
---@field bSuppressionAffectsVehicles boolean
---@field LeakChanceMultiplier float
---@field LeakSizeMultiplier float
---@field bCausesLargeLeaks boolean
---@field TankArmourPenetrationFactor float
---@field TankArmourEffectType ETankArmourEffectType
---@field VehicleSubsystemOverride EVehicleSubsystem
---@field VehicleSubsystemDisableMultipliers float
---@field bCanWoundCharacter boolean
---@field bApplyTankArmourMechanics boolean
---@field bApplyTankArmourAngleRangeBonuses boolean
---@field bExposeInUI boolean
---@field bBreachesBunkers boolean
---@field bAffectedByShelterBonus boolean
---@field bIgnoreBreachesBunkersThreshold boolean
---@field Icon FSlateBrush
---@field DisplayName FText
---@field DescriptionDetails TArray<FTooltipDetailText>
local USimDamageType = {}



---@class USimVehicleAnimInstance : UAnimInstance
---@field Speed float
---@field RotationInPlaceSpeed float
---@field TurnAngle float
---@field WheelRadius float
---@field InertialRoll float
---@field InertialPitch float
---@field bIsDestroyed boolean
---@field bIsTopHatchOpen boolean
---@field bIsDeployed boolean
---@field bIsHitched boolean
---@field DeploymentState EVehicleDeploymentState
---@field LastYaw float
---@field LastAngularVelocity float
---@field TrackDisabledIntensity float
---@field bHasDriver boolean
local USimVehicleAnimInstance = {}



---@class USimVehicleGunnerSupportAnimInstance : USimVehicleAnimInstance
---@field GunnerYaw float
---@field GunnerPitch float
---@field bIsFiring boolean
---@field bIsGunnerFiring boolean
---@field bIsGunnerReloading boolean
---@field bIsGunnerWorking boolean
---@field AltGunnerYaw float
---@field AltGunnerPitch float
---@field bIsAltFiring boolean
---@field bIsAltGunnerFiring boolean
---@field bIsAltGunnerReloading boolean
---@field bIsAltGunnerWorking boolean
---@field AltGunner02Yaw float
---@field AltGunner02Pitch float
---@field bIsAlt02Firing boolean
---@field bIsAltGunner02Firing boolean
---@field bIsAltGunner02Reloading boolean
---@field bIsAltGunner02Working boolean
---@field AltGunner03Yaw float
---@field AltGunner03Pitch float
---@field bIsAlt03Firing boolean
---@field bIsAltGunner03Firing boolean
---@field bIsAltGunner03Reloading boolean
---@field bIsAltGunner03Working boolean
---@field AltGunner04Yaw float
---@field AltGunner04Pitch float
---@field bIsAlt04Firing boolean
---@field bIsAltGunner04Firing boolean
---@field bIsAltGunner04Reloading boolean
---@field bIsAltGunner04Working boolean
local USimVehicleGunnerSupportAnimInstance = {}

---@param Notify UAnimNotify
function USimVehicleGunnerSupportAnimInstance:AnimNotify_OnFiringOver(Notify) end
---@param Notify UAnimNotify
function USimVehicleGunnerSupportAnimInstance:AnimNotify_OnAltFiringOver(Notify) end
---@param Notify UAnimNotify
function USimVehicleGunnerSupportAnimInstance:AnimNotify_OnAlt04FiringOver(Notify) end
---@param Notify UAnimNotify
function USimVehicleGunnerSupportAnimInstance:AnimNotify_OnAlt03FiringOver(Notify) end
---@param Notify UAnimNotify
function USimVehicleGunnerSupportAnimInstance:AnimNotify_OnAlt02FiringOver(Notify) end


---@class USimpleVehicleMovementComponent : UCharacterMovementComponent
---@field bCanSink boolean
---@field bIgnoreStepCheck boolean
---@field bUsesConstantFriction boolean
---@field bAllowIsWalkable boolean
---@field WaterDepthNormalized float
---@field FloatVelocity float
---@field DepthOffset float
---@field MaxDepth float
local USimpleVehicleMovementComponent = {}



---@class USnapshotManager : UObject
local USnapshotManager = {}


---@class USniperRifleComponent : UHitScanWeaponComponent
local USniperRifleComponent = {}


---@class USoldierItemComponent : ULargeItemComponent
---@field SoldierVisualsPacked uint8
local USoldierItemComponent = {}

function USoldierItemComponent:OnRep_SoldierVisuals() end


---@class USoulstoneComponent : UItemComponent
---@field TransformExplosionEffect TSubclassOf<AWarExplosionEffect>
---@field bIsEquipped boolean
local USoulstoneComponent = {}

---@param ActivityStateChange FActivityStateChange
function USoulstoneComponent:ServerUseSoulstone(ActivityStateChange) end
function USoulstoneComponent:OnRep_IsEquipped() end


---@class USpawnPointComponent : USceneComponent
---@field Priority ESpawnPointPriority
local USpawnPointComponent = {}



---@class USpecializedFactoryComponent : UActorComponent
---@field ProductionCategories TArray<FFactoryProductionCategory>
---@field MaxOrderSize int32
---@field MaxQueueSize int32
---@field MaxCompletedOrders int32
---@field CraftUpdateCycleSeconds float
---@field CompletedOrderExpiryTime float
---@field ProductionTimeMultiplier float
---@field MassProductionDiscountPerItem float
---@field MassProductionMaxDiscount float
---@field bIsMassProductionSupported boolean
---@field MassProductionMinOrderSize int32
---@field bAutoAddVehicleProductionCategory boolean
---@field bAutoAddStructureProductionCategory boolean
---@field Queues TArray<FFactoryQueue>
---@field bIsProducing boolean
local USpecializedFactoryComponent = {}

---@return boolean
function USpecializedFactoryComponent:IsProducing() end


---@class USpecializedFactoryUserComponent : UUserComponent
---@field Queues TArray<FFactoryQueue>
local USpecializedFactoryUserComponent = {}



---@class USpiderMechAnimInstance : USimVehicleAnimInstance
---@field GunnerYaw float
---@field AltGunnerYaw float
---@field AltGunnerPitch float
---@field bIsHatchOpen boolean
local USpiderMechAnimInstance = {}



---@class USplineConnectorComponent : USceneComponent
---@field TargetComponentName FName
---@field TargetComponentTag FName
---@field MaxTargetDistance float
---@field MaxTargetAngle float
---@field bIgnoreTargetAngle boolean
---@field DefaultTarget FTransform
---@field SurfaceSampleResolution float
---@field SurfaceSampleExtension float
---@field bSurfaceSamplesIgnoreHoles boolean
---@field MeshConfigs TArray<FSplineConnectorMeshConfig>
---@field ComponentConfigs TArray<FSplineConnectorComponentConfig>
---@field PathMode EConnectorPathMode
---@field bUseBiarcPathModeWhenSnapped boolean
---@field bWorldSpaceArcTangents boolean
---@field MinBuffer float
---@field MaxBuffer float
---@field MinRadius float
---@field MaxRadius float
---@field bEnforceSplineModeCornerRadius boolean
---@field MaxArcAngle float
---@field BuildFootprintShapeType ESplineFootprintShapeType
---@field BuildFootprintCapsuleRadius float
---@field BuildFootprintCapsuleHalfHeight float
---@field BuildFootprintWidth float
---@field BuildFootprintLength float
---@field BuildFootprintHeight float
---@field SurfaceSampleRadiusOverride float
---@field BuildFootprintVerticalOffset float
---@field BuildFootprintStartOffset float
---@field BuildFootprintEndOffset float
---@field BuildFootprintBoxEndVerticalOffset float
---@field BuildFootprintBoxEndLengthOverride float
---@field BuildFootprintBoxEndHeightOverride float
---@field BuildFootprintDualBoxOffset float
---@field bUseExtendedFootprint boolean
---@field bDisallowSnappedSplineIntersection boolean
---@field bCheckBuildFootprintsAgainstIgnoredActors boolean
---@field bIgnoreInnerBuildFootprintPlacementChecks boolean
---@field NumIgnoredFootprints int32
---@field MaxSlopeAngle float
---@field bMouseWheelControlsHeight boolean
---@field bAltMouseWheelControlsPitch boolean
---@field MaxFootprintDepthBelowSurface float
---@field MaxFootprintHeightAboveSurface float
---@field MaxHeightAboveSurfaceAtEnds float
---@field NumHeightEndSamples int32
---@field WaterPlacementRequirement ESplineWaterPlacementRequirement
---@field Alpha float
---@field ZFightingCompensation float
---@field BuildGhostZFightingCompensation float
---@field MeshConfigTransient TArray<FSplineConnectorMeshConfigTransient>
---@field BoxComponents TArray<UBoxComponent>
---@field Decals TArray<UDecalComponent>
local USplineConnectorComponent = {}



---@class USpotterMountComponent : UMountComponent
---@field CameraArmLengthOverride float
---@field CameraArmLengthCurve UCurveFloat
local USpotterMountComponent = {}



---@class UStaticArtilleryAnimInstance : UAnimInstance
---@field Yaw float
---@field Pitch float
---@field bIsMoving boolean
---@field bIsShooting boolean
local UStaticArtilleryAnimInstance = {}



---@class UStaticMeshOverrideComponent : UActorComponent
---@field StaticMeshOverrides TArray<FStaticMeshOverride>
local UStaticMeshOverrideComponent = {}



---@class UStealthComponent : UActorComponent
---@field MinimumViewableDistanceOverride float
---@field bSkipIncomingLoSCheck boolean
---@field bUseViewerLocationAsViewLocation boolean
---@field OpacityParamName FName
---@field FiringOccupants TArray<UStealthComponent>
local UStealthComponent = {}



---@class UStockpileUserComponent : UUserComponent
---@field Items TArray<FStockpileEntry>
---@field ReservableItemCrates TArray<FStockpileEntry>
---@field Vehicles TArray<FStockpileEntry>
---@field VehicleCrates TArray<FStockpileEntry>
---@field Structures TArray<FStockpileEntry>
---@field StructureCrates TArray<FStockpileEntry>
local UStockpileUserComponent = {}

function UStockpileUserComponent:OnRep_Vehicles() end
function UStockpileUserComponent:OnRep_VehicleCrates() end
function UStockpileUserComponent:OnRep_Structures() end
function UStockpileUserComponent:OnRep_StructureCrates() end
function UStockpileUserComponent:OnRep_ReservableItemCrates() end
function UStockpileUserComponent:OnRep_Items() end


---@class UStructureLayerComponent : UActorComponent
---@field IncludedInLayers uint32
---@field ExcludedByLayers uint32
local UStructureLayerComponent = {}



---@class UStructureSeatComponent : USeatComponent
---@field SafeSpawnOffset FVector
---@field bProvidesFullCover boolean
---@field bProvidesInvul boolean
---@field bTeleportBack boolean
---@field bCanOccupantSeeThroughEverything boolean
---@field bCheckForPlayersOnOccupy boolean
---@field bOccupantCrouches boolean
---@field CurrentOccupant TWeakObjectPtr<ASimCharacter>
local UStructureSeatComponent = {}

function UStructureSeatComponent:OnRep_CurrentOccupant() end


---@class USubmarineAnimInstance : ULargeShipAnimInstance
---@field HatchState EDynamicState
---@field LeftTorpedoTubeState EDynamicState
---@field RightTorpedoTubeState EDynamicState
---@field DivePlaneAngle float
---@field MainBallastPlayRate float
---@field NegativeBallastPlayRate float
---@field SafteyBallastPlayRate float
local USubmarineAnimInstance = {}



---@class USubmarineDivingMountComponent : USubmarineMountComponent
local USubmarineDivingMountComponent = {}

---@param Input int8
function USubmarineDivingMountComponent:ServerSetDivingPlaneInput(Input) end


---@class USubmarineDriverMountComponent : UMountComponent
local USubmarineDriverMountComponent = {}


---@class USubmarineMountComponent : UMountComponent
---@field SensorReadingProxy TSubclassOf<ASensorReadingProxy>
---@field ResponseSoundCue USoundCue
local USubmarineMountComponent = {}

---@param Responses TArray<FSensorPingResponse>
---@param bIsIntel boolean
function USubmarineMountComponent:ClientSensorPingResponse(Responses, bIsIntel) end


---@class USubmarinePeriscopeMountComponent : USubmarineMountComponent
---@field MaxDepthForVisuals float
---@field CameraArmLengthCurve UCurveFloat
local USubmarinePeriscopeMountComponent = {}



---@class USubmarineTubeUseComponent : UShipFlagUseComponent
local USubmarineTubeUseComponent = {}


---@class USubmarineVisibilityToggleComponent : UVisibilityToggleAreaComponent
local USubmarineVisibilityToggleComponent = {}


---@class UTankEngineerComponent : UMountComponent
---@field TargetMountIndex int32
---@field RepairAmount int32
---@field CompatibleAmmoNames TArray<FName>
local UTankEngineerComponent = {}

---@param InDesiredAmmoType FName
function UTankEngineerComponent:ServerSetDesiredAmmoType(InDesiredAmmoType) end
---@param ActivityStateChange FActivityStateChange
function UTankEngineerComponent:ServerRepair(ActivityStateChange) end


---@class UTankGunnerMountComponent : UMultiAmmoVehicleMountComponent
---@field ShotSoundCue USoundCue
---@field MuzzleFlashPS UParticleSystem
---@field bUsePerBarrelFX boolean
---@field AimOffsetEnabled boolean
---@field AimOffsetStartRange float
---@field AimRightOffsetAmount float
---@field AimDistanceOffsetAmount float
local UTankGunnerMountComponent = {}

---@param ActivityStateChange FActivityStateChange
---@param InvokeInfo FCharacterInvokeInfo
function UTankGunnerMountComponent:ServerFireShell(ActivityStateChange, InvokeInfo) end
function UTankGunnerMountComponent:MulticastPlayFiringFX() end
---@param TraceStart FVector
---@param TraceEnd FVector
---@param HitLocation FVector
---@param HitAngle float
---@param HitNormal FVector
---@param DamageInnerRadius float
---@param DamageOuterRadius float
function UTankGunnerMountComponent:MulticastPlayDebugTrace(TraceStart, TraceEnd, HitLocation, HitAngle, HitNormal, DamageInnerRadius, DamageOuterRadius) end


---@class UTankZombieDamageType : USimDamageType
local UTankZombieDamageType = {}


---@class UTankZombieSecondaryDamageType : USimDamageType
local UTankZombieSecondaryDamageType = {}


---@class UTaskItemComponent : UItemComponent
---@field ItemMesh USkeletalMesh
---@field StartTaskSoundCue USoundCue
---@field TaskActivityState ECharacterActivityState
---@field MaxRangeToTarget float
---@field NoTargetText FText
---@field NoAmmoText FText
---@field StartTaskText FText
---@field EndTaskText FText
---@field LoopDuration float
---@field TargetCheckMethod ETaskItemTargetCheckMethod
---@field bIsEquipped boolean
local UTaskItemComponent = {}

---@param ActivityStateChange FActivityStateChange
function UTaskItemComponent:ServerTryStartTask(ActivityStateChange) end
function UTaskItemComponent:ServerStopInvokeTask() end
function UTaskItemComponent:OnRep_IsEquipped() end


---@class UTeamFlagMeshComponent : UStaticMeshComponent
---@field Team0Mesh UStaticMesh
---@field Team1Mesh UStaticMesh
---@field MaterialConnected UMaterialInterface
---@field MaterialDisconnected UMaterialInterface
---@field MaterialDisconnectedStarved UMaterialInterface
---@field bAllowWindRotation boolean
local UTeamFlagMeshComponent = {}



---@class UTechTreeComponent : UActorComponent
---@field DataClass TSubclassOf<UTechTreeComponentData>
---@field bStartsCompleted boolean
---@field Data UTechTreeComponentData
---@field ItemProgress TArray<FTechTreeComponentItemProgress>
---@field ItemUnlockBits int32
---@field InfrastructureModCount uint8
---@field TechStateID int32
---@field CompletedTimes TArray<int64>
---@field ActivityWeights TArray<float>
---@field DynamicOnResearched FTechTreeComponentDynamicOnResearched
local UTechTreeComponent = {}

---@param PreviousItemUnlockBits int32
function UTechTreeComponent:OnRep_ItemUnlockBits(PreviousItemUnlockBits) end


---@class UTechTreeComponentData : UActorComponent
---@field UniqueId int8
---@field Items TArray<FTechTreeComponentItem>
local UTechTreeComponentData = {}



---@class UTechTreeUserComponent : UUserComponent
---@field TechTreeVotes FTechTreeComponentVotes
---@field bIsSpawnPointSetHere boolean
---@field ActivityBonusState EActivityBonusState
local UTechTreeUserComponent = {}

---@param SpawnPointCategory ESpawnPointCategory
---@param Vote EInfrastructureType
function UTechTreeUserComponent:ServerSetVote(SpawnPointCategory, Vote) end
function UTechTreeUserComponent:OnRep_IsActivityBonusActive() end


---@class UTemperatureModifierBoxComponent : UBoxComponent
local UTemperatureModifierBoxComponent = {}

---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function UTemperatureModifierBoxComponent:OnEndOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function UTemperatureModifierBoxComponent:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class UTemperatureModifierSphereComponent : USphereComponent
local UTemperatureModifierSphereComponent = {}

---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function UTemperatureModifierSphereComponent:OnEndOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function UTemperatureModifierSphereComponent:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class UTemplateComponent : USceneComponent
---@field TemplateActor TSubclassOf<ATemplate>
---@field bOnlyCollisions boolean
---@field OverrideCollisionProfile FName
---@field bUnidirectionalSockets boolean
---@field OnlyIncludeOn TSubclassOf<AActor>
---@field SpawnedComponents TArray<UActorComponent>
local UTemplateComponent = {}



---@class UTorpedoGunnerMountComponent : USubmarineMountComponent
---@field ProjectileClass TSubclassOf<AWarProjectile>
---@field MinDepth float
---@field MaxDepth float
---@field RangeIncrement float
---@field Ammo int8
---@field RangeIndex uint8
local UTorpedoGunnerMountComponent = {}

---@param ActivityStateChange FActivityStateChange
---@param TargetDirection FVector2D
---@param TargetDepth float
function UTorpedoGunnerMountComponent:ServerStartInvoke(ActivityStateChange, TargetDirection, TargetDepth) end
function UTorpedoGunnerMountComponent:ServerCycleRange() end


---@class UTorpedoMovementComponent : UProjectileMovementComponent
---@field MaxHorizontalAccelerationCurve UCurveFloat
---@field PIDCurve UCurveVector
local UTorpedoMovementComponent = {}



---@class UTowHitchUseComponent : UUseComponent
---@field bIsTractor boolean
---@field CollisionBuffer float
---@field HitchCue USoundCue
---@field UnhitchCue USoundCue
---@field HitchIcon FSlateBrush
---@field UnhitchIcon FSlateBrush
local UTowHitchUseComponent = {}



---@class UTrackSwitchAnimInstance : UAnimInstance
---@field Angle float
local UTrackSwitchAnimInstance = {}



---@class UTrainPassengerMountComponent : UMountComponent
---@field bAllowItemSubmission boolean
local UTrainPassengerMountComponent = {}

---@param TargetActor AActor
function UTrainPassengerMountComponent:ServerSubmitItems(TargetActor) end


---@class UTransferLocationComponent : USceneComponent
---@field ValidShippables TArray<FName>
local UTransferLocationComponent = {}



---@class UTraumaKitComponent : UTaskItemComponent
local UTraumaKitComponent = {}


---@class UTravelManager : UObject
---@field RequestTimeout float
---@field ProfileLoadTimeout float
---@field ReservationTimeout float
---@field FirstPlayerReservationTimeout float
---@field SearchBorderOffset float
---@field SearchMaxRadius float
---@field SearchMaxRadiusVehicle float
---@field SearchGroundMargin float
---@field SearchMinimumWaterDepth float
---@field OfflineCharacterOffset float
---@field OfflineCharacterSpacing float
---@field OfflineCharacterZOffset float
---@field ArrivalInvulnerabilityTime float
local UTravelManager = {}

---@param bSuccess boolean
---@param PendingTravelId uint32
function UTravelManager:ProfileSyncComplete(bSuccess, PendingTravelId) end


---@class UTravelPortalComponent : UUseComponent
local UTravelPortalComponent = {}


---@class UTurretLightComponent : USceneComponent
---@field RotatedSceneComponent USceneComponent
---@field LightComponent ULightComponentBase
local UTurretLightComponent = {}



---@class UUnexplodedOrdnanceDamageType : USimDamageType
local UUnexplodedOrdnanceDamageType = {}


---@class UUniforms : UObject
---@field Data FUniform
local UUniforms = {}



---@class UUseComponent : UBoxComponent
---@field HintText FText
---@field DisplayName FText
---@field Icon FSlateBrush
local UUseComponent = {}



---@class UUseMonumentComponent : UUseComponent
local UUseMonumentComponent = {}


---@class UUseWorldMapComponent : UUseComponent
local UUseWorldMapComponent = {}


---@class UUserComponent : UActorComponent
---@field AssociatedActor TWeakObjectPtr<AActor>
---@field AssociatedComponent TWeakObjectPtr<UActorComponent>
local UUserComponent = {}

function UUserComponent:OnRep_AssociatedComponent() end
function UUserComponent:OnRep_AssociatedActor() end


---@class UVehicleBuildTriggerComponent : UBoxComponent
---@field BuiltVehicleCodeNameColonial FName
---@field BuiltVehicleCodeNameWarden FName
---@field BuildFootprintTag FName
local UVehicleBuildTriggerComponent = {}



---@class UVehicleSeatComponent : USeatComponent
---@field Direction ESeatDirection
---@field bIsSwitchable boolean
---@field bCanFireWeapon boolean
---@field bCanUseBinoculars boolean
---@field bIsWoundable boolean
---@field bOverrideAsPassenger boolean
---@field EnterSFX USoundCue
local UVehicleSeatComponent = {}



---@class UVehicleSpawnLocationComponent : USceneComponent
---@field VehicleClass TSubclassOf<ASimVehicle>
local UVehicleSpawnLocationComponent = {}



---@class UVisibilityToggleAreaComponent : UBoxComponent
---@field ToggleableComponentsTag FName
---@field ShowComponentsTag FName
---@field bBlockVehicles boolean
---@field BonesForAimTraceToIgnore TArray<FName>
local UVisibilityToggleAreaComponent = {}

---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function UVisibilityToggleAreaComponent:OnEndOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function UVisibilityToggleAreaComponent:OnBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class UWarAssetManager : UAssetManager
local UWarAssetManager = {}


---@class UWarAudioComponent : UAudioComponent
local UWarAudioComponent = {}


---@class UWarBenchmarkNetConnection : USimulatedClientNetConnection
local UWarBenchmarkNetConnection = {}


---@class UWarBoxComponent : UBoxComponent
---@field MovementIgnoreFlags uint8
local UWarBoxComponent = {}



---@class UWarCapsuleComponent : UCapsuleComponent
---@field MovementIgnoreFlags uint8
local UWarCapsuleComponent = {}



---@class UWarGameInstance : UGameInstance
---@field BaseSoundMix USoundMix
---@field Blueprints FWarBlueprints
---@field BorderBaseManager UBorderBaseManager
---@field PipelineManager UPipelineManager
---@field WeatherManager UWeatherManager
---@field WorldResourceSpawner UWorldResourceSpawner
---@field CurrentWarSave UWarSaveGame
---@field PlayerProfileManager UPlayerProfileManager
---@field ServerSettings UServerSettings
---@field StreamingManager UClientStreamingManager
---@field TravelManager UTravelManager
---@field LandscapeDeformationManager ULandscapeDeformationManager
---@field CrossRegionActorManager UCrossRegionActorManager
---@field SnapshotManager USnapshotManager
---@field MapList AMapList
---@field WarSessionSettings UWarSessionSettings
---@field LoreList ALoreList
---@field LastColonialCount uint32
---@field LastWardenCount uint32
---@field DiscordRichPresence UDiscordRichPresence
---@field DiscordRichPresenceApplicationID FString
---@field WarBeaconHost AWarBeaconHost
---@field MonumentManager UMonumentManager
---@field ColonialQueue FWarServerQueue
---@field WardenQueue FWarServerQueue
---@field DeploymentQueue TArray<FDeploymentQueueEntry>
---@field WarVoiceClient UWarVoiceClient
---@field ClientConfigManager UClientConfigManager
---@field WarAPIClient FWarAPIClient
---@field MapPostManager FMapPostManager
---@field RichTextStyle FWarRichTextStyle
---@field RegionZoneManager FRegionZoneManager
---@field SquadManager FSquadManager
---@field RegimentManager FRegimentManager
---@field ExternalWarServiceReplicatedState FExternalWarServiceReplicatedState
---@field WarServiceReplicatedState FWarServiceReplicatedState
local UWarGameInstance = {}

function UWarGameInstance:ResetServerTravelStatusOnClient() end
---@return uint32
function UWarGameInstance:GetLocalNetworkVersion() end
---@param OutputFileName FString
---@param Type UClass
---@param BaseClassFilters TArray<UClass>
---@param PropertyNameFilter TArray<FString>
function UWarGameInstance:DumpProperties(OutputFileName, Type, BaseClassFilters, PropertyNameFilter) end
---@param OutputFileName FString
---@param ComponentType UClass
function UWarGameInstance:DumpComponentOwners(OutputFileName, ComponentType) end
---@param OutputFileName FString
---@param Type UClass
---@param BaseClassFilters TArray<UClass>
---@param ProfileNameFilters TArray<FString>
function UWarGameInstance:DumpCollisionProfiles(OutputFileName, Type, BaseClassFilters, ProfileNameFilters) end


---@class UWarGameUserSettings : UGameUserSettings
local UWarGameUserSettings = {}


---@class UWarGameViewportClient : UGameViewportClient
local UWarGameViewportClient = {}


---@class UWarLocalPlayer : ULocalPlayer
---@field PlayerSaveGame UPlayerSaveGame
local UWarLocalPlayer = {}



---@class UWarMenuWidgetStyle : USlateWidgetStyleContainerBase
---@field WidgetStyle FWarMenuStyle
local UWarMenuWidgetStyle = {}



---@class UWarOpsMapData : UObject
---@field Map FWarOpsMap
local UWarOpsMapData = {}



---@class UWarRecoverySaveGame : USaveGame
---@field Timestamp FDateTime
---@field WarId FString
---@field WarPhase EWarPhase
---@field MapName FString
---@field Characters TArray<FSavedRecoveryCharacter>
---@field Vehicles TArray<FSavedRecoveryVehicle>
---@field OriginatorVehicleNames TArray<FString>
local UWarRecoverySaveGame = {}



---@class UWarReplicationGraph : UReplicationGraph
---@field NonSpatializedChildClasses TArray<UClass>
---@field GridNode UWarReplicationGraphNode_GridSpatialization2D
---@field RailVehicleNode UWarReplicationGraphNode_RailVehicleNode
---@field AlwaysRelevantNode UReplicationGraphNode_ActorList
local UWarReplicationGraph = {}



---@class UWarReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode
---@field PastRelevantActors TArray<FWarAlwaysRelevantActorInfo>
local UWarReplicationGraphNode_AlwaysRelevant_ForConnection = {}



---@class UWarReplicationGraphNode_GridSpatialization2D : UReplicationGraphNode_GridSpatialization2D
local UWarReplicationGraphNode_GridSpatialization2D = {}


---@class UWarReplicationGraphNode_PlayerStateFrequencyLimiter : UReplicationGraphNode
local UWarReplicationGraphNode_PlayerStateFrequencyLimiter = {}


---@class UWarReplicationGraphNode_RailVehicleNode : UReplicationGraphNode
---@field Trains TMap<ARailVehicle, FTrainRepInfo>
local UWarReplicationGraphNode_RailVehicleNode = {}



---@class UWarSaveGame : USaveGame
---@field WarId FString
---@field SavedActors TArray<FSavedActor>
---@field NextSpawnPointId uint32
---@field MapName FString
---@field bUprisingStarted boolean
---@field GameplayFlags FGameplayFlags
---@field PlayerWarStates TMap<FString, FPlayerWarState>
---@field SavedCharacterMap TMap<FString, FSavedCharacter>
---@field WarReporter FWarReporter
---@field WarBalancer FWarBalancer
---@field RegionLogs FRegionLogs
---@field ResourceMineTransforms TArray<FTransform>
---@field ResourceFieldTransforms TArray<FTransform>
---@field OilRigTransforms TArray<FTransform>
---@field WarPhase EWarPhase
---@field WorldResourceSpawnTime FDateTime
---@field WeatherStateTimes TArray<FScheduledWeatherState>
---@field IceTaskListIndex int32
---@field DryingDuration float
---@field bIsWeatherManual boolean
---@field DebugVariables FWarDebugVariables
---@field Timestamp FDateTime
---@field bIsAutoSave boolean
---@field DestroyedDestructibleProps TSet<FName>
---@field NextTechStateID int32
---@field PipelineSystems TArray<FPipelineSystem>
local UWarSaveGame = {}



---@class UWarSessionSettings : UObject
local UWarSessionSettings = {}


---@class UWarStatics : UObject
local UWarStatics = {}

---@param WorldContextObject UObject
---@return boolean
function UWarStatics:IsNight(WorldContextObject) end


---@class UWarVoiceClient : UObject
local UWarVoiceClient = {}


---@class UWatchTowerAnimInstance : UAnimInstance
---@field ViewDirection float
local UWatchTowerAnimInstance = {}



---@class UWatchTowerMountComponent : UMountComponent
local UWatchTowerMountComponent = {}

---@param Direction ERotationDirection
function UWatchTowerMountComponent:ServerSetRotationDirection(Direction) end


---@class UWaterBucketItemComponent : UProjectileItemComponent
local UWaterBucketItemComponent = {}


---@class UWaterDamageType : USimDamageType
local UWaterDamageType = {}


---@class UWaterMineItemComponent : ULargeItemComponent
---@field WaterMineClass TSubclassOf<AWaterMine>
---@field DetonationDepthToggleIncrement float
---@field MinDeploymentDepth float
---@field MaxDeploymentDepth float
---@field MinDistanceBetweenMines float
---@field MaxDeploymentRange float
---@field DeployDuration float
local UWaterMineItemComponent = {}

---@param ActivityStateChange FActivityStateChange
---@param MouseTraceStart FVector
---@param MouseTraceEnd FVector
---@param InDetonationDepth float
function UWaterMineItemComponent:ServerStartInvoke(ActivityStateChange, MouseTraceStart, MouseTraceEnd, InDetonationDepth) end


---@class UWaterProjectileMovementComponent : UProjectileMovementComponent
local UWaterProjectileMovementComponent = {}


---@class UWaterReloadSourceComponent : UActorComponent
local UWaterReloadSourceComponent = {}


---@class UWaterStencilComponent : UStaticMeshComponent
local UWaterStencilComponent = {}


---@class UWeaponAnimInstance : UAnimInstance
---@field CharacterActivityState ECharacterActivityState
---@field CharacterStance ESimCharacterStance
---@field CharacterSpeed float
---@field AimOffsetYaw float
---@field AimOffsetPitch float
---@field bIsCharacterScoping boolean
local UWeaponAnimInstance = {}



---@class UWeatherData : UObject
---@field WeatherPatterns TArray<FWeatherPattern>
local UWeatherData = {}



---@class UWeatherIceLimiterBox : UBoxComponent
---@field Type EWeatherIceLimiterType
local UWeatherIceLimiterBox = {}



---@class UWeatherIceLimiterSphere : USphereComponent
---@field Type EWeatherIceLimiterType
local UWeatherIceLimiterSphere = {}



---@class UWeatherIceMeshComponent : UStaticMeshComponent
local UWeatherIceMeshComponent = {}


---@class UWeatherManager : UObject
---@field DataClass TSubclassOf<UWeatherData>
---@field WeatherEffects TMap<EWeatherType, FWeatherEffects>
---@field WeatherControl UMaterialParameterCollection
---@field WeatherIceControl UMaterialParameterCollection
---@field IntensityCurves TArray<UCurveFloat>
---@field VisualsIntensityCurve UCurveFloat
---@field FogVisibilityMultiplier float
---@field FogMaterial UMaterialInterface
---@field FogBlendCurve UCurveFloat
---@field CloudParameter FNamedParameterRange
---@field WindParameter FNamedParameterRange
---@field EffectsOffset FVector
---@field EffectsLookAheadScale float
---@field SnowyPhysicalMaterials TArray<UPhysicalMaterial>
---@field WeatherIceActors TArray<AWeatherIceActor>
local UWeatherManager = {}



---@class UWeatherStationAnimInstance : UAnimInstance
---@field Yaw float
---@field WindSpeedNormalized float
---@field ArrowRotationSpeed float
---@field ArrowStaticMeshComponent UStaticMeshComponent
local UWeatherStationAnimInstance = {}



---@class UWeatherStationBaseAnimInstance : UAnimInstance
---@field bIsActive boolean
local UWeatherStationBaseAnimInstance = {}



---@class UWeatherStationMountComponent : UMountComponent
local UWeatherStationMountComponent = {}

function UWeatherStationMountComponent:ServerStartPrediction() end


---@class UWeatherStationUserComponent : UUserComponent
---@field UpcomingWeather EWeatherType
---@field UpcomingPeakIntensity uint8
---@field UpcomingStartTimeHours int8
local UWeatherStationUserComponent = {}

---@param bResetConnectionTo boolean
function UWeatherStationUserComponent:ServerDisconnectFromNetwork(bResetConnectionTo) end
---@param GlobalID FWeatherStationID
function UWeatherStationUserComponent:ServerConnectToNetwork(GlobalID) end


---@class UWindowMeshSet : UObject
---@field T1 FWindowMeshes
---@field T2 FWindowMeshes
---@field T3 FWindowMeshes
local UWindowMeshSet = {}



---@class UWindsockAnimInstance : UAnimInstance
---@field WindSpeedNormalized float
local UWindsockAnimInstance = {}



---@class UWorkItemComponent : UItemComponent
---@field SkeletalMesh USkeletalMesh
---@field ImpactEffect TSubclassOf<AImpactEffect>
---@field WorkSoundCue USoundCue
---@field QueryOffset float
---@field MaxRange int32
---@field bIsEquipped boolean
local UWorkItemComponent = {}

---@param InTargetActor AActor
---@param InTargetActorComponent USceneComponent
---@param ActivityStateChange FActivityStateChange
function UWorkItemComponent:ServerPerformWork(InTargetActor, InTargetActorComponent, ActivityStateChange) end
function UWorkItemComponent:OnRep_IsEquipped() end


---@class UWorldResourceSpawner : UObject
---@field ResourceClass TSubclassOf<AWorldResource>
local UWorldResourceSpawner = {}



---@class UWoundCausingDamageType : USimDamageType
local UWoundCausingDamageType = {}


---@class UWoundedCarriedItemComponent : ULargeItemComponent
---@field CarriedCharacter ASimCharacter
---@field CapsuleOffset FVector
local UWoundedCarriedItemComponent = {}



---@class UZombieWeaponComponent : UItemComponent
---@field WeaponInfo TArray<FZombieWeaponInfo>
---@field MeleeDamageDelay float
---@field MeleeDamageDelaySecond float
---@field ProjectileClass TSubclassOf<AWarProjectile>
---@field ProjectileDelay float
---@field ProjectileSpeed float
---@field ProjectileSoundCue USoundCue
---@field ProjectilePS UParticleSystem
---@field SmashExplosionEffect TSubclassOf<AWarExplosionEffect>
---@field SmashDamageDelay float
---@field SmashBaseDamage float
---@field SmashRadius float
---@field bIsEquipped boolean
local UZombieWeaponComponent = {}

---@param WeaponInvokeInfo FCharacterInvokeInfo
---@param ActivityStateChange FActivityStateChange
function UZombieWeaponComponent:ServerInvokeRangedAttack(WeaponInvokeInfo, ActivityStateChange) end
---@param ActivityStateChange FActivityStateChange
function UZombieWeaponComponent:ServerInvokePrimaryAttack(ActivityStateChange) end
---@param ActivityStateChange FActivityStateChange
function UZombieWeaponComponent:ServerInvokeFrontalAOEAttack(ActivityStateChange) end
function UZombieWeaponComponent:OnRep_IsEquipped() end
function UZombieWeaponComponent:MulticastRangedAttackTriggered() end


