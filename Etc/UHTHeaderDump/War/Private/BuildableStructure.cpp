#include "BuildableStructure.h"
#include "Net/UnrealNetwork.h"

ABuildableStructure::ABuildableStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SnappablePathSocketClass = NULL;
    this->Tier = EFortTier::None;
    this->ModificationMask = 0;
    this->bDisableModificationSlotValidation = false;
    this->bOnlyMigratePipesModification = false;
    this->bReadOnlyModifications = false;
    this->ProceduralUseVolumeFactor = 1.05f;
    this->bDoUpgradeObstructionCheck = false;
    this->bApplyNoBuildPhysicalMaterialsToSurfaceSamples = false;
    this->bUseSplineFootprintsForSurfaceChecks = false;
    this->bIgnoreNoBuildAreas = false;
    this->bIgnoreBuiltRoads = false;
    this->bIsBuiltOnLandscape = true;
    this->bIsBuiltOnIce = false;
    this->bBuildOnBridges = false;
    this->bBuildOnWater = false;
    this->bIsBuiltOnFoundation = false;
    this->bIsPartiallyBuiltOnFoundation = false;
    this->bAllowFloating = false;
    this->bLinearAttachment = false;
    this->LinearAttachmentTolerance = 10.00f;
    this->bLinearAttachmentPitch = false;
    this->MaxAttachmentGroupSize = 0;
    this->MapBoundaryBuildRule = EMapBoundaryBuildRule::NotBuildableNearBorder;
    this->bAllowNearEnemy = false;
    this->bIsConnector = false;
    this->bIsManualConnector = false;
    this->ConnectorMinLength = 0.00f;
    this->ConnectorMaxLength = 800.00f;
    this->MinLengthMaxHealthModifier = 1.00f;
    this->ConnectorMinWidth = 130.00f;
    this->bConnectorCanSnapUnderRoads = false;
    this->BuildSiteClass = NULL;
    this->BaseStructureClass = NULL;
    this->BreachedStructureClass = NULL;
    this->ProxyActorClass = NULL;
    this->bClearModificationsOnDowngrade = false;
    this->Icon = NULL;
    this->BuildCategory = EBuildCategory::Default;
    this->BuildOrder = 0;
    this->BuildLocationType = EBuildLocationType::None;
    this->MaxBuildDistance = 0.00f;
    this->MaxBuildOverlapDepth = 0.00f;
    this->BuildTargetArmLength = 0.00f;
    this->DestroyedDamageRadius = 0.00f;
    this->bDropsLargeMaterialsWhenDestroyed = true;
    this->bCustomPawnOverlapCheck = false;
    this->bCanOverlapSpawnPoint = true;
    this->bCanBeBuiltIndoors = false;
    this->bIsFillStructureProxy = false;
    this->MinDistanceToSameStructure = 0.00f;
    this->bIsVehicleProxy = false;
    this->bRotateBuildGhost = false;
    this->ValidBuildTools = 0;
    this->bIsInitiallyDestroyed = false;
    this->FactionVariant = EFactionId::NoTeam;
    this->bIsReservable = false;
    this->bUsesImpactsMaterial = false;
    this->PackagedMesh = NULL;
}

void ABuildableStructure::OnRep_PathSockets() {
}

void ABuildableStructure::OnRep_ModificationMask(const uint32 PreviousModificationMask) {
}

void ABuildableStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildableStructure, PathSockets);
    DOREPLIFETIME(ABuildableStructure, ModificationMask);
    DOREPLIFETIME(ABuildableStructure, ConnectorConfiguration);
    DOREPLIFETIME(ABuildableStructure, ConcreteSettler);
    DOREPLIFETIME(ABuildableStructure, bIsReservable);
}


