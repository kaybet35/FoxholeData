---@enum EAudioSpectrumType
local EAudioSpectrumType = {
    MagnitudeSpectrum = 0,
    PowerSpectrum = 1,
    EAudioSpectrumType_MAX = 2,
}

---@enum EFFTPeakInterpolationMethod
local EFFTPeakInterpolationMethod = {
    NearestNeighbor = 0,
    Linear = 1,
    Quadratic = 2,
    EFFTPeakInterpolationMethod_MAX = 3,
}

---@enum EFFTSize
local EFFTSize = {
    DefaultSize = 0,
    Min = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    Max = 5,
}

---@enum EFFTWindowType
local EFFTWindowType = {
    None = 0,
    Hamming = 1,
    Hann = 2,
    Blackman = 3,
    EFFTWindowType_MAX = 4,
}

---@enum ESubmixEffectDynamicsPeakMode
local ESubmixEffectDynamicsPeakMode = {
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    ESubmixEffectDynamicsPeakMode_MAX = 4,
}

---@enum ESubmixEffectDynamicsProcessorType
local ESubmixEffectDynamicsProcessorType = {
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    Count = 4,
    ESubmixEffectDynamicsProcessorType_MAX = 5,
}

