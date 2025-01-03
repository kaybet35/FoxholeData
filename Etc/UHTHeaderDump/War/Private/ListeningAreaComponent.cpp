#include "ListeningAreaComponent.h"

UListeningAreaComponent::UListeningAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ListeningRadius = 0.00f;
    this->TeamId = EMapTeamId::None;
}


