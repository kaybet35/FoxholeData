#include "GunTurret.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "AIGunTurretComponent.h"
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "Net/UnrealNetwork.h"

AGunTurret::AGunTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAIGunTurretComponent>(TEXT("AITurretComponent"))) {
    this->ArmourType = EArmourType::Tier3Structure;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
    this->SkelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMesh"));
    this->GunnerYaw = 0.00f;
    this->SkelMesh->SetupAttachment(RootComponent);
    this->AITurretComponent->SetupAttachment(RootComponent);
}

void AGunTurret::OnRep_GunnerYaw() {
}

float AGunTurret::GetTrackingAngle() const {
    return 0.0f;
}

void AGunTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGunTurret, GunnerYaw);
}


