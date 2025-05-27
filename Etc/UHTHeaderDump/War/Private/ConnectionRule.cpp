#include "ConnectionRule.h"

FConnectionRule::FConnectionRule() {
    this->bDirectional = false;
    this->Direction = ESocketDirection::None;
    this->SocketTypeMask = 0;
}

