---@enum EMediaAudioCaptureDeviceFilter
local EMediaAudioCaptureDeviceFilter = {
    None = 0,
    Card = 1,
    Microphone = 2,
    Software = 4,
    Unknown = 8,
    EMediaAudioCaptureDeviceFilter_MAX = 9,
}

---@enum EMediaPlayerTrack
local EMediaPlayerTrack = {
    Audio = 0,
    Caption = 1,
    Metadata = 2,
    Script = 3,
    Subtitle = 4,
    Text = 5,
    Video = 6,
    EMediaPlayerTrack_MAX = 7,
}

---@enum EMediaSoundChannels
local EMediaSoundChannels = {
    Mono = 0,
    Stereo = 1,
    Surround = 2,
    EMediaSoundChannels_MAX = 3,
}

---@enum EMediaSoundComponentFFTSize
local EMediaSoundComponentFFTSize = {
    Min_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    EMediaSoundComponentFFTSize_MAX = 4,
}

---@enum EMediaVideoCaptureDeviceFilter
local EMediaVideoCaptureDeviceFilter = {
    None = 0,
    Card = 1,
    Software = 2,
    Unknown = 4,
    Webcam = 8,
    EMediaVideoCaptureDeviceFilter_MAX = 9,
}

---@enum EMediaWebcamCaptureDeviceFilter
local EMediaWebcamCaptureDeviceFilter = {
    None = 0,
    DepthSensor = 1,
    Front = 2,
    Rear = 4,
    Unknown = 8,
    EMediaWebcamCaptureDeviceFilter_MAX = 9,
}

