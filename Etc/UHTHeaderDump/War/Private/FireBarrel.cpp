#include "FireBarrel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AFireBarrel::AFireBarrel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("FireBarrelArrow"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->BarrelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelMesh"));
    this->FireMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FireMesh"));
    this->SmokeParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SmokeParticleSystem"));
    this->SteamParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SteamParticleSystem"));
    this->bIsIgnited = true;
    this->TimeToReignite = 15.00f;
    this->BarrelMesh->SetupAttachment(RootComponent);
    this->FireMesh->SetupAttachment(RootComponent);
    this->SmokeParticleSystem->SetupAttachment(RootComponent);
    this->SteamParticleSystem->SetupAttachment(RootComponent);
}

void AFireBarrel::OnRep_bIsIgnited() {
}

void AFireBarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFireBarrel, bIsIgnited);
}


