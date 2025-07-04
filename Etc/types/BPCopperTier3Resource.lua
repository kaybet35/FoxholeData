---@meta

---@class ABPCopperTier3Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_B8529EE84DCE7215791F80AC6435BA0D FVector
---@field Timeline_0__Direction_B8529EE84DCE7215791F80AC6435BA0D ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPCopperTier3Resource_C = {}

function ABPCopperTier3Resource_C:Timeline_0__FinishedFunc() end
function ABPCopperTier3Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPCopperTier3Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPCopperTier3Resource_C:ExecuteUbergraph_BPCopperTier3Resource(EntryPoint) end


