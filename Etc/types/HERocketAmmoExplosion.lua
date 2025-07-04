---@meta

---@class AHERocketAmmoExplosion_C : ALightArtilleryExplosion_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field RotationCorrection USceneComponent
---@field ProjectileTickRate float
---@field ProjectileVelocity FVector
local AHERocketAmmoExplosion_C = {}

function AHERocketAmmoExplosion_C:ReceiveDestroyed() end
function AHERocketAmmoExplosion_C:BPDetonate() end
---@param ImpactVelocity FVector
---@param TimeUntilDetonation float
function AHERocketAmmoExplosion_C:BPTelegraphProjectile(ImpactVelocity, TimeUntilDetonation) end
function AHERocketAmmoExplosion_C:MoveProjectileStep() end
---@param EntryPoint int32
function AHERocketAmmoExplosion_C:ExecuteUbergraph_HERocketAmmoExplosion(EntryPoint) end


