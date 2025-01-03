#include "DeployedWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

ADeployedWeapon::ADeployedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PayloadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PayloadMesh"));
    this->bIgnoresRadialDamage = false;
    this->StashedAmmo = 0;
    this->TripodHeight = 100.00f;
    this->PayloadMesh->SetupAttachment(GunMesh);
}

void ADeployedWeapon::OnRep_StashedAmmo() {
}

void ADeployedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADeployedWeapon, StashedAmmo);
    DOREPLIFETIME(ADeployedWeapon, StashedAmmoType);
    DOREPLIFETIME(ADeployedWeapon, TripodHeight);
}


