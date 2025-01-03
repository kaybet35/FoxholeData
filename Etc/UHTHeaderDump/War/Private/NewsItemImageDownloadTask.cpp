#include "NewsItemImageDownloadTask.h"

UNewsItemImageDownloadTask::UNewsItemImageDownloadTask() {
    this->Owner = NULL;
}

void UNewsItemImageDownloadTask::OnImageDownloadSuccess(UTexture2DDynamic* Texture) {
}

void UNewsItemImageDownloadTask::OnImageDownloadFailed(UTexture2DDynamic* Texture) {
}


