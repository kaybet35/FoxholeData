---@meta

---@class AShotgunImpactEffect_C : AImpactEffect
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialForce URadialForceComponent
---@field DefaultSceneRoot USceneComponent
local AShotgunImpactEffect_C = {}

function AShotgunImpactEffect_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AShotgunImpactEffect_C:ExecuteUbergraph_ShotgunImpactEffect(EntryPoint) end


