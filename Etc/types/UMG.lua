---@meta

---@class FAnchorData
---@field Offsets FMargin
---@field Anchors FAnchors
---@field Alignment FVector2D
local FAnchorData = {}



---@class FAnimationEventBinding
---@field Animation UWidgetAnimation
---@field Delegate FAnimationEventBindingDelegate
---@field AnimationEvent EWidgetAnimationEvent
---@field UserTag FName
local FAnimationEventBinding = {}



---@class FBlueprintWidgetAnimationDelegateBinding
---@field Action EWidgetAnimationEvent
---@field AnimationToBind FName
---@field FunctionNameToBind FName
---@field UserTag FName
local FBlueprintWidgetAnimationDelegateBinding = {}



---@class FDelegateRuntimeBinding
---@field ObjectName FString
---@field PropertyName FName
---@field FunctionName FName
---@field SourcePath FDynamicPropertyPath
---@field Kind EBindingKind
local FDelegateRuntimeBinding = {}



---@class FDynamicPropertyPath : FCachedPropertyPath
local FDynamicPropertyPath = {}


---@class FEventReply
local FEventReply = {}


---@class FMovieScene2DTransformMask
---@field Mask uint32
local FMovieScene2DTransformMask = {}



---@class FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate
---@field Translation FMovieSceneFloatChannel
---@field Rotation FMovieSceneFloatChannel
---@field Scale FMovieSceneFloatChannel
---@field Shear FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
---@field Mask FMovieScene2DTransformMask
local FMovieScene2DTransformSectionTemplate = {}



---@class FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate
---@field TopCurve FMovieSceneFloatChannel
---@field LeftCurve FMovieSceneFloatChannel
---@field RightCurve FMovieSceneFloatChannel
---@field BottomCurve FMovieSceneFloatChannel
---@field BlendType EMovieSceneBlendType
local FMovieSceneMarginSectionTemplate = {}



---@class FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
---@field BrushPropertyNamePath TArray<FName>
local FMovieSceneWidgetMaterialSectionTemplate = {}



---@class FNamedSlotBinding
---@field Name FName
---@field Content UWidget
local FNamedSlotBinding = {}



---@class FPaintContext
local FPaintContext = {}


---@class FRichImageRow : FTableRowBase
---@field Brush FSlateBrush
local FRichImageRow = {}



---@class FRichTextStyleRow : FTableRowBase
---@field TextStyle FTextBlockStyle
local FRichTextStyleRow = {}



---@class FShapedTextOptions
---@field bOverride_TextShapingMethod boolean
---@field bOverride_TextFlowDirection boolean
---@field TextShapingMethod ETextShapingMethod
---@field TextFlowDirection ETextFlowDirection
local FShapedTextOptions = {}



---@class FSlateChildSize
---@field Value float
---@field SizeRule ESlateSizeRule::Type
local FSlateChildSize = {}



---@class FSlateMeshVertex
---@field Position FVector2D
---@field Color FColor
---@field UV0 FVector2D
---@field UV1 FVector2D
---@field UV2 FVector2D
---@field UV3 FVector2D
---@field UV4 FVector2D
---@field UV5 FVector2D
local FSlateMeshVertex = {}



---@class FUserWidgetPool
---@field ActiveWidgets TArray<UUserWidget>
---@field InactiveWidgets TArray<UUserWidget>
local FUserWidgetPool = {}



---@class FWidgetAnimationBinding
---@field WidgetName FName
---@field SlotWidgetName FName
---@field AnimationGuid FGuid
---@field bIsRootWidget boolean
local FWidgetAnimationBinding = {}



---@class FWidgetComponentInstanceData : FSceneComponentInstanceData
local FWidgetComponentInstanceData = {}


---@class FWidgetNavigationData
---@field Rule EUINavigationRule
---@field WidgetToFocus FName
---@field Widget TWeakObjectPtr<UWidget>
---@field CustomDelegate FWidgetNavigationDataCustomDelegate
local FWidgetNavigationData = {}



---@class FWidgetTransform
---@field Translation FVector2D
---@field Scale FVector2D
---@field Shear FVector2D
---@field Angle float
local FWidgetTransform = {}



---@class INamedSlotInterface : IInterface
local INamedSlotInterface = {}


---@class IUserListEntry : IInterface
local IUserListEntry = {}

---@param bIsSelected boolean
function IUserListEntry:BP_OnItemSelectionChanged(bIsSelected) end
---@param bIsExpanded boolean
function IUserListEntry:BP_OnItemExpansionChanged(bIsExpanded) end
function IUserListEntry:BP_OnEntryReleased() end


---@class IUserObjectListEntry : IUserListEntry
local IUserObjectListEntry = {}

---@param ListItemObject UObject
function IUserObjectListEntry:OnListItemObjectSet(ListItemObject) end


---@class UAsyncTaskDownloadImage : UBlueprintAsyncActionBase
---@field OnSuccess FAsyncTaskDownloadImageOnSuccess
---@field OnFail FAsyncTaskDownloadImageOnFail
local UAsyncTaskDownloadImage = {}

---@param URL FString
---@return UAsyncTaskDownloadImage
function UAsyncTaskDownloadImage:DownloadImage(URL) end


---@class UBackgroundBlur : UContentWidget
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
---@field bApplyAlphaToBlur boolean
---@field BlurStrength float
---@field bOverrideAutoRadiusCalculation boolean
---@field BlurRadius int32
---@field LowQualityFallbackBrush FSlateBrush
local UBackgroundBlur = {}

---@param InVerticalAlignment EVerticalAlignment
function UBackgroundBlur:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UBackgroundBlur:SetPadding(InPadding) end
---@param InBrush FSlateBrush
function UBackgroundBlur:SetLowQualityFallbackBrush(InBrush) end
---@param InHorizontalAlignment EHorizontalAlignment
function UBackgroundBlur:SetHorizontalAlignment(InHorizontalAlignment) end
---@param InStrength float
function UBackgroundBlur:SetBlurStrength(InStrength) end
---@param InBlurRadius int32
function UBackgroundBlur:SetBlurRadius(InBlurRadius) end
---@param bInApplyAlphaToBlur boolean
function UBackgroundBlur:SetApplyAlphaToBlur(bInApplyAlphaToBlur) end


---@class UBackgroundBlurSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UBackgroundBlurSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UBackgroundBlurSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UBackgroundBlurSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UBackgroundBlurSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UBoolBinding : UPropertyBinding
local UBoolBinding = {}

---@return boolean
function UBoolBinding:GetValue() end


---@class UBorder : UContentWidget
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
---@field bShowEffectWhenDisabled boolean
---@field ContentColorAndOpacity FLinearColor
---@field ContentColorAndOpacityDelegate FBorderContentColorAndOpacityDelegate
---@field Padding FMargin
---@field Background FSlateBrush
---@field BackgroundDelegate FBorderBackgroundDelegate
---@field BrushColor FLinearColor
---@field BrushColorDelegate FBorderBrushColorDelegate
---@field DesiredSizeScale FVector2D
---@field bFlipForRightToLeftFlowDirection boolean
---@field OnMouseButtonDownEvent FBorderOnMouseButtonDownEvent
---@field OnMouseButtonUpEvent FBorderOnMouseButtonUpEvent
---@field OnMouseMoveEvent FBorderOnMouseMoveEvent
---@field OnMouseDoubleClickEvent FBorderOnMouseDoubleClickEvent
local UBorder = {}

---@param InVerticalAlignment EVerticalAlignment
function UBorder:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UBorder:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UBorder:SetHorizontalAlignment(InHorizontalAlignment) end
---@param InScale FVector2D
function UBorder:SetDesiredSizeScale(InScale) end
---@param InContentColorAndOpacity FLinearColor
function UBorder:SetContentColorAndOpacity(InContentColorAndOpacity) end
---@param Texture UTexture2D
function UBorder:SetBrushFromTexture(Texture) end
---@param Material UMaterialInterface
function UBorder:SetBrushFromMaterial(Material) end
---@param Asset USlateBrushAsset
function UBorder:SetBrushFromAsset(Asset) end
---@param InBrushColor FLinearColor
function UBorder:SetBrushColor(InBrushColor) end
---@param InBrush FSlateBrush
function UBorder:SetBrush(InBrush) end
---@return UMaterialInstanceDynamic
function UBorder:GetDynamicMaterial() end


---@class UBorderSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UBorderSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UBorderSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UBorderSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UBorderSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UBrushBinding : UPropertyBinding
local UBrushBinding = {}

---@return FSlateBrush
function UBrushBinding:GetValue() end


---@class UButton : UContentWidget
---@field Style USlateWidgetStyleAsset
---@field WidgetStyle FButtonStyle
---@field ColorAndOpacity FLinearColor
---@field BackgroundColor FLinearColor
---@field ClickMethod EButtonClickMethod::Type
---@field TouchMethod EButtonTouchMethod::Type
---@field PressMethod EButtonPressMethod::Type
---@field IsFocusable boolean
---@field OnClicked FButtonOnClicked
---@field OnPressed FButtonOnPressed
---@field OnReleased FButtonOnReleased
---@field OnHovered FButtonOnHovered
---@field OnUnhovered FButtonOnUnhovered
local UButton = {}

---@param InTouchMethod EButtonTouchMethod::Type
function UButton:SetTouchMethod(InTouchMethod) end
---@param InStyle FButtonStyle
function UButton:SetStyle(InStyle) end
---@param InPressMethod EButtonPressMethod::Type
function UButton:SetPressMethod(InPressMethod) end
---@param InColorAndOpacity FLinearColor
function UButton:SetColorAndOpacity(InColorAndOpacity) end
---@param InClickMethod EButtonClickMethod::Type
function UButton:SetClickMethod(InClickMethod) end
---@param InBackgroundColor FLinearColor
function UButton:SetBackgroundColor(InBackgroundColor) end
---@return boolean
function UButton:IsPressed() end


---@class UButtonSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UButtonSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UButtonSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UButtonSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UButtonSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UCanvasPanel : UPanelWidget
local UCanvasPanel = {}

---@param Content UWidget
---@return UCanvasPanelSlot
function UCanvasPanel:AddChildToCanvas(Content) end


---@class UCanvasPanelSlot : UPanelSlot
---@field LayoutData FAnchorData
---@field bAutoSize boolean
---@field ZOrder int32
local UCanvasPanelSlot = {}

---@param InZOrder int32
function UCanvasPanelSlot:SetZOrder(InZOrder) end
---@param InSize FVector2D
function UCanvasPanelSlot:SetSize(InSize) end
---@param InPosition FVector2D
function UCanvasPanelSlot:SetPosition(InPosition) end
---@param InOffset FMargin
function UCanvasPanelSlot:SetOffsets(InOffset) end
---@param InMinimumAnchors FVector2D
function UCanvasPanelSlot:SetMinimum(InMinimumAnchors) end
---@param InMaximumAnchors FVector2D
function UCanvasPanelSlot:SetMaximum(InMaximumAnchors) end
---@param InLayoutData FAnchorData
function UCanvasPanelSlot:SetLayout(InLayoutData) end
---@param InbAutoSize boolean
function UCanvasPanelSlot:SetAutoSize(InbAutoSize) end
---@param InAnchors FAnchors
function UCanvasPanelSlot:SetAnchors(InAnchors) end
---@param InAlignment FVector2D
function UCanvasPanelSlot:SetAlignment(InAlignment) end
---@return int32
function UCanvasPanelSlot:GetZOrder() end
---@return FVector2D
function UCanvasPanelSlot:GetSize() end
---@return FVector2D
function UCanvasPanelSlot:GetPosition() end
---@return FMargin
function UCanvasPanelSlot:GetOffsets() end
---@return FAnchorData
function UCanvasPanelSlot:GetLayout() end
---@return boolean
function UCanvasPanelSlot:GetAutoSize() end
---@return FAnchors
function UCanvasPanelSlot:GetAnchors() end
---@return FVector2D
function UCanvasPanelSlot:GetAlignment() end


---@class UCheckBox : UContentWidget
---@field CheckedState ECheckBoxState
---@field CheckedStateDelegate FCheckBoxCheckedStateDelegate
---@field WidgetStyle FCheckBoxStyle
---@field Style USlateWidgetStyleAsset
---@field UncheckedImage USlateBrushAsset
---@field UncheckedHoveredImage USlateBrushAsset
---@field UncheckedPressedImage USlateBrushAsset
---@field CheckedImage USlateBrushAsset
---@field CheckedHoveredImage USlateBrushAsset
---@field CheckedPressedImage USlateBrushAsset
---@field UndeterminedImage USlateBrushAsset
---@field UndeterminedHoveredImage USlateBrushAsset
---@field UndeterminedPressedImage USlateBrushAsset
---@field HorizontalAlignment EHorizontalAlignment
---@field Padding FMargin
---@field BorderBackgroundColor FSlateColor
---@field IsFocusable boolean
---@field OnCheckStateChanged FCheckBoxOnCheckStateChanged
local UCheckBox = {}

---@param InIsChecked boolean
function UCheckBox:SetIsChecked(InIsChecked) end
---@param InCheckedState ECheckBoxState
function UCheckBox:SetCheckedState(InCheckedState) end
---@return boolean
function UCheckBox:IsPressed() end
---@return boolean
function UCheckBox:IsChecked() end
---@return ECheckBoxState
function UCheckBox:GetCheckedState() end


---@class UCheckedStateBinding : UPropertyBinding
local UCheckedStateBinding = {}

---@return ECheckBoxState
function UCheckedStateBinding:GetValue() end


---@class UCircularThrobber : UWidget
---@field NumberOfPieces int32
---@field Period float
---@field Radius float
---@field PieceImage USlateBrushAsset
---@field Image FSlateBrush
---@field bEnableRadius boolean
local UCircularThrobber = {}

---@param InRadius float
function UCircularThrobber:SetRadius(InRadius) end
---@param InPeriod float
function UCircularThrobber:SetPeriod(InPeriod) end
---@param InNumberOfPieces int32
function UCircularThrobber:SetNumberOfPieces(InNumberOfPieces) end


---@class UColorBinding : UPropertyBinding
local UColorBinding = {}

