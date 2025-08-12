#include "ArtilleryRailVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

AArtilleryRailVehicle::AArtilleryRailVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNeedsSkelmeshTickForMovement = true;
    this->FireShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireShellParticleSystem"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->EjectShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EjectShellParticleSystem"));
    this->InitialDelay = 0.00f;
    this->ExplosionDelay = 0.00f;
    this->FuelPowerForRotation = 1.00f;
    this->FuelPowerForFiring = 5.00f;
    this->HeatForFiring = 5;
    this->Heat = 0;
    this->EjectShellParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FireShellParticleSystem->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AArtilleryRailVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArtilleryRailVehicle, Heat);
}


