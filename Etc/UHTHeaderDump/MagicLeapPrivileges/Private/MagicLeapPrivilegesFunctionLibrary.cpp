#include "MagicLeapPrivilegesFunctionLibrary.h"

UMagicLeapPrivilegesFunctionLibrary::UMagicLeapPrivilegesFunctionLibrary() {
}

bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(EMagicLeapPrivilege Privilege, const FMagicLeapPrivilegeRequestDelegate& ResultDelegate) {
    return false;
}

bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilege(EMagicLeapPrivilege Privilege) {
    return false;
}

bool UMagicLeapPrivilegesFunctionLibrary::CheckPrivilege(EMagicLeapPrivilege Privilege) {
    return false;
}