---@return FSlateColor
function UColorBinding:GetSlateValue() end
---@return FLinearColor
function UColorBinding:GetLinearValue() end


---@class UComboBox : UWidget
---@field Items TArray<UObject>
---@field OnGenerateWidgetEvent FComboBoxOnGenerateWidgetEvent
---@field bIsFocusable boolean
local UComboBox = {}



---@class UComboBoxString : UWidget
---@field DefaultOptions TArray<FString>
---@field SelectedOption FString
---@field WidgetStyle FComboBoxStyle
---@field ItemStyle FTableRowStyle
---@field ContentPadding FMargin
---@field MaxListHeight float
---@field HasDownArrow boolean
---@field EnableGamepadNavigationMode boolean
---@field Font FSlateFontInfo
---@field ForegroundColor FSlateColor
---@field bIsFocusable boolean
---@field OnGenerateWidgetEvent FComboBoxStringOnGenerateWidgetEvent
---@field OnSelectionChanged FComboBoxStringOnSelectionChanged
---@field OnOpening FComboBoxStringOnOpening
local UComboBoxString = {}

---@param Option FString
function UComboBoxString:SetSelectedOption(Option) end
---@param Index int32
function UComboBoxString:SetSelectedIndex(Index) end
---@param Option FString
---@return boolean
function UComboBoxString:RemoveOption(Option) end
function UComboBoxString:RefreshOptions() end
---@param SelectedItem FString
---@param SelectionType ESelectInfo::Type
function UComboBoxString:OnSelectionChangedEvent__DelegateSignature(SelectedItem, SelectionType) end
function UComboBoxString:OnOpeningEvent__DelegateSignature() end
---@return boolean
function UComboBoxString:IsOpen() end
---@return FString
function UComboBoxString:GetSelectedOption() end
---@return int32
function UComboBoxString:GetSelectedIndex() end
---@return int32
function UComboBoxString:GetOptionCount() end
---@param Index int32
---@return FString
function UComboBoxString:GetOptionAtIndex(Index) end
---@param Option FString
---@return int32
function UComboBoxString:FindOptionIndex(Option) end
function UComboBoxString:ClearSelection() end
function UComboBoxString:ClearOptions() end
---@param Option FString
function UComboBoxString:AddOption(Option) end


---@class UContentWidget : UPanelWidget
local UContentWidget = {}

---@param Content UWidget
---@return UPanelSlot
function UContentWidget:SetContent(Content) end
---@return UPanelSlot
function UContentWidget:GetContentSlot() end
---@return UWidget
function UContentWidget:GetContent() end


---@class UDefault__WidgetBlueprintGeneratedClass
local UDefault__WidgetBlueprintGeneratedClass = {}


---@class UDragDropOperation : UObject
---@field Tag FString
---@field Payload UObject
---@field DefaultDragVisual UWidget
---@field Pivot EDragPivot
---@field Offset FVector2D
---@field OnDrop FDragDropOperationOnDrop
---@field OnDragCancelled FDragDropOperationOnDragCancelled
---@field OnDragged FDragDropOperationOnDragged
local UDragDropOperation = {}

---@param PointerEvent FPointerEvent
function UDragDropOperation:Drop(PointerEvent) end
---@param PointerEvent FPointerEvent
function UDragDropOperation:Dragged(PointerEvent) end
---@param PointerEvent FPointerEvent
function UDragDropOperation:DragCancelled(PointerEvent) end


---@class UDynamicEntryBox : UDynamicEntryBoxBase
---@field EntryWidgetClass TSubclassOf<UUserWidget>
local UDynamicEntryBox = {}

---@param bDeleteWidgets boolean
function UDynamicEntryBox:Reset(bDeleteWidgets) end
---@param EntryWidget UUserWidget
function UDynamicEntryBox:RemoveEntry(EntryWidget) end
---@param EntryClass TSubclassOf<UUserWidget>
---@return UUserWidget
function UDynamicEntryBox:BP_CreateEntryOfClass(EntryClass) end
---@return UUserWidget
function UDynamicEntryBox:BP_CreateEntry() end


---@class UDynamicEntryBoxBase : UWidget
---@field EntryBoxType EDynamicBoxType
---@field EntrySpacing FVector2D
---@field SpacingPattern TArray<FVector2D>
---@field EntrySizeRule FSlateChildSize
---@field EntryHorizontalAlignment EHorizontalAlignment
---@field EntryVerticalAlignment EVerticalAlignment
---@field MaxElementSize int32
---@field EntryWidgetPool FUserWidgetPool
local UDynamicEntryBoxBase = {}

---@param InEntrySpacing FVector2D
function UDynamicEntryBoxBase:SetEntrySpacing(InEntrySpacing) end
---@return int32
function UDynamicEntryBoxBase:GetNumEntries() end
---@return TArray<UUserWidget>
function UDynamicEntryBoxBase:GetAllEntries() end


---@class UEditableText : UWidget
---@field Text FText
---@field TextDelegate FEditableTextTextDelegate
---@field HintText FText
---@field HintTextDelegate FEditableTextHintTextDelegate
---@field WidgetStyle FEditableTextStyle
---@field Style USlateWidgetStyleAsset
---@field BackgroundImageSelected USlateBrushAsset
---@field BackgroundImageComposing USlateBrushAsset
---@field CaretImage USlateBrushAsset
---@field Font FSlateFontInfo
---@field ColorAndOpacity FSlateColor
---@field IsReadOnly boolean
---@field IsPassword boolean
---@field MinimumDesiredWidth float
---@field IsCaretMovedWhenGainFocus boolean
---@field SelectAllTextWhenFocused boolean
---@field RevertTextOnEscape boolean
---@field ClearKeyboardFocusOnCommit boolean
---@field SelectAllTextOnCommit boolean
---@field AllowContextMenu boolean
---@field KeyboardType EVirtualKeyboardType::Type
---@field VirtualKeyboardOptions FVirtualKeyboardOptions
---@field VirtualKeyboardDismissAction EVirtualKeyboardDismissAction
---@field Justification ETextJustify::Type
---@field ShapedTextOptions FShapedTextOptions
---@field OnTextChanged FEditableTextOnTextChanged
---@field OnTextCommitted FEditableTextOnTextCommitted
local UEditableText = {}

---@param InText FText
function UEditableText:SetText(InText) end
---@param InJustification ETextJustify::Type
function UEditableText:SetJustification(InJustification) end
---@param InbIsReadyOnly boolean
function UEditableText:SetIsReadOnly(InbIsReadyOnly) end
---@param InbIsPassword boolean
function UEditableText:SetIsPassword(InbIsPassword) end
---@param InHintText FText
function UEditableText:SetHintText(InHintText) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UEditableText:OnEditableTextCommittedEvent__DelegateSignature(Text, CommitMethod) end
---@param Text FText
function UEditableText:OnEditableTextChangedEvent__DelegateSignature(Text) end
---@return FText
function UEditableText:GetText() end


---@class UEditableTextBox : UWidget
---@field Text FText
---@field TextDelegate FEditableTextBoxTextDelegate
---@field WidgetStyle FEditableTextBoxStyle
---@field Style USlateWidgetStyleAsset
---@field HintText FText
---@field HintTextDelegate FEditableTextBoxHintTextDelegate
---@field Font FSlateFontInfo
---@field ForegroundColor FLinearColor
---@field BackgroundColor FLinearColor
---@field ReadOnlyForegroundColor FLinearColor
---@field IsReadOnly boolean
---@field IsPassword boolean
---@field MinimumDesiredWidth float
---@field Padding FMargin
---@field IsCaretMovedWhenGainFocus boolean
---@field SelectAllTextWhenFocused boolean
---@field RevertTextOnEscape boolean
---@field ClearKeyboardFocusOnCommit boolean
---@field SelectAllTextOnCommit boolean
---@field AllowContextMenu boolean
---@field KeyboardType EVirtualKeyboardType::Type
---@field VirtualKeyboardOptions FVirtualKeyboardOptions
---@field VirtualKeyboardDismissAction EVirtualKeyboardDismissAction
---@field Justification ETextJustify::Type
---@field ShapedTextOptions FShapedTextOptions
---@field OnTextChanged FEditableTextBoxOnTextChanged
---@field OnTextCommitted FEditableTextBoxOnTextCommitted
local UEditableTextBox = {}

---@param InText FText
function UEditableTextBox:SetText(InText) end
---@param InJustification ETextJustify::Type
function UEditableTextBox:SetJustification(InJustification) end
---@param bReadOnly boolean
function UEditableTextBox:SetIsReadOnly(bReadOnly) end
---@param bIsPassword boolean
function UEditableTextBox:SetIsPassword(bIsPassword) end
---@param InText FText
function UEditableTextBox:SetHintText(InText) end
---@param InError FText
function UEditableTextBox:SetError(InError) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UEditableTextBox:OnEditableTextBoxCommittedEvent__DelegateSignature(Text, CommitMethod) end
---@param Text FText
function UEditableTextBox:OnEditableTextBoxChangedEvent__DelegateSignature(Text) end
---@return boolean
function UEditableTextBox:HasError() end
---@return FText
function UEditableTextBox:GetText() end
function UEditableTextBox:ClearError() end


---@class UExpandableArea : UWidget
---@field Style FExpandableAreaStyle
---@field BorderBrush FSlateBrush
---@field BorderColor FSlateColor
---@field bIsExpanded boolean
---@field MaxHeight float
---@field HeaderPadding FMargin
---@field AreaPadding FMargin
---@field OnExpansionChanged FExpandableAreaOnExpansionChanged
---@field HeaderContent UWidget
---@field BodyContent UWidget
local UExpandableArea = {}

---@param IsExpanded boolean
function UExpandableArea:SetIsExpanded_Animated(IsExpanded) end
---@param IsExpanded boolean
function UExpandableArea:SetIsExpanded(IsExpanded) end
---@return boolean
function UExpandableArea:GetIsExpanded() end


---@class UFloatBinding : UPropertyBinding
local UFloatBinding = {}

---@return float
function UFloatBinding:GetValue() end


---@class UGridPanel : UPanelWidget
---@field ColumnFill TArray<float>
---@field RowFill TArray<float>
local UGridPanel = {}

---@param ColumnIndex int32
---@param Coefficient float
function UGridPanel:SetRowFill(ColumnIndex, Coefficient) end
---@param ColumnIndex int32
---@param Coefficient float
function UGridPanel:SetColumnFill(ColumnIndex, Coefficient) end
---@param Content UWidget
---@param InRow int32
---@param InColumn int32
---@return UGridSlot
function UGridPanel:AddChildToGrid(Content, InRow, InColumn) end


---@class UGridSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
---@field Row int32
---@field RowSpan int32
---@field Column int32
---@field ColumnSpan int32
---@field Layer int32
---@field Nudge FVector2D
local UGridSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UGridSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InRowSpan int32
function UGridSlot:SetRowSpan(InRowSpan) end
---@param InRow int32
function UGridSlot:SetRow(InRow) end
---@param InPadding FMargin
function UGridSlot:SetPadding(InPadding) end
---@param InNudge FVector2D
function UGridSlot:SetNudge(InNudge) end
---@param InLayer int32
function UGridSlot:SetLayer(InLayer) end
---@param InHorizontalAlignment EHorizontalAlignment
function UGridSlot:SetHorizontalAlignment(InHorizontalAlignment) end
---@param InColumnSpan int32
function UGridSlot:SetColumnSpan(InColumnSpan) end
---@param InColumn int32
function UGridSlot:SetColumn(InColumn) end


---@class UHorizontalBox : UPanelWidget
local UHorizontalBox = {}

---@param Content UWidget
---@return UHorizontalBoxSlot
function UHorizontalBox:AddChildToHorizontalBox(Content) end


---@class UHorizontalBoxSlot : UPanelSlot
---@field Padding FMargin
---@field Size FSlateChildSize
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UHorizontalBoxSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UHorizontalBoxSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InSize FSlateChildSize
function UHorizontalBoxSlot:SetSize(InSize) end
---@param InPadding FMargin
function UHorizontalBoxSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UHorizontalBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UImage : UWidget
---@field Brush FSlateBrush
---@field BrushDelegate FImageBrushDelegate
---@field ColorAndOpacity FLinearColor
---@field ColorAndOpacityDelegate FImageColorAndOpacityDelegate
---@field bFlipForRightToLeftFlowDirection boolean
---@field OnMouseButtonDownEvent FImageOnMouseButtonDownEvent
local UImage = {}

---@param InOpacity float
function UImage:SetOpacity(InOpacity) end
---@param InColorAndOpacity FLinearColor
function UImage:SetColorAndOpacity(InColorAndOpacity) end
---@param TintColor FSlateColor
function UImage:SetBrushTintColor(TintColor) end
---@param DesiredSize FVector2D
function UImage:SetBrushSize(DesiredSize) end
---@param ResourceObject UObject
function UImage:SetBrushResourceObject(ResourceObject) end
---@param Texture UTexture2DDynamic
---@param bMatchSize boolean
function UImage:SetBrushFromTextureDynamic(Texture, bMatchSize) end
---@param Texture UTexture2D
---@param bMatchSize boolean
function UImage:SetBrushFromTexture(Texture, bMatchSize) end
---@param SoftTexture TSoftObjectPtr<UTexture2D>
---@param bMatchSize boolean
function UImage:SetBrushFromSoftTexture(SoftTexture, bMatchSize) end
---@param SoftMaterial TSoftObjectPtr<UMaterialInterface>
function UImage:SetBrushFromSoftMaterial(SoftMaterial) end
---@param Material UMaterialInterface
function UImage:SetBrushFromMaterial(Material) end
---@param AtlasRegion TScriptInterface<ISlateTextureAtlasInterface>
---@param bMatchSize boolean
function UImage:SetBrushFromAtlasInterface(AtlasRegion, bMatchSize) end
---@param Asset USlateBrushAsset
function UImage:SetBrushFromAsset(Asset) end
---@param InBrush FSlateBrush
function UImage:SetBrush(InBrush) end
---@return UMaterialInstanceDynamic
function UImage:GetDynamicMaterial() end


