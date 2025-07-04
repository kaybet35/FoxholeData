---@meta

---@class ABPMortarTankExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local ABPMortarTankExplosion_C = {}

function ABPMortarTankExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPMortarTankExplosion_C:ExecuteUbergraph_BPMortarTankExplosion(EntryPoint) end


