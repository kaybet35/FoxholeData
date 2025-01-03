---@meta

---@class ARPGExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
ARPGExplosion_C = {}

function ARPGExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ARPGExplosion_C:ExecuteUbergraph_RPGExplosion(EntryPoint) end


