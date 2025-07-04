---@enum EAWSLogEnableStatus
local EAWSLogEnableStatus = {
    Live = 0,
    Dev = 1,
    Off = 2,
    EAWSLogEnableStatus_MAX = 3,
}

---@enum EAccessItemHolderResponse
local EAccessItemHolderResponse = {
    Success = 0,
    OwnerPendingTravel = 1,
    ZombiesRestricted = 2,
    VehicleLocked = 3,
    EnemyTeamStrucuture = 4,
    OutOfRange = 5,
    SquadLocked = 6,
    EnemyOwned = 7,
    Error = 8,
    EAccessItemHolderResponse_MAX = 9,
}

---@enum EAccessLevel
local EAccessLevel = {
    Personal = 0,
    Public = 1,
    Count = 2,
    EAccessLevel_MAX = 3,
}

---@enum EActionType
local EActionType = {
    None = 0,
    Lock = 1,
    Unlock = 2,
    MakePrivate = 3,
    MakePrivateWithPrompt = 4,
    MakePublic = 5,
    Package = 6,
    Unpackage = 7,
    PackageShippable = 8,
    UnpackageShippable = 9,
    SetSpawn = 10,
    SubmitItemsToStockpile = 11,
    SubmitShippablesToStockpile = 12,
    SubmitStarterKit = 13,
    SubmitLargeItem = 14,
    SubmitVehicle = 15,
    EnterRocketCode = 16,
    CancelRocketLaunch = 17,
    ViewLog = 18,
    ViewRegionLog = 19,
    ViewTechTree = 20,
    StopRefueling = 21,
    ChangeFuel = 22,
    SubmitPatients = 23,
    SignPostEdit = 24,
    SignPostUpVote = 25,
    SignPostDownVote = 26,
    CreateReserveStockpile = 27,
    AccessReserveStockpile = 28,
    RefreshReserveStockpiles = 29,
    FullRepair = 30,
    RegimentLeave = 31,
    RegimentEdit = 32,
    RegimentLink = 33,
    RegimentDisband = 34,
    DetachModularMount = 35,
    Claim = 36,
    ClaimWithPrompt = 37,
    ClaimMulti = 38,
    ClaimRefresh = 39,
    ClaimRemove = 40,
    DemolishStructure = 41,
    PackUp = 42,
    DisconnectAll = 43,
    FlagDisruptivePlacement = 44,
    DrainPipes = 45,
    ViewActorLog = 46,
    ViewReserveStockpileLog = 47,
    CloseAssemblyArea = 48,
    OpenAssemblyArea = 49,
    DemolishVehicle = 50,
    AutoRepair = 51,
    EjectDriver = 52,
    CycleLiquid = 53,
    StopAutoRepair = 54,
    SetOutgoingConnection = 55,
    ResetOutgoingConnection = 56,
    ResetIncomingConnection = 57,
    RetrievePatient = 58,
    ConvertPatient = 59,
    SaveLoadout = 60,
    AssembleLoadout = 61,
    DeleteLoadout = 62,
    EditLoadout = 63,
    ViewGlobalLog = 64,
    MAX = 65,
}

---@enum EActivityBonusState
local EActivityBonusState = {
    None = 0,
    Inactive = 1,
    Active = 2,
    EActivityBonusState_MAX = 3,
}

---@enum EActivityStateDebugTraceType
local EActivityStateDebugTraceType = {
    None = 0,
    Start = 1,
    Finished = 2,
    StartFail = 3,
    StartRewound = 4,
    Correction = 5,
    Dropped = 6,
    Ack = 7,
    Interrupt = 8,
    Sync = 9,
    DeferredCreation = 10,
    DeferredExecution = 11,
    EActivityStateDebugTraceType_MAX = 12,
}

---@enum EActorLogEntryType
local EActorLogEntryType = {
    None = 0,
    BuildStarted = 1,
    BuildComplete = 2,
    Upgrade = 3,
    TierUpgrade = 4,
    AddedMod = 5,
    RemovedMod = 6,
    ChangedDirection = 7,
    ChangedPipeValve = 8,
    ChangedPowerState = 9,
    ChangedPowerLine = 10,
    ChangedSettings = 11,
    FlaggedDisruptive = 12,
    TransferredFuel = 13,
    RepairStarted = 14,
    RepairComplete = 15,
    StockpileCreate = 16,
    StockpileAccess = 17,
    StockpileAccessReset = 18,
    StockpileTransaction = 19,
    StockpileTransferPublic = 20,
    StockpileTransferReserve = 21,
    Mounted = 22,
    Unmounted = 23,
    Fired = 24,
    OrderQueued = 25,
    OrderStarted = 26,
    OrderExpired = 27,
    OrderCompleted = 28,
    Activated = 29,
    SubmitPatient = 30,
    RetrievePatient = 31,
    ConvertPatient = 32,
    ConstructionBuildStarted = 33,
    ConstructionNotEnoughMaterials = 34,
    ConstructionBelongsToEnemy = 35,
    ConstructionSiteObstructed = 36,
    ConstructionSiteNoLongerExists = 37,
    OtherBuildToolRequired = 38,
    WeaponAttached = 39,
    WeaponDetached = 40,
    MAX = 41,
}

---@enum EAnalyticsAccessLevel
local EAnalyticsAccessLevel = {
    Dev = 0,
    Mod = 1,
    Public = 2,
    EAnalyticsAccessLevel_MAX = 3,
}

---@enum EAnalyticsEventType
local EAnalyticsEventType = {
    PlayerLogin = 0,
    FriendlyPlayerKill = 1,
    VoteKick = 2,
    ModKick = 3,
    VoteBan = 4,
    ModBan = 5,
    PlayerRestricted = 6,
    ExcessFriendlyFire = 7,
    PlayerChat = 8,
    ModAdminCommand = 9,
    GameShare = 10,
    ServerInitialized = 11,
    VehicleBuilt = 12,
    FactoryOrderComplete = 13,
    VehicleWrenchUnlocked = 14,
    PlayerUnstuck = 15,
    StructureBuilt = 16,
    StructureDecayed = 17,
    RetrieveItemFromStockpile = 18,
    SubmitShippingContainer = 19,
    SubmitCrateStoragePublic = 20,
    SubmitVehicleStoragePublic = 21,
    PrototypeResult = 22,
    ReserveStockpileCreated = 23,
    ReserveStockpileReleased = 24,
    ReserveStockpileExpired = 25,
    ReserveStockpileItemReleased = 26,
    SubmitCrateStorageReserve = 27,
    SubmitVehicleStorageReserve = 28,
    Count = 29,
    EAnalyticsEventType_MAX = 30,
}

---@enum EAnchorState
local EAnchorState = {
    Raised = 0,
    Dropping = 1,
    Dropped = 2,
    Raising = 3,
    EAnchorState_MAX = 4,
}

---@enum EArmourDirection
local EArmourDirection = {
    Default = 0,
    Front = 1,
    Back = 2,
    Left = 3,
    Right = 4,
    Turret = 5,
    Turret2 = 6,
    Turret3 = 7,
    Turret4 = 8,
    Turret5 = 9,
    Count = 10,
    EArmourDirection_MAX = 11,
}

---@enum EArmourType
local EArmourType = {
    None = 0,
    NoArmour = 1,
    LightVehicle = 2,
    Tier1Tank = 3,
    Tier2Tank = 4,
    Tier0Structure = 5,
    Tier1Structure = 6,
    Tier2Structure = 7,
    Tier2BStructure = 8,
    Tier3Structure = 9,
    Tier3BStructure = 10,
    HeavyBuildSite = 11,
    Tier1GarrisonHouse = 12,
    Tier2GarrisonHouse = 13,
    Tier3GarrisonHouse = 14,
    Trench = 15,
    Tier1LargeShip = 16,
    Tier1Ship = 17,
    WorldStructureHusk = 18,
    Ice = 19,
    MAX = 20,
}

---@enum EAssemblyAreaState
local EAssemblyAreaState = {
    Closed = 0,
    Closing = 1,
    Open = 2,
    Opening = 3,
    EAssemblyAreaState_MAX = 4,
}

---@enum EAssemblyAreaWaterState
local EAssemblyAreaWaterState = {
    Raised = 0,
    Raising = 1,
    Lowered = 2,
    Lowering = 3,
    EAssemblyAreaWaterState_MAX = 4,
}

---@enum EAssignCoalitionResponse
local EAssignCoalitionResponse = {
    Success = 0,
    Error = 1,
    Locked = 2,
    Occupied = 3,
    OtherFaction = 4,
    NotAuthorized = 5,
    MissingMembers = 6,
    EAssignCoalitionResponse_MAX = 7,
}

---@enum EBallastType
local EBallastType = {
    Main = 0,
    Negative = 1,
    Safety = 2,
    EBallastType_MAX = 3,
}

---@enum EBanReason
local EBanReason = {
    CommsMisuse = 0,
    Harrassment = 1,
    BadLanguage = 2,
    GriefTeam = 3,
    Cheating = 4,
    AbuseTools = 5,
    VoteKick = 6,
    UnderReview = 7,
    FactionUnlock = 8,
    IntelLeak = 9,
    SuspectedAltAccount = 10,
    ExternalTools = 11,
    Count = 12,
    EBanReason_MAX = 13,
}

---@enum EBridgeSide
local EBridgeSide = {
    None = 0,
    A = 1,
    B = 2,
    Bottom = 3,
    EBridgeSide_MAX = 4,
}

---@enum EBridgeState
local EBridgeState = {
    Closed = 0,
    Closing = 1,
    Opening = 2,
    Open = 3,
    EBridgeState_MAX = 4,
}

---@enum EBuildArmType
local EBuildArmType = {
    Default = 0,
    Overhead = 1,
    EBuildArmType_MAX = 2,
}

---@enum EBuildCategory
local EBuildCategory = {
    Defense = 0,
    Bunker = 1,
    Default = 2,
    Facility = 3,
    Mining = 4,
    Power = 5,
    Liquids = 6,
    Foundation = 7,
    Shippables = 8,
    MAX = 9,
}

---@enum EBuildLocationType
local EBuildLocationType = {
    None = 0,
    Anywhere = 1,
    VehicleFactory = 2,
    Shipyard = 3,
    ConstructionYard = 4,
    TestShard = 5,
    RailTrackLarge = 6,
    RailTrackSmall = 7,
    RailTrackCrane = 8,
    Facility = 9,
    EBuildLocationType_MAX = 10,
}

---@enum EBuildResponse
local EBuildResponse = {
    Success = 0,
    IsObstructed = 1,
    IsObstructedByPlayer = 2,
    IsObstructedByStructure = 3,
    IsObstructedByVehicle = 4,
    NotEnoughResources = 5,
    NoBuildKit = 6,
    Restricted = 7,
    Error = 8,
    RequiresVehicle = 9,
    TechRequired = 10,
    ComponentTechRequired = 11,
    TownComponentTechRequired = 12,
    FortificationTechRequired = 13,
    SmallGarrisonRequired = 14,
    LargeGarrisonRequired = 15,
    MaxUpgradeReached = 16,
    EnemyOwned = 17,
    RequiresBlueprint = 18,
    IsScorched = 19,
    AsyncBuildRequested = 20,
    RequiresShovel = 21,
    UpgradeRequirementsNotSatisfied = 22,
    TooSteep = 23,
    AdjacentToFortUpgrade = 24,
    IsBlockingFortUpgrade = 25,
    JoiningEnemyStructure = 26,
    UpgradeFailedDueToDamage = 27,
    UpgradeFailedDueToFire = 28,
    ConnectorFailed = 29,
    SignPostTooClose = 30,
    SignPostRestricted = 31,
    RequiresTownConnection = 32,
    Claimed = 33,
    EnemyBaseNearby = 34,
    MustRemoveModifications = 35,
    InvalidatesDependantStructureRequirements = 36,
    TooManySameStructure = 37,
    JoiningBurningStructure = 38,
    TooCloseToSameStructure = 39,
    MustBeClosed = 40,
    MustBeAnchored = 41,
    TooManyConnectedStructures = 42,
    IsObstructedByPuddle = 43,
    BurningFuel = 44,
    ConnectedBunkersDamaged = 45,
    UpgradeFailedOrdersActive = 46,
    UpgradeFailedPowerConnected = 47,
    MustDetachWeapon = 48,
    NumTypes = 49,
    EBuildResponse_MAX = 50,
}

---@enum EBuildSocketTagRule
local EBuildSocketTagRule = {
    AffectsBoth = 0,
    AffectsHigherZ = 1,
    AffectsLowerZ = 2,
    EBuildSocketTagRule_MAX = 3,
}

---@enum EBuildSocketType
local EBuildSocketType = {
    Sandbag = 0,
    Trench = 1,
    Fort = 2,
    FortFoundation = 3,
    FortModification = 4,
    EmplacementFoundation = 5,
    TrenchSide = 6,
    Tripod = 7,
    TripodMount = 8,
    Wall = 9,
    TrenchConnector = 10,
    Pipeline = 11,
    BarbedWire = 12,
    FieldBridge = 13,
    PipelineStructure = 14,
    RailwayTrack = 15,
    Foundation = 16,
    PowerLine = 17,
    PowerPole = 18,
    RailwayTrackPath = 19,
    PowerStructure = 20,
    RailwayTrackSmall = 21,
    RailwayTrackSmallPath = 22,
    RailwayTrackCrane = 23,
    PipelineValve = 24,
    CatwalkBridge = 25,
    CatwalkPlatform = 26,
    RailwayTrackCranePath = 27,
    PipelineOverhead = 28,
    BuildableRoad = 29,
    BuildableRoadPath = 30,
    TankStop = 31,
    SatchelFoundation = 32,
    SatchelFoundationMount = 33,
    FieldPier = 34,
    TrenchIntersection = 35,
    FortBreach = 36,
    FortGarrisonStation = 37,
    FortCornerInternalLeft = 38,
    FortCornerInternalRight = 39,
    EBuildSocketType_MAX = 40,
}

