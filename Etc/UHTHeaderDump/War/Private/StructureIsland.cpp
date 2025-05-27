#include "StructureIsland.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

AStructureIsland::AStructureIsland(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateMovement = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->StructuralIntegrity = 0.00f;
    this->CachedStructuralIntegrityBonus = 0.00f;
    this->CachedFortConnections = 0;
    this->CachedNonFortConnections = 0;
    this->CachedUnconnectedSockets = 0;
    this->TeamId = 0;
    this->HealthPool = 0.00f;
    this->HealthPoolMax = 0.00f;
    this->FireIntensity = EFireIntensity::None;
}

void AStructureIsland::OnRep_Structures() {
}

void AStructureIsland::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStructureIsland, Structures);
    DOREPLIFETIME(AStructureIsland, StructuralIntegrity);
    DOREPLIFETIME(AStructureIsland, CachedStructuralIntegrityBonus);
    DOREPLIFETIME(AStructureIsland, CachedFortConnections);
    DOREPLIFETIME(AStructureIsland, CachedNonFortConnections);
    DOREPLIFETIME(AStructureIsland, CachedUnconnectedSockets);
    DOREPLIFETIME(AStructureIsland, TeamId);
    DOREPLIFETIME(AStructureIsland, HealthPoolMax);
    DOREPLIFETIME(AStructureIsland, FireIntensity);
}


