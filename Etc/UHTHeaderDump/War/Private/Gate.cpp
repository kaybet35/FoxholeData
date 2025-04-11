#include "Gate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AGate::AGate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldGate;
    this->OpeningSoundCue = NULL;
    this->NoBuildCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("NoBuildCollider"));
    this->GateObstructionCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("GateObstructionCollider"));
    this->GateCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("GateCollider"));
    this->GateDoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GateDoorMesh"));
    this->GateCollisionProfileName = TEXT("StructureDamageableMesh");
    this->GateState = EGateState::Closed;
    this->AutomaticCloseTime = 10.00f;
    this->NoBuildCollider->SetupAttachment(RootComponent);
    this->GateObstructionCollider->SetupAttachment(RootComponent);
    this->GateCollider->SetupAttachment(RootComponent);
    this->GateDoorMesh->SetupAttachment(RootComponent);
}

void AGate::OnRep_GateState() {
}

void AGate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGate, GateState);
}


