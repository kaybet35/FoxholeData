#include "MapIntelligenceTypeConfig.h"

FMapIntelligenceTypeConfig::FMapIntelligenceTypeConfig() {
    this->Category = EMapIntelCategory::None;
    this->FadeSeconds = 0.00f;
    this->ExpirySeconds = 0.00f;
    this->bRequiresPlayerLineOfSight = false;
}

