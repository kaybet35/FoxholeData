---@meta

---@class ABPAluminumTier3Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_48E1375A4CA81D0D75C2F683D3EE951A FVector
---@field Timeline_0__Direction_48E1375A4CA81D0D75C2F683D3EE951A ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPAluminumTier3Resource_C = {}

function ABPAluminumTier3Resource_C:Timeline_0__FinishedFunc() end
function ABPAluminumTier3Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPAluminumTier3Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPAluminumTier3Resource_C:ExecuteUbergraph_BPAluminumTier3Resource(EntryPoint) end


