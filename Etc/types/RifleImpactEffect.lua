---@meta

---@class ARifleImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
ARifleImpactEffect_C = {}

function ARifleImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ARifleImpactEffect_C:ExecuteUbergraph_RifleImpactEffect(EntryPoint) end


