#include "GlobalShardConfig.h"

FGlobalShardConfig::FGlobalShardConfig() {
    this->DefaultShardId = 0;
    this->bEnableOverpopMode = false;
    this->bRedirectToShardSelector = false;
    this->OverpopShardId = 0;
}
