---@meta

---@class ADemolitionRocketAmmoExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
ADemolitionRocketAmmoExplosion_C = {}

function ADemolitionRocketAmmoExplosion_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ADemolitionRocketAmmoExplosion_C:ExecuteUbergraph_DemolitionRocketAmmoExplosion(EntryPoint) end


