---@meta

---@class ABPLandingCraftBaseW_C : ABPLandingCraftBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight USpotLightComponent
---@field StaticMesh UStaticMeshComponent
ABPLandingCraftBaseW_C = {}

---@param IsOn boolean
function ABPLandingCraftBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLandingCraftBaseW_C:ExecuteUbergraph_BPLandingCraftBaseW(EntryPoint) end


