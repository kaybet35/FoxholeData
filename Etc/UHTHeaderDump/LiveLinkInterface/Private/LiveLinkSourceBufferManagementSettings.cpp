#include "LiveLinkSourceBufferManagementSettings.h"

FLiveLinkSourceBufferManagementSettings::FLiveLinkSourceBufferManagementSettings() {
    this->ValidEngineTime = 0.00f;
    this->EngineTimeOffset = 0.00f;
    this->bGenerateSubFrame = false;
    this->ValidTimecodeFrame = 0;
    this->TimecodeFrameOffset = 0;
    this->LatestOffset = 0;
    this->MaxNumberOfFrameToBuffered = 0;
    this->bKeepAtLeastOneFrame = false;
}