---@class UInputKeySelector : UWidget
---@field WidgetStyle FButtonStyle
---@field TextStyle FTextBlockStyle
---@field SelectedKey FInputChord
---@field Font FSlateFontInfo
---@field Margin FMargin
---@field ColorAndOpacity FLinearColor
---@field KeySelectionText FText
---@field NoKeySpecifiedText FText
---@field bAllowModifierKeys boolean
---@field bAllowGamepadKeys boolean
---@field EscapeKeys TArray<FKey>
---@field OnKeySelected FInputKeySelectorOnKeySelected
---@field OnIsSelectingKeyChanged FInputKeySelectorOnIsSelectingKeyChanged
local UInputKeySelector = {}

---@param InVisibility ESlateVisibility
function UInputKeySelector:SetTextBlockVisibility(InVisibility) end
---@param InSelectedKey FInputChord
function UInputKeySelector:SetSelectedKey(InSelectedKey) end
---@param InNoKeySpecifiedText FText
function UInputKeySelector:SetNoKeySpecifiedText(InNoKeySpecifiedText) end
---@param InKeySelectionText FText
function UInputKeySelector:SetKeySelectionText(InKeySelectionText) end
---@param InKeys TArray<FKey>
function UInputKeySelector:SetEscapeKeys(InKeys) end
---@param bInAllowModifierKeys boolean
function UInputKeySelector:SetAllowModifierKeys(bInAllowModifierKeys) end
---@param bInAllowGamepadKeys boolean
function UInputKeySelector:SetAllowGamepadKeys(bInAllowGamepadKeys) end
---@param SelectedKey FInputChord
function UInputKeySelector:OnKeySelected__DelegateSignature(SelectedKey) end
function UInputKeySelector:OnIsSelectingKeyChanged__DelegateSignature() end
---@return boolean
function UInputKeySelector:GetIsSelectingKey() end


---@class UInt32Binding : UPropertyBinding
local UInt32Binding = {}

---@return int32
function UInt32Binding:GetValue() end


---@class UInvalidationBox : UContentWidget
---@field bCanCache boolean
---@field CacheRelativeTransforms boolean
local UInvalidationBox = {}

---@param CanCache boolean
function UInvalidationBox:SetCanCache(CanCache) end
function UInvalidationBox:InvalidateCache() end
---@return boolean
function UInvalidationBox:GetCanCache() end


---@class UListView : UListViewBase
---@field Orientation EOrientation
---@field SelectionMode ESelectionMode::Type
---@field ConsumeMouseWheel EConsumeMouseWheel
---@field bClearSelectionOnClick boolean
---@field bIsFocusable boolean
---@field EntrySpacing float
---@field bReturnFocusToSelection boolean
---@field ListItems TArray<UObject>
---@field BP_OnEntryInitialized FListViewBP_OnEntryInitialized
---@field BP_OnItemClicked FListViewBP_OnItemClicked
---@field BP_OnItemDoubleClicked FListViewBP_OnItemDoubleClicked
---@field BP_OnItemIsHoveredChanged FListViewBP_OnItemIsHoveredChanged
---@field BP_OnItemSelectionChanged FListViewBP_OnItemSelectionChanged
---@field BP_OnItemScrolledIntoView FListViewBP_OnItemScrolledIntoView
local UListView = {}

---@param SelectionMode ESelectionMode::Type
function UListView:SetSelectionMode(SelectionMode) end
---@param Index int32
function UListView:SetSelectedIndex(Index) end
---@param Index int32
function UListView:ScrollIndexIntoView(Index) end
---@param Item UObject
function UListView:RemoveItem(Item) end
---@param Index int32
function UListView:NavigateToIndex(Index) end
---@return boolean
function UListView:IsRefreshPending() end
---@return int32
function UListView:GetNumItems() end
---@return TArray<UObject>
function UListView:GetListItems() end
---@param Index int32
---@return UObject
function UListView:GetItemAt(Index) end
---@param Item UObject
---@return int32
function UListView:GetIndexForItem(Item) end
function UListView:ClearListItems() end
---@param Item UObject
function UListView:BP_SetSelectedItem(Item) end
---@param InListItems TArray<UObject>
function UListView:BP_SetListItems(InListItems) end
---@param Item UObject
---@param bSelected boolean
function UListView:BP_SetItemSelection(Item, bSelected) end
---@param Item UObject
function UListView:BP_ScrollItemIntoView(Item) end
---@param Item UObject
function UListView:BP_NavigateToItem(Item) end
---@param Item UObject
---@return boolean
function UListView:BP_IsItemVisible(Item) end
---@param Items TArray<UObject>
---@return boolean
function UListView:BP_GetSelectedItems(Items) end
---@return UObject
function UListView:BP_GetSelectedItem() end
---@return int32
function UListView:BP_GetNumItemsSelected() end
function UListView:BP_ClearSelection() end
function UListView:BP_CancelScrollIntoView() end
---@param Item UObject
function UListView:AddItem(Item) end


---@class UListViewBase : UWidget
---@field EntryWidgetClass TSubclassOf<UUserWidget>
---@field WheelScrollMultiplier float
---@field bEnableScrollAnimation boolean
---@field bEnableFixedLineOffset boolean
---@field FixedLineScrollOffset float
---@field BP_OnEntryGenerated FListViewBaseBP_OnEntryGenerated
---@field BP_OnEntryReleased FListViewBaseBP_OnEntryReleased
---@field EntryWidgetPool FUserWidgetPool
local UListViewBase = {}

---@param NewWheelScrollMultiplier float
function UListViewBase:SetWheelScrollMultiplier(NewWheelScrollMultiplier) end
---@param InScrollOffset float
function UListViewBase:SetScrollOffset(InScrollOffset) end
---@param InVisibility ESlateVisibility
function UListViewBase:SetScrollbarVisibility(InVisibility) end
function UListViewBase:ScrollToTop() end
function UListViewBase:ScrollToBottom() end
function UListViewBase:RequestRefresh() end
function UListViewBase:RegenerateAllEntries() end
---@return TArray<UUserWidget>
function UListViewBase:GetDisplayedEntryWidgets() end


---@class UListViewDesignerPreviewItem : UObject
local UListViewDesignerPreviewItem = {}


---@class UMenuAnchor : UContentWidget
---@field MenuClass TSubclassOf<UUserWidget>
---@field OnGetMenuContentEvent FMenuAnchorOnGetMenuContentEvent
---@field Placement EMenuPlacement
---@field bFitInWindow boolean
---@field ShouldDeferPaintingAfterWindowContent boolean
---@field UseApplicationMenuStack boolean
---@field OnMenuOpenChanged FMenuAnchorOnMenuOpenChanged
local UMenuAnchor = {}

---@param bFocusOnOpen boolean
function UMenuAnchor:ToggleOpen(bFocusOnOpen) end
---@return boolean
function UMenuAnchor:ShouldOpenDueToClick() end
---@param InPlacement EMenuPlacement
function UMenuAnchor:SetPlacement(InPlacement) end
---@param bFocusMenu boolean
function UMenuAnchor:Open(bFocusMenu) end
---@return boolean
function UMenuAnchor:IsOpen() end
---@return boolean
function UMenuAnchor:HasOpenSubMenus() end
---@return FVector2D
function UMenuAnchor:GetMenuPosition() end
---@param bFit boolean
function UMenuAnchor:FitInWindow(bFit) end
function UMenuAnchor:Close() end


---@class UMouseCursorBinding : UPropertyBinding
local UMouseCursorBinding = {}

---@return EMouseCursor::Type
function UMouseCursorBinding:GetValue() end


---@class UMovieScene2DTransformSection : UMovieSceneSection
---@field TransformMask FMovieScene2DTransformMask
---@field Translation FMovieSceneFloatChannel
---@field Rotation FMovieSceneFloatChannel
---@field Scale FMovieSceneFloatChannel
---@field Shear FMovieSceneFloatChannel
local UMovieScene2DTransformSection = {}



---@class UMovieScene2DTransformTrack : UMovieScenePropertyTrack
local UMovieScene2DTransformTrack = {}


---@class UMovieSceneMarginSection : UMovieSceneSection
---@field TopCurve FMovieSceneFloatChannel
---@field LeftCurve FMovieSceneFloatChannel
---@field RightCurve FMovieSceneFloatChannel
---@field BottomCurve FMovieSceneFloatChannel
local UMovieSceneMarginSection = {}



---@class UMovieSceneMarginTrack : UMovieScenePropertyTrack
local UMovieSceneMarginTrack = {}


---@class UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack
---@field BrushPropertyNamePath TArray<FName>
---@field TrackName FName
local UMovieSceneWidgetMaterialTrack = {}



---@class UMultiLineEditableText : UTextLayoutWidget
---@field Text FText
---@field HintText FText
---@field HintTextDelegate FMultiLineEditableTextHintTextDelegate
---@field WidgetStyle FTextBlockStyle
---@field bIsReadOnly boolean
---@field Font FSlateFontInfo
---@field SelectAllTextWhenFocused boolean
---@field ClearTextSelectionOnFocusLoss boolean
---@field RevertTextOnEscape boolean
---@field ClearKeyboardFocusOnCommit boolean
---@field AllowContextMenu boolean
---@field VirtualKeyboardOptions FVirtualKeyboardOptions
---@field VirtualKeyboardDismissAction EVirtualKeyboardDismissAction
---@field OnTextChanged FMultiLineEditableTextOnTextChanged
---@field OnTextCommitted FMultiLineEditableTextOnTextCommitted
local UMultiLineEditableText = {}

---@param InWidgetStyle FTextBlockStyle
function UMultiLineEditableText:SetWidgetStyle(InWidgetStyle) end
---@param InText FText
function UMultiLineEditableText:SetText(InText) end
---@param bReadOnly boolean
function UMultiLineEditableText:SetIsReadOnly(bReadOnly) end
---@param InHintText FText
function UMultiLineEditableText:SetHintText(InHintText) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UMultiLineEditableText:OnMultiLineEditableTextCommittedEvent__DelegateSignature(Text, CommitMethod) end
---@param Text FText
function UMultiLineEditableText:OnMultiLineEditableTextChangedEvent__DelegateSignature(Text) end
---@return FText
function UMultiLineEditableText:GetText() end
---@return FText
function UMultiLineEditableText:GetHintText() end


---@class UMultiLineEditableTextBox : UTextLayoutWidget
---@field Text FText
---@field HintText FText
---@field HintTextDelegate FMultiLineEditableTextBoxHintTextDelegate
---@field WidgetStyle FEditableTextBoxStyle
---@field TextStyle FTextBlockStyle
---@field bIsReadOnly boolean
---@field AllowContextMenu boolean
---@field VirtualKeyboardOptions FVirtualKeyboardOptions
---@field VirtualKeyboardDismissAction EVirtualKeyboardDismissAction
---@field Style USlateWidgetStyleAsset
---@field Font FSlateFontInfo
---@field ForegroundColor FLinearColor
---@field BackgroundColor FLinearColor
---@field ReadOnlyForegroundColor FLinearColor
---@field OnTextChanged FMultiLineEditableTextBoxOnTextChanged
---@field OnTextCommitted FMultiLineEditableTextBoxOnTextCommitted
local UMultiLineEditableTextBox = {}

---@param InTextStyle FTextBlockStyle
function UMultiLineEditableTextBox:SetTextStyle(InTextStyle) end
---@param InText FText
function UMultiLineEditableTextBox:SetText(InText) end
---@param bReadOnly boolean
function UMultiLineEditableTextBox:SetIsReadOnly(bReadOnly) end
---@param InHintText FText
function UMultiLineEditableTextBox:SetHintText(InHintText) end
---@param InError FText
function UMultiLineEditableTextBox:SetError(InError) end
---@param Text FText
---@param CommitMethod ETextCommit::Type
function UMultiLineEditableTextBox:OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(Text, CommitMethod) end
---@param Text FText
function UMultiLineEditableTextBox:OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(Text) end
---@return FText
function UMultiLineEditableTextBox:GetText() end
---@return FText
function UMultiLineEditableTextBox:GetHintText() end


---@class UNamedSlot : UContentWidget
local UNamedSlot = {}


---@class UNativeWidgetHost : UWidget
local UNativeWidgetHost = {}


---@class UOverlay : UPanelWidget
local UOverlay = {}

---@param Content UWidget
---@return UOverlaySlot
function UOverlay:AddChildToOverlay(Content) end


---@class UOverlaySlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UOverlaySlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UOverlaySlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UOverlaySlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UOverlaySlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UPanelSlot : UVisual
---@field Parent UPanelWidget
---@field Content UWidget
local UPanelSlot = {}



---@class UPanelWidget : UWidget
---@field Slots TArray<UPanelSlot>
local UPanelWidget = {}

---@param Index int32
---@return boolean
function UPanelWidget:RemoveChildAt(Index) end
---@param Content UWidget
---@return boolean
function UPanelWidget:RemoveChild(Content) end
---@param Content UWidget
---@return boolean
function UPanelWidget:HasChild(Content) end
---@return boolean
function UPanelWidget:HasAnyChildren() end
---@return int32
function UPanelWidget:GetChildrenCount() end
---@param Content UWidget
---@return int32
function UPanelWidget:GetChildIndex(Content) end
---@param Index int32
---@return UWidget
function UPanelWidget:GetChildAt(Index) end
---@return TArray<UWidget>
function UPanelWidget:GetAllChildren() end
function UPanelWidget:ClearChildren() end
---@param Content UWidget
---@return UPanelSlot
function UPanelWidget:AddChild(Content) end


---@class UProgressBar : UWidget
---@field WidgetStyle FProgressBarStyle
---@field Style USlateWidgetStyleAsset
---@field BackgroundImage USlateBrushAsset
---@field FillImage USlateBrushAsset
---@field MarqueeImage USlateBrushAsset
---@field Percent float
---@field BarFillType EProgressBarFillType::Type
---@field bIsMarquee boolean
---@field BorderPadding FVector2D
---@field PercentDelegate FProgressBarPercentDelegate
---@field FillColorAndOpacity FLinearColor
---@field FillColorAndOpacityDelegate FProgressBarFillColorAndOpacityDelegate
local UProgressBar = {}

