#include "LuminRuntimeSettings.h"

ULuminRuntimeSettings::ULuminRuntimeSettings() {
    this->PackageName = TEXT("com.YourCompany.[PROJECT]");
    this->bIsScreensApp = false;
    this->FrameTimingHint = ELuminFrameTimingHint::FPS_60;
    this->bProtectedContent = false;
    this->bUseMobileRendering = true;
    this->bUseVulkan = true;
    this->VersionCode = 1;
    this->MinimumAPILevel = 6;
    this->AppPrivileges.AddDefaulted(13);
    this->SoundCueCookQualityIndex = -1;
    this->bRemoveDebugInfo = true;
    this->bFrameVignette = false;
}


