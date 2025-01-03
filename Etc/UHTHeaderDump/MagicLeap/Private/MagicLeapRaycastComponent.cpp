#include "MagicLeapRaycastComponent.h"

UMagicLeapRaycastComponent::UMagicLeapRaycastComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

bool UMagicLeapRaycastComponent::RequestRaycast(const FMagicLeapRaycastQueryParams& RequestParams, const UMagicLeapRaycastComponent::FRaycastResultDelegate& ResultDelegate) {
    return false;
}


