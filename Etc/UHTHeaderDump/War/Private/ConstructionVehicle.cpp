#include "ConstructionVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

AConstructionVehicle::AConstructionVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoomLocation = CreateDefaultSubobject<USceneComponent>(TEXT("BoomLocationLocation"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->HammerLocation = CreateDefaultSubobject<USceneComponent>(TEXT("HammerLocation"));
    this->WorkSoundCue = NULL;
    this->WorkPS = NULL;
    this->CabYaw = 0.00f;
    this->bIsWorking = false;
    this->BoomLocation->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->HammerLocation->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AConstructionVehicle::ServerSyncDesiredYaw_Implementation(const float DesiredYaw) {
}
bool AConstructionVehicle::ServerSyncDesiredYaw_Validate(const float DesiredYaw) {
    return true;
}

void AConstructionVehicle::ServerSetIsWorking_Implementation(const bool NewBIsWorking) {
}
bool AConstructionVehicle::ServerSetIsWorking_Validate(const bool NewBIsWorking) {
    return true;
}

void AConstructionVehicle::ServerSetIsScoping_Implementation(const bool bIsScoping) {
}
bool AConstructionVehicle::ServerSetIsScoping_Validate(const bool bIsScoping) {
    return true;
}

void AConstructionVehicle::MulticastPlayFX_Implementation() {
}

void AConstructionVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConstructionVehicle, CabYaw);
    DOREPLIFETIME(AConstructionVehicle, bIsWorking);
}


