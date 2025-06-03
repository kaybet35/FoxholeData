#include "StaticCrane.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BuildSocketComponent.h"
#include "CraneComponent.h"
#include "EStructureProfileType.h"
#include "FacilityLightComponent.h"
#include "Net/UnrealNetwork.h"

AStaticCrane::AStaticCrane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::GenericWorldStructure;
    this->bIgnoreFriendlyFire = true;
    this->MainMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CraneMesh"));
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->ShippableCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ShippableCollision"));
    this->ArmMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ArmMovementSFXLoop"));
    this->DeployingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DeployingSFXLoop"));
    this->PulleyMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("PulleyMovementSFXLoop"));
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->CraneComponent = CreateDefaultSubobject<UCraneComponent>(TEXT("CraneComponent"));
    this->MainMesh->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(MainMesh);
    this->RopeMesh->SetupAttachment(MainMesh);
    this->ShippableCollision->SetupAttachment(MainMesh);
    this->ArmMovementSFXLoop->SetupAttachment(MainMesh);
    this->DeployingSFXLoop->SetupAttachment(MainMesh);
    this->PulleyMovementSFXLoop->SetupAttachment(MainMesh);
    this->PowerSocket->SetupAttachment(RootComponent);
}

void AStaticCrane::OnRep_PowerGridInfo() {
}

void AStaticCrane::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStaticCrane, PowerGridInfo);
}