---@enum EBuildTool
local EBuildTool = {
    None = 0,
    Hammer = 1,
    Shovel = 2,
    Material = 4,
    Vehicle = 8,
    AdvancedVehicle = 16,
    ConstructionEquipment = 32,
    EBuildTool_MAX = 33,
}

---@enum ECardinalDirection
local ECardinalDirection = {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
    ECardinalDirection_MAX = 4,
}

---@enum ECharacterActivityState
local ECharacterActivityState = {
    Idle = 0,
    Equipping = 1,
    UnEquipping = 2,
    Firing = 3,
    Reloading = 4,
    ToProne = 5,
    Throwing = 6,
    Dying = 7,
    UsingBinoculars = 8,
    KarateAttack = 9,
    PlacingBuildSite = 10,
    Vaulting = 11,
    Climbing = 12,
    WallClimbing = 13,
    PullingPin = 14,
    DoWork = 15,
    Wheelbarrow = 16,
    Deploying = 17,
    ShortWallStep = 18,
    UsingBandages = 19,
    ApplyingFirstAid = 20,
    EncumberedFall = 21,
    Wounded = 22,
    WoundedRecover = 23,
    Revive = 24,
    Retrieving = 25,
    LightingBomb = 26,
    PlacingBomb = 27,
    AttachingAccessory = 28,
    DettachingAccessory = 29,
    SlowWounds = 30,
    SlowWoundsComplete = 31,
    SwitchingSeats = 32,
    EnterLadderBottom = 33,
    EnterLadderTop = 34,
    ExitLadderBottom = 35,
    ExitLadderTop = 36,
    FromProne = 37,
    EmoteGoFoward = 38,
    EmoteHalt = 39,
    EmoteSalute = 40,
    EmoteWave = 41,
    EmoteRallyPoint = 42,
    EmoteSurrender = 43,
    EmoteCheer = 44,
    EnteringVehicle = 45,
    ZombieAttack = 46,
    CommanderFiring = 47,
    EnteringStructure = 48,
    EngineerRepair = 49,
    ExitingVehicle = 50,
    TransmittingLaunchCodes = 51,
    Packaging = 52,
    ZombieSpawning = 53,
    Excavating = 54,
    Modifying = 55,
    DeployingLargeItem = 56,
    UsingSoulstone = 57,
    ZombieSecondaryT2 = 58,
    ZombieSecondaryT3 = 59,
    WoundedCarried = 60,
    Freezing = 61,
    AdjustingValve = 62,
    FiremanShovel = 63,
    ShipFlagInteraction = 64,
    TransferringTorpedo = 65,
    MeleeCharging = 66,
    MeleeAttackQuick = 67,
    MeleeAttackLong = 68,
    DetachLargeItem = 69,
    MAX = 70,
}

---@enum EChatChannel
local EChatChannel = {
    Default = 0,
    RegionTeam = 1,
    WorldTeam = 2,
    Logistics = 3,
    Intel = 4,
    LocalAll = 5,
    Squad = 6,
    Regiment = 7,
    Whisper = 8,
    Admin = 9,
    MAX = 10,
}

---@enum EChatLanguage
local EChatLanguage = {
    English = 1,
    Russian = 2,
    Korean = 4,
    Chinese = 8,
    EChatLanguage_MAX = 9,
}

---@enum EChatMessageType
local EChatMessageType = {
    RegionTeam = 1,
    WorldTeam = 2,
    Logistics = 4,
    Intel = 8,
    LocalAll = 16,
    Squad = 32,
    Regiment = 64,
    Whisper = 128,
    Operation = 256,
    Zombie = 512,
    Admin = 1024,
    EChatMessageType_MAX = 1025,
}

---@enum EClassRepNodeMapping
local EClassRepNodeMapping = {
    NotRouted = 0,
    RelevantAllConnections = 1,
    RailVehicle = 2,
    Spatialize_Static = 3,
    Spatialize_Dynamic = 4,
    Spatialize_Dormancy = 5,
    EClassRepNodeMapping_MAX = 6,
}

---@enum EClientConfigDownloadStatusType
local EClientConfigDownloadStatusType = {
    Success = 0,
    HttpRequestFailed = 1,
    HttpResponseCode = 2,
    JsonDeserializationFailed = 3,
    EmptyShardList = 4,
    EClientConfigDownloadStatusType_MAX = 5,
}

---@enum EClientConfigDownloadTaskState
local EClientConfigDownloadTaskState = {
    NotStarted = 0,
    Completed = 1,
    InProgress = 2,
    EClientConfigDownloadTaskState_MAX = 3,
}

---@enum EClientConfigURLType
local EClientConfigURLType = {
    Live = 0,
    Internal = 1,
    Iteration = 2,
    DevBranch = 3,
    EClientConfigURLType_MAX = 4,
}

---@enum EClientFoliageReplacementState
local EClientFoliageReplacementState = {
    Initial = 0,
    Damaged = 1,
    Destroyed = 2,
    EClientFoliageReplacementState_MAX = 3,
}

---@enum ECommandParam
local ECommandParam = {
    Bool = 0,
    Int = 1,
    Float = 2,
    String = 3,
    MultiwordString = 4,
    IntArray = 5,
    StringArray = 6,
    Enum = 7,
    ECommandParam_MAX = 8,
}

---@enum ECommandTarget
local ECommandTarget = {
    LocalOnly = 0,
    Global = 1,
    GlobalSingleServer = 2,
    Invalid = 3,
    ECommandTarget_MAX = 4,
}

---@enum ECommsRatingCondition
local ECommsRatingCondition = {
    Good = 0,
    Poor = 1,
    VeryPoor = 2,
    ECommsRatingCondition_MAX = 3,
}

---@enum EConnectorConfigurationFlag
local EConnectorConfigurationFlag = {
    None = 0,
    OverridePathModeToBiarc = 1,
    UnderRoad = 2,
    EConnectorConfigurationFlag_MAX = 3,
}

---@enum EConnectorPathMode
local EConnectorPathMode = {
    Spline = 0,
    Arc = 1,
    Biarc = 2,
    EConnectorPathMode_MAX = 3,
}

---@enum ECoverMitigationType
local ECoverMitigationType = {
    Default = 0,
    Assault = 1,
    Carbine = 2,
    Rifle = 3,
    Sniper = 4,
    ECoverMitigationType_MAX = 5,
}

---@enum ECraneState
local ECraneState = {
    Inactive = 0,
    Destroyed = 1,
    DeployingWeights = 2,
    UndeployingWeights = 3,
    DeployedWeights = 4,
    PickingUp = 5,
    DroppingOff = 6,
    ResettingToDeployed = 7,
    ECraneState_MAX = 8,
}

---@enum ECreateCoalitionResponse
local ECreateCoalitionResponse = {
    Success = 0,
    LimitReached = 1,
    RankTooLow = 2,
    ZombieNotAllowed = 3,
    NumTypes = 4,
    ECreateCoalitionResponse_MAX = 5,
}

---@enum ECustomMovementMode
local ECustomMovementMode = {
    MOVE_Custom_None = 0,
    MOVE_Custom_LadderClimbing = 1,
    MOVE_Custom_WoundedCarried = 2,
    MOVE_Custom_StationaryPassenger = 3,
    MOVE_Custom_StationaryOccupant = 4,
    MOVE_Custom_MAX = 5,
}

---@enum EDamageSource
local EDamageSource = {
    Weapon = 0,
    Vehicle = 1,
    StructureWeapon = 2,
    VehicleWeapon = 3,
    MAX = 4,
}

---@enum EDamageType
local EDamageType = {
    None = 0,
    LightKinetic = 1,
    HeavyKinetic = 2,
    AntiTankKinetic = 3,
    AntiTankKineticStructure = 4,
    AntiTankExplosive = 5,
    ArmourPiercing = 6,
    Explosive = 7,
    HighExplosive = 8,
    Demolition = 9,
    Karate = 10,
    Shrapnel = 11,
    TankZombie = 12,
    PoisonGas = 13,
    Environment = 14,
    GroundZero = 15,
    Decay = 16,
    Incendiary = 17,
    IncendiaryHighExplosive = 18,
    Fire = 19,
    Extinguishing = 20,
    MAX = 21,
}

---@enum EDeployResponse
local EDeployResponse = {
    Success = 0,
    RampBlocked = 1,
    ShorelineOnly = 2,
    ShorelineAndDockOnly = 3,
    TooCloseToBorder = 4,
    TooAngledForDock = 5,
    TooFastToDock = 6,
    RequiredRampAngleInvalid = 7,
    CarriedVehiclesIncorrectState = 8,
    MustBeAnchored = 9,
    EDeployResponse_MAX = 10,
}

---@enum EDockedState
local EDockedState = {
    Docked = 0,
    Docking = 1,
    Undocked = 2,
    Undocking = 3,
    EDockedState_MAX = 4,
}

---@enum EDynamicState
local EDynamicState = {
    Closed = 0,
    Opening = 1,
    Open = 2,
    Closing = 3,
    EDynamicState_MAX = 4,
}

---@enum EDynamicTier
local EDynamicTier = {
    Default = 0,
    One = 1,
    Two = 2,
    Three = 3,
    MAX = 4,
}

---@enum EEquipmentSlot
local EEquipmentSlot = {
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    Head = 3,
    Body = 4,
    Accessory = 5,
    Utility = 6,
    Large = 7,
    NumSlots = 8,
    None = 9,
    EEquipmentSlot_MAX = 10,
}

---@enum EEquippedWeaponGripType
local EEquippedWeaponGripType = {
    None = 0,
    Rifle = 1,
    Pistol = 2,
    RPG = 3,
    Sniper = 4,
    HeavyMachinegun = 5,
    Mortar = 6,
    VehicleFieldArtillery = 7,
    VehicleHalfTrack = 8,
    VehicleMotorCycleDriver = 9,
    StaticArtilleryGunner = 10,
    SingleHandItem = 11,
    VehicleFieldMachineGunDriver = 12,
    VehicleFieldMachineGunGunner = 13,
    ClimbingLadder = 14,
    VehicleGunboatHmgGunner = 15,
    VehicleGunboatCannonGunner = 16,
    LargeProneRifle = 17,
    VehicleMotorboatDriver = 18,
    LargeDeployableItem = 19,
    HeavySingleHandItem = 20,
    CarryingPlayer = 21,
    DeployedTwoHandedWeapon = 22,
    Shovel = 23,
    LightMachineGun = 24,
    SeatedDoubleHandedCrank = 25,
    BicycleDriver = 26,
    VehicleLmgGunner = 27,
    VehicleSeatedLmgGunner = 28,
    VehicleRpgGunner = 29,
    VehicleDriver = 30,
    VehicleDriverNarrow = 31,
    VehicleSeatedVerticalMoveOnlyGunner = 32,
    CarryingCriticalSoldier = 33,
    CarriedPlayer = 34,
    SeatedLeftSideCrank = 35,
    StandingLeftSideCrank = 36,
    RPGHeavy = 37,
    RPGLight = 38,
    VehicleTrainDriver = 39,
    VehicleSmallTrainDriver = 40,
    Flamethrower = 41,
    VehicleMediumPassenger = 42,
    VehicleSeatedPassenger = 43,
    SensorOperator = 44,
    TorpedoGunner = 45,
    DedicatedMelee = 46,
    DedicatedMeleeAlt = 47,
    Shotgun = 48,
    Periscope = 49,
    StandingFrontCrank = 50,
    TwoHandItem = 51,
    EEquippedWeaponGripType_MAX = 52,
}

---@enum EFacilityMapPostType
local EFacilityMapPostType = {
    None = 0,
    General = 1,
    Vehicle = 2,
    Resource = 3,
    Material = 4,
    Crate = 5,
    Fuel = 6,
    MAX = 7,
}

---@enum EFacilityRefineryItemsType
local EFacilityRefineryItemsType = {
    Input = 0,
    CrateInput = 1,
    FuelInput = 2,
    Output = 3,
    CrateOutput = 4,
    FuelOutput = 5,
    EFacilityRefineryItemsType_MAX = 6,
}

---@enum EFacilityRefineryOrderState
local EFacilityRefineryOrderState = {
    None = 0,
    Pending = 1,
    Paused = 2,
    Active = 3,
    Completed = 4,
    EFacilityRefineryOrderState_MAX = 5,
}

---@enum EFactionId
local EFactionId = {
    Colonials = 0,
    Wardens = 1,
    NumFactions = 2,
    NoTeam = 255,
    EFactionId_MAX = 256,
}

---@enum EFactoryOrderAccess
local EFactoryOrderAccess = {
    Personal = 0,
    Squad = 1,
    Public = 2,
    Count = 3,
    EFactoryOrderAccess_MAX = 4,
}

