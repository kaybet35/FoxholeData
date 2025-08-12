#include "EmplacedArtillery.h"
#include "EStructureProfileType.h"

AEmplacedArtillery::AEmplacedArtillery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::EmplacedArtillery;
}


