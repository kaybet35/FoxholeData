---@meta

---@class AStaticArtilleryExplosion_C : AWarExplosionEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field RadialForce URadialForceComponent
AStaticArtilleryExplosion_C = {}

function AStaticArtilleryExplosion_C:BPDetonate() end
function AStaticArtilleryExplosion_C:BPTelegraph() end
---@param EntryPoint int32
function AStaticArtilleryExplosion_C:ExecuteUbergraph_StaticArtilleryExplosion(EntryPoint) end