---@enum EFactoryOrderStatus
local EFactoryOrderStatus = {
    NoOrder = 0,
    Pending = 1,
    ReadyPickup = 2,
    NumTypes = 3,
    EFactoryOrderStatus_MAX = 4,
}

---@enum EFactoryQueueType
local EFactoryQueueType = {
    None = 0,
    SmallArms = 1,
    HeavyArms = 2,
    HeavyAmmo = 3,
    Utility = 4,
    Medical = 5,
    Supplies = 6,
    Resources = 7,
    Uniforms = 8,
    Vehicles = 9,
    Structures = 10,
    Count = 11,
    EFactoryQueueType_MAX = 12,
}

---@enum EFactoryReadyOrdersPickupStatus
local EFactoryReadyOrdersPickupStatus = {
    CanBePickedUp = 0,
    TransferLocationBlocked = 1,
    NumTypes = 2,
    EFactoryReadyOrdersPickupStatus_MAX = 3,
}

---@enum EFireIntensity
local EFireIntensity = {
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Blazing = 4,
    Blazing2 = 5,
    MAX = 6,
}

---@enum EFloorVisibility
local EFloorVisibility = {
    None = 0,
    Floor1 = 1,
    Floor2 = 2,
    All = 3,
    EFloorVisibility_MAX = 4,
}

---@enum EFoot
local EFoot = {
    Left = 0,
    Right = 1,
    NumTypes = 2,
    None = 3,
    EFoot_MAX = 4,
}

---@enum EFortEmpStructure
local EFortEmpStructure = {
    StormCannon = 0,
    WeatherStation = 1,
    IntelCenter = 2,
    FortGarrisonStation = 3,
    NumStructures = 4,
    None = 255,
    EFortEmpStructure_MAX = 256,
}

---@enum EFortModificationType
local EFortModificationType = {
    Default = 0,
    Door = 1,
    FiringPort = 2,
    BarbedWire = 3,
    Bridge = 4,
    Pipes = 5,
    BunkBed = 6,
    Lockers = 7,
    Kitchen = 8,
    Pantry = 9,
    DishWashStation = 10,
    Stove = 11,
    Latrine = 12,
    StrategicMap = 13,
    RadioStation = 14,
    Desk = 15,
    Chalkboard = 16,
    Module = 17,
    Stairs = 18,
    OneWay = 19,
    Sandbags = 20,
    Ladder = 21,
    TrenchRoof = 22,
    InteriorFiringPort = 23,
    RocketFactory = 24,
    LargeShellFactory = 25,
    TripodFactory = 26,
    ToolShed = 27,
    SpecializedEquipment = 28,
    PipeFabricator = 29,
    SpecialWeapons = 30,
    InfantryAmmo = 31,
    HeavyAmmo = 32,
    Petrol = 33,
    Coal = 34,
    Fracker = 35,
    Excavator = 36,
    MaterialsSorter = 37,
    Electric = 38,
    SulfuricReactor = 39,
    IndustrialTurbines = 40,
    SteamTurbine = 41,
    Forge = 42,
    MetalPress = 43,
    Smelter = 44,
    BlastFurnace = 45,
    EngineeringStation = 46,
    Recycler = 47,
    CokeFurnace = 48,
    CoalLiquefier = 49,
    AdvCoalLiquefier = 50,
    Reformer = 51,
    CrackingUnit = 52,
    PetrochemicalPlant = 53,
    MotorPool = 54,
    ArtilleryFactory = 55,
    LightVehicleAssembly = 56,
    TankAssembly = 57,
    WeaponsPlatformAssembly = 58,
    RocketAssembly = 59,
    ShipAssembly = 60,
    TrainAssembly = 61,
    HeavyTankAssembly = 62,
    MachiningStation = 63,
    AdvMachiningStation = 64,
    Light = 65,
    Insulation = 66,
    PowerConnection = 67,
    Count = 68,
    None = 69,
    EFortModificationType_MAX = 70,
}

---@enum EFortTier
local EFortTier = {
    None = 0,
    T1 = 1,
    T2 = 2,
    T3 = 3,
    T3AI = 4,
    Count = 5,
    EFortTier_MAX = 6,
}

---@enum EFreighterState
local EFreighterState = {
    Idle = 0,
    Deploying = 1,
    Deployed = 2,
    Undeploying = 3,
    EFreighterState_MAX = 4,
}

---@enum EFullRepairResponse
local EFullRepairResponse = {
    Success = 0,
    SuccessArmour = 1,
    NotEnoughMaterials = 2,
    NoVehicleFound = 3,
    VehicleNotRepairable = 4,
    IncorrectFaction = 5,
    Error = 6,
    EFullRepairResponse_MAX = 7,
}

---@enum EGameplayFlag
local EGameplayFlag = {
    TrainingGrounds = 0,
    Festival = 1,
    Zombie = 2,
    Stronghold = 3,
    LetItSnow = 4,
    Relic = 5,
    MAX = 6,
}

---@enum EGateState
local EGateState = {
    Closed = 0,
    OpenForward = 1,
    OpenBackward = 2,
    FullyOpenForward = 3,
    FullyOpenBackward = 4,
    EGateState_MAX = 5,
}

---@enum EGetProfileResponseCode
local EGetProfileResponseCode = {
    Success = 0,
    NoProfile = 1,
    Error = 2,
    EGetProfileResponseCode_MAX = 3,
}

---@enum EGlobalLogEntryType
local EGlobalLogEntryType = {
    None = 0,
    VehiclesTransferred = 1,
    MAX = 2,
}

---@enum EHUDMode
local EHUDMode = {
    Visible = 0,
    OnlyPlayerNames = 1,
    Hidden = 2,
    Count = 3,
    EHUDMode_MAX = 4,
}

---@enum EHUDNotification
local EHUDNotification = {
    None = 0,
    SetSpawnPointReminder = 1,
    OccupyLocationBlocked = 2,
    StructureInvulnerable = 3,
    StructureNoDamage = 4,
    StructureNoFriendlyFire = 5,
    TooFarFromFriendlyTownHall = 6,
    TooSoonToUnlockFriendlyVehicle = 7,
    CantAccessFromLocation = 8,
    StockpileFailure = 9,
    OutOfFuel = 10,
    OutOfElectricity = 11,
    CantRespawnAtNearestSpawnPoint = 12,
    RespawnUnavailable = 13,
    ItemDropped = 14,
    ItemSubmitted = 15,
    MustBeUprightOrCrouched = 16,
    MustBeUpright = 17,
    MustBeCrouched = 18,
    ExitBlocked = 19,
    AmbulanceOrHospitalOnly = 20,
    ModificationAlreadyExists = 21,
    ModificationAlreadyExistsHidden = 22,
    ModificationDoesNotExist = 23,
    ModificationWouldBeHidden = 24,
    ModificationUnremovable = 25,
    ModificationRemovalBlockedByVehicle = 26,
    NotEnoughMaterials = 27,
    CannotOperateOnBarge = 28,
    CannotConvertCratesStackSize = 29,
    CannotConvertCratesInventory = 30,
    CannotConvertCratesAmmo = 31,
    InventoryFull = 32,
    WoundedPlayerIsEncumbered = 33,
    TemperatureDropping = 34,
    TemperatureCritical = 35,
    TemperatureRising = 36,
    TemperatureBurning = 37,
    GettingMuddy = 38,
    GettingMuddyVehicle = 39,
    MissingMountedWeapon = 40,
    MissingFoundation = 41,
    InventoryTooSmall = 42,
    InventoryLimited = 43,
    InventoryCantHoldType = 44,
    Claimed = 45,
    ClaimRefreshed = 46,
    ClaimReset = 47,
    ClaimExpired = 48,
    CantClaim = 49,
    NotClaimed = 50,
    CantDemolish = 51,
    CantDemolishHusked = 52,
    CantDemolishOccupied = 53,
    CantDemolishStandingOn = 54,
    CantDemolishUnclaimed = 55,
    CantDemolishMustBeBuilder = 56,
    CantDemolishHasCargo = 57,
    EnemiesNearby = 58,
    IslandMustBeRepaired = 59,
    IslandRequirementsMissing = 60,
    CantUnequipUniform = 61,
    ItemsDropped = 62,
    LadderObstructed = 63,
    LadderObstructedByPlayer = 64,
    BridgeVehicleDecayWarning = 65,
    BridgeVehicleDecay = 66,
    ModificationInProgress = 67,
    ItemsSubmitted = 68,
    ItemsEmpty = 69,
    ItemsFailedToSubmit = 70,
    ItemsCantBeSubmitted = 71,
    RailVehicleNotPrimaryLocomotive = 72,
    RailVehicleMultipleDrivers = 73,
    CantAdjustPowerGrid = 74,
    CantAdjustPipeValve = 75,
    CantDemolishStructuresOnTop = 76,
    CantDemolishVehiclesOnTop = 77,
    StructureIsReserved = 78,
    InvalidSubmission = 79,
    CantEnterEnemyOccupied = 80,
    CantEnterEnemyCV = 81,
    CantEnterEnemyLS = 82,
    CantEnterSealed = 83,
    CantEnterAnchored = 84,
    CantDriveTowedVehicle = 85,
    CantEnterTowedVehicle = 86,
    CantAnchorMovingVehicle = 87,
    CantAnchorSubmergedVehicle = 88,
    CantRaiseAnchorWhenDocked = 89,
    CantRaiseAnchorHatchOpen = 90,
    CantRaiseAnchorDuringRepairs = 91,
    CantAnchorCraneDeployed = 92,
    CantAnchorUnsecuredCargo = 93,
    CantAnchorAtBorder = 94,
    CantAnchorWhenLeaking = 95,
    CantAnchorWhenFlooded = 96,
    CantAnchorNearbyEnemyLargeShip = 97,
    CantInteractEnemyRecoveryMode = 98,
    CantInteractEnemyDriverDisconnected = 99,
    AnchorIsRaising = 100,
    AnchorIsDropping = 101,
    AreaIsObstructed = 102,
    EnemyOwned = 103,
    WaterMineDeploymentFailed = 104,
    WaterMineDeploymentObstructed = 105,
    WaterMineDeploymentTooClose = 106,
    WaterMineDeploymentOutOfRange = 107,
    AssemblyAreaMustBeClosed = 108,
    AssemblyAreaMustBeClear = 109,
    TooFarFromRepairLocation = 110,
    ItemRemoved = 111,
    StockpileOnlyItem = 112,
    ItemTransferredTo = 113,
    CantDropItemOnVehicle = 114,
    ExceedsTowingCapacity = 115,
    CantUseSubmerged = 116,
    AnchorMustBeRaisedShipEngine = 117,
    AnchorMustBeRaisedSubmarineTube = 118,
    CantEjectDriver = 119,
    TooCloseToBorder = 120,
    TorpedoAlreadyLoaded = 121,
    MustClaimOrder = 122,
    AtMaxOrders = 123,
    NotEnoughToCrate = 124,
    OrdersMustBeClear = 125,
    LiquidTankMustBeEmpty = 126,
    RepairWillBeStopped = 127,
    NoReloadNeeded = 128,
    ConcreteSettling = 129,
    NotInSquad = 130,
    InWrongSquad = 131,
    ResetAccessOnCooldown = 132,
    TrainMoving = 133,
    TrainCoupled = 134,
    TrainOffRails = 135,
    VehicleRestored = 136,
    PipeMustBeConnected = 137,
    PipesMustBeReserved = 138,
    MAX = 139,
}

---@enum EHexDirection
local EHexDirection = {
    North = 0,
    NorthEast = 1,
    SouthEast = 2,
    South = 3,
    SouthWest = 4,
    NorthWest = 5,
    Num = 6,
    EHexDirection_MAX = 7,
}

---@enum EHospitalResponse
local EHospitalResponse = {
    Success = 0,
    Error = 1,
    AtCapacity = 2,
    NoCriticalSoldiersInInventory = 3,
    NoRecoveringPatients = 4,
    NoRecoveredPatients = 5,
    EHospitalResponse_MAX = 6,
}

---@enum EInfrastructureType
local EInfrastructureType = {
    None = 0,
    Garrison = 1,
    Command = 2,
    Base = 3,
    Town = 4,
    GarrisonStation = 5,
    Count = 6,
    EInfrastructureType_MAX = 7,
}

---@enum EInputActionCategory
local EInputActionCategory = {
    None = 0,
    Movement = 1,
    Vehicle = 2,
    General = 3,
    Camera = 4,
    Communication = 5,
    Equipment = 6,
    Miscellaneous = 7,
    Emote = 8,
    Count = 9,
    EInputActionCategory_MAX = 10,
}

---@enum EInteractiveObjectType
local EInteractiveObjectType = {
    ItemPickup = 0,
    LargeItemPickup = 1,
    BuildableStructure = 2,
    DeployedStructure = 3,
    StructureSeatTrigger = 4,
    DestroyedStructure = 5,
    StructureBuildSite = 6,
    Vehicle = 7,
    VehicleSeatTrigger = 8,
    UseComponent = 9,
    TravelBorder = 10,
    Ladder = 11,
    Character = 12,
    VehicleAccessBox = 13,
    Invalid = 14,
    EInteractiveObjectType_MAX = 15,
}

