#include "PayloadInstancedStaticMeshComponent.h"

UPayloadInstancedStaticMeshComponent::UPayloadInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rows = 0;
    this->Columns = 0;
    this->RowSpacing = 0.00f;
    this->ColumnSpacing = 0.00f;
    this->GroupIndex = 0;
    this->MeshInstanceRemovalDelay = 0.00f;
}


