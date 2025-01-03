---@meta

---@class ABPCopperTier2Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_D8BBADF741143162658E83B495E14EB4 FVector
---@field Timeline_0__Direction_D8BBADF741143162658E83B495E14EB4 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPCopperTier2Resource_C = {}

function ABPCopperTier2Resource_C:Timeline_0__FinishedFunc() end
function ABPCopperTier2Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPCopperTier2Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPCopperTier2Resource_C:ExecuteUbergraph_BPCopperTier2Resource(EntryPoint) end