---@enum EInventoryType
local EInventoryType = {
    Default = 0,
    Player = 1,
    Ambulance = 2,
    Hospital = 3,
    Misc = 4,
    EInventoryType_MAX = 5,
}

---@enum EItemCategory
local EItemCategory = {
    Misc = 0,
    SmallArms = 1,
    HeavyArms = 2,
    HeavyAmmo = 3,
    Utility = 4,
    Medical = 5,
    Supplies = 6,
    Uniforms = 7,
    EItemCategory_MAX = 8,
}

---@enum EItemFlags
local EItemFlags = {
    None = 0,
    Default = 1,
    BasicMaterial = 2,
    GasMaskFilter = 4,
    Grenade = 8,
    HeavyAmmo = 16,
    HeavyWeapon = 32,
    KineticAmmo = 64,
    KineticWeapon = 128,
    Material = 256,
    MedicalAmmo = 512,
    MedicalKit = 1024,
    RawResource = 2048,
    LightKineticAmmo = 4096,
    PistolAmmo = 8192,
    LightExplosiveAmmo = 16384,
    Water = 32768,
    EItemFlags_MAX = 32769,
}

---@enum EItemProfileType
local EItemProfileType = {
    Invalid = 0,
    RawResource = 1,
    UnstackableRawResource = 2,
    RefinedResourceFastRetrieve = 3,
    RefinedResource = 4,
    OnSiteResources = 5,
    RefinedFuel = 6,
    Throwable = 7,
    HandheldWeapon = 8,
    LightAmmo = 9,
    HeavyAmmo = 10,
    LargeItemAmmo = 11,
    Supplies = 12,
    Accessory = 13,
    Tool = 14,
    StackableTool = 15,
    UniqueItem = 16,
    Uniform = 17,
    LargeResource = 18,
    LiquidAmmo = 19,
    TorpedoAmmo = 20,
    Count = 21,
    EItemProfileType_MAX = 22,
}

---@enum EItemRequisitionType
local EItemRequisitionType = {
    Open = 0,
    Coalition = 1,
    MainEquipment = 2,
    ExtraEquipment = 3,
    Ammo = 4,
    Consumable = 5,
    NumTypes = 6,
    EItemRequisitionType_MAX = 7,
}

---@enum EItemSortMethod
local EItemSortMethod = {
    Default = 0,
    CodeName = 1,
    EItemSortMethod_MAX = 2,
}

---@enum EItemSubtype
local EItemSubtype = {
    None = 0,
    ArmorPiercing = 1,
    Flare = 2,
    GreenAsh = 3,
    HighExplosive = 4,
    Shrapnel = 5,
    Smoke = 6,
    NumTypes = 7,
    EItemSubtype_MAX = 8,
}

---@enum EJoinWarResponse
local EJoinWarResponse = {
    Success = 0,
    AskToJoinModQueue = 1,
    Banned = 2,
    TooManyLogins = 3,
    NoFactionSwitch = 4,
    FactionLockedSelfServeUnlockAvailable = 5,
    FactionLimitReached = 6,
    EarlyWarRestricted = 7,
    TravelGroupSizeTooLarge = 8,
    TravelGroupHasEnemy = 9,
    UnknownError = 10,
    EnteringQueueDisabled = 11,
    InvalidFaction = 12,
    ConquestPending = 13,
    VersionCheckFailed = 14,
    OfflineCharacterUnavailable = 15,
    TravelPointAtBorder = 16,
    TravelPointAtCapacity = 17,
    TravelPointDestroyed = 18,
    TravelPointLacksGarrisonSize = 19,
    TravelOnCooldown = 20,
    ReservedButFull = 21,
    EnteringQueueDisabledShardVipMode = 22,
    EnteringQueueDisabledLocalVipMode = 23,
    EJoinWarResponse_MAX = 24,
}

---@enum EKickFromCoalitionResponse
local EKickFromCoalitionResponse = {
    Success = 0,
    IsOfficer = 1,
    NotFound = 2,
    NumTypes = 3,
    EKickFromCoalitionResponse_MAX = 4,
}

---@enum ELanguageType
local ELanguageType = {
    English = 0,
    Chinese = 1,
    French = 2,
    German = 3,
    Portuguese = 4,
    Russian = 5,
    ELanguageType_MAX = 6,
}

---@enum ELeakOffsetRangeSide
local ELeakOffsetRangeSide = {
    Both = 0,
    Left = 1,
    Right = 2,
    ELeakOffsetRangeSide_MAX = 3,
}

---@enum ELimbIK
local ELimbIK = {
    LeftHand = 0,
    RightHand = 1,
    LeftFoot = 2,
    RightFoot = 3,
    NumTypes = 4,
    None = 5,
    ELimbIK_MAX = 6,
}

---@enum ELogChannel
local ELogChannel = {
    WarServer = 0,
    WarBans = 1,
    WarLogins = 2,
    WarLogouts = 3,
    WarGameShare = 4,
    WarTeamKills = 5,
    WarMisc = 6,
    WarVerify = 7,
    WarCreate = 8,
    WarChat = 9,
    WarComms = 10,
    ELogChannel_MAX = 11,
}

---@enum ELongRangeArtilleryType
local ELongRangeArtilleryType = {
    Static = 0,
    Train = 1,
    ELongRangeArtilleryType_MAX = 2,
}

---@enum EMainMenuPromptType
local EMainMenuPromptType = {
    None = 0,
    Update = 1,
    Rejoin = 2,
    RejoinResistance = 3,
    WaitForRestart = 4,
    WaitForRestartUpgrade = 5,
    ShardVipMode = 6,
    LocalVipMode = 7,
    EMainMenuPromptType_MAX = 8,
}

---@enum EMapBoundaryBuildRule
local EMapBoundaryBuildRule = {
    NotBuildableNearBorder = 0,
    OnlyBuildableNearBorder = 1,
    OptionallyBuildableNearBorder = 2,
    EMapBoundaryBuildRule_MAX = 3,
}

---@enum EMapExtentMarkerLocation
local EMapExtentMarkerLocation = {
    TopLeft = 0,
    BottomRight = 1,
    EMapExtentMarkerLocation_MAX = 2,
}

---@enum EMapIconCategory
local EMapIconCategory = {
    None = 0,
    MapIntel = 1,
    Resources = 2,
    Bases = 4,
    OtherWorldStructures = 8,
    MapMarkers = 16,
    MapPosts = 32,
    RegionZones = 64,
    RailwayTracks = 128,
    All = 65535,
    EMapIconCategory_MAX = 65536,
}

---@enum EMapIconType
local EMapIconType = {
    None = 0,
    HomeTown = 1,
    TownHall = 2,
    Outpost = 3,
    PortBase = 4,
    StaticBase1 = 5,
    StaticBase2 = 6,
    StaticBase3 = 7,
    ForwardBase1 = 8,
    ForwardBase2 = 9,
    ForwardBase3 = 10,
    Hospital = 11,
    VehicleFactory = 12,
    Armory = 13,
    SupplyStation = 14,
    Workshop = 15,
    ManufacturingPlant = 16,
    Refinery = 17,
    Shipyard = 18,
    TechCenter = 19,
    SalvageField = 20,
    ComponentField = 21,
    FuelField = 22,
    SulfurField = 23,
    WorldMapTent = 24,
    TravelTent = 25,
    TrainingArea = 26,
    SpecialBase = 27,
    ObservationTower = 28,
    Fort = 29,
    TroopShip = 30,
    ScrapMine = 31,
    SulfurMine = 32,
    StorageFacility = 33,
    Factory = 34,
    GarrisonStation = 35,
    AmmoFactory = 36,
    RocketSite = 37,
    SalvageMine = 38,
    ConstructionYard = 39,
    ComponentMine = 40,
    OilWell = 41,
    OperationStorageFacility = 42,
    FrontierBase = 43,
    CursedFort = 44,
    RelicBase1 = 45,
    RelicBase2 = 46,
    RelicBase3 = 47,
    FortBase1 = 48,
    FortBase2 = 49,
    FortBase3 = 50,
    MassProductionFactory = 51,
    Seaport = 52,
    CoastalGun = 53,
    SoulFactory = 54,
    BorderBase = 55,
    TownBase1 = 56,
    TownBase2 = 57,
    TownBase3 = 58,
    LRArtillery = 59,
    IntelCenter = 60,
    CoalField = 61,
    OilField = 62,
    ResourceTransfer1 = 63,
    ResourceTransfer2 = 64,
    ResourceTransfer3 = 65,
    MaintenanceTunnel = 66,
    FacilityVehicleFactory1 = 67,
    FacilityVehicleFactory2 = 68,
    FacilityModCenter = 69,
    RocketTarget = 70,
    RocketGroundZero = 71,
    RocketSiteWithRocket = 72,
    LargeShipBaseShip = 73,
    LargeShipStorageShip = 74,
    FacilityMineOilRig = 75,
    FacilityVehicleFactory3 = 76,
    MapPostPublic = 77,
    MapPostSquad = 78,
    MapPostRegiment = 79,
    MapPostIntelligence = 80,
    MapPostFacility = 81,
    MapPostLogistics = 82,
    WeatherStation = 83,
    MortarHouse = 84,
    ResourceTransfer4 = 85,
    FacilitySmallArmsFactory = 86,
    FortGarrisonStation = 87,
    MAX = 88,
}

---@enum EMapIntelCategory
local EMapIntelCategory = {
    None = 0,
    Infantry = 1,
    Vehicles = 2,
    Structures = 4,
    Defense = 8,
    Artillery = 16,
    FieldHospital = 32,
    Outpost = 64,
    Facility = 128,
    LargeShip = 256,
    All = 65535,
    EMapIntelCategory_MAX = 65536,
}

---@enum EMapIntelligenceType
local EMapIntelligenceType = {
    None = 0,
    Soldier = 1,
    Vehicle = 2,
    Defense = 3,
    Howitzer = 4,
    Outpost = 5,
    Watchtower = 6,
    InactiveWatchtower = 7,
    FieldHospital = 8,
    GarrisonStation = 9,
    Zombie = 10,
    ObservationBunkerT2 = 11,
    ObservationBunkerT3 = 12,
    Facility = 13,
    LargeShip = 14,
    NumTypes = 15,
    EMapIntelligenceType_MAX = 16,
}

---@enum EMapItemFlags
local EMapItemFlags = {
    IsTownBase = 1,
    IsHomeTown = 2,
    IsBuildSite = 4,
    IsDetectionAreaHidden = 8,
    IsScorched = 16,
    IsTownClaimed = 32,
    EMapItemFlags_MAX = 33,
}

---@enum EMapMarkerType
local EMapMarkerType = {
    Major = 0,
    Minor = 1,
    EMapMarkerType_MAX = 2,
}

---@enum EMapPostCreationResponse
local EMapPostCreationResponse = {
    Success = 0,
    RankTooLow = 1,
    AlreadyExists = 2,
    TooSoon = 3,
    InvalidRegionForMapPost = 4,
    Error = 5,
    EMapPostCreationResponse_MAX = 6,
}

---@enum EMapPostRank
local EMapPostRank = {
    High = 0,
    Low = 1,
    EMapPostRank_MAX = 2,
}

---@enum EMapPostType
local EMapPostType = {
    Public = 0,
    Squad = 1,
    Regiment = 2,
    Intelligence = 3,
    Facility = 4,
    Logistics = 5,
    MAX = 6,
}

---@enum EMapPostVoteType
local EMapPostVoteType = {
    None = 0,
    Up = 1,
    Down = 2,
    EMapPostVoteType_MAX = 3,
}

---@enum EMapSnapshotSource
local EMapSnapshotSource = {
    PlayerSource = 0,
    AISource = 1,
    EMapSnapshotSource_MAX = 2,
}

---@enum EMapTeamId
local EMapTeamId = {
    Colonial = 0,
    Warden = 1,
    None = 2,
    Count = 3,
    EMapTeamId_MAX = 4,
}

---@enum EModeType
local EModeType = {
    UseDefault = 0,
    Build = 1,
    Crane = 2,
    Package = 3,
    Retrieve = 4,
    Placement = 5,
    EModeType_MAX = 6,
}

---@enum EMonumentType
local EMonumentType = {
    None = 0,
    Bronze = 1,
    Silver = 2,
    Gold = 3,
    Platinum = 4,
    NumMonumentTypes = 5,
    EMonumentType_MAX = 6,
}

---@enum EOccupyResult
local EOccupyResult = {
    Occupied = 0,
    Vacated = 1,
    Failed = 2,
    EOccupyResult_MAX = 3,
}

---@enum EOpenVehicleInventoryResponse
local EOpenVehicleInventoryResponse = {
    Success = 0,
    Locked = 1,
    EOpenVehicleInventoryResponse_MAX = 2,
}

---@enum EOutfitMeshInfoType
local EOutfitMeshInfoType = {
    Invalid = 0,
    Default = 1,
    ColonialMale = 2,
    ColonialFemale = 3,
    ColonialMaleZombie = 4,
    ColonialFemaleZombie = 5,
    ColonialZombieSpitter = 6,
    ColonialZombieTank = 7,
    WardenMale = 8,
    WardenFemale = 9,
    WardenMaleZombie = 10,
    WardenFemaleZombie = 11,
    WardenZombieSpitter = 12,
    WardenZombieTank = 13,
    EOutfitMeshInfoType_MAX = 14,
}

