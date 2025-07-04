---@meta

---@class AFireRocketAmmoExplosion_C : ALightArtilleryExplosion_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SkeletalMesh USkeletalMeshComponent
---@field RotationCorrection USceneComponent
---@field ProjectileTickRate float
---@field ProjectileVelocity FVector
local AFireRocketAmmoExplosion_C = {}

function AFireRocketAmmoExplosion_C:ReceiveDestroyed() end
function AFireRocketAmmoExplosion_C:BPDetonate() end
---@param ImpactVelocity FVector
---@param TimeUntilDetonation float
function AFireRocketAmmoExplosion_C:BPTelegraphProjectile(ImpactVelocity, TimeUntilDetonation) end
function AFireRocketAmmoExplosion_C:MoveProjectileStep() end
---@param EntryPoint int32
function AFireRocketAmmoExplosion_C:ExecuteUbergraph_FireRocketAmmoExplosion(EntryPoint) end


