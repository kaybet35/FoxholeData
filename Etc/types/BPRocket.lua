---@meta

---@class ABPRocket_C : ARocket
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
local ABPRocket_C = {}

function ABPRocket_C:BPBeginLaunch() end
---@param EntryPoint int32
function ABPRocket_C:ExecuteUbergraph_BPRocket(EntryPoint) end


