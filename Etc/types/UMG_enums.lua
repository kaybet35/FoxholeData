---@enum EBindingKind
local EBindingKind = {
    Function = 0,
    Property = 1,
    EBindingKind_MAX = 2,
}

---@enum EDragPivot
local EDragPivot = {
    MouseDown = 0,
    TopLeft = 1,
    TopCenter = 2,
    TopRight = 3,
    CenterLeft = 4,
    CenterCenter = 5,
    CenterRight = 6,
    BottomLeft = 7,
    BottomCenter = 8,
    BottomRight = 9,
    EDragPivot_MAX = 10,
}

---@enum EDynamicBoxType
local EDynamicBoxType = {
    Horizontal = 0,
    Vertical = 1,
    Wrap = 2,
    Overlay = 3,
    EDynamicBoxType_MAX = 4,
}

---@enum ESlateAccessibleBehavior
local ESlateAccessibleBehavior = {
    NotAccessible = 0,
    Auto = 1,
    Summary = 2,
    Custom = 3,
    ToolTip = 4,
    ESlateAccessibleBehavior_MAX = 5,
}

---@enum ESlateSizeRule
local ESlateSizeRule = {
    Automatic = 0,
    Fill = 1,
    ESlateSizeRule_MAX = 2,
}

---@enum ESlateVisibility
local ESlateVisibility = {
    Visible = 0,
    Collapsed = 1,
    Hidden = 2,
    HitTestInvisible = 3,
    SelfHitTestInvisible = 4,
    ESlateVisibility_MAX = 5,
}

---@enum EUMGSequencePlayMode
local EUMGSequencePlayMode = {
    Forward = 0,
    Reverse = 1,
    PingPong = 2,
    EUMGSequencePlayMode_MAX = 3,
}

---@enum EVirtualKeyboardType
local EVirtualKeyboardType = {
    Default = 0,
    Number = 1,
    Web = 2,
    Email = 3,
    Password = 4,
    AlphaNumeric = 5,
    EVirtualKeyboardType_MAX = 6,
}

---@enum EWidgetAnimationEvent
local EWidgetAnimationEvent = {
    Started = 0,
    Finished = 1,
    EWidgetAnimationEvent_MAX = 2,
}

---@enum EWidgetBlendMode
local EWidgetBlendMode = {
    Opaque = 0,
    Masked = 1,
    Transparent = 2,
    EWidgetBlendMode_MAX = 3,
}

---@enum EWidgetDesignFlags
local EWidgetDesignFlags = {
    None = 0,
    Designing = 1,
    ShowOutline = 2,
    ExecutePreConstruct = 4,
    EWidgetDesignFlags_MAX = 5,
}

---@enum EWidgetGeometryMode
local EWidgetGeometryMode = {
    Plane = 0,
    Cylinder = 1,
    EWidgetGeometryMode_MAX = 2,
}

---@enum EWidgetInteractionSource
local EWidgetInteractionSource = {
    World = 0,
    Mouse = 1,
    CenterScreen = 2,
    Custom = 3,
    EWidgetInteractionSource_MAX = 4,
}

---@enum EWidgetSpace
local EWidgetSpace = {
    World = 0,
    Screen = 1,
    EWidgetSpace_MAX = 2,
}

---@enum EWidgetTickFrequency
local EWidgetTickFrequency = {
    Never = 0,
    Auto = 1,
    EWidgetTickFrequency_MAX = 2,
}

---@enum EWidgetTimingPolicy
local EWidgetTimingPolicy = {
    RealTime = 0,
    GameTime = 1,
    EWidgetTimingPolicy_MAX = 2,
}

---@enum EWindowVisibility
local EWindowVisibility = {
    Visible = 0,
    SelfHitTestInvisible = 1,
    EWindowVisibility_MAX = 2,
}

