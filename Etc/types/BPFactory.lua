---@meta

---@class ABPFactory_C : ASpecializedFactory
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PointLight UPointLightComponent
---@field PointLight2 UPointLightComponent
---@field Flag UStaticMeshComponent
---@field Decal UDecalComponent
---@field ProducingSFX UAudioComponent
---@field FactorySmallArms UStaticMeshComponent
---@field FactoryMedical UStaticMeshComponent
---@field FactoryUtilityFacility UStaticMeshComponent
---@field FactorySuppliesFacility UStaticMeshComponent
---@field FactorySpecialWeaponsFacility UStaticMeshComponent
---@field Smoke UParticleSystemComponent
---@field Smoke1 UParticleSystemComponent
---@field CampsiteDirt UDecalComponent
---@field Decal2 UDecalComponent
---@field BasicFacility UStaticMeshComponent
---@field PointLight1 UPointLightComponent
---@field Pipes_04 UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field StaticMesh2 UStaticMeshComponent
---@field FoodCrate UStaticMeshComponent
---@field MultiplexedStaticMesh UMultiplexedStaticMeshComponent
---@field Workshop UStaticMeshComponent
---@field bIsProducingSFXActive boolean
ABPFactory_C = {}

function ABPFactory_C:UpdateVisuals_SlowTick() end
function ABPFactory_C:ReceiveBeginPlay() end
---@param VisualTeamId int32
function ABPFactory_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPFactory_C:ExecuteUbergraph_BPFactory(EntryPoint) end


