#ifndef UE4SS_SDK_WebBrowserWidget_HPP
#define UE4SS_SDK_WebBrowserWidget_HPP

class UWebBrowser : public UWidget
{
    FWebBrowserOnUrlChanged OnUrlChanged;                                             // 0x0108 (size: 0x10)
    void OnUrlChanged(const FText& Text);
    FWebBrowserOnBeforePopup OnBeforePopup;                                           // 0x0118 (size: 0x10)
    void OnBeforePopup(FString URL, FString Frame);
    FString InitialURL;                                                               // 0x0128 (size: 0x10)
    bool bSupportsTransparency;                                                       // 0x0138 (size: 0x1)

    void OnUrlChanged__DelegateSignature(const FText& Text);
    void OnBeforePopup__DelegateSignature(FString URL, FString Frame);
    void LoadURL(FString NewURL);
    void LoadString(FString Contents, FString DummyURL);
    FString GetUrl();
    FText GetTitleText();
    void ExecuteJavascript(FString ScriptText);
}; // Size: 0x150

class UWebBrowserAssetManager : public UObject
{
    TSoftObjectPtr<UMaterial> DefaultMaterial;                                        // 0x0028 (size: 0x28)

}; // Size: 0x78

#endif
