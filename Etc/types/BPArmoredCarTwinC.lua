---@meta

---@class ABPArmoredCarTwinC_C : ABPArmoredCarBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PayloadStaticMesh1 UPayloadStaticMeshComponent
---@field PayloadStaticMesh0 UPayloadStaticMeshComponent
ABPArmoredCarTwinC_C = {}

---@param IsOn boolean
function ABPArmoredCarTwinC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCarTwinC_C:ExecuteUbergraph_BPArmoredCarTwinC(EntryPoint) end


