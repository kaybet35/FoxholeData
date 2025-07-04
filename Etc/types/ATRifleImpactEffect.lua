---@meta

---@class AATRifleImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
local AATRifleImpactEffect_C = {}

function AATRifleImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AATRifleImpactEffect_C:ExecuteUbergraph_ATRifleImpactEffect(EntryPoint) end


