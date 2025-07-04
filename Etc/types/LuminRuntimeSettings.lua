---@meta

---@class FLuminComponentElement
---@field Name FString
---@field VisibleName FString
---@field ExecutableName FString
---@field ComponentType ELuminComponentType
---@field ExtraComponentSubElements TArray<FLuminComponentSubElement>
local FLuminComponentElement = {}



---@class FLuminComponentSubElement
---@field ElementType ELuminComponentSubElementType
---@field Value FString
local FLuminComponentSubElement = {}



---@class ULuminRuntimeSettings : UObject
---@field PackageName FString
---@field ApplicationDisplayName FString
---@field bIsScreensApp boolean
---@field FrameTimingHint ELuminFrameTimingHint
---@field bProtectedContent boolean
---@field bUseMobileRendering boolean
---@field bUseVulkan boolean
---@field Certificate FFilePath
---@field IconModelPath FDirectoryPath
---@field IconPortalPath FDirectoryPath
---@field VersionCode int32
---@field MinimumAPILevel int32
---@field AppPrivileges TArray<ELuminPrivilege>
---@field ExtraComponentSubElements TArray<FLuminComponentSubElement>
---@field ExtraComponentElements TArray<FLuminComponentElement>
---@field SpatializationPlugin FString
---@field ReverbPlugin FString
---@field OcclusionPlugin FString
---@field SoundCueCookQualityIndex int32
---@field bRemoveDebugInfo boolean
---@field VulkanValidationLayerLibs FDirectoryPath
---@field bFrameVignette boolean
local ULuminRuntimeSettings = {}



