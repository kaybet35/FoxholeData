#ifndef UE4SS_SDK_ImgMedia_HPP
#define UE4SS_SDK_ImgMedia_HPP

class UImgMediaSource : public UBaseMediaSource
{
    FFrameRate FrameRateOverride;                                                     // 0x0088 (size: 0x8)
    FString ProxyOverride;                                                            // 0x0090 (size: 0x10)
    FDirectoryPath SequencePath;                                                      // 0x00A0 (size: 0x10)

    void SetSequencePath(FString Path);
    FString GetSequencePath();
    void GetProxies(TArray<FString>& OutProxies);
}; // Size: 0xB0

#endif
