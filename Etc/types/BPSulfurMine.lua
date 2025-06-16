---@meta

---@class ABPSulfurMine_C : AResourceMine
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NoBuildArea UBoxComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
---@field SulfurSteam2 UParticleSystemComponent
---@field Steam UParticleSystemComponent
---@field Light UParticleSystemComponent
---@field PointLight1 UPointLightComponent
---@field ProducingSFX UAudioComponent
---@field Decal3 UDecalComponent
---@field SulfurResource02 UStaticMeshComponent
---@field StaticMesh10 UStaticMeshComponent
---@field StaticMesh9 UStaticMeshComponent
---@field StaticMesh7 UStaticMeshComponent
---@field StaticMesh6 UStaticMeshComponent
---@field Wheelbarrow UStaticMeshComponent
---@field FarmTools_Shovel UStaticMeshComponent
---@field StaticMesh8 UStaticMeshComponent
---@field PointLight UPointLightComponent
---@field Sulfur UStaticMeshComponent
---@field SulfurSmoke UParticleSystemComponent
---@field SulfurResource03 UStaticMeshComponent
---@field StaticMesh5 UStaticMeshComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field Decal UDecalComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field BaseStone UStaticMeshComponent
---@field Smoke UParticleSystemComponent
---@field Level2 USkeletalMeshComponent
---@field MineMesh USkeletalMeshComponent
---@field bIsProducingSFXActive boolean
ABPSulfurMine_C = {}

function ABPSulfurMine_C:UpdateVisuals_FastTick() end
function ABPSulfurMine_C:ReceiveBeginPlay() end
function ABPSulfurMine_C:UpdateVisuals_SlowTick() end
---@param EntryPoint int32
function ABPSulfurMine_C:ExecuteUbergraph_BPSulfurMine(EntryPoint) end


---@class UPLACEHOLDER-CLASS__ABP_SulfurMine_C_2147482253
UPLACEHOLDER-CLASS__ABP_SulfurMine_C_2147482253 = {}


