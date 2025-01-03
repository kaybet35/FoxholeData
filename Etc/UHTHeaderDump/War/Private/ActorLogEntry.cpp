#include "ActorLogEntry.h"

FActorLogEntry::FActorLogEntry() {
    this->Type = EActorLogEntryType::None;
    this->AltType = 0;
    this->Value = 0;
}

