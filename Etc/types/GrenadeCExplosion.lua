---@meta

---@class AGrenadeCExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AGrenadeCExplosion_C = {}

function AGrenadeCExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGrenadeCExplosion_C:ExecuteUbergraph_GrenadeCExplosion(EntryPoint) end


