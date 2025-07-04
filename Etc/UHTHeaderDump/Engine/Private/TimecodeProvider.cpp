#include "TimecodeProvider.h"

UTimecodeProvider::UTimecodeProvider() {
    this->FrameDelay = 0;
}

FTimecode UTimecodeProvider::GetTimecode() const {
    return FTimecode{};
}

ETimecodeProviderSynchronizationState UTimecodeProvider::GetSynchronizationState() const {
    return ETimecodeProviderSynchronizationState::Closed;
}

FFrameRate UTimecodeProvider::GetFrameRate() const {
    return FFrameRate{};
}

FTimecode UTimecodeProvider::GetDelayedTimecode() const {
    return FTimecode{};
}


