---@meta

---@class ARevolverImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
ARevolverImpactEffect_C = {}

function ARevolverImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ARevolverImpactEffect_C:ExecuteUbergraph_RevolverImpactEffect(EntryPoint) end


