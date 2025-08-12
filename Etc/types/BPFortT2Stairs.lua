---@meta

---@class ABPFortT2Stairs_C : AModificationTemplate
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Roof UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
local ABPFortT2Stairs_C = {}

function ABPFortT2Stairs_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPFortT2Stairs_C:ExecuteUbergraph_BPFortT2Stairs(EntryPoint) end


