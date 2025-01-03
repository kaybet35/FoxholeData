#include "DestroyedSpecializedFactory.h"
#include "SpecializedFactoryComponent.h"

ADestroyedSpecializedFactory::ADestroyedSpecializedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpecializedFactoryComponent = CreateDefaultSubobject<USpecializedFactoryComponent>(TEXT("SpecializedFactoryComponent"));
}


