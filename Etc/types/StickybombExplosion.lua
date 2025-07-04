---@meta

---@class AStickybombExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AStickybombExplosion_C = {}

function AStickybombExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AStickybombExplosion_C:ExecuteUbergraph_StickybombExplosion(EntryPoint) end