---@enum EOutfitType
local EOutfitType = {
    Invalid = 0,
    Default = 1,
    Press = 2,
    Mod = 3,
    NumOutfits = 4,
    EOutfitType_MAX = 5,
}

---@enum EOverpopButtonText
local EOverpopButtonText = {
    None = 0,
    ChangeShard = 1,
    WaitInQueue = 2,
    EOverpopButtonText_MAX = 3,
}

---@enum EOverpopText
local EOverpopText = {
    None = 0,
    ShardAtCapacity = 1,
    EOverpopText_MAX = 2,
}

---@enum EPackUpResponse
local EPackUpResponse = {
    Success = 0,
    Error = 1,
    InUse = 2,
    InventoryMustBeEmpty = 3,
    MustBeRepaired = 4,
    EPackUpResponse_MAX = 5,
}

---@enum EPermissionLevel
local EPermissionLevel = {
    None = 0,
    Mod = 1,
    Admin = 2,
    EPermissionLevel_MAX = 3,
}

---@enum EPipeType
local EPipeType = {
    None = 0,
    Input = 1,
    Output = 2,
    EPipeType_MAX = 3,
}

---@enum EPlacementModificationInteraction
local EPlacementModificationInteraction = {
    NoInteraction = 0,
    HidesModification = 1,
    BlocksPlacement = 2,
    WeaponBlocksPlacement = 3,
    EPlacementModificationInteraction_MAX = 4,
}

---@enum EPlacementStatus
local EPlacementStatus = {
    Valid = 0,
    Invalid = 1,
    ValidFarFromOutpost = 2,
    IsObstructed = 3,
    BadFoundation = 4,
    TooFarFromBuilder = 5,
    TooCloseToEnemyTownHall = 6,
    TooFarFromFriendlyTownHall = 7,
    LimitReached = 8,
    NotEnoughResources = 9,
    TooCloseToBorder = 10,
    TooFarFromBorder = 11,
    ValidNotTunnelConnected = 12,
    SurfaceNotSuitable = 13,
    TooCloseToResourceField = 14,
    TooFarToDeploy = 15,
    RequiresAttachment = 16,
    TooSteep = 17,
    TooFarFromLandscape = 18,
    JoiningEnemyStructure = 19,
    TooCloseToBridge = 20,
    ConnectorNotConnected = 21,
    SignPostTooClose = 22,
    SignPostRestricted = 23,
    ConnectorConfigurationInvalid = 24,
    ConnectorTooLong = 25,
    ConnectorTooShort = 26,
    IsFloating = 27,
    RequiresLinearAttachment = 28,
    InUse = 29,
    TooCloseToFieldBridge = 30,
    ExtensionIsObstructed = 31,
    ObstructsRoad = 32,
    SplineTooSteep = 33,
    TooManySameStructure = 34,
    TooFarFromResourceField = 35,
    TooManyNearResourceField = 36,
    PathSocketTooClose = 37,
    PathSocketTooCloseToEnd = 38,
    PathSocketTooSteep = 39,
    TooFarFromWater = 40,
    TooFarFromFoundation = 41,
    ConnectorRadiusInvalid = 42,
    JoiningBurningStructure = 43,
    StructureUnderLandscape = 44,
    MustBeBuiltOnRailwayTrack = 45,
    PathSocketTooCloseToBorder = 46,
    TrackStartEndObstructsRoad = 47,
    TrackCrossingRoadNotLevel = 48,
    TooCloseToWater = 49,
    SurfaceSamplesTooHigh = 50,
    TooCloseToSameStructure = 51,
    SurfaceSamplesAboveWater = 52,
    SplineExtendsTooFarThroughBorder = 53,
    TooCloseToEnemyTrack = 54,
    MustConnectToPowerStructure = 55,
    MustConnectToPowerPole = 56,
    NoConnectionAvailable = 57,
    AlreadyConnected = 58,
    ValidNotConnected = 59,
    PathSocketTooElevated = 60,
    TrackCrossingTrackNotLevel = 61,
    TooCloseToEnemyVehicle = 62,
    MustEquipBuildTool = 63,
    ItemSlotsMustBeEmpty = 64,
    CantPlaceFromHere = 65,
    CantPlaceWhenBusy = 66,
    CantConnectEnemyStructure = 67,
    IsObstructedByPuddle = 68,
    SnappedSplineIntersects = 69,
    Unknown = 70,
    EPlacementStatus_MAX = 71,
}

---@enum EPlayerOnlineStatus
local EPlayerOnlineStatus = {
    OnlineInRegion = 0,
    Offline = 1,
    TransferredRegion = 2,
    ActiveElsewhere = 3,
    MAX = 4,
}

---@enum EProjectileFiringMode
local EProjectileFiringMode = {
    Default = 0,
    Grenade = 1,
    ShortToss = 2,
    EProjectileFiringMode_MAX = 3,
}

---@enum EQueueType
local EQueueType = {
    Regular = 0,
    Mod = 1,
    ServerTravel = 2,
    Unselected = 3,
    EQueueType_MAX = 4,
}

---@enum EQueueWarningState
local EQueueWarningState = {
    Auto = 0,
    ForceShow = 1,
    ForceHide = 2,
    EQueueWarningState_MAX = 3,
}

---@enum ERamDamageFlags
local ERamDamageFlags = {
    Light = 1,
    Medium = 2,
    Destructible = 4,
    DrivenOver = 8,
    DrivenOverTracked = 16,
    WaterVehicles = 32,
    RailVehicles = 64,
    ERamDamageFlags_MAX = 65,
}

---@enum ERampState
local ERampState = {
    Raised = 0,
    Lowering = 1,
    Lowered = 2,
    Raising = 3,
    ERampState_MAX = 4,
}

---@enum ERefinementOrderResponse
local ERefinementOrderResponse = {
    Success = 0,
    Error = 1,
    NotEnoughMaterials = 2,
    InventoryFull = 3,
    NotEnoughToCrate = 4,
    AtRefinedItemCap = 5,
    UnsupportedItem = 6,
    ERefinementOrderResponse_MAX = 7,
}

---@enum ERefineryClaimType
local ERefineryClaimType = {
    Single = 0,
    Multiple = 1,
    Crate = 2,
    ToRefineryInventory = 3,
    ERefineryClaimType_MAX = 4,
}

---@enum ERefineryOrderAccessLevel
local ERefineryOrderAccessLevel = {
    Personal = 0,
    Public = 1,
    Count = 2,
    ERefineryOrderAccessLevel_MAX = 3,
}

---@enum ERegimentCreationResponse
local ERegimentCreationResponse = {
    Success = 0,
    AlreadyInRegiment = 1,
    RankTooLow = 2,
    TooSoon = 3,
    Error = 4,
    ERegimentCreationResponse_MAX = 5,
}

---@enum ERegimentNotificationType
local ERegimentNotificationType = {
    MemberAdded = 0,
    MemberRemoved = 1,
    Disbanded = 2,
    MemberRoleChanged = 3,
    Rename = 4,
    ERegimentNotificationType_MAX = 5,
}

---@enum ERegimentPromptMode
local ERegimentPromptMode = {
    Create = 0,
    Edit = 1,
    ERegimentPromptMode_MAX = 2,
}

---@enum ERegimentQueryType
local ERegimentQueryType = {
    PlayerOnlineId = 0,
    RegimentName = 1,
    RegimentTag = 2,
    RegimentId = 3,
    ERegimentQueryType_MAX = 4,
}

---@enum ERegimentRole
local ERegimentRole = {
    Commander = 0,
    Officer = 1,
    Member = 2,
    ERegimentRole_MAX = 3,
}

---@enum ERegionLogEntryType
local ERegionLogEntryType = {
    None = 0,
    FriendlyPlayerDamage = 1,
    FriendlyDamage = 2,
    VehiclesTransferred = 3,
    VehicleSelfDamage = 4,
    DisruptivePlacement = 5,
    Destroyed = 6,
    DestroyedBuildSite = 7,
    Demolished = 8,
    DemolishedBuildSite = 9,
    VehicleRestored = 10,
    MAX = 11,
}

---@enum ERegionType
local ERegionType = {
    All = 0,
    Global = 1,
    Americas = 2,
    China = 3,
    Europe = 4,
    Germany = 5,
    Russia = 6,
    NumRegionTypes = 7,
    ERegionType_MAX = 8,
}

---@enum EReserveStockpileAccessLevel
local EReserveStockpileAccessLevel = {
    Visible = 0,
    Hidden = 1,
    EReserveStockpileAccessLevel_MAX = 2,
}

---@enum EReserveStockpileUserRole
local EReserveStockpileUserRole = {
    Owner = 0,
    UserWithAccess = 1,
    ExternalUser = 2,
    NotVisible = 3,
    EReserveStockpileUserRole_MAX = 4,
}

---@enum EReservedPlayerStatus
local EReservedPlayerStatus = {
    Reserved = 0,
    ReservedButServerIsFull = 1,
    NotReserved = 2,
    EReservedPlayerStatus_MAX = 3,
}

---@enum ERestrictedState
local ERestrictedState = {
    None = 0,
    WeaponUsage = 1,
    Build = 2,
    Chat = 4,
    Voice = 8,
    Intel = 16,
    Driving = 32,
    ERestrictedState_MAX = 33,
}

---@enum ERichTextColour
local ERichTextColour = {
    Orange = 0,
    Colonial = 1,
    Warden = 2,
    Green = 3,
    Red = 4,
    Beige = 5,
    Yellow = 6,
    Count = 7,
    ERichTextColour_MAX = 8,
}

---@enum ERichTextFontType
local ERichTextFontType = {
    Regular10Pt = 0,
    Regular12Pt = 1,
    Regular24Pt = 2,
    Italic10Pt = 3,
    Italic12Pt = 4,
    Bold10Pt = 5,
    Bold12Pt = 6,
    Count = 7,
    ERichTextFontType_MAX = 8,
}

---@enum ERocketConsoleActionResult
local ERocketConsoleActionResult = {
    Success = 0,
    Error = 1,
    Failure = 2,
    InWrongSquad = 3,
    NotInSquad = 4,
    NotEnoughSquadMembers = 5,
    InvalidCode = 6,
    InvalidFormat = 7,
    CodeMismatch = 8,
    CodeInUse = 9,
    NotEnoughFuel = 10,
    MustBeClaimed = 11,
    OnCooldown = 12,
    ERocketConsoleActionResult_MAX = 13,
}

---@enum ERocketLaunchResponse
local ERocketLaunchResponse = {
    Success = 0,
    Error = 1,
    Cancelled = 2,
    DestroyedIntelCenter = 3,
    DestroyedRocket = 4,
    DestroyedRocketSite = 5,
    MustAvoidFriendly = 6,
    MustHitEnemy = 7,
    MustHitLand = 8,
    TargetOutsideRange = 9,
    TimedOut = 10,
    ERocketLaunchResponse_MAX = 11,
}

---@enum ERocketLaunchSequence
local ERocketLaunchSequence = {
    Idle = 0,
    Verifying = 1,
    PreLaunch = 2,
    Launching = 3,
    InFlight = 4,
    InDescent = 5,
    Incomplete = 6,
    Complete = 7,
    HitStrikeLocation = 8,
    ERocketLaunchSequence_MAX = 9,
}

---@enum ERotationDirection
local ERotationDirection = {
    None = 0,
    Clockwise = 1,
    CounterClockwise = 2,
    ERotationDirection_MAX = 3,
}

---@enum ESeatDirection
local ESeatDirection = {
    None = 0,
    Center = 1,
    Front = 2,
    Left = 3,
    Rear = 4,
    Right = 5,
    Bow = 6,
    Midships = 7,
    Stern = 8,
    Port = 9,
    PortBow = 10,
    PortBeam = 11,
    PortQuarter = 12,
    Starboard = 13,
    StarboardBow = 14,
    StarboardBeam = 15,
    StarboardQuarter = 16,
    MAX = 17,
}

---@enum EServerAnimTickMode
local EServerAnimTickMode = {
    Custom = 0,
    TickWhenOccupied = 1,
    NeverTicks = 2,
    EServerAnimTickMode_MAX = 3,
}

---@enum EServerTravelOriginType
local EServerTravelOriginType = {
    Client = 0,
    HomeRegion = 1,
    WarServer = 2,
    Invalid = 3,
    EServerTravelOriginType_MAX = 4,
}

---@enum EServerTravelStatusOnClient
local EServerTravelStatusOnClient = {
    Invalid = 0,
    TravelStarted = 1,
    TravelFinished = 2,
    EServerTravelStatusOnClient_MAX = 3,
}

---@enum EShardDescription
local EShardDescription = {
    None = 0,
    TestingFeatures = 1,
    LiveRegularPlayers = 2,
    LiveReturningPlayers = 3,
    EShardDescription_MAX = 4,
}

---@enum EShipFXType
local EShipFXType = {
    IdleLoop = 0,
    WaterLapping = 1,
    Exhaust = 2,
    SideWaves = 3,
    Wake = 4,
    WaveBreak = 5,
    DebrisBubbles = 6,
    PropellerBubbles = 7,
    BallastBlowMain = 8,
    BallastBlowSafety = 9,
    BallastBlowNegative = 10,
    BallastBlowAny = 11,
    BallastFloodMain = 12,
    BallastFloodSafety = 13,
    BallastFloodNegative = 14,
    BatteryCharging = 15,
    UnderwaterAmbience = 16,
    Num = 17,
    EShipFXType_MAX = 18,
}

