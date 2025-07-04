---@enum ELuminARAvailability
local ELuminARAvailability = {
    UnknownError = 0,
    SupportedInstalled = 200,
    ELuminARAvailability_MAX = 201,
}

---@enum ELuminARFunctionStatus
local ELuminARFunctionStatus = {
    Success = 0,
    Fatal = 1,
    SessionPaused = 2,
    NotTracking = 3,
    ResourceExhausted = 4,
    NotAvailable = 5,
    InvalidType = 6,
    Unknown = 7,
    ELuminARFunctionStatus_MAX = 8,
}

---@enum ELuminARLineTraceChannel
local ELuminARLineTraceChannel = {
    None = 0,
    FeaturePoint = 1,
    InfinitePlane = 2,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
    FeaturePointWithSurfaceNormal = 16,
    ELuminARLineTraceChannel_MAX = 17,
}

---@enum ELuminARTrackingState
local ELuminARTrackingState = {
    Tracking = 0,
    NotTracking = 1,
    StoppedTracking = 2,
    ELuminARTrackingState_MAX = 3,
}

