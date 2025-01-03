#include "SignPost.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

ASignPost::ASignPost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::SignPost;
    this->HealPerUpVote = 20;
    this->DamagePerDownVote = 170;
    this->LastEditedTimeTicks = 0;
    this->bIsWorldSignPost = false;
}

void ASignPost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASignPost, Text);
    DOREPLIFETIME(ASignPost, VoteList);
    DOREPLIFETIME(ASignPost, LastEditedTimeTicks);
}