---@enum EShippableStatus
local EShippableStatus = {
    Success = 0,
    Error = 1,
    NoShippable = 2,
    NotShippable = 3,
    RepairNeeded = 4,
    ArmourNeeded = 5,
    MustRemoveMud = 6,
    CargoInside = 7,
    CargoOnTop = 8,
    OccupantsInside = 9,
    MustBePackaged = 10,
    MustBeStanding = 11,
    MustBeUnlocked = 12,
    MustBeInSquad = 13,
    MustRemoveCargo = 14,
    CantPackageEnemy = 15,
    CantBeTravelling = 16,
    TargetCantBeTravelling = 17,
    InventoryMustBeEmpty = 18,
    VehicleInventoryMustBeEmpty = 19,
    TooClose = 20,
    TooFar = 21,
    AttachmentTooFar = 22,
    PulleyTooFar = 23,
    InvalidPlacement = 24,
    CantPlaceInWater = 25,
    OnUnstableGround = 26,
    OnUnstableShip = 27,
    OnUnstableVehicle = 28,
    CannotDeploy = 29,
    CannotUndeploy = 30,
    Frozen = 31,
    MustDetachWeapon = 32,
    MustDetachFromTrain = 33,
    MustUnhitch = 34,
    CantBeHoldingLargeItem = 35,
    Reserved = 36,
    ReservedExit = 37,
    NoPower = 38,
    Unsupported = 39,
    UnsupportedRequest = 40,
    UnsupportedSize = 41,
    UnsupportedType = 42,
    InvalidState = 43,
    NoShippables = 44,
    MaxShippables = 45,
    ObstructedByPackager = 46,
    ObstructedByOther = 47,
    ObstructedCraneArm = 48,
    Destroyed = 49,
    FullyRepaired = 50,
    MustDropAnchor = 51,
    MustRaiseAnchor = 52,
    MustSurface = 53,
    MustUndeploy = 54,
    MustRetrievePatients = 55,
    MustSelectStructure = 56,
    EShippableStatus_MAX = 57,
}

---@enum EShippableType
local EShippableType = {
    None = 0,
    Small = 1,
    Normal = 2,
    Large = 3,
    ExtraLarge = 4,
    EShippableType_MAX = 5,
}

---@enum ESimCharacterStance
local ESimCharacterStance = {
    Standing = 0,
    Crouched = 1,
    Prone = 2,
    Sprinting = 3,
    NumStates = 4,
    ESimCharacterStance_MAX = 5,
}

---@enum ESimScreen
local ESimScreen = {
    HUD = 0,
    Pause = 1,
    Wait = 2,
    End = 3,
    Options = 4,
    ChatOptions = 5,
    Players = 6,
    Tutorial = 7,
    JoinWar = 8,
    ProfileUpdating = 9,
    Callouts = 10,
    Monument = 11,
    Inventory = 12,
    Factory = 13,
    StorageBox = 14,
    Refinery = 15,
    BuildFromStructure = 16,
    Base = 17,
    Lore = 18,
    Build = 19,
    VehicleStorage = 20,
    Map = 21,
    ItemStash = 22,
    StaticArtillery = 23,
    TechTree = 24,
    StorageFacility = 25,
    GarrisonHouse = 26,
    EmplacementHouse = 27,
    RocketSite = 28,
    ResourceMine = 29,
    ShippingContainer = 30,
    Log = 31,
    Hospital = 32,
    StructureUpgrade = 33,
    LongRangeArtillery = 34,
    SignPost = 35,
    Crate = 36,
    EngineeringCenter = 37,
    EmplacedStructure = 38,
    ViolationLog = 39,
    CharacterCustomization = 40,
    SimpleStockpile = 41,
    FirePit = 42,
    IntelCenter = 43,
    None = 44,
    DialogPrompt = 45,
    ReportPlayer = 46,
    ActivityLog = 47,
    RegionLog = 48,
    GlobalLog = 49,
    Pipeline = 50,
    OilRefinery = 51,
    AssemblyStation = 52,
    Facility = 53,
    ActorLog = 54,
    MaintenanceTunnel = 55,
    WarStart = 56,
    WeatherStation = 57,
    AlertsLog = 58,
    ConstructionEquipment = 59,
    FireSuppression = 60,
    FortEmp = 61,
    ESimScreen_MAX = 62,
}

---@enum ESlopeRotationMode
local ESlopeRotationMode = {
    OpposingSockets = 0,
    LocalSampling = 1,
    ManualControl = 2,
    OpposingSocketsSurfaceSamples = 3,
    None = 4,
    ESlopeRotationMode_MAX = 5,
}

---@enum ESnapType
local ESnapType = {
    None = 0,
    Socket = 1,
    Path = 2,
    ESnapType_MAX = 3,
}

---@enum ESocketDirection
local ESocketDirection = {
    None = 0,
    Front = 1,
    Left = 2,
    Back = 3,
    Right = 4,
    FrontLeft = 5,
    FrontRight = 6,
    BackLeft = 7,
    BackRight = 8,
    Rail = 9,
    Count = 10,
    ESocketDirection_MAX = 11,
}

---@enum ESpawnPointCategory
local ESpawnPointCategory = {
    None = 0,
    StaticBase = 1,
    ForwardBase = 2,
    MedicalBase = 3,
    MAX = 4,
}

---@enum ESpawnPointPriority
local ESpawnPointPriority = {
    High = 0,
    Low = 1,
    ESpawnPointPriority_MAX = 2,
}

---@enum ESpawnPointType
local ESpawnPointType = {
    None = 0,
    Campsite = 1,
    Outpost = 2,
    TownHall = 3,
    Keep = 4,
    ForwardBase1 = 5,
    ForwardBase2 = 6,
    ForwardBase3 = 7,
    StaticBase1 = 8,
    StaticBase2 = 9,
    StaticBase3 = 10,
    LandingShipBase = 11,
    Unknown = 12,
    BuildSite = 13,
    GarrisonStation = 14,
    Fort = 15,
    RelicBase = 16,
    BunkerBase = 17,
    BorderBase = 18,
    TownBase = 19,
    LargeShip = 20,
    MedicalBase = 21,
    FortGarrisonStation = 22,
    ESpawnPointType_MAX = 23,
}

---@enum ESplineConnectorMeshMode
local ESplineConnectorMeshMode = {
    Spline = 0,
    Interval = 1,
    Points = 2,
    Endpoints = 3,
    Boxes = 4,
    ESplineConnectorMeshMode_MAX = 5,
}

---@enum ESplineFootprintShapeType
local ESplineFootprintShapeType = {
    Box = 0,
    Capsule = 1,
    CapsuleWithBoxEnds = 2,
    DualBoxes = 3,
    None = 4,
    ESplineFootprintShapeType_MAX = 5,
}

---@enum ESplineWaterPlacementRequirement
local ESplineWaterPlacementRequirement = {
    None = 0,
    NoPlacementAboveWater = 1,
    RequireWaterAtEnd = 2,
    ESplineWaterPlacementRequirement_MAX = 3,
}

---@enum ESquadAccessLevel
local ESquadAccessLevel = {
    Private = 0,
    Public = 1,
    ESquadAccessLevel_MAX = 2,
}

---@enum ESquadActivationResponse
local ESquadActivationResponse = {
    Success = 0,
    TooSoon = 1,
    Error = 2,
    ESquadActivationResponse_MAX = 3,
}

---@enum ESquadCreationResponse
local ESquadCreationResponse = {
    Success = 0,
    SquadLimitReached = 1,
    TooSoon = 2,
    Error = 3,
    ESquadCreationResponse_MAX = 4,
}

---@enum ESquadEditMembersResponse
local ESquadEditMembersResponse = {
    Success = 0,
    IsPrivate = 1,
    SquadNotFound = 2,
    SquadLimitReached = 3,
    SizeLimitReached = 4,
    TooSoon = 5,
    AlreadyInSquad = 6,
    Error = 7,
    ESquadEditMembersResponse_MAX = 8,
}

---@enum ESquadRole
local ESquadRole = {
    Leader = 0,
    Member = 1,
    NotInSquad = 2,
    ESquadRole_MAX = 3,
}

---@enum EStockpileCategoryType
local EStockpileCategoryType = {
    Items = 0,
    Vehicles = 1,
    Structures = 2,
    MAX = 3,
}

---@enum EStockpileEntryType
local EStockpileEntryType = {
    None = 0,
    Items = 1,
    ItemCrates = 2,
    ReservableItemCrates = 3,
    Vehicles = 4,
    VehicleCrates = 5,
    Structures = 6,
    StructureCrates = 7,
    MAX = 8,
}

---@enum EStockpileType
local EStockpileType = {
    Public = 0,
    Squad = 1,
    EStockpileType_MAX = 2,
}

---@enum EStorageType
local EStorageType = {
    Default = 0,
    Dockyard = 1,
    EStorageType_MAX = 2,
}

---@enum EStructureFlag
local EStructureFlag = {
    None = 0,
    Invulnerable = 1,
    VictoryTown = 2,
    IndustrialTown = 4,
    ColonialLiberated = 8,
    WardenLiberated = 16,
    Port = 32,
    LastFlag = 128,
    EStructureFlag_MAX = 129,
}

---@enum EStructureLayer
local EStructureLayer = {
    Logi = 0,
    Obstacles = 1,
    Logi2 = 2,
    Logi3 = 3,
    Logi4 = 4,
    MAX = 5,
}

---@enum EStructureNetRelevancySize
local EStructureNetRelevancySize = {
    Small = 0,
    Medium = 1,
    Large = 2,
    Custom = 3,
    EStructureNetRelevancySize_MAX = 4,
}

---@enum EStructureProfileType
local EStructureProfileType = {
    Default = 0,
    GarrisonHouse = 1,
    BuildSite = 2,
    DestroyedFort = 3,
    DestroyedFortBase = 4,
    DestroyedForwardBase = 5,
    VehicleProxy = 6,
    ResourceField = 7,
    ResourceMine = 8,
    ItemStash = 9,
    DeployableWeapon = 10,
    ForwardBase = 11,
    LogiStructure = 12,
    StaticBase = 13,
    DestroyedStructure = 14,
    DestroyedRuinableStructure = 15,
    Shippable = 16,
    LogiStructureWithValuableStorage = 17,
    FieldGate = 18,
    FieldDefenseStructure = 19,
    FieldLogiStructure = 20,
    FieldStructure = 21,
    Bridge = 22,
    FortForwardBase = 23,
    FortUpgrade = 24,
    FortRotatableUpgrade = 25,
    Fort = 26,
    FortBase = 27,
    Trench = 28,
    SignPost = 29,
    GenericWorldStructure = 30,
    EmplacedWeapon = 31,
    EmplacedArtillery = 32,
    MiscellaneousDefault = 33,
    Crater = 34,
    EmplacementHouse = 35,
    BorderBase = 36,
    Fill = 37,
    FieldBridge = 38,
    RocketMisc = 39,
    FortRotatableUpgradeRestricted = 40,
    LandMine = 41,
    Count = 42,
    EStructureProfileType_MAX = 43,
}

---@enum ESupportTicketType
local ESupportTicketType = {
    ShardConnectionError = 0,
    RegionConnectionError = 1,
    RegionLag = 2,
    ShardConnectionAutoError = 3,
    RegionConnectionAutoError = 4,
    None = 5,
    ESupportTicketType_MAX = 6,
}

---@enum ETankArmourEffectBehaviour
local ETankArmourEffectBehaviour = {
    Default = 0,
    DoNotPlayEffect = 1,
    ETankArmourEffectBehaviour_MAX = 2,
}

---@enum ETankArmourEffectType
local ETankArmourEffectType = {
    None = 0,
    Small = 1,
    Large = 2,
    ETankArmourEffectType_MAX = 3,
}

---@enum ETaskItemTargetCheckMethod
local ETaskItemTargetCheckMethod = {
    None = 0,
    OverlapFacing = 1,
    Trace = 2,
    DualTrace = 3,
    ETaskItemTargetCheckMethod_MAX = 4,
}

---@enum ETechComponentID
local ETechComponentID = {
    None = 0,
    T1Garrison = 1,
    T2Garrison = 2,
    T3Garrison = 3,
    T1SupportBunkers = 4,
    T3SupportBunkers = 5,
    Deployment = 6,
    AdvancedBunkers = 7,
    CommandCenter = 8,
    ListeningPost = 9,
    Hospital = 10,
    ProvisionalGarrison = 11,
    SmallGarrison = 12,
    LargeGarrison = 13,
    Industry = 14,
    Fortifications = 15,
    ArtilleryShelter = 16,
    RadioStation = 17,
    OccupiedTown = 18,
    ArtilleryGarrison = 19,
    SafeHouse = 20,
    TechAvailable = 21,
    Count = 22,
    ETechComponentID_MAX = 23,
}

