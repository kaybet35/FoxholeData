#include "RuinableStructure.h"
#include "RuinedComponent.h"

ARuinableStructure::ARuinableStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowRuinedInEditor = false;
    this->RuinedComponent = CreateDefaultSubobject<URuinedComponent>(TEXT("RuinedComponent"));
    this->RuinedComponent->SetupAttachment(RootComponent);
}


