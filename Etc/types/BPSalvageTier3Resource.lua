---@meta

---@class ABPSalvageTier3Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource3 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_5064DE3341293F8853A6419B6E1370FA FVector
---@field Timeline_0__Direction_5064DE3341293F8853A6419B6E1370FA ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPSalvageTier3Resource_C = {}

function ABPSalvageTier3Resource_C:Timeline_0__FinishedFunc() end
function ABPSalvageTier3Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPSalvageTier3Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPSalvageTier3Resource_C:ExecuteUbergraph_BPSalvageTier3Resource(EntryPoint) end


