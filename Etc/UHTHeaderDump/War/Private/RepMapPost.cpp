#include "RepMapPost.h"

FRepMapPost::FRepMapPost() {
    this->ID = 0;
    this->MapId = 0;
    this->MapPostType = EMapPostType::Public;
    this->FacilityMapPostType = EFacilityMapPostType::None;
    this->LocalVoteType = EMapPostVoteType::None;
    this->GroupId = 0;
    this->TotalVotes = 0;
    this->Rank = 0;
}

