---@meta

---@class ABayonetImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
ABayonetImpactEffect_C = {}

function ABayonetImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABayonetImpactEffect_C:ExecuteUbergraph_BayonetImpactEffect(EntryPoint) end


