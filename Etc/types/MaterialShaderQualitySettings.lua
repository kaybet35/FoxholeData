---@meta

---@class FMaterialQualityOverrides
---@field bDiscardQualityDuringCook boolean
---@field bEnableOverride boolean
---@field bForceFullyRough boolean
---@field bForceNonMetal boolean
---@field bForceDisableLMDirectionality boolean
---@field bForceLQReflections boolean
---@field bDisableMaterialNormalCalculation boolean
---@field MobileCSMQuality EMobileCSMQuality
local FMaterialQualityOverrides = {}



---@class UMaterialShaderQualitySettings : UObject
---@field ForwardSettingMap TMap<FName, UShaderPlatformQualitySettings>
local UMaterialShaderQualitySettings = {}



---@class UShaderPlatformQualitySettings : UObject
---@field QualityOverrides FMaterialQualityOverrides
local UShaderPlatformQualitySettings = {}



