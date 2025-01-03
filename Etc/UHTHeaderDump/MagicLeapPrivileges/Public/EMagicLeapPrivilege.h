#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapPrivilege.generated.h"

UENUM(BlueprintType)
enum class EMagicLeapPrivilege : uint8 {
    Invalid,
    BatteryInfo,
    CameraCapture,
    WorldReconstruction,
    InAppPurchase,
    AudioCaptureMic,
    DrmCertificates,
    Occlusion,
    LowLatencyLightwear,
    Internet,
    IdentityRead,
    BackgroundDownload,
    BackgroundUpload,
    MediaDrm,
    Media,
    MediaMetadata,
    PowerInfo,
    LocalAreaNetwork,
    VoiceInput,
    Documents,
    ConnectBackgroundMusicService,
    RegisterBackgroundMusicService,
    PwFoundObjRead,
    NormalNotificationsUsage,
    MusicService,
    ControllerPose,
    ScreensProvider,
    GesturesSubscribe,
    GesturesConfig,
    AddressBookRead,
    AddressBookWrite,
    CoarseLocation,
    HandMesh,
    WifiStatusRead,
};