---@param InPercent float
function UProgressBar:SetPercent(InPercent) end
---@param InbIsMarquee boolean
function UProgressBar:SetIsMarquee(InbIsMarquee) end
---@param InColor FLinearColor
function UProgressBar:SetFillColorAndOpacity(InColor) end


---@class UPropertyBinding : UObject
---@field SourceObject TWeakObjectPtr<UObject>
---@field SourcePath FDynamicPropertyPath
---@field DestinationProperty FName
local UPropertyBinding = {}



---@class URetainerBox : UContentWidget
---@field RenderOnInvalidation boolean
---@field RenderOnPhase boolean
---@field Phase int32
---@field PhaseCount int32
---@field EffectMaterial UMaterialInterface
---@field TextureParameter FName
local URetainerBox = {}

---@param TextureParameter FName
function URetainerBox:SetTextureParameter(TextureParameter) end
---@param RenderPhase int32
---@param TotalPhases int32
function URetainerBox:SetRenderingPhase(RenderPhase, TotalPhases) end
---@param EffectMaterial UMaterialInterface
function URetainerBox:SetEffectMaterial(EffectMaterial) end
function URetainerBox:RequestRender() end
---@return UMaterialInstanceDynamic
function URetainerBox:GetEffectMaterial() end


---@class URichTextBlock : UTextLayoutWidget
---@field Text FText
---@field TextStyleSet UDataTable
---@field DecoratorClasses TArray<TSubclassOf<URichTextBlockDecorator>>
---@field bOverrideDefaultStyle boolean
---@field DefaultTextStyleOverride FTextBlockStyle
---@field MinDesiredWidth float
---@field InstanceDecorators TArray<URichTextBlockDecorator>
local URichTextBlock = {}

---@param NewTextStyleSet UDataTable
function URichTextBlock:SetTextStyleSet(NewTextStyleSet) end
---@param InText FText
function URichTextBlock:SetText(InText) end
---@param InMinDesiredWidth float
function URichTextBlock:SetMinDesiredWidth(InMinDesiredWidth) end
---@param InDefaultTextStyle FTextBlockStyle
function URichTextBlock:SetDefaultTextStyle(InDefaultTextStyle) end
---@param InStrikeBrush FSlateBrush
function URichTextBlock:SetDefaultStrikeBrush(InStrikeBrush) end
---@param InShadowOffset FVector2D
function URichTextBlock:SetDefaultShadowOffset(InShadowOffset) end
---@param InShadowColorAndOpacity FLinearColor
function URichTextBlock:SetDefaultShadowColorAndOpacity(InShadowColorAndOpacity) end
---@param InFontInfo FSlateFontInfo
function URichTextBlock:SetDefaultFont(InFontInfo) end
---@param InColorAndOpacity FSlateColor
function URichTextBlock:SetDefaultColorAndOpacity(InColorAndOpacity) end
---@param InAutoTextWrap boolean
function URichTextBlock:SetAutoWrapText(InAutoTextWrap) end
---@return FText
function URichTextBlock:GetText() end
---@param DecoratorClass TSubclassOf<URichTextBlockDecorator>
---@return URichTextBlockDecorator
function URichTextBlock:GetDecoratorByClass(DecoratorClass) end
function URichTextBlock:ClearAllDefaultStyleOverrides() end


---@class URichTextBlockDecorator : UObject
local URichTextBlockDecorator = {}


---@class URichTextBlockImageDecorator : URichTextBlockDecorator
---@field ImageSet UDataTable
local URichTextBlockImageDecorator = {}



---@class USafeZone : UContentWidget
---@field PadLeft boolean
---@field PadRight boolean
---@field PadTop boolean
---@field PadBottom boolean
local USafeZone = {}

---@param InPadLeft boolean
---@param InPadRight boolean
---@param InPadTop boolean
---@param InPadBottom boolean
function USafeZone:SetSidesToPad(InPadLeft, InPadRight, InPadTop, InPadBottom) end


---@class USafeZoneSlot : UPanelSlot
---@field bIsTitleSafe boolean
---@field SafeAreaScale FMargin
---@field HAlign EHorizontalAlignment
---@field VAlign EVerticalAlignment
---@field Padding FMargin
local USafeZoneSlot = {}



---@class UScaleBox : UContentWidget
---@field Stretch EStretch::Type
---@field StretchDirection EStretchDirection::Type
---@field UserSpecifiedScale float
---@field IgnoreInheritedScale boolean
local UScaleBox = {}

---@param InUserSpecifiedScale float
function UScaleBox:SetUserSpecifiedScale(InUserSpecifiedScale) end
---@param InStretchDirection EStretchDirection::Type
function UScaleBox:SetStretchDirection(InStretchDirection) end
---@param InStretch EStretch::Type
function UScaleBox:SetStretch(InStretch) end
---@param bInIgnoreInheritedScale boolean
function UScaleBox:SetIgnoreInheritedScale(bInIgnoreInheritedScale) end


---@class UScaleBoxSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UScaleBoxSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UScaleBoxSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UScaleBoxSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UScaleBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UScrollBar : UWidget
---@field WidgetStyle FScrollBarStyle
---@field Style USlateWidgetStyleAsset
---@field bAlwaysShowScrollbar boolean
---@field bAlwaysShowScrollbarTrack boolean
---@field Orientation EOrientation
---@field Thickness FVector2D
---@field Padding FMargin
local UScrollBar = {}

---@param InOffsetFraction float
---@param InThumbSizeFraction float
function UScrollBar:SetState(InOffsetFraction, InThumbSizeFraction) end


---@class UScrollBox : UPanelWidget
---@field WidgetStyle FScrollBoxStyle
---@field WidgetBarStyle FScrollBarStyle
---@field Style USlateWidgetStyleAsset
---@field BarStyle USlateWidgetStyleAsset
---@field Orientation EOrientation
---@field ScrollBarVisibility ESlateVisibility
---@field ConsumeMouseWheel EConsumeMouseWheel
---@field ScrollbarThickness FVector2D
---@field ScrollbarPadding FMargin
---@field AlwaysShowScrollbar boolean
---@field AlwaysShowScrollbarTrack boolean
---@field AllowOverscroll boolean
---@field bAnimateWheelScrolling boolean
---@field NavigationDestination EDescendantScrollDestination
---@field NavigationScrollPadding float
---@field bAllowRightClickDragScrolling boolean
---@field WheelScrollMultiplier float
---@field OnUserScrolled FScrollBoxOnUserScrolled
local UScrollBox = {}

---@param NewWheelScrollMultiplier float
function UScrollBox:SetWheelScrollMultiplier(NewWheelScrollMultiplier) end
---@param NewScrollOffset float
function UScrollBox:SetScrollOffset(NewScrollOffset) end
---@param NewScrollBarVisibility ESlateVisibility
function UScrollBox:SetScrollbarVisibility(NewScrollBarVisibility) end
---@param NewScrollbarThickness FVector2D
function UScrollBox:SetScrollbarThickness(NewScrollbarThickness) end
---@param NewScrollbarPadding FMargin
function UScrollBox:SetScrollbarPadding(NewScrollbarPadding) end
---@param NewOrientation EOrientation
function UScrollBox:SetOrientation(NewOrientation) end
---@param NewConsumeMouseWheel EConsumeMouseWheel
function UScrollBox:SetConsumeMouseWheel(NewConsumeMouseWheel) end
---@param bShouldAnimateWheelScrolling boolean
function UScrollBox:SetAnimateWheelScrolling(bShouldAnimateWheelScrolling) end
---@param NewAlwaysShowScrollbar boolean
function UScrollBox:SetAlwaysShowScrollbar(NewAlwaysShowScrollbar) end
---@param NewAllowOverscroll boolean
function UScrollBox:SetAllowOverscroll(NewAllowOverscroll) end
---@param WidgetToFind UWidget
---@param AnimateScroll boolean
---@param ScrollDestination EDescendantScrollDestination
function UScrollBox:ScrollWidgetIntoView(WidgetToFind, AnimateScroll, ScrollDestination) end
function UScrollBox:ScrollToStart() end
function UScrollBox:ScrollToEnd() end
---@return float
function UScrollBox:GetViewOffsetFraction() end
---@return float
function UScrollBox:GetScrollOffsetOfEnd() end
---@return float
function UScrollBox:GetScrollOffset() end
function UScrollBox:EndInertialScrolling() end


---@class UScrollBoxSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UScrollBoxSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UScrollBoxSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UScrollBoxSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UScrollBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class USizeBox : UContentWidget
---@field WidthOverride float
---@field HeightOverride float
---@field MinDesiredWidth float
---@field MinDesiredHeight float
---@field MaxDesiredWidth float
---@field MaxDesiredHeight float
---@field MinAspectRatio float
---@field MaxAspectRatio float
---@field bOverride_WidthOverride boolean
---@field bOverride_HeightOverride boolean
---@field bOverride_MinDesiredWidth boolean
---@field bOverride_MinDesiredHeight boolean
---@field bOverride_MaxDesiredWidth boolean
---@field bOverride_MaxDesiredHeight boolean
---@field bOverride_MinAspectRatio boolean
---@field bOverride_MaxAspectRatio boolean
local USizeBox = {}

---@param InWidthOverride float
function USizeBox:SetWidthOverride(InWidthOverride) end
---@param InMinDesiredWidth float
function USizeBox:SetMinDesiredWidth(InMinDesiredWidth) end
---@param InMinDesiredHeight float
function USizeBox:SetMinDesiredHeight(InMinDesiredHeight) end
---@param InMinAspectRatio float
function USizeBox:SetMinAspectRatio(InMinAspectRatio) end
---@param InMaxDesiredWidth float
function USizeBox:SetMaxDesiredWidth(InMaxDesiredWidth) end
---@param InMaxDesiredHeight float
function USizeBox:SetMaxDesiredHeight(InMaxDesiredHeight) end
---@param InMaxAspectRatio float
function USizeBox:SetMaxAspectRatio(InMaxAspectRatio) end
---@param InHeightOverride float
function USizeBox:SetHeightOverride(InHeightOverride) end
function USizeBox:ClearWidthOverride() end
function USizeBox:ClearMinDesiredWidth() end
function USizeBox:ClearMinDesiredHeight() end
function USizeBox:ClearMinAspectRatio() end
function USizeBox:ClearMaxDesiredWidth() end
function USizeBox:ClearMaxDesiredHeight() end
function USizeBox:ClearMaxAspectRatio() end
function USizeBox:ClearHeightOverride() end


---@class USizeBoxSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local USizeBoxSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function USizeBoxSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function USizeBoxSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function USizeBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class USlateAccessibleWidgetData : UObject
---@field bCanChildrenBeAccessible boolean
---@field AccessibleBehavior ESlateAccessibleBehavior
---@field AccessibleSummaryBehavior ESlateAccessibleBehavior
---@field AccessibleText FText
---@field AccessibleTextDelegate FSlateAccessibleWidgetDataAccessibleTextDelegate
---@field AccessibleSummaryText FText
---@field AccessibleSummaryTextDelegate FSlateAccessibleWidgetDataAccessibleSummaryTextDelegate
local USlateAccessibleWidgetData = {}



---@class USlateBlueprintLibrary : UBlueprintFunctionLibrary
local USlateBlueprintLibrary = {}

---@param Geometry FGeometry
---@param LocalVector FVector2D
---@return FVector2D
function USlateBlueprintLibrary:TransformVectorLocalToAbsolute(Geometry, LocalVector) end
---@param Geometry FGeometry
---@param AbsoluteVector FVector2D
---@return FVector2D
function USlateBlueprintLibrary:TransformVectorAbsoluteToLocal(Geometry, AbsoluteVector) end
---@param Geometry FGeometry
---@param LocalScalar float
---@return float
function USlateBlueprintLibrary:TransformScalarLocalToAbsolute(Geometry, LocalScalar) end
---@param Geometry FGeometry
---@param AbsoluteScalar float
---@return float
function USlateBlueprintLibrary:TransformScalarAbsoluteToLocal(Geometry, AbsoluteScalar) end
---@param WorldContextObject UObject
---@param Geometry FGeometry
---@param ScreenPosition FVector2D
---@param LocalCoordinate FVector2D
function USlateBlueprintLibrary:ScreenToWidgetLocal(WorldContextObject, Geometry, ScreenPosition, LocalCoordinate) end
---@param WorldContextObject UObject
---@param ScreenPosition FVector2D
---@param AbsoluteCoordinate FVector2D
function USlateBlueprintLibrary:ScreenToWidgetAbsolute(WorldContextObject, ScreenPosition, AbsoluteCoordinate) end
---@param WorldContextObject UObject
---@param ScreenPosition FVector2D
---@param ViewportPosition FVector2D
function USlateBlueprintLibrary:ScreenToViewport(WorldContextObject, ScreenPosition, ViewportPosition) end
---@param WorldContextObject UObject
---@param Geometry FGeometry
---@param LocalCoordinate FVector2D
---@param PixelPosition FVector2D
---@param ViewportPosition FVector2D
function USlateBlueprintLibrary:LocalToViewport(WorldContextObject, Geometry, LocalCoordinate, PixelPosition, ViewportPosition) end
---@param Geometry FGeometry
---@param LocalCoordinate FVector2D
---@return FVector2D
function USlateBlueprintLibrary:LocalToAbsolute(Geometry, LocalCoordinate) end
---@param Geometry FGeometry
---@param AbsoluteCoordinate FVector2D
---@return boolean
function USlateBlueprintLibrary:IsUnderLocation(Geometry, AbsoluteCoordinate) end
---@param Geometry FGeometry
---@return FVector2D
function USlateBlueprintLibrary:GetLocalTopLeft(Geometry) end
---@param Geometry FGeometry
---@return FVector2D
function USlateBlueprintLibrary:GetLocalSize(Geometry) end
---@param Geometry FGeometry
---@return FVector2D
function USlateBlueprintLibrary:GetAbsoluteSize(Geometry) end
---@param A FSlateBrush
---@param B FSlateBrush
---@return boolean
function USlateBlueprintLibrary:EqualEqual_SlateBrush(A, B) end
---@param WorldContextObject UObject
---@param AbsoluteDesktopCoordinate FVector2D
---@param PixelPosition FVector2D
---@param ViewportPosition FVector2D
function USlateBlueprintLibrary:AbsoluteToViewport(WorldContextObject, AbsoluteDesktopCoordinate, PixelPosition, ViewportPosition) end
---@param Geometry FGeometry
---@param AbsoluteCoordinate FVector2D
---@return FVector2D
function USlateBlueprintLibrary:AbsoluteToLocal(Geometry, AbsoluteCoordinate) end


