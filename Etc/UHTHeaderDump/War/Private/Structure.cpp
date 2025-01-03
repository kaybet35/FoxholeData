#include "Structure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Net/UnrealNetwork.h"
#include "StealthComponent.h"

AStructure::AStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("StructureArrow"));
    this->ProfileType = EStructureProfileType::Default;
    this->ArmourType = EArmourType::NoArmour;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->UseAreaBox = CreateDefaultSubobject<UBoxComponent>(TEXT("UseAreaBox"));
    this->KillVolume = NULL;
    this->DestroyedFX = NULL;
    this->ItemHolder = NULL;
    this->TechID = ETechID::None;
    this->GarrisonComponent = NULL;
    this->InfrastructureComponent = NULL;
    this->MeshVisibilityComponent = NULL;
    this->MaxHealth = 0;
    this->Health = 20;
    this->DynamicTier = EDynamicTier::Default;
    this->MapIconType = EMapIconType::None;
    this->bIsMapIconVisibleToAll = true;
    this->bIsBuildSiteMapIconVisible = false;
    this->bCanBeDismantled = false;
    this->bOverrideIsBurnable = false;
    this->bIsBurnable = false;
    this->bLogWhenDestroyed = false;
    this->bIsTrackedClimbable = false;
    this->bRotateDropLocation = false;
    this->IsVaultable = true;
    this->ScreenToUse = ESimScreen::None;
    this->bIsDeployed = false;
    this->DecayRemainingTime = 0.00f;
    this->MapIntelligenceType = EMapIntelligenceType::None;
    this->StructureFlags = 0;
    this->bIgnoreFriendlyFire = false;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Medium;
    this->bIsStockpilable = false;
    this->bIsReserveStockpiled = false;
    this->bProvidesBasedShelter = false;
    this->bIsBuiltNearBorder = false;
    this->bIgnoresRapidDecay = false;
    this->bIsPrototype = false;
    this->InteractionDistanceOverride = 0.00f;
    this->BuildStepProgress = 0;
    this->bHasMeshVisibilityComponent = false;
    this->bAddLandscapeHolesOnBeginPlay = true;
    this->bRemoveLandscapeHolesOnDestroy = true;
    this->bHasLandscapeHoles = false;
    this->bHasRemovedLandscapeHoles = false;
    this->StealthComponent = CreateDefaultSubobject<UStealthComponent>(TEXT("StealthComponent"));
    this->Rainfall = 0.00f;
    this->QuantizedRainfall = 0;
    this->PuddleVisualsMesh = NULL;
    this->bReceivesRainfall = false;
    this->StructureFlameCountFactor = 1.00f;
    this->DecaySupplyDrain = 1;
    this->FireIntensity = EFireIntensity::None;
    this->PreMitigationFireDamagePerTick = 0.00f;
    this->BurningHeatArea = NULL;
    this->WarmingHeatArea = NULL;
    this->bRecentExtinguishingHit = false;
    this->ParkingSpotComponent = NULL;
    this->FirePitComponent = NULL;
    this->UseAreaBox->SetupAttachment(RootComponent);
}

void AStructure::Use(AWarCharacter* UsingPlayer) {
}

void AStructure::OnRep_RecentExtinguishingHit(bool Previous) {
}

void AStructure::OnRep_QuantizedRainfall() {
}

void AStructure::OnRep_IsPrototype() {
}

void AStructure::OnRep_Health() {
}

void AStructure::OnRep_FireIntensity(EFireIntensity Previous) {
}

void AStructure::OnRep_DynamicTier() {
}

void AStructure::OnRep_BuildStepProgress() {
}

void AStructure::MulticastOnVehicleDrivingOverDamage_Implementation() {
}
bool AStructure::MulticastOnVehicleDrivingOverDamage_Validate() {
    return true;
}

bool AStructure::IsCollidingWithDuplicate() const {
    return false;
}

UTechTreeComponent* AStructure::GetTechTreeComponent() const {
    return NULL;
}




void AStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStructure, ItemHolderItems);
    DOREPLIFETIME(AStructure, Health);
    DOREPLIFETIME(AStructure, DynamicTier);
    DOREPLIFETIME(AStructure, bIsPrototype);
    DOREPLIFETIME(AStructure, BuilderPlayerOnlineID);
    DOREPLIFETIME(AStructure, BuilderName);
    DOREPLIFETIME(AStructure, BuildStepProgress);
    DOREPLIFETIME(AStructure, QuantizedRainfall);
    DOREPLIFETIME(AStructure, FireIntensity);
    DOREPLIFETIME(AStructure, bRecentExtinguishingHit);
}


