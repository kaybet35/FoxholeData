---@meta

---@class ASatchelExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local ASatchelExplosion_C = {}

function ASatchelExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASatchelExplosion_C:ExecuteUbergraph_SatchelExplosion(EntryPoint) end


