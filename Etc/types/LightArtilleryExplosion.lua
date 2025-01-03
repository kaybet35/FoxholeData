---@meta

---@class ALightArtilleryExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RadialForce URadialForceComponent
ALightArtilleryExplosion_C = {}

function ALightArtilleryExplosion_C:BPDetonate() end
function ALightArtilleryExplosion_C:BPTelegraph() end
---@param EntryPoint int32
function ALightArtilleryExplosion_C:ExecuteUbergraph_LightArtilleryExplosion(EntryPoint) end


