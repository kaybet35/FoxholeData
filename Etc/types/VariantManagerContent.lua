---@meta

---@class ALevelVariantSetsActor : AActor
---@field LevelVariantSets FSoftObjectPath
ALevelVariantSetsActor = {}

---@param VariantSetName FString
---@param VariantName FString
---@return boolean
function ALevelVariantSetsActor:SwitchOnVariantByName(VariantSetName, VariantName) end
---@param VariantSetIndex int32
---@param VariantIndex int32
---@return boolean
function ALevelVariantSetsActor:SwitchOnVariantByIndex(VariantSetIndex, VariantIndex) end
---@param InVariantSets ULevelVariantSets
function ALevelVariantSetsActor:SetLevelVariantSets(InVariantSets) end
---@param bLoad boolean
---@return ULevelVariantSets
function ALevelVariantSetsActor:GetLevelVariantSets(bLoad) end


---@class ASwitchActor : AActor
---@field SceneComponent USceneComponent
ASwitchActor = {}

---@param OptionIndex int32
function ASwitchActor:SelectOption(OptionIndex) end
---@return int32
function ASwitchActor:GetSelectedOption() end
---@return TArray<AActor>
function ASwitchActor:GetOptions() end


---@class FCapturedPropSegment
---@field PropertyName FString
---@field PropertyIndex int32
---@field ComponentName FString
FCapturedPropSegment = {}



---@class FFunctionCaller
---@field FunctionName FName
FFunctionCaller = {}



---@class ULevelVariantSets : UObject
---@field DirectorClass UClass
---@field VariantSets TArray<UVariantSet>
ULevelVariantSets = {}

---@param VariantSetName FString
---@return UVariantSet
function ULevelVariantSets:GetVariantSetByName(VariantSetName) end
---@param VariantSetIndex int32
---@return UVariantSet
function ULevelVariantSets:GetVariantSet(VariantSetIndex) end
---@return int32
function ULevelVariantSets:GetNumVariantSets() end


---@class ULevelVariantSetsFunctionDirector : UObject
ULevelVariantSetsFunctionDirector = {}


---@class UPropertyValue : UObject
---@field Properties TArray<UProperty>
---@field PropertyIndices TArray<int32>
---@field CapturedPropSegments TArray<FCapturedPropSegment>
---@field FullDisplayString FString
---@field PropertySetterName FName
---@field PropertySetterParameterDefaults TMap<FString, FString>
---@field bHasRecordedData boolean
---@field LeafPropertyClass UClass
---@field ValueBytes TArray<uint8>
---@field PropCategory EPropertyValueCategory
UPropertyValue = {}

---@return boolean
function UPropertyValue:HasRecordedData() end
---@return FText
function UPropertyValue:GetPropertyTooltip() end
---@return FString
function UPropertyValue:GetFullDisplayString() end


---@class UPropertyValueColor : UPropertyValue
UPropertyValueColor = {}


---@class UPropertyValueMaterial : UPropertyValue
UPropertyValueMaterial = {}


---@class UPropertyValueOption : UPropertyValue
UPropertyValueOption = {}


---@class UPropertyValueTransform : UPropertyValue
UPropertyValueTransform = {}


---@class UPropertyValueVisibility : UPropertyValue
UPropertyValueVisibility = {}


---@class UVariant : UObject
---@field DisplayText FText
---@field ObjectBindings TArray<UVariantObjectBinding>
UVariant = {}

function UVariant:SwitchOn() end
---@param NewDisplayText FText
function UVariant:SetDisplayText(NewDisplayText) end
---@return int32
function UVariant:GetNumActors() end
---@return FText
function UVariant:GetDisplayText() end
---@param ActorIndex int32
---@return AActor
function UVariant:GetActor(ActorIndex) end


---@class UVariantObjectBinding : UObject
---@field ObjectPtr FSoftObjectPath
---@field LazyObjectPtr TLazyObjectPtr<UObject>
---@field CapturedProperties TArray<UPropertyValue>
---@field FunctionCallers TArray<FFunctionCaller>
UVariantObjectBinding = {}



---@class UVariantSet : UObject
---@field DisplayText FText
---@field bExpanded boolean
---@field Variants TArray<UVariant>
UVariantSet = {}

---@param NewDisplayText FText
function UVariantSet:SetDisplayText(NewDisplayText) end
---@param VariantName FString
---@return UVariant
function UVariantSet:GetVariantByName(VariantName) end
---@param VariantIndex int32
---@return UVariant
function UVariantSet:GetVariant(VariantIndex) end
---@return int32
function UVariantSet:GetNumVariants() end
---@return FText
function UVariantSet:GetDisplayText() end

