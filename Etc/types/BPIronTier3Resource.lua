---@meta

---@class ABPIronTier3Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_E3EB68194880B8D36AF392ABBDC88D1C FVector
---@field Timeline_0__Direction_E3EB68194880B8D36AF392ABBDC88D1C ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPIronTier3Resource_C = {}

function ABPIronTier3Resource_C:Timeline_0__FinishedFunc() end
function ABPIronTier3Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPIronTier3Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPIronTier3Resource_C:ExecuteUbergraph_BPIronTier3Resource(EntryPoint) end


