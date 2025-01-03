---@meta

---@class ABattleTankAmmoExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
ABattleTankAmmoExplosion_C = {}

function ABattleTankAmmoExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABattleTankAmmoExplosion_C:ExecuteUbergraph_BattleTankAmmoExplosion(EntryPoint) end


