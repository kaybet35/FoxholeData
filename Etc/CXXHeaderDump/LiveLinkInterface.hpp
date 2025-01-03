#ifndef UE4SS_SDK_LiveLinkInterface_HPP
#define UE4SS_SDK_LiveLinkInterface_HPP

#include "LiveLinkInterface_enums.hpp"

struct FCachedSubjectFrame
{
}; // Size: 0x140

struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
    TArray<FTransform> Transforms;                                                    // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FLiveLinkBaseBlueprintData
{
}; // Size: 0x8

struct FLiveLinkBaseFrameData
{
    FLiveLinkWorldTime WorldTime;                                                     // 0x0000 (size: 0x10)
    FLiveLinkMetaData MetaData;                                                       // 0x0010 (size: 0x60)
    TArray<float> PropertyValues;                                                     // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FLiveLinkBaseStaticData
{
    TArray<FName> PropertyNames;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkBaseStaticData StaticData;                                               // 0x0008 (size: 0x10)
    FLiveLinkBaseFrameData FrameData;                                                 // 0x0018 (size: 0x80)

}; // Size: 0x98

struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkCameraStaticData StaticData;                                             // 0x0008 (size: 0x20)
    FLiveLinkCameraFrameData FrameData;                                               // 0x0030 (size: 0xD0)

}; // Size: 0x100

struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
    float FieldOfView;                                                                // 0x00B0 (size: 0x4)
    float AspectRatio;                                                                // 0x00B4 (size: 0x4)
    float FocalLength;                                                                // 0x00B8 (size: 0x4)
    float Aperture;                                                                   // 0x00BC (size: 0x4)
    float FocusDistance;                                                              // 0x00C0 (size: 0x4)
    ELiveLinkCameraProjectionMode ProjectionMode;                                     // 0x00C4 (size: 0x1)

}; // Size: 0xD0

struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
    bool bIsFieldOfViewSupported;                                                     // 0x0010 (size: 0x1)
    bool bIsAspectRatioSupported;                                                     // 0x0011 (size: 0x1)
    bool bIsFocalLengthSupported;                                                     // 0x0012 (size: 0x1)
    bool bIsProjectionModeSupported;                                                  // 0x0013 (size: 0x1)
    float FilmBackWidth;                                                              // 0x0014 (size: 0x4)
    float FilmBackHeight;                                                             // 0x0018 (size: 0x4)
    bool bIsApertureSupported;                                                        // 0x001C (size: 0x1)
    bool bIsFocusDistanceSupported;                                                   // 0x001D (size: 0x1)

}; // Size: 0x20

