#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "ReservableStructure.generated.h"

UCLASS(Blueprintable)
class WAR_API AReservableStructure : public ABuildableStructure {
    GENERATED_BODY()
public:
    AReservableStructure(const FObjectInitializer& ObjectInitializer);

};

