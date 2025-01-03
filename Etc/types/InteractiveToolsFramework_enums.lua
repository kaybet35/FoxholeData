---@enum EInputCaptureRequestType
EInputCaptureRequestType = {
    Begin = 1,
    Ignore = 2,
    EInputCaptureRequestType_MAX = 3,
}

---@enum EInputCaptureSide
EInputCaptureSide = {
    None = 0,
    Left = 1,
    Right = 2,
    Both = 3,
    Any = 99,
    EInputCaptureSide_MAX = 100,
}

---@enum EInputCaptureState
EInputCaptureState = {
    Begin = 1,
    Continue = 2,
    End = 3,
    Ignore = 4,
    EInputCaptureState_MAX = 5,
}

---@enum EInputDevices
EInputDevices = {
    None = 0,
    Keyboard = 1,
    Mouse = 2,
    Gamepad = 4,
    OculusTouch = 8,
    HTCViveWands = 16,
    AnySpatialDevice = 24,
    TabletFingers = 1024,
    EInputDevices_MAX = 1025,
}

---@enum ESceneSnapQueryTargetType
ESceneSnapQueryTargetType = {
    None = 0,
    MeshVertex = 1,
    MeshEdge = 2,
    All = 3,
    ESceneSnapQueryTargetType_MAX = 4,
}

---@enum ESceneSnapQueryType
ESceneSnapQueryType = {
    Position = 1,
    ESceneSnapQueryType_MAX = 2,
}

---@enum ESelectedObjectsModificationType
ESelectedObjectsModificationType = {
    Replace = 0,
    Add = 1,
    Remove = 2,
    Clear = 3,
    ESelectedObjectsModificationType_MAX = 4,
}

---@enum EStandardToolContextMaterials
EStandardToolContextMaterials = {
    VertexColorMaterial = 1,
    EStandardToolContextMaterials_MAX = 2,
}

---@enum EToolContextCoordinateSystem
EToolContextCoordinateSystem = {
    World = 0,
    Local = 1,
    EToolContextCoordinateSystem_MAX = 2,
}

---@enum EToolMessageLevel
EToolMessageLevel = {
    Internal = 0,
    UserMessage = 1,
    UserNotification = 2,
    UserWarning = 3,
    UserError = 4,
    EToolMessageLevel_MAX = 5,
}

---@enum EToolSide
EToolSide = {
    Left = 1,
    Mouse = 1,
    Right = 2,
    EToolSide_MAX = 3,
}

---@enum ETransformGizmoSubElements
ETransformGizmoSubElements = {
    None = 0,
    TranslateAxisX = 1,
    TranslateAxisY = 2,
    TranslateAxisZ = 4,
    TranslateAllAxes = 7,
    TranslatePlaneXY = 8,
    TranslatePlaneXZ = 16,
    TranslatePlaneYZ = 32,
    TranslateAllPlanes = 56,
    RotateAxisX = 64,
    RotateAxisY = 128,
    RotateAxisZ = 256,
    RotateAllAxes = 448,
    StanedardTranslateRotate = 511,
    ETransformGizmoSubElements_MAX = 512,
}

