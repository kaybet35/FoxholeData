---@meta

---@class ABPArmoredCarMobilityW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Light_Turret UStaticMeshComponent
---@field SpotLight_Turret USpotLightComponent
---@field mainBody USkeletalMeshComponent
local ABPArmoredCarMobilityW_C = {}

---@param IsOn boolean
function ABPArmoredCarMobilityW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCarMobilityW_C:ExecuteUbergraph_BPArmoredCarMobilityW(EntryPoint) end


