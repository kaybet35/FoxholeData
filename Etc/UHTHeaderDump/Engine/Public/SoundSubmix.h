#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EAudioRecordingExportType.h"
#include "ESubmixChannelFormat.h"
#include "OnSubmixEnvelopeBPDelegate.h"
#include "OnSubmixRecordedFileDoneDelegate.h"
#include "SoundSubmix.generated.h"

class UAmbisonicsSubmixSettingsBase;
class USoundEffectSubmixPreset;
class USoundSubmix;
class USoundWave;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API USoundSubmix : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundSubmix*> ChildSubmixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* ParentSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixChannelFormat ChannelFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMuteWhenBackgrounded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbisonicsSubmixSettingsBase* AmbisonicsPluginSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutputVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubmixRecordedFileDone OnSubmixRecordedFileDone;
    
    USoundSubmix();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundWave* ExistingSoundWaveToOverwrite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StopEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void StartEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetSubmixOutputVolume(const UObject* WorldContextObject, float InOutputVolume);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP);
    
};

