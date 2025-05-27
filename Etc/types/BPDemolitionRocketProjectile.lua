---@meta

---@class ABPDemolitionRocketProjectile_C : ASpoolProjectile
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RocketLaunch_Cue UAudioComponent
---@field StaticMesh UStaticMeshComponent
ABPDemolitionRocketProjectile_C = {}

function ABPDemolitionRocketProjectile_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABPDemolitionRocketProjectile_C:ExecuteUbergraph_BPDemolitionRocketProjectile(EntryPoint) end


