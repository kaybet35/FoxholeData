---@meta

---@class ABPLandingCraftBaseC_C : ABPLandingCraftBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight1 USpotLightComponent
---@field StaticMesh1 UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field StaticMesh UStaticMeshComponent
local ABPLandingCraftBaseC_C = {}

---@param IsOn boolean
function ABPLandingCraftBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLandingCraftBaseC_C:ExecuteUbergraph_BPLandingCraftBaseC(EntryPoint) end


