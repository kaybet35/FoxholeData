#include "ItemPickup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"
#include "StealthComponent.h"

AItemPickup::AItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ItemBox"));
    this->StealthComponent = CreateDefaultSubobject<UStealthComponent>(TEXT("StealthComponent"));
    this->ItemComponentClass = NULL;
    this->Encumbrance = 20;
    this->EquippedEncumbrance = -1;
    this->bHideContent = false;
    this->Icon = NULL;
    this->EquipmentSlot = EEquipmentSlot::None;
    this->ItemCategory = EItemCategory::Misc;
    this->ItemFlagsMask = 1;
    this->ItemProfileType = EItemProfileType::Invalid;
    this->FactionVariant = EFactionId::NoTeam;
    this->TechID = ETechID::None;
    this->bIsLiquid = false;
    this->bIsLarge = false;
    this->bIsHeavy = false;
    this->bIsProxy = false;
    this->bDoesNotDecay = false;
    this->bSupportsVehicleMounts = false;
    this->bMustBeEmptyToSubmit = false;
    this->bCanBePrototyped = true;
    this->ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    this->ItemBox = (UBoxComponent*)RootComponent;
    this->ItemMesh->SetupAttachment(RootComponent);
}

void AItemPickup::OnRep_ItemInstance() {
}

void AItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItemPickup, ItemInstance);
}


