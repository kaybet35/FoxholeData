---@meta

---@class ABPScrapMine_C : AResourceMine
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NoBuildArea UBoxComponent
---@field ScrapPiece_07 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field ScrapPiece_06 UStaticMeshComponent
---@field Sparks UParticleSystemComponent
---@field Steam UParticleSystemComponent
---@field ScrapPile UParticleSystemComponent
---@field Scrap UParticleSystemComponent
---@field Level2Light UPointLightComponent
---@field ProducingSFX UAudioComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
---@field FarmTools_Shovel UStaticMeshComponent
---@field Level2Smoke UParticleSystemComponent
---@field Level2 USkeletalMeshComponent
---@field StaticMesh5 UStaticMeshComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field Wheelbarrow UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field Decal UDecalComponent
---@field PointLight UPointLightComponent
---@field Level1Smoke UParticleSystemComponent
---@field MineMesh USkeletalMeshComponent
---@field ConveyerSpeed float
---@field ConveyerTranslation float
---@field ConveyerMaterial UMaterialInstanceDynamic
---@field bIsProducingSFXActive boolean
local ABPScrapMine_C = {}

function ABPScrapMine_C:ReceiveBeginPlay() end
function ABPScrapMine_C:UpdateVisuals_FastTick() end
function ABPScrapMine_C:UpdateVisuals_SlowTick() end
---@param EntryPoint int32
function ABPScrapMine_C:ExecuteUbergraph_BPScrapMine(EntryPoint) end