---@class USlateVectorArtData : UObject
---@field VertexData TArray<FSlateMeshVertex>
---@field IndexData TArray<uint32>
---@field Material UMaterialInterface
---@field ExtentMin FVector2D
---@field ExtentMax FVector2D
local USlateVectorArtData = {}



---@class USlider : UWidget
---@field Value float
---@field ValueDelegate FSliderValueDelegate
---@field MinValue float
---@field MaxValue float
---@field WidgetStyle FSliderStyle
---@field Orientation EOrientation
---@field SliderBarColor FLinearColor
---@field SliderHandleColor FLinearColor
---@field IndentHandle boolean
---@field Locked boolean
---@field MouseUsesStep boolean
---@field RequiresControllerLock boolean
---@field StepSize float
---@field IsFocusable boolean
---@field OnMouseCaptureBegin FSliderOnMouseCaptureBegin
---@field OnMouseCaptureEnd FSliderOnMouseCaptureEnd
---@field OnControllerCaptureBegin FSliderOnControllerCaptureBegin
---@field OnControllerCaptureEnd FSliderOnControllerCaptureEnd
---@field OnValueChanged FSliderOnValueChanged
local USlider = {}

---@param InValue float
function USlider:SetValue(InValue) end
---@param InValue float
function USlider:SetStepSize(InValue) end
---@param InValue FLinearColor
function USlider:SetSliderHandleColor(InValue) end
---@param InValue FLinearColor
function USlider:SetSliderBarColor(InValue) end
---@param InValue float
function USlider:SetMinValue(InValue) end
---@param InValue float
function USlider:SetMaxValue(InValue) end
---@param InValue boolean
function USlider:SetLocked(InValue) end
---@param InValue boolean
function USlider:SetIndentHandle(InValue) end
---@return float
function USlider:GetValue() end
---@return float
function USlider:GetNormalizedValue() end


---@class USpacer : UWidget
---@field Size FVector2D
local USpacer = {}

---@param InSize FVector2D
function USpacer:SetSize(InSize) end


---@class USpinBox : UWidget
---@field Value float
---@field ValueDelegate FSpinBoxValueDelegate
---@field WidgetStyle FSpinBoxStyle
---@field Style USlateWidgetStyleAsset
---@field Delta float
---@field SliderExponent float
---@field Font FSlateFontInfo
---@field Justification ETextJustify::Type
---@field MinDesiredWidth float
---@field ClearKeyboardFocusOnCommit boolean
---@field SelectAllTextOnCommit boolean
---@field ForegroundColor FSlateColor
---@field OnValueChanged FSpinBoxOnValueChanged
---@field OnValueCommitted FSpinBoxOnValueCommitted
---@field OnBeginSliderMovement FSpinBoxOnBeginSliderMovement
---@field OnEndSliderMovement FSpinBoxOnEndSliderMovement
---@field bOverride_MinValue boolean
---@field bOverride_MaxValue boolean
---@field bOverride_MinSliderValue boolean
---@field bOverride_MaxSliderValue boolean
---@field MinValue float
---@field MaxValue float
---@field MinSliderValue float
---@field MaxSliderValue float
local USpinBox = {}

---@param NewValue float
function USpinBox:SetValue(NewValue) end
---@param NewValue float
function USpinBox:SetMinValue(NewValue) end
---@param NewValue float
function USpinBox:SetMinSliderValue(NewValue) end
---@param NewValue float
function USpinBox:SetMaxValue(NewValue) end
---@param NewValue float
function USpinBox:SetMaxSliderValue(NewValue) end
---@param InForegroundColor FSlateColor
function USpinBox:SetForegroundColor(InForegroundColor) end
---@param InValue float
---@param CommitMethod ETextCommit::Type
function USpinBox:OnSpinBoxValueCommittedEvent__DelegateSignature(InValue, CommitMethod) end
---@param InValue float
function USpinBox:OnSpinBoxValueChangedEvent__DelegateSignature(InValue) end
function USpinBox:OnSpinBoxBeginSliderMovement__DelegateSignature() end
---@return float
function USpinBox:GetValue() end
---@return float
function USpinBox:GetMinValue() end
---@return float
function USpinBox:GetMinSliderValue() end
---@return float
function USpinBox:GetMaxValue() end
---@return float
function USpinBox:GetMaxSliderValue() end
function USpinBox:ClearMinValue() end
function USpinBox:ClearMinSliderValue() end
function USpinBox:ClearMaxValue() end
function USpinBox:ClearMaxSliderValue() end


---@class UTextBinding : UPropertyBinding
local UTextBinding = {}

---@return FText
function UTextBinding:GetTextValue() end
---@return FString
function UTextBinding:GetStringValue() end


---@class UTextBlock : UTextLayoutWidget
---@field Text FText
---@field TextDelegate FTextBlockTextDelegate
---@field ColorAndOpacity FSlateColor
---@field ColorAndOpacityDelegate FTextBlockColorAndOpacityDelegate
---@field Font FSlateFontInfo
---@field StrikeBrush FSlateBrush
---@field ShadowOffset FVector2D
---@field ShadowColorAndOpacity FLinearColor
---@field ShadowColorAndOpacityDelegate FTextBlockShadowColorAndOpacityDelegate
---@field MinDesiredWidth float
---@field bWrapWithInvalidationPanel boolean
---@field bAutoWrapText boolean
---@field bSimpleTextMode boolean
local UTextBlock = {}

---@param InText FText
function UTextBlock:SetText(InText) end
---@param InStrikeBrush FSlateBrush
function UTextBlock:SetStrikeBrush(InStrikeBrush) end
---@param InShadowOffset FVector2D
function UTextBlock:SetShadowOffset(InShadowOffset) end
---@param InShadowColorAndOpacity FLinearColor
function UTextBlock:SetShadowColorAndOpacity(InShadowColorAndOpacity) end
---@param InOpacity float
function UTextBlock:SetOpacity(InOpacity) end
---@param InMinDesiredWidth float
function UTextBlock:SetMinDesiredWidth(InMinDesiredWidth) end
---@param InFontInfo FSlateFontInfo
function UTextBlock:SetFont(InFontInfo) end
---@param InColorAndOpacity FSlateColor
function UTextBlock:SetColorAndOpacity(InColorAndOpacity) end
---@param InAutoTextWrap boolean
function UTextBlock:SetAutoWrapText(InAutoTextWrap) end
---@return FText
function UTextBlock:GetText() end
---@return UMaterialInstanceDynamic
function UTextBlock:GetDynamicOutlineMaterial() end
---@return UMaterialInstanceDynamic
function UTextBlock:GetDynamicFontMaterial() end


---@class UTextLayoutWidget : UWidget
---@field ShapedTextOptions FShapedTextOptions
---@field Justification ETextJustify::Type
---@field WrappingPolicy ETextWrappingPolicy
---@field AutoWrapText boolean
---@field WrapTextAt float
---@field Margin FMargin
---@field LineHeightPercentage float
local UTextLayoutWidget = {}

---@param InJustification ETextJustify::Type
function UTextLayoutWidget:SetJustification(InJustification) end


---@class UThrobber : UWidget
---@field NumberOfPieces int32
---@field bAnimateHorizontally boolean
---@field bAnimateVertically boolean
---@field bAnimateOpacity boolean
---@field PieceImage USlateBrushAsset
---@field Image FSlateBrush
local UThrobber = {}

---@param InNumberOfPieces int32
function UThrobber:SetNumberOfPieces(InNumberOfPieces) end
---@param bInAnimateVertically boolean
function UThrobber:SetAnimateVertically(bInAnimateVertically) end
---@param bInAnimateOpacity boolean
function UThrobber:SetAnimateOpacity(bInAnimateOpacity) end
---@param bInAnimateHorizontally boolean
function UThrobber:SetAnimateHorizontally(bInAnimateHorizontally) end


---@class UTileView : UListView
---@field EntryHeight float
---@field EntryWidth float
---@field TileAlignment EListItemAlignment
---@field bWrapHorizontalNavigation boolean
local UTileView = {}

---@param NewWidth float
function UTileView:SetEntryWidth(NewWidth) end
---@param NewHeight float
function UTileView:SetEntryHeight(NewHeight) end


---@class UTreeView : UListView
---@field BP_OnGetItemChildren FTreeViewBP_OnGetItemChildren
---@field BP_OnItemExpansionChanged FTreeViewBP_OnItemExpansionChanged
local UTreeView = {}

---@param Item UObject
---@param bExpandItem boolean
function UTreeView:SetItemExpansion(Item, bExpandItem) end
function UTreeView:ExpandAll() end
function UTreeView:CollapseAll() end


---@class UUMGSequencePlayer : UObject
---@field Animation UWidgetAnimation
local UUMGSequencePlayer = {}

---@param InUserTag FName
function UUMGSequencePlayer:SetUserTag(InUserTag) end
---@return FName
function UUMGSequencePlayer:GetUserTag() end


---@class UUniformGridPanel : UPanelWidget
---@field SlotPadding FMargin
---@field MinDesiredSlotWidth float
---@field MinDesiredSlotHeight float
local UUniformGridPanel = {}

---@param InSlotPadding FMargin
function UUniformGridPanel:SetSlotPadding(InSlotPadding) end
---@param InMinDesiredSlotWidth float
function UUniformGridPanel:SetMinDesiredSlotWidth(InMinDesiredSlotWidth) end
---@param InMinDesiredSlotHeight float
function UUniformGridPanel:SetMinDesiredSlotHeight(InMinDesiredSlotHeight) end
---@param Content UWidget
---@param InRow int32
---@param InColumn int32
---@return UUniformGridSlot
function UUniformGridPanel:AddChildToUniformGrid(Content, InRow, InColumn) end


---@class UUniformGridSlot : UPanelSlot
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
---@field Row int32
---@field Column int32
local UUniformGridSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UUniformGridSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InRow int32
function UUniformGridSlot:SetRow(InRow) end
---@param InHorizontalAlignment EHorizontalAlignment
function UUniformGridSlot:SetHorizontalAlignment(InHorizontalAlignment) end
---@param InColumn int32
function UUniformGridSlot:SetColumn(InColumn) end


---@class UUserListEntryLibrary : UBlueprintFunctionLibrary
local UUserListEntryLibrary = {}

---@param UserListEntry TScriptInterface<IUserListEntry>
---@return boolean
function UUserListEntryLibrary:IsListItemSelected(UserListEntry) end
---@param UserListEntry TScriptInterface<IUserListEntry>
---@return boolean
function UUserListEntryLibrary:IsListItemExpanded(UserListEntry) end
---@param UserListEntry TScriptInterface<IUserListEntry>
---@return UListViewBase
function UUserListEntryLibrary:GetOwningListView(UserListEntry) end


---@class UUserObjectListEntryLibrary : UBlueprintFunctionLibrary
local UUserObjectListEntryLibrary = {}

---@param UserObjectListEntry TScriptInterface<IUserObjectListEntry>
---@return UObject
function UUserObjectListEntryLibrary:GetListItemObject(UserObjectListEntry) end


---@class UUserWidget : UWidget
---@field ColorAndOpacity FLinearColor
---@field ColorAndOpacityDelegate FUserWidgetColorAndOpacityDelegate
---@field ForegroundColor FSlateColor
---@field ForegroundColorDelegate FUserWidgetForegroundColorDelegate
---@field Padding FMargin
---@field ActiveSequencePlayers TArray<UUMGSequencePlayer>
---@field StoppedSequencePlayers TArray<UUMGSequencePlayer>
---@field NamedSlotBindings TArray<FNamedSlotBinding>
---@field WidgetTree UWidgetTree
---@field Priority int32
---@field bSupportsKeyboardFocus boolean
---@field bIsFocusable boolean
---@field bStopAction boolean
---@field bHasScriptImplementedTick boolean
---@field bHasScriptImplementedPaint boolean
---@field bCookedWidgetTree boolean
---@field TickFrequency EWidgetTickFrequency
---@field InputComponent UInputComponent
---@field AnimationCallbacks TArray<FAnimationEventBinding>
local UUserWidget = {}

