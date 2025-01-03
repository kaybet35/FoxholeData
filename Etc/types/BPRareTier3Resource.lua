---@meta

---@class ABPRareTier3Resource_C : AWorldResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource1 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_D15677884488CBB1935938BE52F03A0E FVector
---@field Timeline_0__Direction_D15677884488CBB1935938BE52F03A0E ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPRareTier3Resource_C = {}

function ABPRareTier3Resource_C:Timeline_0__FinishedFunc() end
function ABPRareTier3Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPRareTier3Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPRareTier3Resource_C:ExecuteUbergraph_BPRareTier3Resource(EntryPoint) end


