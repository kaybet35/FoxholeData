---@meta

---@class ACoastalGunExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
ACoastalGunExplosion_C = {}

function ACoastalGunExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACoastalGunExplosion_C:ExecuteUbergraph_CoastalGunExplosion(EntryPoint) end


