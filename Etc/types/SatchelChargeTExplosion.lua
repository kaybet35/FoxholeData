---@meta

---@class ASatchelChargeTExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local ASatchelChargeTExplosion_C = {}

function ASatchelChargeTExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASatchelChargeTExplosion_C:ExecuteUbergraph_SatchelChargeTExplosion(EntryPoint) end


