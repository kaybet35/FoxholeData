#include "DeploymentQueueEntry.h"

FDeploymentQueueEntry::FDeploymentQueueEntry() {
    this->Controller = NULL;
    this->TargetMapID = EWorldConquestMapId::Invalid;
    this->bIsRecovery = false;
}

