---@meta

---@class FAutoCompleteCommand
---@field Command FString
---@field Desc FString
local FAutoCompleteCommand = {}



---@class FGameModeName
---@field Name FString
---@field GameMode FSoftClassPath
local FGameModeName = {}



---@class UConsoleSettings : UObject
---@field MaxScrollbackSize int32
---@field ManualAutoCompleteList TArray<FAutoCompleteCommand>
---@field AutoCompleteMapPaths TArray<FString>
---@field BackgroundOpacityPercentage float
---@field bOrderTopToBottom boolean
---@field bDisplayHelpInAutoComplete boolean
---@field InputColor FColor
---@field HistoryColor FColor
---@field AutoCompleteCommandColor FColor
---@field AutoCompleteCVarColor FColor
---@field AutoCompleteFadedColor FColor
local UConsoleSettings = {}



---@class UGameMapsSettings : UObject
---@field LocalMapOptions FString
---@field TransitionMap FSoftObjectPath
---@field bUseSplitscreen boolean
---@field TwoPlayerSplitscreenLayout ETwoPlayerSplitScreenType::Type
---@field ThreePlayerSplitscreenLayout EThreePlayerSplitScreenType::Type
---@field FourPlayerSplitscreenLayout EFourPlayerSplitScreenType
---@field bOffsetPlayerGamepadIds boolean
---@field GameInstanceClass FSoftClassPath
---@field GameDefaultMap FSoftObjectPath
---@field ServerDefaultMap FSoftObjectPath
---@field GlobalDefaultGameMode FSoftClassPath
---@field GlobalDefaultServerGameMode FSoftClassPath
---@field GameModeMapPrefixes TArray<FGameModeName>
---@field GameModeClassAliases TArray<FGameModeName>
local UGameMapsSettings = {}

---@param bSkipFirstPlayer boolean
function UGameMapsSettings:SetSkipAssigningGamepadToPlayer1(bSkipFirstPlayer) end
---@return boolean
function UGameMapsSettings:GetSkipAssigningGamepadToPlayer1() end
---@return UGameMapsSettings
function UGameMapsSettings:GetGameMapsSettings() end


---@class UGameNetworkManagerSettings : UObject
---@field MinDynamicBandwidth int32
---@field MaxDynamicBandwidth int32
---@field TotalNetBandwidth int32
---@field BadPingThreshold int32
---@field bIsStandbyCheckingEnabled boolean
---@field StandbyRxCheatTime float
---@field StandbyTxCheatTime float
---@field PercentMissingForRxStandby float
---@field PercentMissingForTxStandby float
---@field PercentForBadPing float
---@field JoinInProgressStandbyWaitTime float
local UGameNetworkManagerSettings = {}



---@class UGameSessionSettings : UObject
---@field MaxSpectators int32
---@field MaxPlayers int32
---@field bRequiresPushToTalk boolean
local UGameSessionSettings = {}



---@class UGeneralEngineSettings : UObject
local UGeneralEngineSettings = {}


---@class UGeneralProjectSettings : UObject
---@field CompanyName FString
---@field CompanyDistinguishedName FString
---@field CopyrightNotice FString
---@field Description FString
---@field Homepage FString
---@field LicensingTerms FString
---@field PrivacyPolicy FString
---@field ProjectID FGuid
---@field ProjectName FString
---@field ProjectVersion FString
---@field SupportContact FString
---@field ProjectDisplayedTitle FText
---@field ProjectDebugTitleInfo FText
---@field bShouldWindowPreserveAspectRatio boolean
---@field bUseBorderlessWindow boolean
---@field bStartInVR boolean
---@field bStartInAR boolean
---@field bSupportAR boolean
---@field bAllowWindowResize boolean
---@field bAllowClose boolean
---@field bAllowMaximize boolean
---@field bAllowMinimize boolean
local UGeneralProjectSettings = {}



---@class UHudSettings : UObject
---@field bShowHUD boolean
---@field DebugDisplay TArray<FName>
local UHudSettings = {}