---@enum ETechID
local ETechID = {
    None = 0,
    UnlockAssaultRifle = 1,
    UnlockAssaultRifleHeavy = 2,
    UnlockATRifle = 3,
    UnlockATRifleT = 4,
    UnlockATRifleAssault = 5,
    UnlockATRifleAutomatic = 6,
    UnlockATRifleLight = 7,
    UnlockATRifleSniper = 8,
    UnlockATRPG = 9,
    UnlockATRPGHeavy = 10,
    UnlockATRPGLight = 11,
    UnlockATRPGT = 12,
    UnlockFlameTorch = 13,
    UnlockGrenadeLauncher = 14,
    UnlockGrenadeLauncherT = 15,
    UnlockISG = 16,
    UnlockMG = 17,
    UnlockMGT = 18,
    UnlockMortar = 19,
    UnlockPistolLight = 20,
    UnlockRevolver = 21,
    UnlockRifle = 22,
    UnlockRifleAutomatic = 23,
    UnlockRifleHeavy = 24,
    UnlockRifleLight = 25,
    UnlockRifleLong = 26,
    UnlockRifleShort = 27,
    UnlockRPG = 28,
    UnlockRPGHeavy = 29,
    UnlockRPGLight = 30,
    UnlockRPGT = 31,
    UnlockShotgun = 32,
    UnlockSMG = 33,
    UnlockSMGHeavy = 34,
    UnlockSniperRifle = 35,
    UnlockBayonet = 36,
    UnlockBinoculars = 37,
    UnlockFirstAidKit = 38,
    UnlockGarrisonSupplies = 39,
    UnlockGasMask = 40,
    UnlockGreenAsh = 41,
    UnlockGrenadeAdapter = 42,
    UnlockHEGrenade = 43,
    UnlockATGrenade = 44,
    UnlockListeningKit = 45,
    UnlockRadioBackpack = 46,
    UnlockSatchelCharge = 47,
    UnlockSatchelChargeT = 48,
    UnlockExplosiveLight = 49,
    UnlockSledgeHammer = 50,
    UnlockSmokeGrenade = 51,
    UnlockSoulstoneTier2 = 52,
    UnlockSoulstoneTier3 = 53,
    UnlockStickyBomb = 54,
    UnlockTankMine = 55,
    UnlockTraumaKit = 56,
    UnlockWindsockT = 57,
    UnlockATGarrison = 58,
    UnlockBunkerBases = 59,
    UnlockConcreteMixer = 60,
    UnlockConstructionEquipment = 61,
    UnlockEmplacedATGun = 62,
    UnlockEmplacedATLarge = 63,
    UnlockEmplacedCannonLarge = 64,
    UnlockEmplacedFieldMG = 65,
    UnlockEmplacedHeavyArtillery = 66,
    UnlockEmplacedIndirect = 67,
    UnlockEmplacedLightArtillery = 68,
    UnlockEmplacedMulti = 69,
    UnlockFacilityMineOilRig = 70,
    UnlockFacilityVehicleFactory3 = 71,
    UnlockFieldBridge = 72,
    UnlockFieldPier = 73,
    UnlockFieldHospital = 74,
    UnlockFort = 75,
    UnlockFortGarrisonStation = 76,
    UnlockFortStaticArtillery = 77,
    UnlockGarrisonBuilding = 78,
    UnlockGateTier2 = 79,
    UnlockGateTier3 = 80,
    UnlockIntelligenceCenter = 81,
    UnlockLongRangeArtillery = 82,
    UnlockMGGarrison = 83,
    UnlockMineSpline = 84,
    UnlockRifleGarrison = 85,
    UnlockRocket = 86,
    UnlockScrapMine = 87,
    UnlockStaticArtillery = 88,
    UnlockSulfurMine = 89,
    UnlockTankStop = 90,
    UnlockTankStopSplineTier3 = 91,
    UnlockTempMS59 = 92,
    UnlockWallTier2 = 93,
    UnlockWallTier3 = 94,
    UnlockWeatherStation = 95,
    UnlockMGPillbox = 96,
    UnlockATPillbox = 97,
    UnlockAmbulance = 98,
    UnlockArmoredCar = 99,
    UnlockArmoredCarAT = 100,
    UnlockArmoredCarFlame = 101,
    UnlockArmoredCarMobility = 102,
    UnlockArmoredCarOffensive = 103,
    UnlockArmoredCarTwin = 104,
    UnlockArmoredCar2Multi = 105,
    UnlockBarge = 106,
    UnlockBattleTank = 107,
    UnlockBattleTankDefensive = 108,
    UnlockBattleTankOffensive = 109,
    UnlockBus = 110,
    UnlockConstructionUtility = 111,
    UnlockDestroyerTank = 112,
    UnlockDestroyerTankFlame = 113,
    UnlockFieldArtillery = 114,
    UnlockFieldATGun = 115,
    UnlockFieldATLarge = 116,
    UnlockFieldATDamageGun = 117,
    UnlockFieldAT2 = 118,
    UnlockFieldCannon = 119,
    UnlockFieldCannonDamage = 120,
    UnlockFieldCannonLarge = 121,
    UnlockFieldMG = 122,
    UnlockFieldMortar = 123,
    UnlockFieldMortarLarge = 124,
    UnlockFieldMulti = 125,
    UnlockFlatbedTruck = 126,
    UnlockFreighter = 127,
    UnlockGunboat = 128,
    UnlockHalfTrack = 129,
    UnlockHalfTrackDefensive = 130,
    UnlockHalfTrackOffensive = 131,
    UnlockHalfTrackArtillery = 132,
    UnlockHalfTrackMulti = 133,
    UnlockHarvester = 134,
    UnlockLandingCraft = 135,
    UnlockLandingCraftOffensive = 136,
    UnlockLargeShipBattleship = 137,
    UnlockLargeShipBaseShip = 138,
    UnlockLargeShipDestroyer = 139,
    UnlockLargeShipResource = 140,
    UnlockLargeShipStorageShip = 141,
    UnlockLargeShipSubmarine = 142,
    UnlockLightTank = 143,
    UnlockLightTank2Infantry = 144,
    UnlockLightTankArtillery = 145,
    UnlockLightTankFlame = 146,
    UnlockLightTankMobility = 147,
    UnlockLightTankDefensive = 148,
    UnlockLightTankOffensive = 149,
    UnlockMech = 150,
    UnlockMediumTank = 151,
    UnlockMediumTankLarge = 152,
    UnlockMediumTank2 = 153,
    UnlockMediumTank2Indirect = 154,
    UnlockMediumTank2Multi = 155,
    UnlockMediumTank2Range = 156,
    UnlockMediumTank2Twin = 157,
    UnlockMediumTank3 = 158,
    UnlockMediumTankOffensive = 159,
    UnlockMediumTankSiege = 160,
    UnlockMortarTank = 161,
    UnlockMotorcycle = 162,
    UnlockMotorcycleOffensive = 163,
    UnlockRelicArmoredCar = 164,
    UnlockRelicLightTank = 165,
    UnlockRelicMediumTank = 166,
    UnlockRelicScoutVehicle = 167,
    UnlockRelicTruck = 168,
    UnlockScoutTank = 169,
    UnlockScoutTankOffensive = 170,
    UnlockScoutTankMulitW = 171,
    UnlockScoutVehicle = 172,
    UnlockScoutVehicleMobility = 173,
    UnlockScoutVehicleOffensive = 174,
    UnlockScoutVehicleUtility = 175,
    UnlockSuperTank = 176,
    UnlockTankette = 177,
    UnlockTanketteFlame = 178,
    UnlockTanketteOffensive = 179,
    UnlockTrainEngine = 180,
    UnlockTruckDefensive = 181,
    UnlockTruckDump = 182,
    UnlockTruckMobility = 183,
    UnlockTruckMulti = 184,
    UnlockTruckOffensive = 185,
    UnlockAdvancedConstruction = 186,
    UnlockFacilityTier2 = 187,
    UnlockFacilityTier3 = 188,
    UnlockAmmoUniform = 189,
    UnlockArmourUniform = 190,
    UnlockChemicalUniform = 191,
    UnlockEngineerUniform = 192,
    UnlockGrenadeUniform = 193,
    UnlockMedicUniform = 194,
    UnlockNavalUniform = 195,
    UnlockOfficerUniform = 196,
    UnlockRainUniform = 197,
    UnlockScoutUniform = 198,
    UnlockSnowUniform = 199,
    UnlockTankUniform = 200,
    UnlockHiddenContent = 201,
    Count = 202,
    ETechID_MAX = 203,
}

---@enum ETechResourceID
local ETechResourceID = {
    None = 0,
    Aluminum = 1,
    Copper = 2,
    Iron = 3,
    RareMetal = 4,
    ETechResourceID_MAX = 5,
}

---@enum ETechTreeTier
local ETechTreeTier = {
    Prototype = 0,
    One = 1,
    Two = 2,
    Three = 3,
    Count = 4,
    ETechTreeTier_MAX = 5,
}

---@enum ETemperatureState
local ETemperatureState = {
    Burning = 0,
    Hot = 1,
    None = 2,
    Cold = 3,
    Freezing = 4,
    Frozen = 5,
    MAX = 6,
}

---@enum ETestEnum
local ETestEnum = {
    Test1 = 0,
    Test2 = 1,
    Test3 = 2,
    ETestEnum_MAX = 3,
}

---@enum ETimeDiscrepancyType
local ETimeDiscrepancyType = {
    AntiLag = 0,
    AntiCheat = 1,
    Custom = 2,
    ETimeDiscrepancyType_MAX = 3,
}

---@enum ETooltipDetailType
local ETooltipDetailType = {
    Default = 0,
    HighestVisibility = 1,
    MediumVisibility = 2,
    LowVisibility = 3,
    ETooltipDetailType_MAX = 4,
}

---@enum ETownHallState
local ETownHallState = {
    Built = 0,
    NotBuilt = 1,
    ETownHallState_MAX = 2,
}

---@enum ETrackGauge
local ETrackGauge = {
    Large = 0,
    Small = 1,
    Crane = 2,
    ETrackGauge_MAX = 3,
}

---@enum ETransactionResponse
local ETransactionResponse = {
    Success = 0,
    Error = 1,
    None = 2,
    DrivewayBlocked = 3,
    InvalidStance = 4,
    UnableToRetrieve = 5,
    TooFewSupplies = 6,
    CantRetrieveSupplies = 7,
    InsufficientQuantity = 8,
    AtQuantityLimit = 9,
    AtTotalQuantityLimit = 10,
    AtTypeLimit = 11,
    UnsupportedType = 12,
    CantRetrieveHoldingLargeItem = 13,
    MustBeUnpackaged = 14,
    StockpileOnlyItem = 15,
    NotReservable = 16,
    NotStockpilable = 17,
    EmptySource = 18,
    StockpileNotFound = 19,
    MustBeOwner = 20,
    IncorrectPassCode = 21,
    PassCodeAttemptCooldownUnavailable = 22,
    NoRetrievePermission = 23,
    DuplicateName = 24,
    QueueFull = 25,
    OrderExists = 26,
    NotEnoughMaterials = 27,
    NotEnoughFuel = 28,
    NotEnoughBlueprints = 29,
    UnsupportedItem = 30,
    InventoryFull = 31,
    TechRequired = 32,
    InvalidAccessLevel = 33,
    OrderTooSmallForMassProduction = 34,
    IncompatibleMassProducedItem = 35,
    PrototypeRequired = 36,
    CannotBeProducedHere = 37,
    SourceStockpileNotFull = 38,
    DirectRetrievalNotAllowed = 39,
    StockpileMustBeEmpty = 40,
    InventoryMustBeEmpty = 41,
    CantStockpilePrototype = 42,
    Unanchored = 43,
    VehiclePendingTravel = 44,
    CrateDisassembled = 45,
    ETransactionResponse_MAX = 46,
}

---@enum ETravelResult
local ETravelResult = {
    Success = 1,
    FailureInvalidRequest = 2,
    FailureServerError = 3,
    FailureProfileSave = 4,
    FailureProfileLoad = 5,
    FailureServerFull = 6,
    FailureNoLocation = 7,
    FailureServerUnavailable = 8,
    FailureTimeout = 9,
    FailureEnemyPresent = 10,
    FailureTooManyRequests = 11,
    FailureNestedCargo = 12,
    FailureDead = 13,
    FailureWarServiceUnavailable = 14,
    FailureTooManyRailPassengers = 15,
    FailureNoRailConnection = 16,
    FailureTooManyLargeShipPassengers = 17,
    FailureStockpileInUse = 18,
    FailureNoLocationIce = 19,
    FailureNoLocationTooShallow = 20,
    Count = 21,
    ETravelResult_MAX = 22,
}

---@enum ETunnelConnectionState
local ETunnelConnectionState = {
    Disconnected = 0,
    DisconnectedStarved = 1,
    Connected = 2,
    ETunnelConnectionState_MAX = 3,
}

---@enum ETunnelNodeType
local ETunnelNodeType = {
    Source = 0,
    Terminal = 1,
    ETunnelNodeType_MAX = 2,
}

---@enum ETurretMuzzleType
local ETurretMuzzleType = {
    Self = 0,
    GunnerSupport = 1,
    ETurretMuzzleType_MAX = 2,
}

---@enum ETurretTargetType
local ETurretTargetType = {
    None = 0,
    Players = 1,
    AllVehicles = 2,
    WaterVehicles = 4,
    BuildSites = 8,
    EmplacedWeapons = 16,
    LargeShips = 32,
    All = 63,
    ETurretTargetType_MAX = 64,
}

---@enum ETurretTrackingMode
local ETurretTrackingMode = {
    Instant = 0,
    GunnerSupportTracking = 1,
    ETurretTrackingMode_MAX = 2,
}

