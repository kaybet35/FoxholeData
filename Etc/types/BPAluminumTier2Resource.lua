---@meta

---@class ABPAluminumTier2Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_62B519224C5507AE0A01D49C7256BAC8 FVector
---@field Timeline_0__Direction_62B519224C5507AE0A01D49C7256BAC8 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPAluminumTier2Resource_C = {}

function ABPAluminumTier2Resource_C:Timeline_0__FinishedFunc() end
function ABPAluminumTier2Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPAluminumTier2Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPAluminumTier2Resource_C:ExecuteUbergraph_BPAluminumTier2Resource(EntryPoint) end


