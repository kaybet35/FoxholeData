#include "ClientStreamingManager.h"

UClientStreamingManager::UClientStreamingManager() {
    this->StreamingCheckInterval = 0.50f;
    this->CullDistance = 116000.00f;
}

void UClientStreamingManager::OnLevelUnloaded(ULevelStreamingHex* LevelStreaming) {
}

void UClientStreamingManager::OnLevelShown(ULevelStreamingHex* LevelStreaming) {
}

void UClientStreamingManager::OnLevelLoadComplete(ULevelStreamingHex* LevelStreaming) {
}

void UClientStreamingManager::OnLevelHidden(ULevelStreamingHex* LevelStreaming) {
}


