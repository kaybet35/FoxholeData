#include "TechTree.h"
#include "Net/UnrealNetwork.h"

ATechTree::ATechTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->TechUnlockBits.AddDefaulted(7);
}

void ATechTree::OnRep_TechUnlockBits(const TArray<uint32>& PreviousTechUnlockBits) {
}

void ATechTree::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATechTree, Categories);
    DOREPLIFETIME(ATechTree, TechUnlockBits);
    DOREPLIFETIME(ATechTree, TechUnlockProgress);
}