---@enum EUniformType
local EUniformType = {
    Default = 0,
    AmmoW = 1,
    ArmourC = 2,
    ArmourW = 3,
    ChemicalW = 4,
    EngineerC = 5,
    EngineerW = 6,
    GrenadeC = 7,
    MedicC = 8,
    MedicW = 9,
    OfficerC = 10,
    OfficerW = 11,
    RainC = 12,
    ScoutC = 13,
    ScoutW = 14,
    SnowC = 15,
    SnowW = 16,
    SoldierC = 17,
    SoldierW = 18,
    TankC = 19,
    TankW = 20,
    NavalC = 21,
    NavalW = 22,
    MAX = 23,
}

---@enum EUnlockStatus
local EUnlockStatus = {
    Unlocked = 0,
    RequiresTech = 1,
    RequiresSameItemInOrder = 2,
    Error = 3,
    EUnlockStatus_MAX = 4,
}

---@enum EUnstuckMessage
local EUnstuckMessage = {
    ZeroCount = 0,
    Count = 1,
    Execute = 2,
    Fail = 3,
    FailAnchor = 4,
    FailDeployed = 5,
    FailDisabled = 6,
    FailEnemy = 7,
    FailHitched = 8,
    FailNotOnFoot = 9,
    FailMovement = 10,
    FailUnsupported = 11,
    FailNotInDriverSeat = 12,
    FailUnstableBase = 13,
    EUnstuckMessage_MAX = 14,
}

---@enum EUprisingChanceType
local EUprisingChanceType = {
    None = 0,
    ColonialLow = 1,
    ColonialHigh = 2,
    WardenLow = 3,
    WardenHigh = 4,
    EUprisingChanceType_MAX = 5,
}

---@enum EUserVoteKickCategory
local EUserVoteKickCategory = {
    TeamKilling = 0,
    TeamVehicleDamage = 1,
    TeamStructureDamage = 2,
    Cheating = 3,
    BadLanguage = 4,
    BadStructurePlacement = 5,
    IntelLeak = 6,
    SuspectedAltAccount = 7,
    Count = 8,
    EUserVoteKickCategory_MAX = 9,
}

---@enum EValveRotationDirection
local EValveRotationDirection = {
    Decreasing = -1,
    None = 0,
    Increasing = 1,
    EValveRotationDirection_MAX = 2,
}

---@enum EVehicleBuildType
local EVehicleBuildType = {
    NotBuildable = 0,
    BuildableAnywhere = 1,
    VehicleFactory = 2,
    Shipyard = 3,
    RailTrackLarge = 4,
    RailTrackSmall = 5,
    RailTrackCrane = 6,
    LargeShip = 7,
    EVehicleBuildType_MAX = 8,
}

---@enum EVehicleDeploymentState
local EVehicleDeploymentState = {
    Undeployed = 0,
    Deploying = 1,
    Deployed = 2,
    Undeploying = 3,
    EVehicleDeploymentState_MAX = 4,
}

---@enum EVehicleMovementProfileType
local EVehicleMovementProfileType = {
    Default = 0,
    Truck = 1,
    ScoutVehicle = 2,
    Halftrack = 3,
    FulltrackLight = 4,
    FulltrackLightTanks = 5,
    Fulltrack = 6,
    FulltrackMediumTanks = 7,
    Motorcycle = 8,
    Bicycle = 9,
    FieldWalked = 10,
    LightTruck = 11,
    BattleTank = 12,
    ArmoredCar = 13,
    ArmoredCarLarge = 14,
    ConstructionTracked = 15,
    Mech = 16,
    SuperTankW = 17,
    Trailer = 18,
    FieldWalkedLarge = 19,
    Tractor = 20,
    HeavyTruck = 21,
    FulltrackHeavyTruck = 22,
    Count = 23,
    EVehicleMovementProfileType_MAX = 24,
}

---@enum EVehicleProfileType
local EVehicleProfileType = {
    Default = 0,
    WheeledTransport = 1,
    OpenRoofWheeledTransport = 2,
    WheeledArmoured = 3,
    TrackedTransport = 4,
    Tank = 5,
    SuperTank = 6,
    FieldWeapon = 7,
    BeachableShip = 8,
    Ship = 9,
    CombatShip = 10,
    Construction = 11,
    Bicycle = 12,
    Rail = 13,
    RailCar = 14,
    Trailer = 15,
    MAX = 16,
}

---@enum EVehicleStockpileResponse
local EVehicleStockpileResponse = {
    Success = 0,
    Error = 1,
    NotStockpilable = 2,
    WaterVehicleNotStockpilable = 3,
    RepairNeeded = 4,
    OccupantsInside = 5,
    MustBeUnlocked = 6,
    CargoMustBeEmpty = 7,
    InventoryMustBeEmpty = 8,
    StockpileMustBeEmpty = 9,
    Frozen = 10,
    ArmourNeeded = 11,
    MustRemoveMud = 12,
    WeaponMountMustBeEmpty = 13,
    DoorBlocked = 14,
    MustBeTierOne = 15,
    MustNotBeTractor = 16,
    MustNotBeTrailer = 17,
    EVehicleStockpileResponse_MAX = 18,
}

---@enum EVehicleSubsystem
local EVehicleSubsystem = {
    Track = 0,
    FuelTank = 1,
    Turret = 2,
    Turret2 = 3,
    Turret3 = 4,
    Turret4 = 5,
    Turret5 = 6,
    NumSubsystems = 7,
    None = 8,
    EVehicleSubsystem_MAX = 9,
}

---@enum EViolationLogType
local EViolationLogType = {
    VoteKick = 0,
    VoteBan = 1,
    ModKick = 2,
    ModBan = 3,
    Unban = 4,
    DIDBan = 5,
    UnbanDID = 6,
    ExcessiveFriendlyFire = 7,
    Note = 8,
    EViolationLogType_MAX = 9,
}

---@enum EVoiceChannelType
local EVoiceChannelType = {
    Local = 0,
    Squad = 1,
    EVoiceChannelType_MAX = 2,
}

---@enum EWSExternalConnectionErrorType
local EWSExternalConnectionErrorType = {
    ConnectionFailed = 0,
    AuthenticationFailed = 1,
    EWSExternalConnectionErrorType_MAX = 2,
}

---@enum EWarAchievementType
local EWarAchievementType = {
    MajorOffensive = 0,
    Offensive = 1,
    Fortified = 2,
    HoldTheLine = 3,
    LastStand = 4,
    Rebellion = 5,
    TurningPoint = 6,
    Liberation = 7,
    SpecialOperation = 8,
    Count = 9,
    EWarAchievementType_MAX = 10,
}

---@enum EWarBalancerPopulationFactor
local EWarBalancerPopulationFactor = {
    NotAvailable = 0,
    RoughlyEqualPlayers = 1,
    MoreColonialPlayers = 2,
    MoreWardenPlayers = 3,
    EWarBalancerPopulationFactor_MAX = 4,
}

---@enum EWarBalancerRegionTypeFactor
local EWarBalancerRegionTypeFactor = {
    NotAvailable = 0,
    NeutralStarterContested = 1,
    FriendlyStarterContested = 2,
    MostlyFriendlyStarterContested = 3,
    NeutralStarterNotContested = 4,
    FriendlyStarterNotContested = 5,
    MostlyFriendlyStarterNotContested = 6,
    EWarBalancerRegionTypeFactor_MAX = 7,
}

---@enum EWarBalancerWinFactor
local EWarBalancerWinFactor = {
    NotAvailable = 0,
    NeitherFactionWinning = 1,
    ColonialsWinning = 2,
    WardensWinning = 3,
    ColonialsNearVictory = 4,
    WardensNearVictory = 5,
    EWarBalancerWinFactor_MAX = 6,
}

---@enum EWarCollisionIgnoreFlags
local EWarCollisionIgnoreFlags = {
    BridgeWaterAccess = 1,
    MovementSweep = 2,
    DefenseMods = 4,
    RailwayTrack = 8,
    PlayerCharacter = 16,
    ShipSweep = 32,
    EWarCollisionIgnoreFlags_MAX = 33,
}

---@enum EWarOpsAlertMessage
local EWarOpsAlertMessage = {
    Invalid = 0,
    DeployUpdate = 1,
    UpcomingServerPatch = 2,
    DeployingServerPatch = 3,
    UpcomingFoxholeServicesPatch = 4,
    DeployingFoxholeServicesPatch = 5,
    DevBranchUpdateWorldSave = 6,
    DevBranchUpdateWorldReset = 7,
    RegionServerRestart = 8,
    UpcomingForcedServerPatch = 9,
    DeployingForcedServerPatch = 10,
    EWarOpsAlertMessage_MAX = 11,
}

---@enum EWarPhase
local EWarPhase = {
    PreConquest = 0,
    Conquest = 1,
    Victory = 2,
    Resistance = 3,
    Completed = 4,
    EWarPhase_MAX = 5,
}

---@enum EWarServerType
local EWarServerType = {
    Skirmish = 0,
    WorldConquest = 1,
    Event = 3,
    Training = 4,
    HomeRegionC = 5,
    HomeRegionW = 6,
    EWarServerType_MAX = 7,
}

---@enum EWaterSourceType
local EWaterSourceType = {
    None = 0,
    InfiniteWater = 1,
    Floodable = 2,
    StructurePuddle = 3,
    Puddle = 4,
    EWaterSourceType_MAX = 5,
}

---@enum EWearableSlot
local EWearableSlot = {
    Head = 0,
    Chest = 1,
    Feet = 2,
    Utility = 3,
    Back = 4,
    NumSlots = 5,
    None = 6,
    EWearableSlot_MAX = 7,
}

---@enum EWeatherIceLimiterType
local EWeatherIceLimiterType = {
    Include = 0,
    Exclude = 1,
    EWeatherIceLimiterType_MAX = 2,
}

---@enum EWeatherStationResult
local EWeatherStationResult = {
    Success = 0,
    Error = 1,
    NotEnoughPower = 2,
    AlreadyActive = 3,
    CantConnectToSelf = 4,
    CantConnectTooFar = 5,
    AlreadyConnected = 6,
    AlreadyConnectedToOther = 7,
    AlreadyDisconnected = 8,
    AlreadyReceivingConnection = 9,
    NoValidTarget = 10,
    ConnectedToNetwork = 11,
    DisconnectedFromNetwork = 12,
    MustBeIdle = 13,
    TryAgainSoon = 14,
    EWeatherStationResult_MAX = 15,
}

---@enum EWeatherStationState
local EWeatherStationState = {
    Idle = 0,
    Active = 1,
    EWeatherStationState_MAX = 2,
}

---@enum EWeatherType
local EWeatherType = {
    None = 0,
    RainStorm = 1,
    SnowStorm = 2,
    MAX = 3,
}

---@enum EWheelTrace
local EWheelTrace = {
    FrontLeft = 0,
    FrontRight = 1,
    BackLeft = 2,
    BackRight = 3,
    Count = 4,
    EWheelTrace_MAX = 5,
}

---@enum EWindowState
local EWindowState = {
    Built = 0,
    Disconnected = 1,
    Starved = 2,
    MAX = 3,
}

---@enum EWorldConquestMapId
local EWorldConquestMapId = {
    Invalid = 0,
    HomeRegionC = 1,
    HomeRegionW = 2,
    DeadLandsHex = 3,
    CallahansPassageHex = 4,
    MarbanHollow = 5,
    UmbralWildwoodHex = 6,
    MooringCountyHex = 7,
    HeartlandsHex = 8,
    LochMorHex = 9,
    LinnMercyHex = 10,
    ReachingTrailHex = 11,
    StonecradleHex = 12,
    FarranacCoastHex = 13,
    WestgateHex = 14,
    FishermansRowHex = 15,
    OarbreakerHex = 16,
    GreatMarchHex = 17,
    TempestIslandHex = 18,
    GodcroftsHex = 19,
    EndlessShoreHex = 20,
    AllodsBightHex = 21,
    WeatheredExpanseHex = 22,
    DrownedValeHex = 23,
    ShackledChasmHex = 24,
    ViperPitHex = 25,
    Unused = 26,
    FishermansRowFCL = 27,
    FoxholeFestivalMap = 28,
    NevishLineHex = 29,
    AcrithiaHex = 30,
    RedRiverHex = 31,
    CallumsCapeHex = 32,
    SpeakingWoodsHex = 33,
    BasinSionnachHex = 34,
    HowlCountyHex = 35,
    ClansheadValleyHex = 36,
    MorgensCrossingHex = 37,
    TheFingersHex = 38,
    TerminusHex = 39,
    KalokaiHex = 40,
    AshFieldsHex = 41,
    OriginHex = 42,
    SableportHex = 43,
    KingsCageHex = 44,
    StlicanShelfHex = 45,
    ClahstraHex = 46,
    ReaversPassHex = 47,
    StemaLandingHex = 48,
    Count = 49,
    EWorldConquestMapId_MAX = 50,
}

---@enum EZombieSecondaryAttack
local EZombieSecondaryAttack = {
    None = 0,
    Ranged = 1,
    FrontalAOE = 2,
    EZombieSecondaryAttack_MAX = 3,
}

---@enum EZombieType
local EZombieType = {
    None = 0,
    Regular = 1,
    Spitter = 2,
    Tank = 3,
    Count = 4,
    EZombieType_MAX = 5,
}

