#include "SoundClassProperties.h"

FSoundClassProperties::FSoundClassProperties() {
    this->Volume = 0.00f;
    this->Pitch = 0.00f;
    this->LowPassFilterFrequency = 0.00f;
    this->StereoBleed = 0.00f;
    this->LFEBleed = 0.00f;
    this->VoiceCenterChannelVolume = 0.00f;
    this->RadioFilterVolume = 0.00f;
    this->RadioFilterVolumeThreshold = 0.00f;
    this->bApplyEffects = false;
    this->bAlwaysPlay = false;
    this->bIsUISound = false;
    this->bIsMusic = false;
    this->bReverb = false;
    this->Default2DReverbSendAmount = 0.00f;
    this->bCenterChannelOnly = false;
    this->bApplyAmbientVolumes = false;
    this->OutputTarget = EAudioOutputTarget::Speaker;
    this->LoadingBehavior = ESoundWaveLoadingBehavior::Inherited;
}

