#include "StructureBuildSite.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Net/UnrealNetwork.h"

AStructureBuildSite::AStructureBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModificationMask = 0;
    this->MigratedModificationMask = 0;
    this->ObstructionCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("ObstructionCheckVolume"));
    this->bIsUpgrade = false;
    this->BaseStructureClassToRespawn = NULL;
    this->BaseStructureHealth = 0;
    this->BaseStructureTeamId = 255;
    this->LastHeldFactionID = EFactionId::NoTeam;
    this->bHasSavedRotation = false;
    this->DecayStartHours = 0.00f;
    this->DecayDurationHours = 0.00f;
    this->ObstructionCheckVolume->SetupAttachment(RootComponent);
}

void AStructureBuildSite::OnRep_MigratedModificationMask() {
}

void AStructureBuildSite::OnRep_IsUpgrade() {
}

void AStructureBuildSite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStructureBuildSite, StructureBeingBuiltCodeName);
    DOREPLIFETIME(AStructureBuildSite, ModificationMask);
    DOREPLIFETIME(AStructureBuildSite, ModificationSlotMigrations);
    DOREPLIFETIME(AStructureBuildSite, DisabledSockets);
    DOREPLIFETIME(AStructureBuildSite, MigratedModificationMask);
    DOREPLIFETIME(AStructureBuildSite, bIsUpgrade);
    DOREPLIFETIME(AStructureBuildSite, ConnectorConfiguration);
}


