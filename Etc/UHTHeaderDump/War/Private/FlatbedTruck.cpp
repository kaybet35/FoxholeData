#include "FlatbedTruck.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AFlatbedTruck::AFlatbedTruck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReserveStockpiled = true;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->DynamicMeshComponent = NULL;
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->GlobalShippableInfo = NULL;
    this->RopeMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->TransferLocation->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AFlatbedTruck::OnRep_ShippableData() {
}

void AFlatbedTruck::OnRep_CurrentShippable() {
}

void AFlatbedTruck::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlatbedTruck, CurrentShippable);
    DOREPLIFETIME(AFlatbedTruck, ShippableData);
}


