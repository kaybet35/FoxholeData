#include "Harvester.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

AHarvester::AHarvester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReserveStockpiled = true;
    this->GrindRate = 0.00f;
    this->GrindFuelRate = 0.00f;
    this->SplitRate = 0.00f;
    this->SplitFuelRate = 0.00f;
    this->MovementModifier = 1.00f;
    this->GrindingCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GrindingCapsule"));
    this->NoTargetParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("NoTargetParticleSystem"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->ComponentsParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ComponentsParticleSystem"));
    this->DefensesParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DefensesParticleSystem"));
    this->SalvageParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SalvageParticleSystem"));
    this->SulfurParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SulfurParticleSystem"));
    this->SplitParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SplitParticleSystem"));
    this->GrindingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("GrindingSFXLoop"));
    this->SplittingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("SplittingSFXLoop"));
    this->RotatingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("RotatingSFXLoop"));
    this->Action = 0;
    this->GrindingCapsule->SetupAttachment(RootComponent);
    this->NoTargetParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ComponentsParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->DefensesParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->SalvageParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->SulfurParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->SplitParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->GrindingSFXLoop->SetupAttachment(RootComponent);
    this->SplittingSFXLoop->SetupAttachment(RootComponent);
    this->RotatingSFXLoop->SetupAttachment(RootComponent);
}

void AHarvester::ServerStopAction_Implementation() {
}
bool AHarvester::ServerStopAction_Validate() {
    return true;
}

void AHarvester::ServerStartGrinding_Implementation() {
}
bool AHarvester::ServerStartGrinding_Validate() {
    return true;
}

void AHarvester::OnRep_Action() {
}

void AHarvester::MulticastOnResourceSplit_Implementation() {
}

void AHarvester::MulticastOnGather_Implementation(AResource* Resource, const FGatherResult& GatherResult) {
}

void AHarvester::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHarvester, Action);
}


