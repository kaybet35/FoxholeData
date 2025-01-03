---@meta

---@class ABPRareMetalTier2Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_91201087486291F7A6D3F2BE86928E6B FVector
---@field Timeline_0__Direction_91201087486291F7A6D3F2BE86928E6B ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPRareMetalTier2Resource_C = {}

function ABPRareMetalTier2Resource_C:Timeline_0__FinishedFunc() end
function ABPRareMetalTier2Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPRareMetalTier2Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPRareMetalTier2Resource_C:ExecuteUbergraph_BPRareMetalTier2Resource(EntryPoint) end


