---@meta

---@class ABPOilResource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource1 UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_AAC7D47F4777C9656C25519A5ECF757D FVector
---@field Timeline_0__Direction_AAC7D47F4777C9656C25519A5ECF757D ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPOilResource_C = {}

---@param IsEnabled boolean
---@param Mesh UStaticMeshComponent
function ABPOilResource_C:SetEnabled(IsEnabled, Mesh) end
function ABPOilResource_C:Timeline_0__FinishedFunc() end
function ABPOilResource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPOilResource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPOilResource_C:ExecuteUbergraph_BPOilResource(EntryPoint) end