struct FLiveLinkCurveConversionSettings
{
    TMap<class FString, class FSoftObjectPath> CurveConversionAssetMap;               // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FLiveLinkCurveElement
{
    FName CurveName;                                                                  // 0x0000 (size: 0x8)
    float CurveValue;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FLiveLinkFrameData
{
    TArray<FTransform> Transforms;                                                    // 0x0000 (size: 0x10)
    TArray<FLiveLinkCurveElement> CurveElements;                                      // 0x0010 (size: 0x10)
    FLiveLinkWorldTime WorldTime;                                                     // 0x0020 (size: 0x10)
    FLiveLinkMetaData MetaData;                                                       // 0x0030 (size: 0x60)

}; // Size: 0x90

struct FLiveLinkFrameRate : public FFrameRate
{
}; // Size: 0x8

struct FLiveLinkInterpolationSettings
{
    bool bUseInterpolation;                                                           // 0x0000 (size: 0x1)
    float InterpolationOffset;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkLightStaticData StaticData;                                              // 0x0008 (size: 0x20)
    FLiveLinkLightFrameData FrameData;                                                // 0x0030 (size: 0xE0)

}; // Size: 0x110

struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
    float Temperature;                                                                // 0x00B0 (size: 0x4)
    float Intensity;                                                                  // 0x00B4 (size: 0x4)
    FColor LightColor;                                                                // 0x00B8 (size: 0x4)
    float InnerConeAngle;                                                             // 0x00BC (size: 0x4)
    float OuterConeAngle;                                                             // 0x00C0 (size: 0x4)
    float AttenuationRadius;                                                          // 0x00C4 (size: 0x4)
    float SourceRadius;                                                               // 0x00C8 (size: 0x4)
    float SoftSourceRadius;                                                           // 0x00CC (size: 0x4)
    float SourceLength;                                                               // 0x00D0 (size: 0x4)

}; // Size: 0xE0

struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
    bool bIsTemperatureSupported;                                                     // 0x0010 (size: 0x1)
    bool bIsIntensitySupported;                                                       // 0x0011 (size: 0x1)
    bool bIsLightColorSupported;                                                      // 0x0012 (size: 0x1)
    bool bIsInnerConeAngleSupported;                                                  // 0x0013 (size: 0x1)
    bool bIsOuterConeAngleSupported;                                                  // 0x0014 (size: 0x1)
    bool bIsAttenuationRadiusSupported;                                               // 0x0015 (size: 0x1)
    bool bIsSourceLenghtSupported;                                                    // 0x0016 (size: 0x1)
    bool bIsSourceRadiusSupported;                                                    // 0x0017 (size: 0x1)
    bool bIsSoftSourceRadiusSupported;                                                // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FLiveLinkMetaData
{
    TMap<class FName, class FString> StringMetadata;                                  // 0x0000 (size: 0x50)
    FQualifiedFrameTime SceneTime;                                                    // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FLiveLinkRefSkeleton
{
    TArray<FName> BoneNames;                                                          // 0x0000 (size: 0x10)
    TArray<int32> BoneParents;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
    TArray<FName> BoneNames;                                                          // 0x0010 (size: 0x10)
    TArray<int32> BoneParents;                                                        // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLiveLinkSourceBufferManagementSettings
{
    float ValidEngineTime;                                                            // 0x0000 (size: 0x4)
    float EngineTimeOffset;                                                           // 0x0004 (size: 0x4)
    FFrameRate TimecodeFrameRate;                                                     // 0x0008 (size: 0x8)
    bool bGenerateSubFrame;                                                           // 0x0010 (size: 0x1)
    FFrameRate SourceTimecodeFrameRate;                                               // 0x0014 (size: 0x8)
    int32 ValidTimecodeFrame;                                                         // 0x001C (size: 0x4)
    int32 TimecodeFrameOffset;                                                        // 0x0020 (size: 0x4)
    int32 LatestOffset;                                                               // 0x0024 (size: 0x4)
    int32 MaxNumberOfFrameToBuffered;                                                 // 0x0028 (size: 0x4)
    bool bKeepAtLeastOneFrame;                                                        // 0x002C (size: 0x1)

}; // Size: 0x30

struct FLiveLinkSourceDebugInfo
{
    FLiveLinkSubjectName SubjectName;                                                 // 0x0000 (size: 0x8)
    int32 SnapshotIndex;                                                              // 0x0008 (size: 0x4)
    int32 NumberOfBufferAtSnapshot;                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FLiveLinkSourceHandle
{
}; // Size: 0x18

struct FLiveLinkSourcePreset
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    class ULiveLinkSourceSettings* Settings;                                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FLiveLinkSubjectKey
{
    FGuid Source;                                                                     // 0x0000 (size: 0x10)
    FLiveLinkSubjectName SubjectName;                                                 // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FLiveLinkSubjectName
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLiveLinkSubjectPreset
{
    FLiveLinkSubjectKey Key;                                                          // 0x0000 (size: 0x18)
    TSubclassOf<class ULiveLinkRole> Role;                                            // 0x0018 (size: 0x8)
    class ULiveLinkSubjectSettings* Settings;                                         // 0x0020 (size: 0x8)
    class ULiveLinkVirtualSubject* VirtualSubject;                                    // 0x0028 (size: 0x8)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FLiveLinkSubjectRepresentation
{
    FLiveLinkSubjectName Subject;                                                     // 0x0000 (size: 0x8)
    TSubclassOf<class ULiveLinkRole> Role;                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLiveLinkTime
{
    double WorldTime;                                                                 // 0x0000 (size: 0x8)
    FQualifiedFrameTime SceneTime;                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{
}; // Size: 0x10

struct FLiveLinkTimeCode_Base_DEPRECATED
{
    int32 Seconds;                                                                    // 0x0000 (size: 0x4)
    int32 Frames;                                                                     // 0x0004 (size: 0x4)
    FLiveLinkFrameRate FrameRate;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLiveLinkTimeSynchronizationSettings
{
    FFrameRate FrameRate;                                                             // 0x0000 (size: 0x8)
    FFrameNumber FrameOffset;                                                         // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FLiveLinkTransform
{
}; // Size: 0x20

struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
    FLiveLinkTransformStaticData StaticData;                                          // 0x0008 (size: 0x10)
    FLiveLinkTransformFrameData FrameData;                                            // 0x0020 (size: 0xB0)

}; // Size: 0xD0

struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
    FTransform Transform;                                                             // 0x0080 (size: 0x30)

}; // Size: 0xB0

struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
}; // Size: 0x10

struct FLiveLinkWorldTime
{
    double Time;                                                                      // 0x0000 (size: 0x8)
    double Offset;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
}; // Size: 0x18

struct FSubjectMetadata
{
    TMap<class FName, class FString> StringMetadata;                                  // 0x0000 (size: 0x50)
    FTimecode SceneTimecode;                                                          // 0x0050 (size: 0x14)
    FFrameRate SceneFramerate;                                                        // 0x0064 (size: 0x8)

}; // Size: 0x70

class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
}; // Size: 0x28

class ULiveLinkBasicRole : public ULiveLinkRole
{
}; // Size: 0x28

class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
}; // Size: 0x28

class ULiveLinkController : public UObject
{
}; // Size: 0x28

class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
    FLiveLinkCurveConversionSettings CurveConversionSettings;                         // 0x0078 (size: 0x50)

}; // Size: 0xC8

class ULiveLinkFrameInterpolationProcessor : public UObject
{
}; // Size: 0x28

class ULiveLinkFramePreProcessor : public UObject
{
}; // Size: 0x28

class ULiveLinkFrameTranslator : public UObject
{
}; // Size: 0x28

class ULiveLinkLightRole : public ULiveLinkTransformRole
{
}; // Size: 0x28

class ULiveLinkRole : public UObject
{
}; // Size: 0x28

class ULiveLinkSourceFactory : public UObject
{
}; // Size: 0x28

class ULiveLinkSourceSettings : public UObject
{
    ELiveLinkSourceMode Mode;                                                         // 0x0028 (size: 0x1)
    FLiveLinkSourceBufferManagementSettings BufferSettings;                           // 0x002C (size: 0x30)
    FString ConnectionString;                                                         // 0x0060 (size: 0x10)
    TSubclassOf<class ULiveLinkSourceFactory> Factory;                                // 0x0070 (size: 0x8)

}; // Size: 0x78

class ULiveLinkSubjectSettings : public UObject
{
    TArray<class ULiveLinkFramePreProcessor*> PreProcessors;                          // 0x0028 (size: 0x10)
    class ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;               // 0x0038 (size: 0x8)
    TArray<class ULiveLinkFrameTranslator*> Translators;                              // 0x0040 (size: 0x10)
    TSubclassOf<class ULiveLinkRole> Role;                                            // 0x0050 (size: 0x8)

}; // Size: 0x58

class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
}; // Size: 0x28

class ULiveLinkVirtualSubject : public UObject
{
    TSubclassOf<class ULiveLinkRole> Role;                                            // 0x0030 (size: 0x8)
    TArray<FLiveLinkSubjectName> Subjects;                                            // 0x0038 (size: 0x10)
    TArray<class ULiveLinkFrameTranslator*> FrameTranslators;                         // 0x0048 (size: 0x10)

}; // Size: 0xD8

#endif
