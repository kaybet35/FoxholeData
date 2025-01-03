---@enum ELuminComponentSubElementType
ELuminComponentSubElementType = {
    FileExtension = 0,
    MimeType = 1,
    Mode = 2,
    MusicAttribute = 3,
    Schema = 4,
    ELuminComponentSubElementType_MAX = 5,
}

---@enum ELuminComponentType
ELuminComponentType = {
    Universe = 0,
    Fullscreen = 1,
    SearchProvider = 2,
    MusicService = 3,
    Screens = 4,
    ScreensImmersive = 5,
    Console = 6,
    SystemUI = 7,
    ELuminComponentType_MAX = 8,
}

---@enum ELuminFrameTimingHint
ELuminFrameTimingHint = {
    Unspecified = 0,
    Maximum = 1,
    FPS_60 = 2,
    FPS_120 = 3,
    ELuminFrameTimingHint_MAX = 4,
}

---@enum ELuminPrivilege
ELuminPrivilege = {
    Invalid = 0,
    BatteryInfo = 1,
    CameraCapture = 2,
    WorldReconstruction = 3,
    InAppPurchase = 4,
    AudioCaptureMic = 5,
    DrmCertificates = 6,
    Occlusion = 7,
    LowLatencyLightwear = 8,
    Internet = 9,
    IdentityRead = 10,
    BackgroundDownload = 11,
    BackgroundUpload = 12,
    MediaDrm = 13,
    Media = 14,
    MediaMetadata = 15,
    PowerInfo = 16,
    LocalAreaNetwork = 17,
    VoiceInput = 18,
    Documents = 19,
    ConnectBackgroundMusicService = 20,
    RegisterBackgroundMusicService = 21,
    PwFoundObjRead = 22,
    NormalNotificationsUsage = 23,
    MusicService = 24,
    ControllerPose = 25,
    ScreensProvider = 26,
    GesturesSubscribe = 27,
    GesturesConfig = 28,
    AddressBookRead = 29,
    AddressBookWrite = 30,
    CoarseLocation = 31,
    HandMesh = 32,
    WifiStatusRead = 33,
    ELuminPrivilege_MAX = 34,
}

