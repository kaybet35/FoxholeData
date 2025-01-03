---@meta

---@class ABPIronTier2Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_86B9AEC34F6CFB200404708237754396 FVector
---@field Timeline_0__Direction_86B9AEC34F6CFB200404708237754396 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPIronTier2Resource_C = {}

function ABPIronTier2Resource_C:Timeline_0__FinishedFunc() end
function ABPIronTier2Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPIronTier2Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPIronTier2Resource_C:ExecuteUbergraph_BPIronTier2Resource(EntryPoint) end


