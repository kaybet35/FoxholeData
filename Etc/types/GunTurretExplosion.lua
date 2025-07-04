---@meta

---@class AGunTurretExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
local AGunTurretExplosion_C = {}

function AGunTurretExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGunTurretExplosion_C:ExecuteUbergraph_GunTurretExplosion(EntryPoint) end


