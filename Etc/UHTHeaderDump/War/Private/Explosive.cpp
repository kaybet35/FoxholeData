#include "Explosive.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AExplosive::AExplosive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->DetonationDelay = 0.00f;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    this->ExplosionOffsetZ = 0.00f;
    this->ExplosionFXOffsetZ = 50.00f;
    this->DamageDelay = 0.50f;
    this->ExplosionTemplate = NULL;
    this->WaterSurfaceExplosionTemplate = NULL;
    this->DestroyObstacleRadius = 0.00f;
    this->SubExplosionCount = 1;
    this->ExplosionLength = 300.00f;
    this->bExplosionEffectsTrigger = false;
    this->TeamId = 255;
    this->CollisionComp->SetupAttachment(RootComponent);
    this->ItemMesh->SetupAttachment(RootComponent);
}

void AExplosive::OnRep_Exploded() {
}

void AExplosive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExplosive, bExplosionEffectsTrigger);
    DOREPLIFETIME(AExplosive, TeamId);
}


