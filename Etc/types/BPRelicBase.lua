---@meta

---@class ABPRelicBase_C : ARelicBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Flag4 UStaticMeshComponent
---@field Flag3 UStaticMeshComponent
---@field Flag2 UStaticMeshComponent
---@field Flag UStaticMeshComponent
---@field ViewTargetCamera UCameraComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
local ABPRelicBase_C = {}

---@param VisualTeamId int32
function ABPRelicBase_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPRelicBase_C:ExecuteUbergraph_BPRelicBase(EntryPoint) end