function UUserWidget:UnregisterInputComponent() end
---@param Animation UWidgetAnimation
---@param Delegate FUnbindFromAnimationStartedDelegate
function UUserWidget:UnbindFromAnimationStarted(Animation, Delegate) end
---@param Animation UWidgetAnimation
---@param Delegate FUnbindFromAnimationFinishedDelegate
function UUserWidget:UnbindFromAnimationFinished(Animation, Delegate) end
---@param Animation UWidgetAnimation
function UUserWidget:UnbindAllFromAnimationStarted(Animation) end
---@param Animation UWidgetAnimation
function UUserWidget:UnbindAllFromAnimationFinished(Animation) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUserWidget:Tick(MyGeometry, InDeltaTime) end
---@param ActionName FName
---@param EventType EInputEvent
function UUserWidget:StopListeningForInputAction(ActionName, EventType) end
function UUserWidget:StopListeningForAllInputActions() end
function UUserWidget:StopAnimationsAndLatentActions() end
---@param InAnimation UWidgetAnimation
function UUserWidget:StopAnimation(InAnimation) end
function UUserWidget:StopAllAnimations() end
---@param Position FVector2D
---@param bRemoveDPIScale boolean
function UUserWidget:SetPositionInViewport(Position, bRemoveDPIScale) end
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed float
function UUserWidget:SetPlaybackSpeed(InAnimation, PlaybackSpeed) end
---@param InPadding FMargin
function UUserWidget:SetPadding(InPadding) end
---@param LocalPlayerController APlayerController
function UUserWidget:SetOwningPlayer(LocalPlayerController) end
---@param InAnimation UWidgetAnimation
---@param NumLoopsToPlay int32
function UUserWidget:SetNumLoopsToPlay(InAnimation, NumLoopsToPlay) end
---@param NewPriority int32
function UUserWidget:SetInputActionPriority(NewPriority) end
---@param bShouldBlock boolean
function UUserWidget:SetInputActionBlocking(bShouldBlock) end
---@param InForegroundColor FSlateColor
function UUserWidget:SetForegroundColor(InForegroundColor) end
---@param Size FVector2D
function UUserWidget:SetDesiredSizeInViewport(Size) end
---@param InColorAndOpacity FLinearColor
function UUserWidget:SetColorAndOpacity(InColorAndOpacity) end
---@param Anchors FAnchors
function UUserWidget:SetAnchorsInViewport(Anchors) end
---@param Alignment FVector2D
function UUserWidget:SetAlignmentInViewport(Alignment) end
---@param InAnimation UWidgetAnimation
function UUserWidget:ReverseAnimation(InAnimation) end
function UUserWidget:RemoveFromViewport() end
function UUserWidget:RegisterInputComponent() end
---@param IsDesignTime boolean
function UUserWidget:PreConstruct(IsDesignTime) end
---@param SoundToPlay USoundBase
function UUserWidget:PlaySound(SoundToPlay) end
---@param InAnimation UWidgetAnimation
---@param StartAtTime float
---@param EndAtTime float
---@param NumLoopsToPlay int32
---@param PlayMode EUMGSequencePlayMode::Type
---@param PlaybackSpeed float
---@param bRestoreState boolean
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimationTimeRange(InAnimation, StartAtTime, EndAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed float
---@param bRestoreState boolean
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimationReverse(InAnimation, PlaybackSpeed, bRestoreState) end
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed float
---@param bRestoreState boolean
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimationForward(InAnimation, PlaybackSpeed, bRestoreState) end
---@param InAnimation UWidgetAnimation
---@param StartAtTime float
---@param NumLoopsToPlay int32
---@param PlayMode EUMGSequencePlayMode::Type
---@param PlaybackSpeed float
---@param bRestoreState boolean
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimation(InAnimation, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end
---@param InAnimation UWidgetAnimation
---@return float
function UUserWidget:PauseAnimation(InAnimation) end
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchStarted(MyGeometry, InTouchEvent) end
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchMoved(MyGeometry, InTouchEvent) end
---@param MyGeometry FGeometry
---@param GestureEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchGesture(MyGeometry, GestureEvent) end
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchForceChanged(MyGeometry, InTouchEvent) end
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchEnded(MyGeometry, InTouchEvent) end
---@param InFocusEvent FFocusEvent
function UUserWidget:OnRemovedFromFocusPath(InFocusEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnPreviewMouseButtonDown(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUserWidget:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Context FPaintContext
function UUserWidget:OnPaint(Context) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseWheel(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseMove(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UUserWidget:OnMouseLeave(MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUserWidget:OnMouseEnter(MyGeometry, MouseEvent) end
function UUserWidget:OnMouseCaptureLost() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseButtonUp(MyGeometry, MouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseButtonDown(MyGeometry, MouseEvent) end
---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end
---@param MyGeometry FGeometry
---@param InMotionEvent FMotionEvent
---@return FEventReply
function UUserWidget:OnMotionDetected(MyGeometry, InMotionEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUserWidget:OnKeyUp(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUserWidget:OnKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InCharacterEvent FCharacterEvent
---@return FEventReply
function UUserWidget:OnKeyChar(MyGeometry, InCharacterEvent) end
function UUserWidget:OnInitialized() end
---@param MyGeometry FGeometry
---@param InFocusEvent FFocusEvent
---@return FEventReply
function UUserWidget:OnFocusReceived(MyGeometry, InFocusEvent) end
---@param InFocusEvent FFocusEvent
function UUserWidget:OnFocusLost(InFocusEvent) end
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
---@return boolean
function UUserWidget:OnDrop(MyGeometry, PointerEvent, Operation) end
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
---@return boolean
function UUserWidget:OnDragOver(MyGeometry, PointerEvent, Operation) end
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
function UUserWidget:OnDragLeave(PointerEvent, Operation) end
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
function UUserWidget:OnDragEnter(MyGeometry, PointerEvent, Operation) end
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
function UUserWidget:OnDragDetected(MyGeometry, PointerEvent, Operation) end
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
function UUserWidget:OnDragCancelled(PointerEvent, Operation) end
---@param Animation UWidgetAnimation
function UUserWidget:OnAnimationStarted(Animation) end
---@param Animation UWidgetAnimation
function UUserWidget:OnAnimationFinished(Animation) end
---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UUserWidget:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end
---@param InFocusEvent FFocusEvent
function UUserWidget:OnAddedToFocusPath(InFocusEvent) end
---@param ActionName FName
---@param EventType EInputEvent
---@param bConsume boolean
---@param Callback FListenForInputActionCallback
function UUserWidget:ListenForInputAction(ActionName, EventType, bConsume, Callback) end
---@return boolean
function UUserWidget:IsPlayingAnimation() end
---@param ActionName FName
---@return boolean
function UUserWidget:IsListeningForInputAction(ActionName) end
---@return boolean
function UUserWidget:IsInViewport() end
---@return boolean
function UUserWidget:IsInteractable() end
---@return boolean
function UUserWidget:IsAnyAnimationPlaying() end
---@param InAnimation UWidgetAnimation
---@return boolean
function UUserWidget:IsAnimationPlayingForward(InAnimation) end
---@param InAnimation UWidgetAnimation
---@return boolean
function UUserWidget:IsAnimationPlaying(InAnimation) end
---@return APawn
function UUserWidget:GetOwningPlayerPawn() end
---@return boolean
function UUserWidget:GetIsVisible() end
---@param InAnimation UWidgetAnimation
---@return float
function UUserWidget:GetAnimationCurrentTime(InAnimation) end
---@return FAnchors
function UUserWidget:GetAnchorsInViewport() end
---@return FVector2D
function UUserWidget:GetAlignmentInViewport() end
function UUserWidget:Destruct() end
function UUserWidget:Construct() end
function UUserWidget:CancelLatentActions() end
---@param Animation UWidgetAnimation
---@param Delegate FBindToAnimationStartedDelegate
function UUserWidget:BindToAnimationStarted(Animation, Delegate) end
---@param Animation UWidgetAnimation
---@param Delegate FBindToAnimationFinishedDelegate
function UUserWidget:BindToAnimationFinished(Animation, Delegate) end
---@param Animation UWidgetAnimation
---@param Delegate FBindToAnimationEventDelegate
---@param AnimationEvent EWidgetAnimationEvent
---@param UserTag FName
function UUserWidget:BindToAnimationEvent(Animation, Delegate, AnimationEvent, UserTag) end
---@param ZOrder int32
function UUserWidget:AddToViewport(ZOrder) end
---@param ZOrder int32
---@return boolean
function UUserWidget:AddToPlayerScreen(ZOrder) end


---@class UVerticalBox : UPanelWidget
local UVerticalBox = {}

---@param Content UWidget
---@return UVerticalBoxSlot
function UVerticalBox:AddChildToVerticalBox(Content) end


---@class UVerticalBoxSlot : UPanelSlot
---@field Size FSlateChildSize
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UVerticalBoxSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UVerticalBoxSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InSize FSlateChildSize
function UVerticalBoxSlot:SetSize(InSize) end
---@param InPadding FMargin
function UVerticalBoxSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UVerticalBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UViewport : UContentWidget
---@field BackgroundColor FLinearColor
local UViewport = {}

---@param ActorClass TSubclassOf<AActor>
---@return AActor
function UViewport:Spawn(ActorClass) end
---@param Rotation FRotator
function UViewport:SetViewRotation(Rotation) end
---@param Location FVector
function UViewport:SetViewLocation(Location) end
---@return FRotator
function UViewport:GetViewRotation() end
---@return UWorld
function UViewport:GetViewportWorld() end
---@return FVector
function UViewport:GetViewLocation() end


---@class UVisibilityBinding : UPropertyBinding
local UVisibilityBinding = {}

---@return ESlateVisibility
function UVisibilityBinding:GetValue() end


---@class UVisual : UObject
local UVisual = {}


---@class UWidget : UVisual
---@field Slot UPanelSlot
---@field bIsEnabledDelegate FWidgetBIsEnabledDelegate
---@field ToolTipText FText
---@field ToolTipTextDelegate FWidgetToolTipTextDelegate
---@field ToolTipWidget UWidget
---@field ToolTipWidgetDelegate FWidgetToolTipWidgetDelegate
---@field VisibilityDelegate FWidgetVisibilityDelegate
---@field RenderTransform FWidgetTransform
---@field RenderTransformPivot FVector2D
---@field bIsVariable boolean
---@field bCreatedByConstructionScript boolean
---@field bIsEnabled boolean
---@field bOverride_Cursor boolean
---@field AccessibleWidgetData USlateAccessibleWidgetData
---@field bIsVolatile boolean
---@field Cursor EMouseCursor::Type
---@field Clipping EWidgetClipping
---@field Visibility ESlateVisibility
---@field RenderOpacity float
---@field Navigation UWidgetNavigation
---@field FlowDirectionPreference EFlowDirectionPreference
---@field NativeBindings TArray<UPropertyBinding>
local UWidget = {}

---@param InVisibility ESlateVisibility
function UWidget:SetVisibility(InVisibility) end
---@param PlayerController APlayerController
function UWidget:SetUserFocus(PlayerController) end
---@param InToolTipText FText
function UWidget:SetToolTipText(InToolTipText) end
---@param Widget UWidget
function UWidget:SetToolTip(Widget) end
---@param Translation FVector2D
function UWidget:SetRenderTranslation(Translation) end
---@param Pivot FVector2D
function UWidget:SetRenderTransformPivot(Pivot) end
---@param Angle float
function UWidget:SetRenderTransformAngle(Angle) end
---@param InTransform FWidgetTransform
function UWidget:SetRenderTransform(InTransform) end
---@param Shear FVector2D
function UWidget:SetRenderShear(Shear) end
---@param Scale FVector2D
function UWidget:SetRenderScale(Scale) end
---@param InOpacity float
function UWidget:SetRenderOpacity(InOpacity) end
---@param Direction EUINavigation
---@param InWidget UWidget
function UWidget:SetNavigationRuleExplicit(Direction, InWidget) end
---@param Direction EUINavigation
---@param InCustomDelegate FSetNavigationRuleCustomBoundaryInCustomDelegate
function UWidget:SetNavigationRuleCustomBoundary(Direction, InCustomDelegate) end
---@param Direction EUINavigation
---@param InCustomDelegate FSetNavigationRuleCustomInCustomDelegate
function UWidget:SetNavigationRuleCustom(Direction, InCustomDelegate) end
---@param Direction EUINavigation
---@param Rule EUINavigationRule
function UWidget:SetNavigationRuleBase(Direction, Rule) end
---@param Direction EUINavigation
---@param Rule EUINavigationRule
---@param WidgetToFocus FName
function UWidget:SetNavigationRule(Direction, Rule, WidgetToFocus) end
function UWidget:SetKeyboardFocus() end
---@param bInIsEnabled boolean
function UWidget:SetIsEnabled(bInIsEnabled) end
function UWidget:SetFocus() end
---@param InCursor EMouseCursor::Type
function UWidget:SetCursor(InCursor) end
---@param InClipping EWidgetClipping
function UWidget:SetClipping(InClipping) end
---@param Rule EUINavigationRule
---@param WidgetToFocus FName
function UWidget:SetAllNavigationRules(Rule, WidgetToFocus) end
function UWidget:ResetCursor() end
function UWidget:RemoveFromParent() end
---@return FEventReply
function UWidget:OnReply__DelegateSignature() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWidget:OnPointerEvent__DelegateSignature(MyGeometry, MouseEvent) end
---@return boolean
function UWidget:IsVisible() end
---@return boolean
function UWidget:IsHovered() end
function UWidget:InvalidateLayoutAndVolatility() end
---@param PlayerController APlayerController
---@return boolean
function UWidget:HasUserFocusedDescendants(PlayerController) end
---@param PlayerController APlayerController
---@return boolean
function UWidget:HasUserFocus(PlayerController) end
---@param UserIndex int32
---@param PointerIndex int32
---@return boolean
function UWidget:HasMouseCaptureByUser(UserIndex, PointerIndex) end
---@return boolean
function UWidget:HasMouseCapture() end
---@return boolean
function UWidget:HasKeyboardFocus() end
---@return boolean
function UWidget:HasFocusedDescendants() end
---@return boolean
function UWidget:HasAnyUserFocus() end
---@return UWidget
function UWidget:GetWidget__DelegateSignature() end
---@return ESlateVisibility
function UWidget:GetVisibility() end
---@return FGeometry
function UWidget:GetTickSpaceGeometry() end
---@return FText
function UWidget:GetText__DelegateSignature() end
---@return ESlateVisibility
function UWidget:GetSlateVisibility__DelegateSignature() end
---@return FSlateColor
function UWidget:GetSlateColor__DelegateSignature() end
---@return FSlateBrush
function UWidget:GetSlateBrush__DelegateSignature() end
---@return float
function UWidget:GetRenderTransformAngle() end
---@return float
function UWidget:GetRenderOpacity() end
---@return UPanelWidget
function UWidget:GetParent() end
---@return FGeometry
function UWidget:GetPaintSpaceGeometry() end
---@return APlayerController
function UWidget:GetOwningPlayer() end
---@return ULocalPlayer
function UWidget:GetOwningLocalPlayer() end
---@return EMouseCursor::Type
function UWidget:GetMouseCursor__DelegateSignature() end
---@return FLinearColor
function UWidget:GetLinearColor__DelegateSignature() end
---@return boolean
function UWidget:GetIsEnabled() end
---@return int32
function UWidget:GetInt32__DelegateSignature() end
---@return UGameInstance
function UWidget:GetGameInstance() end
---@return float
function UWidget:GetFloat__DelegateSignature() end
---@return FVector2D
function UWidget:GetDesiredSize() end
---@return EWidgetClipping
function UWidget:GetClipping() end
---@return ECheckBoxState
function UWidget:GetCheckBoxState__DelegateSignature() end
---@return FGeometry
function UWidget:GetCachedGeometry() end
---@return boolean
function UWidget:GetBool__DelegateSignature() end
---@param Item FString
---@return UWidget
function UWidget:GenerateWidgetForString__DelegateSignature(Item) end
---@param Item UObject
---@return UWidget
function UWidget:GenerateWidgetForObject__DelegateSignature(Item) end
---@param bForce boolean
function UWidget:ForceVolatile(bForce) end
function UWidget:ForceLayoutPrepass() end


---@class UWidgetAnimation : UMovieSceneSequence
---@field MovieScene UMovieScene
---@field AnimationBindings TArray<FWidgetAnimationBinding>
---@field bLegacyFinishOnStop boolean
---@field DisplayLabel FString
local UWidgetAnimation = {}

---@param Widget UUserWidget
---@param Delegate FUnbindFromAnimationStartedDelegate
function UWidgetAnimation:UnbindFromAnimationStarted(Widget, Delegate) end
---@param Widget UUserWidget
---@param Delegate FUnbindFromAnimationFinishedDelegate
function UWidgetAnimation:UnbindFromAnimationFinished(Widget, Delegate) end
---@param Widget UUserWidget
function UWidgetAnimation:UnbindAllFromAnimationStarted(Widget) end
---@param Widget UUserWidget
function UWidgetAnimation:UnbindAllFromAnimationFinished(Widget) end
---@return float
function UWidgetAnimation:GetStartTime() end
---@return float
function UWidgetAnimation:GetEndTime() end
---@param Widget UUserWidget
---@param Delegate FBindToAnimationStartedDelegate
function UWidgetAnimation:BindToAnimationStarted(Widget, Delegate) end
---@param Widget UUserWidget
---@param Delegate FBindToAnimationFinishedDelegate
function UWidgetAnimation:BindToAnimationFinished(Widget, Delegate) end


---@class UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding
---@field WidgetAnimationDelegateBindings TArray<FBlueprintWidgetAnimationDelegateBinding>
local UWidgetAnimationDelegateBinding = {}



---@class UWidgetAnimationPlayCallbackProxy : UObject
---@field Finished FWidgetAnimationPlayCallbackProxyFinished
local UWidgetAnimationPlayCallbackProxy = {}

---@param Result UUMGSequencePlayer
---@param Widget UUserWidget
---@param InAnimation UWidgetAnimation
---@param StartAtTime float
---@param EndAtTime float
---@param NumLoopsToPlay int32
---@param PlayMode EUMGSequencePlayMode::Type
---@param PlaybackSpeed float
---@return UWidgetAnimationPlayCallbackProxy
function UWidgetAnimationPlayCallbackProxy:CreatePlayAnimationTimeRangeProxyObject(Result, Widget, InAnimation, StartAtTime, EndAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed) end
---@param Result UUMGSequencePlayer
---@param Widget UUserWidget
---@param InAnimation UWidgetAnimation
---@param StartAtTime float
---@param NumLoopsToPlay int32
---@param PlayMode EUMGSequencePlayMode::Type
---@param PlaybackSpeed float
---@return UWidgetAnimationPlayCallbackProxy
function UWidgetAnimationPlayCallbackProxy:CreatePlayAnimationProxyObject(Result, Widget, InAnimation, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed) end


---@class UWidgetBinding : UPropertyBinding
local UWidgetBinding = {}

---@return UWidget
function UWidgetBinding:GetValue() end


---@class UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
---@field WidgetTree UWidgetTree
---@field bAllowTemplate boolean
---@field bAllowDynamicCreation boolean
---@field bValidTemplate boolean
---@field bTemplateInitialized boolean
---@field bCookedTemplate boolean
---@field bClassRequiresNativeTick boolean
---@field Bindings TArray<FDelegateRuntimeBinding>
---@field Animations TArray<UWidgetAnimation>
---@field NamedSlots TArray<FName>
---@field TemplateAsset TSoftObjectPtr<UUserWidget>
---@field Template UUserWidget
local UWidgetBlueprintGeneratedClass = {}



---@class UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
local UWidgetBlueprintLibrary = {}

---@param Reply FEventReply
---@return FEventReply
function UWidgetBlueprintLibrary:UnlockMouse(Reply) end
---@return FEventReply
function UWidgetBlueprintLibrary:Unhandled() end
---@param TitleBarContent UWidget
---@param Mode EWindowTitleBarMode
---@param bTitleBarDragEnabled boolean
---@param bWindowButtonsVisible boolean
---@param bTitleBarVisible boolean
function UWidgetBlueprintLibrary:SetWindowTitleBarState(TitleBarContent, Mode, bTitleBarDragEnabled, bWindowButtonsVisible, bTitleBarVisible) end
---@param Delegate FSetWindowTitleBarOnCloseClickedDelegateDelegate
function UWidgetBlueprintLibrary:SetWindowTitleBarOnCloseClickedDelegate(Delegate) end
---@param bActive boolean
function UWidgetBlueprintLibrary:SetWindowTitleBarCloseButtonActive(bActive) end
---@param Reply FEventReply
---@param FocusWidget UWidget
---@param bInAllUsers boolean
---@return FEventReply
function UWidgetBlueprintLibrary:SetUserFocus(Reply, FocusWidget, bInAllUsers) end
---@param Reply FEventReply
---@param NewMousePosition FVector2D
---@return FEventReply
function UWidgetBlueprintLibrary:SetMousePosition(Reply, NewMousePosition) end
---@param PlayerController APlayerController
---@param InWidgetToFocus UWidget
---@param InMouseLockMode EMouseLockMode
function UWidgetBlueprintLibrary:SetInputMode_UIOnlyEx(PlayerController, InWidgetToFocus, InMouseLockMode) end
---@param Target APlayerController
---@param InWidgetToFocus UWidget
---@param bLockMouseToViewport boolean
function UWidgetBlueprintLibrary:SetInputMode_UIOnly(Target, InWidgetToFocus, bLockMouseToViewport) end
---@param PlayerController APlayerController
function UWidgetBlueprintLibrary:SetInputMode_GameOnly(PlayerController) end
---@param PlayerController APlayerController
---@param InWidgetToFocus UWidget
---@param InMouseLockMode EMouseLockMode
---@param bHideCursorDuringCapture boolean
function UWidgetBlueprintLibrary:SetInputMode_GameAndUIEx(PlayerController, InWidgetToFocus, InMouseLockMode, bHideCursorDuringCapture) end
---@param Target APlayerController
---@param InWidgetToFocus UWidget
---@param bLockMouseToViewport boolean
---@param bHideCursorDuringCapture boolean
function UWidgetBlueprintLibrary:SetInputMode_GameAndUI(Target, InWidgetToFocus, bLockMouseToViewport, bHideCursorDuringCapture) end
---@param WorldContextObject UObject
---@param CursorShape EMouseCursor::Type
---@param CursorName FName
---@param HotSpot FVector2D
---@return boolean
function UWidgetBlueprintLibrary:SetHardwareCursor(WorldContextObject, CursorShape, CursorName, HotSpot) end
function UWidgetBlueprintLibrary:SetFocusToGameViewport() end
---@param Type EColorVisionDeficiency
---@param Severity float
---@param CorrectDeficiency boolean
---@param ShowCorrectionWithDeficiency boolean
function UWidgetBlueprintLibrary:SetColorVisionDeficiencyType(Type, Severity, CorrectDeficiency, ShowCorrectionWithDeficiency) end
---@param Brush FSlateBrush
---@param Texture UTexture2D
function UWidgetBlueprintLibrary:SetBrushResourceToTexture(Brush, Texture) end
---@param Brush FSlateBrush
---@param Material UMaterialInterface
function UWidgetBlueprintLibrary:SetBrushResourceToMaterial(Brush, Material) end
function UWidgetBlueprintLibrary:RestorePreviousWindowTitleBarState() end
---@param Reply FEventReply
---@return FEventReply
function UWidgetBlueprintLibrary:ReleaseMouseCapture(Reply) end
---@param Reply FEventReply
---@param bInAllJoysticks boolean
---@return FEventReply
function UWidgetBlueprintLibrary:ReleaseJoystickCapture(Reply, bInAllJoysticks) end
function UWidgetBlueprintLibrary:OnGameWindowCloseButtonClickedDelegate__DelegateSignature() end
---@return FSlateBrush
function UWidgetBlueprintLibrary:NoResourceBrush() end
---@param Texture UTexture2D
---@param Width int32
---@param Height int32
---@return FSlateBrush
function UWidgetBlueprintLibrary:MakeBrushFromTexture(Texture, Width, Height) end
---@param Material UMaterialInterface
---@param Width int32
---@param Height int32
---@return FSlateBrush
function UWidgetBlueprintLibrary:MakeBrushFromMaterial(Material, Width, Height) end
---@param BrushAsset USlateBrushAsset
---@return FSlateBrush
function UWidgetBlueprintLibrary:MakeBrushFromAsset(BrushAsset) end
---@param Reply FEventReply
---@param CapturingWidget UWidget
---@return FEventReply
function UWidgetBlueprintLibrary:LockMouse(Reply, CapturingWidget) end
---@return boolean
function UWidgetBlueprintLibrary:IsDragDropping() end
---@return FEventReply
function UWidgetBlueprintLibrary:Handled() end
---@param WorldContextObject UObject
---@param SafePadding FVector4
---@param SafePaddingScale FVector2D
---@param SpillOverPadding FVector4
function UWidgetBlueprintLibrary:GetSafeZonePadding(WorldContextObject, SafePadding, SafePaddingScale, SpillOverPadding) end
---@param Event FAnalogInputEvent
---@return FKeyEvent
function UWidgetBlueprintLibrary:GetKeyEventFromAnalogInputEvent(Event) end
---@param Event FPointerEvent
---@return FInputEvent
function UWidgetBlueprintLibrary:GetInputEventFromPointerEvent(Event) end
---@param Event FNavigationEvent
---@return FInputEvent
function UWidgetBlueprintLibrary:GetInputEventFromNavigationEvent(Event) end
---@param Event FKeyEvent
---@return FInputEvent
function UWidgetBlueprintLibrary:GetInputEventFromKeyEvent(Event) end
---@param Event FCharacterEvent
---@return FInputEvent
function UWidgetBlueprintLibrary:GetInputEventFromCharacterEvent(Event) end
---@param Brush FSlateBrush
---@return UMaterialInstanceDynamic
function UWidgetBlueprintLibrary:GetDynamicMaterial(Brush) end
---@return UDragDropOperation
function UWidgetBlueprintLibrary:GetDragDroppingContent() end
---@param Brush FSlateBrush
---@return UTexture2D
function UWidgetBlueprintLibrary:GetBrushResourceAsTexture2D(Brush) end
---@param Brush FSlateBrush
---@return UMaterialInterface
function UWidgetBlueprintLibrary:GetBrushResourceAsMaterial(Brush) end
---@param Brush FSlateBrush
---@return UObject
function UWidgetBlueprintLibrary:GetBrushResource(Brush) end
---@param WorldContextObject UObject
---@param FoundWidgets TArray<UUserWidget>
---@param Interface TSubclassOf<UInterface>
---@param TopLevelOnly boolean
function UWidgetBlueprintLibrary:GetAllWidgetsWithInterface(WorldContextObject, FoundWidgets, Interface, TopLevelOnly) end
---@param WorldContextObject UObject
---@param FoundWidgets TArray<UUserWidget>
---@param WidgetClass TSubclassOf<UUserWidget>
---@param TopLevelOnly boolean
function UWidgetBlueprintLibrary:GetAllWidgetsOfClass(WorldContextObject, FoundWidgets, WidgetClass, TopLevelOnly) end
---@param Reply FEventReply
---@return FEventReply
function UWidgetBlueprintLibrary:EndDragDrop(Reply) end
---@param Context FPaintContext
---@param Text FText
---@param Position FVector2D
---@param Font UFont
---@param FontSize int32
---@param FontTypeFace FName
---@param Tint FLinearColor
function UWidgetBlueprintLibrary:DrawTextFormatted(Context, Text, Position, Font, FontSize, FontTypeFace, Tint) end
---@param Context FPaintContext
---@param inString FString
---@param Position FVector2D
---@param Tint FLinearColor
function UWidgetBlueprintLibrary:DrawText(Context, inString, Position, Tint) end
---@param Context FPaintContext
---@param Points TArray<FVector2D>
---@param Tint FLinearColor
---@param bAntiAlias boolean
---@param Thickness float
function UWidgetBlueprintLibrary:DrawLines(Context, Points, Tint, bAntiAlias, Thickness) end
---@param Context FPaintContext
---@param PositionA FVector2D
---@param PositionB FVector2D
---@param Tint FLinearColor
---@param bAntiAlias boolean
---@param Thickness float
function UWidgetBlueprintLibrary:DrawLine(Context, PositionA, PositionB, Tint, bAntiAlias, Thickness) end
---@param Context FPaintContext
---@param Position FVector2D
---@param Size FVector2D
---@param Brush USlateBrushAsset
---@param Tint FLinearColor
function UWidgetBlueprintLibrary:DrawBox(Context, Position, Size, Brush, Tint) end
function UWidgetBlueprintLibrary:DismissAllMenus() end
---@param PointerEvent FPointerEvent
---@param WidgetDetectingDrag UWidget
---@param DragKey FKey
---@return FEventReply
function UWidgetBlueprintLibrary:DetectDragIfPressed(PointerEvent, WidgetDetectingDrag, DragKey) end
---@param Reply FEventReply
---@param WidgetDetectingDrag UWidget
---@param DragKey FKey
---@return FEventReply
function UWidgetBlueprintLibrary:DetectDrag(Reply, WidgetDetectingDrag, DragKey) end
---@param OperationClass TSubclassOf<UDragDropOperation>
---@return UDragDropOperation
function UWidgetBlueprintLibrary:CreateDragDropOperation(OperationClass) end
---@param WorldContextObject UObject
---@param WidgetType TSubclassOf<UUserWidget>
---@param OwningPlayer APlayerController
---@return UUserWidget
function UWidgetBlueprintLibrary:Create(WorldContextObject, WidgetType, OwningPlayer) end
---@param Reply FEventReply
---@param bInAllUsers boolean
---@return FEventReply
function UWidgetBlueprintLibrary:ClearUserFocus(Reply, bInAllUsers) end
---@param Reply FEventReply
---@param CapturingWidget UWidget
---@return FEventReply
function UWidgetBlueprintLibrary:CaptureMouse(Reply, CapturingWidget) end
---@param Reply FEventReply
---@param CapturingWidget UWidget
---@param bInAllJoysticks boolean
---@return FEventReply
function UWidgetBlueprintLibrary:CaptureJoystick(Reply, CapturingWidget, bInAllJoysticks) end
function UWidgetBlueprintLibrary:CancelDragDrop() end


---@class UWidgetComponent : UMeshComponent
---@field Space EWidgetSpace
---@field TimingPolicy EWidgetTimingPolicy
---@field WidgetClass TSubclassOf<UUserWidget>
---@field DrawSize FIntPoint
---@field bManuallyRedraw boolean
---@field bRedrawRequested boolean
---@field RedrawTime float
---@field CurrentDrawSize FIntPoint
---@field bDrawAtDesiredSize boolean
---@field Pivot FVector2D
---@field bReceiveHardwareInput boolean
---@field bWindowFocusable boolean
---@field WindowVisibility EWindowVisibility
---@field bApplyGammaCorrection boolean
---@field OwnerPlayer ULocalPlayer
---@field BackgroundColor FLinearColor
---@field TintColorAndOpacity FLinearColor
---@field OpacityFromTexture float
---@field BlendMode EWidgetBlendMode
---@field bIsTwoSided boolean
---@field TickWhenOffscreen boolean
---@field Widget UUserWidget
---@field BodySetup UBodySetup
---@field TranslucentMaterial UMaterialInterface
---@field TranslucentMaterial_OneSided UMaterialInterface
---@field OpaqueMaterial UMaterialInterface
---@field OpaqueMaterial_OneSided UMaterialInterface
---@field MaskedMaterial UMaterialInterface
---@field MaskedMaterial_OneSided UMaterialInterface
---@field RenderTarget UTextureRenderTarget2D
---@field MaterialInstance UMaterialInstanceDynamic
---@field bAddedToScreen boolean
---@field bEditTimeUsable boolean
---@field SharedLayerName FName
---@field LayerZOrder int32
---@field GeometryMode EWidgetGeometryMode
---@field CylinderArcAngle float
local UWidgetComponent = {}

---@param InVisibility EWindowVisibility
function UWidgetComponent:SetWindowVisibility(InVisibility) end
---@param bInWindowFocusable boolean
function UWidgetComponent:SetWindowFocusable(bInWindowFocusable) end
---@param NewSpace EWidgetSpace
function UWidgetComponent:SetWidgetSpace(NewSpace) end
---@param Widget UUserWidget
function UWidgetComponent:SetWidget(Widget) end
---@param bWantTwoSided boolean
function UWidgetComponent:SetTwoSided(bWantTwoSided) end
---@param NewTintColorAndOpacity FLinearColor
function UWidgetComponent:SetTintColorAndOpacity(NewTintColorAndOpacity) end
---@param bWantTickWhenOffscreen boolean
function UWidgetComponent:SetTickWhenOffscreen(bWantTickWhenOffscreen) end
---@param InRedrawTime float
function UWidgetComponent:SetRedrawTime(InRedrawTime) end
---@param InPivot FVector2D
function UWidgetComponent:SetPivot(InPivot) end
---@param LocalPlayer ULocalPlayer
function UWidgetComponent:SetOwnerPlayer(LocalPlayer) end
---@param bUseManualRedraw boolean
function UWidgetComponent:SetManuallyRedraw(bUseManualRedraw) end
---@param InGeometryMode EWidgetGeometryMode
function UWidgetComponent:SetGeometryMode(InGeometryMode) end
---@param Size FVector2D
function UWidgetComponent:SetDrawSize(Size) end
---@param bInDrawAtDesiredSize boolean
function UWidgetComponent:SetDrawAtDesiredSize(bInDrawAtDesiredSize) end
---@param InCylinderArcAngle float
function UWidgetComponent:SetCylinderArcAngle(InCylinderArcAngle) end
---@param NewBackgroundColor FLinearColor
function UWidgetComponent:SetBackgroundColor(NewBackgroundColor) end
function UWidgetComponent:RequestRedraw() end
---@return EWindowVisibility
function UWidgetComponent:GetWindowVisiblility() end
---@return boolean
function UWidgetComponent:GetWindowFocusable() end
---@return EWidgetSpace
function UWidgetComponent:GetWidgetSpace() end
---@return UUserWidget
function UWidgetComponent:GetUserWidgetObject() end
---@return boolean
function UWidgetComponent:GetTwoSided() end
---@return boolean
function UWidgetComponent:GetTickWhenOffscreen() end
---@return UTextureRenderTarget2D
function UWidgetComponent:GetRenderTarget() end
---@return float
function UWidgetComponent:GetRedrawTime() end
---@return FVector2D
function UWidgetComponent:GetPivot() end
---@return ULocalPlayer
function UWidgetComponent:GetOwnerPlayer() end
---@return UMaterialInstanceDynamic
function UWidgetComponent:GetMaterialInstance() end
---@return boolean
function UWidgetComponent:GetManuallyRedraw() end
---@return EWidgetGeometryMode
function UWidgetComponent:GetGeometryMode() end
---@return FVector2D
function UWidgetComponent:GetDrawSize() end
---@return boolean
function UWidgetComponent:GetDrawAtDesiredSize() end
---@return float
function UWidgetComponent:GetCylinderArcAngle() end
---@return FVector2D
function UWidgetComponent:GetCurrentDrawSize() end


---@class UWidgetInteractionComponent : USceneComponent
---@field OnHoveredWidgetChanged FWidgetInteractionComponentOnHoveredWidgetChanged
---@field VirtualUserIndex int32
---@field PointerIndex float
---@field TraceChannel ECollisionChannel
---@field InteractionDistance float
---@field InteractionSource EWidgetInteractionSource
---@field bEnableHitTesting boolean
---@field bShowDebug boolean
---@field DebugColor FLinearColor
---@field CustomHitResult FHitResult
---@field LocalHitLocation FVector2D
---@field LastLocalHitLocation FVector2D
---@field HoveredWidgetComponent UWidgetComponent
---@field LastHitResult FHitResult
---@field bIsHoveredWidgetInteractable boolean
---@field bIsHoveredWidgetFocusable boolean
---@field bIsHoveredWidgetHitTestVisible boolean
local UWidgetInteractionComponent = {}

---@param FocusWidget UWidget
function UWidgetInteractionComponent:SetFocus(FocusWidget) end
---@param HitResult FHitResult
function UWidgetInteractionComponent:SetCustomHitResult(HitResult) end
---@param Characters FString
---@param bRepeat boolean
---@return boolean
function UWidgetInteractionComponent:SendKeyChar(Characters, bRepeat) end
---@param ScrollDelta float
function UWidgetInteractionComponent:ScrollWheel(ScrollDelta) end
---@param Key FKey
function UWidgetInteractionComponent:ReleasePointerKey(Key) end
---@param Key FKey
---@return boolean
function UWidgetInteractionComponent:ReleaseKey(Key) end
---@param Key FKey
function UWidgetInteractionComponent:PressPointerKey(Key) end
---@param Key FKey
---@param bRepeat boolean
---@return boolean
function UWidgetInteractionComponent:PressKey(Key, bRepeat) end
---@param Key FKey
---@return boolean
function UWidgetInteractionComponent:PressAndReleaseKey(Key) end
---@return boolean
function UWidgetInteractionComponent:IsOverInteractableWidget() end
---@return boolean
function UWidgetInteractionComponent:IsOverHitTestVisibleWidget() end
---@return boolean
function UWidgetInteractionComponent:IsOverFocusableWidget() end
---@return FHitResult
function UWidgetInteractionComponent:GetLastHitResult() end
---@return UWidgetComponent
function UWidgetInteractionComponent:GetHoveredWidgetComponent() end
---@return FVector2D
function UWidgetInteractionComponent:Get2DHitLocation() end


---@class UWidgetLayoutLibrary : UBlueprintFunctionLibrary
local UWidgetLayoutLibrary = {}

---@param Widget UWidget
---@return UWrapBoxSlot
function UWidgetLayoutLibrary:SlotAsWrapBoxSlot(Widget) end
---@param Widget UWidget
---@return UWidgetSwitcherSlot
function UWidgetLayoutLibrary:SlotAsWidgetSwitcherSlot(Widget) end
---@param Widget UWidget
---@return UVerticalBoxSlot
function UWidgetLayoutLibrary:SlotAsVerticalBoxSlot(Widget) end
---@param Widget UWidget
---@return UUniformGridSlot
function UWidgetLayoutLibrary:SlotAsUniformGridSlot(Widget) end
---@param Widget UWidget
---@return USizeBoxSlot
function UWidgetLayoutLibrary:SlotAsSizeBoxSlot(Widget) end
---@param Widget UWidget
---@return UScrollBoxSlot
function UWidgetLayoutLibrary:SlotAsScrollBoxSlot(Widget) end
---@param Widget UWidget
---@return UScaleBoxSlot
function UWidgetLayoutLibrary:SlotAsScaleBoxSlot(Widget) end
---@param Widget UWidget
---@return USafeZoneSlot
function UWidgetLayoutLibrary:SlotAsSafeBoxSlot(Widget) end
---@param Widget UWidget
---@return UOverlaySlot
function UWidgetLayoutLibrary:SlotAsOverlaySlot(Widget) end
---@param Widget UWidget
---@return UHorizontalBoxSlot
function UWidgetLayoutLibrary:SlotAsHorizontalBoxSlot(Widget) end
---@param Widget UWidget
---@return UGridSlot
function UWidgetLayoutLibrary:SlotAsGridSlot(Widget) end
---@param Widget UWidget
---@return UCanvasPanelSlot
function UWidgetLayoutLibrary:SlotAsCanvasSlot(Widget) end
---@param Widget UWidget
---@return UBorderSlot
function UWidgetLayoutLibrary:SlotAsBorderSlot(Widget) end
---@param WorldContextObject UObject
function UWidgetLayoutLibrary:RemoveAllWidgets(WorldContextObject) end
---@param PlayerController APlayerController
---@param WorldLocation FVector
---@param ScreenPosition FVector2D
---@return boolean
function UWidgetLayoutLibrary:ProjectWorldLocationToWidgetPosition(PlayerController, WorldLocation, ScreenPosition) end
---@param WorldContextObject UObject
---@return FGeometry
function UWidgetLayoutLibrary:GetViewportWidgetGeometry(WorldContextObject) end
---@param WorldContextObject UObject
---@return FVector2D
function UWidgetLayoutLibrary:GetViewportSize(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UWidgetLayoutLibrary:GetViewportScale(WorldContextObject) end
---@param PlayerController APlayerController
---@return FGeometry
function UWidgetLayoutLibrary:GetPlayerScreenWidgetGeometry(PlayerController) end
---@param Player APlayerController
---@param LocationX float
---@param LocationY float
---@return boolean
function UWidgetLayoutLibrary:GetMousePositionScaledByDPI(Player, LocationX, LocationY) end
---@param WorldContextObject UObject
---@return FVector2D
function UWidgetLayoutLibrary:GetMousePositionOnViewport(WorldContextObject) end
---@return FVector2D
function UWidgetLayoutLibrary:GetMousePositionOnPlatform() end


---@class UWidgetNavigation : UObject
---@field Up FWidgetNavigationData
---@field Down FWidgetNavigationData
---@field Left FWidgetNavigationData
---@field Right FWidgetNavigationData
---@field Next FWidgetNavigationData
---@field Previous FWidgetNavigationData
local UWidgetNavigation = {}



---@class UWidgetSwitcher : UPanelWidget
---@field ActiveWidgetIndex int32
local UWidgetSwitcher = {}

---@param Index int32
function UWidgetSwitcher:SetActiveWidgetIndex(Index) end
---@param Widget UWidget
function UWidgetSwitcher:SetActiveWidget(Widget) end
---@param Index int32
---@return UWidget
function UWidgetSwitcher:GetWidgetAtIndex(Index) end
---@return int32
function UWidgetSwitcher:GetNumWidgets() end
---@return int32
function UWidgetSwitcher:GetActiveWidgetIndex() end
---@return UWidget
function UWidgetSwitcher:GetActiveWidget() end


---@class UWidgetSwitcherSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UWidgetSwitcherSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UWidgetSwitcherSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UWidgetSwitcherSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UWidgetSwitcherSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UWidgetTree : UObject
---@field RootWidget UWidget
local UWidgetTree = {}



---@class UWindowTitleBarArea : UContentWidget
---@field bWindowButtonsEnabled boolean
---@field bDoubleClickTogglesFullscreen boolean
local UWindowTitleBarArea = {}

---@param InVerticalAlignment EVerticalAlignment
function UWindowTitleBarArea:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UWindowTitleBarArea:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UWindowTitleBarArea:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UWindowTitleBarAreaSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UWindowTitleBarAreaSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UWindowTitleBarAreaSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UWindowTitleBarAreaSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UWindowTitleBarAreaSlot:SetHorizontalAlignment(InHorizontalAlignment) end


---@class UWrapBox : UPanelWidget
---@field InnerSlotPadding FVector2D
---@field WrapWidth float
---@field bExplicitWrapWidth boolean
local UWrapBox = {}

---@param InPadding FVector2D
function UWrapBox:SetInnerSlotPadding(InPadding) end
---@param Content UWidget
---@return UWrapBoxSlot
function UWrapBox:AddChildToWrapBox(Content) end


---@class UWrapBoxSlot : UPanelSlot
---@field Padding FMargin
---@field bFillEmptySpace boolean
---@field FillSpanWhenLessThan float
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UWrapBoxSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UWrapBoxSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UWrapBoxSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UWrapBoxSlot:SetHorizontalAlignment(InHorizontalAlignment) end
---@param InFillSpanWhenLessThan float
function UWrapBoxSlot:SetFillSpanWhenLessThan(InFillSpanWhenLessThan) end
---@param InbFillEmptySpace boolean
function UWrapBoxSlot:SetFillEmptySpace(InbFillEmptySpace) end


