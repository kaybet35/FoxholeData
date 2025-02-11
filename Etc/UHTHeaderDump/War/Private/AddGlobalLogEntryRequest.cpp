#include "AddGlobalLogEntryRequest.h"

FAddGlobalLogEntryRequest::FAddGlobalLogEntryRequest() {
    this->Type = EGlobalLogEntryType::None;
    this->MapId = 0;
    this->FactionId = EFactionId::Colonials;
    this->Value = 0;
    this->Timestamp = 0;
}

