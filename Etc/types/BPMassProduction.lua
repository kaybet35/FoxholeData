---@meta

---@class ABPMassProduction_C : AMassProductionFactory
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PointLight2 UPointLightComponent
---@field SpotLight USpotLightComponent
---@field SpotLight2 USpotLightComponent
---@field PointLight UPointLightComponent
---@field StaticMesh9 UStaticMeshComponent
---@field ChildActor1 UChildActorComponent
---@field StaticMesh8 UStaticMeshComponent
---@field StaticMesh7 UStaticMeshComponent
---@field StaticMesh6 UStaticMeshComponent
---@field StaticMesh5 UStaticMeshComponent
---@field ChildActor UChildActorComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field Flag UStaticMeshComponent
---@field ProducingSFX UAudioComponent
---@field Smoke UParticleSystemComponent
---@field Decal2 UDecalComponent
---@field PointLight1 UPointLightComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
---@field FactoryMesh UStaticMeshComponent
---@field bIsProducingSFXActive boolean
local ABPMassProduction_C = {}

---@param FacilityMesh UStaticMeshComponent
---@param IsVisible boolean
function ABPMassProduction_C:SetFacilityVisibility(FacilityMesh, IsVisible) end
function ABPMassProduction_C:UpdateVisuals_SlowTick() end
function ABPMassProduction_C:ReceiveBeginPlay() end
---@param VisualTeamId int32
function ABPMassProduction_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPMassProduction_C:ExecuteUbergraph_BPMassProduction(EntryPoint) end


