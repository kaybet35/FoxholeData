#include "AnimCompress_Automatic.h"

UAnimCompress_Automatic::UAnimCompress_Automatic() {
    this->Description = TEXT("Automatic");
    this->MaxEndEffectorError = 1.00f;
    this->bRunCurrentDefaultCompressor = true;
    this->bAutoReplaceIfExistingErrorTooGreat = false;
    this->bRaiseMaxErrorToExisting = false;
    this->bTryExhaustiveSearch = false;
}


