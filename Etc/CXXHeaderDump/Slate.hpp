#ifndef UE4SS_SDK_Slate_HPP
#define UE4SS_SDK_Slate_HPP

#include "Slate_enums.hpp"

struct FAnchors
{
    FVector2D Minimum;                                                                // 0x0000 (size: 0x8)
    FVector2D Maximum;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FCustomizedToolMenu
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TMap<class FName, class FCustomizedToolMenuEntry> Entries;                        // 0x0008 (size: 0x50)
    TMap<class FName, class FCustomizedToolMenuSection> Sections;                     // 0x0058 (size: 0x50)
    TMap<class FName, class FCustomizedToolMenuNameArray> EntryOrder;                 // 0x00A8 (size: 0x50)
    TArray<FName> SectionOrder;                                                       // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FCustomizedToolMenuEntry
{
    ECustomizedToolMenuVisibility Visibility;                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FCustomizedToolMenuNameArray
{
    TArray<FName> Names;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCustomizedToolMenuSection
{
    ECustomizedToolMenuVisibility Visibility;                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FInputChord
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    uint8 bShift;                                                                     // 0x0018 (size: 0x1)
    uint8 bCtrl;                                                                      // 0x0018 (size: 0x1)
    uint8 bAlt;                                                                       // 0x0018 (size: 0x1)
    uint8 bCmd;                                                                       // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FVirtualKeyboardOptions
{
    bool bEnableAutocorrect;                                                          // 0x0000 (size: 0x1)

}; // Size: 0x1

class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FButtonStyle ButtonStyle;                                                         // 0x0030 (size: 0x278)

}; // Size: 0x2A8

class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FCheckBoxStyle CheckBoxStyle;                                                     // 0x0030 (size: 0x580)

}; // Size: 0x5B0

class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboBoxStyle ComboBoxStyle;                                                     // 0x0030 (size: 0x3D8)

}; // Size: 0x408

class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboButtonStyle ComboButtonStyle;                                               // 0x0030 (size: 0x3A0)

}; // Size: 0x3D0

class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextBoxStyle EditableTextBoxStyle;                                       // 0x0030 (size: 0x7F0)

}; // Size: 0x820

class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextStyle EditableTextStyle;                                             // 0x0030 (size: 0x218)

}; // Size: 0x248

class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
    FProgressBarStyle ProgressBarStyle;                                               // 0x0030 (size: 0x1A0)

}; // Size: 0x1D0

class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBarStyle ScrollBarStyle;                                                   // 0x0030 (size: 0x4D0)

}; // Size: 0x500

class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBoxStyle ScrollBoxStyle;                                                   // 0x0030 (size: 0x228)

}; // Size: 0x258

class USlateSettings : public UObject
{
    bool bExplicitCanvasChildZOrder;                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FSpinBoxStyle SpinBoxStyle;                                                       // 0x0030 (size: 0x2E8)

}; // Size: 0x318

class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
    FTextBlockStyle TextBlockStyle;                                                   // 0x0030 (size: 0x268)

}; // Size: 0x298

class UToolMenuBase : public UObject
{
}; // Size: 0x28

#endif
