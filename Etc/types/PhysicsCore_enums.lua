---@enum EChaosBufferMode
local EChaosBufferMode = {
    Double = 0,
    Triple = 1,
    Num = 2,
    Invalid = 3,
    EChaosBufferMode_MAX = 4,
}

---@enum EChaosSolverTickMode
local EChaosSolverTickMode = {
    Fixed = 0,
    Variable = 1,
    VariableCapped = 2,
    VariableCappedWithTarget = 3,
    EChaosSolverTickMode_MAX = 4,
}

---@enum EChaosThreadingMode
local EChaosThreadingMode = {
    DedicatedThread = 0,
    TaskGraph = 1,
    SingleThread = 2,
    Num = 3,
    Invalid = 4,
    EChaosThreadingMode_MAX = 5,
}

