#include "WebBrowser.h"

UWebBrowser::UWebBrowser() {
    this->bSupportsTransparency = false;
}

void UWebBrowser::LoadURL(const FString& NewURL) {
}

void UWebBrowser::LoadString(const FString& Contents, const FString& DummyURL) {
}

FString UWebBrowser::GetUrl() const {
    return TEXT("");
}

FText UWebBrowser::GetTitleText() const {
    return FText::GetEmpty();
}

void UWebBrowser::ExecuteJavascript(const FString& ScriptText) {
}

