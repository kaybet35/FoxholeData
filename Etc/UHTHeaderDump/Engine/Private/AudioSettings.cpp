#include "AudioSettings.h"

UAudioSettings::UAudioSettings() {
    this->VoiPSampleRate = EVoiceSampleRate::Low16000Hz;
    this->VoipBufferingDelay = 0.20f;
    this->DefaultReverbSendLevel = 0.00f;
    this->bEnableLegacyReverb = false;
    this->MaximumConcurrentStreams = 2;
    this->GlobalMinPitchScale = 0.40f;
    this->GlobalMaxPitchScale = 2.00f;
    this->QualityLevels.AddDefaulted(1);
    this->bAllowPlayWhenSilent = true;
    this->bDisableMasterEQ = false;
    this->bAllowCenterChannel3DPanning = false;
    this->NumStoppingSources = 8;
    this->PanningMethod = EPanningMethod::Linear;
    this->MonoChannelUpmixMethod = EMonoChannelUpmixMethod::Linear;
    this->DialogueFilenameFormat = TEXT("{DialogueGuid}_{ContextId}");
}


