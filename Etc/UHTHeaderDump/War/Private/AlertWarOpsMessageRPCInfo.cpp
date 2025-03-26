#include "AlertWarOpsMessageRPCInfo.h"

FAlertWarOpsMessageRPCInfo::FAlertWarOpsMessageRPCInfo() {
    this->MessageType = EWarOpsAlertMessage::Invalid;
    this->bVar1Set = false;
    this->bVar2Set = false;
    this->Var1 = 0;
    this->Var2 = 0;
    this->DurationSecs = 0.00f;
}

