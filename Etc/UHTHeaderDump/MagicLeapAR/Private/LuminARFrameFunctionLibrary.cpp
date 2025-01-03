#include "LuminARFrameFunctionLibrary.h"

ULuminARFrameFunctionLibrary::ULuminARFrameFunctionLibrary() {
}

bool ULuminARFrameFunctionLibrary::LuminARLineTrace(UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults) {
    return false;
}

ELuminARTrackingState ULuminARFrameFunctionLibrary::GetTrackingState() {
    return ELuminARTrackingState::Tracking;
}

void ULuminARFrameFunctionLibrary::GetLightEstimation(FLuminARLightEstimate& OutLightEstimate) {
}


