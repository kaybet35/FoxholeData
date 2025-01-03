---@meta

---@class ABPItemStash_C : AItemStash
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackpackPickup UStaticMeshComponent
ABPItemStash_C = {}

---@param VisualTeamId int32
function ABPItemStash_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPItemStash_C:ExecuteUbergraph_BPItemStash(EntryPoint) end


