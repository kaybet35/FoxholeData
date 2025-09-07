#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Clapfoot Inc.");
    this->CompanyDistinguishedName = TEXT("CN=Clapfoot, O=Clapfoot, L=Toronto, S=Ontario, C=CA");
    this->CopyrightNotice = TEXT("Copyright Clapfoot Inc");
    this->ProjectName = TEXT("Foxhole Prototype");
    this->ProjectVersion = TEXT("1.62.11.1");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("{GameName}"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bStartInAR = false;
    this->bSupportAR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}


