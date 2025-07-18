---@meta

---@class ABPComponentMine_C : AResourceMine
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NoBuildArea UBoxComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field ScrapPiece_06 UStaticMeshComponent
---@field ScrapPile UParticleSystemComponent
---@field Scrap UParticleSystemComponent
---@field Level2Light UPointLightComponent
---@field ProducingSFX UAudioComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
---@field Level2Smoke UParticleSystemComponent
---@field Level2 USkeletalMeshComponent
---@field Wheelbarrow UStaticMeshComponent
---@field Decal UDecalComponent
---@field PointLight UPointLightComponent
---@field Level1Smoke UParticleSystemComponent
---@field MineMesh USkeletalMeshComponent
---@field ConveyerSpeed float
---@field ConveyerTranslation float
---@field ConveyerMaterial UMaterialInstanceDynamic
---@field bIsProducingSFXActive boolean
local ABPComponentMine_C = {}

function ABPComponentMine_C:ReceiveBeginPlay() end
function ABPComponentMine_C:UpdateVisuals_FastTick() end
function ABPComponentMine_C:UpdateVisuals_SlowTick() end
---@param EntryPoint int32
function ABPComponentMine_C:ExecuteUbergraph_BPComponentMine(EntryPoint) end


---@class UPLACEHOLDER-CLASS__ABP_ComponentMine_C_2147482258
local UPLACEHOLDER-CLASS__ABP_ComponentMine_C_2147482258 = {}


