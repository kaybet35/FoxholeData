---@meta

---@class ABPFacilityRefineryCoal_C : AFacilityRefinery
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BPBuildFootprintBoxComponent1 UBPBuildFootprintBoxComponent_C
---@field BPBuildFootprintBoxComponent UBPBuildFootprintBoxComponent_C
---@field CoalRefineryConveyorBeltCoalPile UGeometryCacheComponent
---@field CoalRefineryConveyorBelt UGeometryCacheComponent
---@field PowerLineConnector UStaticMeshComponent
---@field ProducingSFX UWarAudioComponent
---@field PointLight2 UPointLightComponent
---@field PointLight1 UPointLightComponent
---@field FoundationDecal UDecalComponent
---@field Smoke UParticleSystemComponent
---@field MainMesh UStaticMeshComponent
local ABPFacilityRefineryCoal_C = {}

function ABPFacilityRefineryCoal_C:BPOnStateActive() end
function ABPFacilityRefineryCoal_C:BPOnStateInactive() end
---@param EntryPoint int32
function ABPFacilityRefineryCoal_C:ExecuteUbergraph_BPFacilityRefineryCoal(EntryPoint) end


