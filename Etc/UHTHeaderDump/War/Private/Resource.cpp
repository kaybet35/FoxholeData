#include "Resource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "Net/UnrealNetwork.h"

AResource::AResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ResourceArrow"));
    this->HammerImpactEffect = NULL;
    this->SledgeImpactEffect = NULL;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->HighYieldEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HighYieldEffect"));
    this->ResourcePickupClass = NULL;
    this->BaseAmountPerGather = 1;
    this->BonusAmountOnFinalGather = 0;
    this->BaseAmount = 0;
    this->AmountRemaining = 0;
    this->GatherXP = 1;
    this->bPlayGatherFX = true;
    this->ChanceForRareResource = 0.00f;
    this->ResourceLevel = 0;
    this->ResourceFieldId = 0;
    this->bIsHighYield = false;
    this->NumNextTierResourcesToSpawn = 2;
    this->bShouldPersist = true;
    this->DestroyedFX = NULL;
    this->DestroyedSoundCue = NULL;
    this->SpawnSoundCue = NULL;
    this->HighYieldEffect->SetupAttachment(RootComponent);
}

void AResource::OnRep_IsHighYield(const bool bPreviousIsHighYield) {
}


void AResource::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResource, bIsHighYield);
}


