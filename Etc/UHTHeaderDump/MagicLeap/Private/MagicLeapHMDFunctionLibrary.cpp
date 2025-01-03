#include "MagicLeapHMDFunctionLibrary.h"

UMagicLeapHMDFunctionLibrary::UMagicLeapHMDFunctionLibrary() {
}

void UMagicLeapHMDFunctionLibrary::SetStabilizationDepthActor(const AActor* InStabilizationDepthActor, bool bSetFocusActor) {
}

void UMagicLeapHMDFunctionLibrary::SetFocusActor(const AActor* InFocusActor, bool bSetStabilizationActor) {
}

void UMagicLeapHMDFunctionLibrary::SetBaseRotation(const FRotator& InBaseRotation) {
}

void UMagicLeapHMDFunctionLibrary::SetBasePosition(const FVector& InBasePosition) {
}

void UMagicLeapHMDFunctionLibrary::SetBaseOrientation(const FQuat& InBaseOrientation) {
}

bool UMagicLeapHMDFunctionLibrary::SetAppReady() {
    return false;
}

bool UMagicLeapHMDFunctionLibrary::IsRunningOnMagicLeapHMD() {
    return false;
}

int32 UMagicLeapHMDFunctionLibrary::GetMLSDKVersionRevision() {
    return 0;
}

int32 UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMinor() {
    return 0;
}

int32 UMagicLeapHMDFunctionLibrary::GetMLSDKVersionMajor() {
    return 0;
}

FString UMagicLeapHMDFunctionLibrary::GetMLSDKVersion() {
    return TEXT("");
}

bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingState(FMagicLeapHeadTrackingState& State) {
    return false;
}

bool UMagicLeapHMDFunctionLibrary::GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents) {
    return false;
}


