---@enum EMagicLeapIdentityError
local EMagicLeapIdentityError = {
    Ok = 0,
    InvalidParam = 1,
    AllocFailed = 2,
    PrivilegeDenied = 3,
    FailedToConnectToLocalService = 4,
    FailedToConnectToCloudService = 5,
    CloudAuthentication = 6,
    InvalidInformationFromCloud = 7,
    NotLoggedIn = 8,
    ExpiredCredentials = 9,
    FailedToGetUserProfile = 10,
    Unauthorized = 11,
    CertificateError = 12,
    RejectedByCloud = 13,
    AlreadyLoggedIn = 14,
    ModifyIsNotSupported = 15,
    NetworkError = 16,
    UnspecifiedFailure = 17,
    EMagicLeapIdentityError_MAX = 18,
}

---@enum EMagicLeapIdentityKey
local EMagicLeapIdentityKey = {
    GivenName = 0,
    FamilyName = 1,
    Email = 2,
    Bio = 3,
    PhoneNumber = 4,
    Avatar2D = 5,
    Avatar3D = 6,
    Unknown = 7,
    EMagicLeapIdentityKey_MAX = 8,
}

