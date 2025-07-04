---@enum EInAppPurchaseState
local EInAppPurchaseState = {
    Unknown = 0,
    Success = 1,
    Failed = 2,
    Cancelled = 3,
    Invalid = 4,
    NotAllowed = 5,
    Restored = 6,
    AlreadyOwned = 7,
    EInAppPurchaseState_MAX = 8,
}

---@enum EMPMatchOutcome
local EMPMatchOutcome = {
    None = 0,
    Quit = 1,
    Won = 2,
    Lost = 3,
    Tied = 4,
    TimeExpired = 5,
    First = 6,
    Second = 7,
    Third = 8,
    Fourth = 9,
    EMPMatchOutcome_MAX = 10,
}

---@enum EOnlineAuthBanReason
local EOnlineAuthBanReason = {
    AutomatedSystemBan = 0,
    SystemBanCheckTimedOut = 1,
    GameBan = 2,
    NotBanned = 3,
    EOnlineAuthBanReason_MAX = 4,
}

