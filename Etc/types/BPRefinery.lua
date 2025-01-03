---@meta

---@class ABPRefinery_C : ARefinery
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BPLoadingAreaBox UBPLoadingAreaBox_C
---@field StaticMesh15 UStaticMeshComponent
---@field StaticMesh13 UStaticMeshComponent
---@field StaticMesh12 UStaticMeshComponent
---@field StaticMesh10 UStaticMeshComponent
---@field StaticMesh9 UStaticMeshComponent
---@field StaticMesh8 UStaticMeshComponent
---@field StaticMesh14 UStaticMeshComponent
---@field StaticMesh16 UStaticMeshComponent
---@field ChildActor UChildActorComponent
---@field ChildActor1 UChildActorComponent
---@field StaticMesh11 UStaticMeshComponent
---@field StaticMesh7 UStaticMeshComponent
---@field Flag UStaticMeshComponent
---@field FmatsPacked UStaticMeshComponent
---@field PointLight4 UPointLightComponent
---@field PointLight UPointLightComponent
---@field SpotLight USpotLightComponent
---@field PointLight1 UPointLightComponent
---@field ProducingSFX UAudioComponent
---@field Decal2 UDecalComponent
---@field Decal1 UDecalComponent
---@field BasicCrates UStaticMeshComponent
---@field EmatsPacked UStaticMeshComponent
---@field BmatsPacked UStaticMeshComponent
---@field RmatsPacked UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field BulwarkKeepInteriorWheel UStaticMeshComponent
---@field StaticMesh6 UStaticMeshComponent
---@field StaticMesh5 UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
---@field DirtPatch UDecalComponent
---@field Tarp02 UStaticMeshComponent
---@field RefineryBuilding UStaticMeshComponent
---@field ParticleSystem UParticleSystemComponent
---@field bIsProducingSFXActive boolean
ABPRefinery_C = {}

function ABPRefinery_C:ReceiveBeginPlay() end
function ABPRefinery_C:UpdateVisuals_SlowTick() end
---@param VisualTeamId int32
function ABPRefinery_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPRefinery_C:ExecuteUbergraph_BPRefinery(EntryPoint) end


