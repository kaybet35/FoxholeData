---@meta

---@class ABPRareTier2Resource_C : AWorldResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource1 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_A5CB40B741E00B21F046AF871574E2BF FVector
---@field Timeline_0__Direction_A5CB40B741E00B21F046AF871574E2BF ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPRareTier2Resource_C = {}

function ABPRareTier2Resource_C:Timeline_0__FinishedFunc() end
function ABPRareTier2Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPRareTier2Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPRareTier2Resource_C:ExecuteUbergraph_BPRareTier2Resource(EntryPoint) end


