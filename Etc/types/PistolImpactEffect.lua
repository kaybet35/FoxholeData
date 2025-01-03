---@meta

---@class APistolImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
APistolImpactEffect_C = {}

function APistolImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function APistolImpactEffect_C:ExecuteUbergraph_PistolImpactEffect(EntryPoint) end


