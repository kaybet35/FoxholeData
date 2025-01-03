#include "MagicLeapIdentity.h"

UMagicLeapIdentity::UMagicLeapIdentity() {
}

EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(const TArray<EMagicLeapIdentityKey>& RequestedAttributeList, const UMagicLeapIdentity::FRequestIdentityAttributeValueDelegate& ResultDelegate) {
    return EMagicLeapIdentityError::Ok;
}

EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(const TArray<EMagicLeapIdentityKey>& RequestedAttributeList, TArray<FMagicLeapIdentityAttribute>& RequestedAttributeValues) {
    return EMagicLeapIdentityError::Ok;
}

void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const UMagicLeapIdentity::FAvailableIdentityAttributesDelegate& ResultDelegate) {
}

EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>& AvailableAttributes) {
    return EMagicLeapIdentityError::Ok;
}


