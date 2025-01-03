---@meta

---@class AWaterExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
AWaterExplosion_C = {}

function AWaterExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AWaterExplosion_C:ExecuteUbergraph_WaterExplosion(EntryPoint) end


