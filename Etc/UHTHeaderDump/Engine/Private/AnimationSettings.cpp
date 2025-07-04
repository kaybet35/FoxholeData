#include "AnimationSettings.h"
#include "AnimCompress_BitwiseCompressOnly.h"

UAnimationSettings::UAnimationSettings() {
    this->CompressCommandletVersion = 2;
    this->KeyEndEffectorsMatchNameArray.AddDefaulted(6);
    this->DefaultCompressionAlgorithm = UAnimCompress_BitwiseCompressOnly::StaticClass();
    this->RotationCompressionFormat = ACF_Float96NoW;
    this->TranslationCompressionFormat = ACF_None;
    this->MaxCurveError = 0.00f;
    this->AlternativeCompressionThreshold = 1.00f;
    this->ForceRecompression = false;
    this->bOnlyCheckForMissingSkeletalMeshes = false;
    this->bForceBelowThreshold = false;
    this->bFirstRecompressUsingCurrentOrDefault = true;
    this->bRaiseMaxErrorToExisting = false;
    this->bTryExhaustiveSearch = false;
    this->bEnableSegmenting = true;
    this->bEnablePerformanceLog = false;
    this->bStripAnimationDataOnDedicatedServer = false;
    this->bTickAnimationOnSkeletalMeshInit = true;
}


