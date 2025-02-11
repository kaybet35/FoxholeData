#include "CreateMapPostRequest.h"

FCreateMapPostRequest::FCreateMapPostRequest() {
    this->MapId = 0;
    this->MapPostType = EMapPostType::Public;
    this->FacilityMapPostType = EFacilityMapPostType::None;
    this->bIsModModeOn = false;
    this->GroupId = 0;
}

