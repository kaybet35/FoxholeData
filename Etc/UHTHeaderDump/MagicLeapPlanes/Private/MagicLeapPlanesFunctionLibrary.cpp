#include "MagicLeapPlanesFunctionLibrary.h"

UMagicLeapPlanesFunctionLibrary::UMagicLeapPlanesFunctionLibrary() {
}

void UMagicLeapPlanesFunctionLibrary::ReorderPlaneFlags(const TArray<EMagicLeapPlaneQueryFlags>& InPriority, const TArray<EMagicLeapPlaneQueryFlags>& InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>& OutReorderedFlags) {
}

void UMagicLeapPlanesFunctionLibrary::RemoveFlagsNotInQuery(const TArray<EMagicLeapPlaneQueryFlags>& InQueryFlags, const TArray<EMagicLeapPlaneQueryFlags>& InResultFlags, TArray<EMagicLeapPlaneQueryFlags>& OutFlags) {
}

bool UMagicLeapPlanesFunctionLibrary::PlanesQueryBeginAsync(const FMagicLeapPlanesQuery& Query, const FMagicLeapPlanesResultDelegate& ResultDelegate) {
    return false;
}

bool UMagicLeapPlanesFunctionLibrary::IsTrackerValid() {
    return false;
}

FTransform UMagicLeapPlanesFunctionLibrary::GetContentScale(const AActor* ContentActor, const FMagicLeapPlaneResult& PlaneResult) {
    return FTransform{};
}

bool UMagicLeapPlanesFunctionLibrary::DestroyTracker() {
    return false;
}

bool UMagicLeapPlanesFunctionLibrary::CreateTracker() {
    return false;
}


