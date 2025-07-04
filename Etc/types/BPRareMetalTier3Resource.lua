---@meta

---@class ABPRareMetalTier3Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_4F960DA3486951035C0E76961D5E0E34 FVector
---@field Timeline_0__Direction_4F960DA3486951035C0E76961D5E0E34 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPRareMetalTier3Resource_C = {}

function ABPRareMetalTier3Resource_C:Timeline_0__FinishedFunc() end
function ABPRareMetalTier3Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPRareMetalTier3Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPRareMetalTier3Resource_C:ExecuteUbergraph_BPRareMetalTier3Resource(EntryPoint) end


