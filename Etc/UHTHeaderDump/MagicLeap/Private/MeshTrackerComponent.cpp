#include "MeshTrackerComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

UMeshTrackerComponent::UMeshTrackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ScanWorld = true;
    this->MeshType = EMagicLeapMeshType::Triangles;
    this->BoundingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingVolume"));
    this->LevelOfDetail = EMagicLeapMeshLOD::Medium;
    this->PerimeterOfGapsToFill = 300.00f;
    this->Planarize = false;
    this->DisconnectedSectionArea = 50.00f;
    this->RequestNormals = true;
    this->RequestVertexConfidence = false;
    this->VertexColorMode = EMagicLeapMeshVertexColorMode::None;
    this->BlockVertexColors.AddDefaulted(6);
    this->RemoveOverlappingTriangles = false;
    this->MRMesh = NULL;
    this->BricksPerFrame = 1;
}

void UMeshTrackerComponent::SelectMeshBlocks_Implementation(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh) {
}

int32 UMeshTrackerComponent::GetNumQueuedBlockUpdates() {
    return 0;
}

void UMeshTrackerComponent::DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

void UMeshTrackerComponent::DisconnectBlockSelector() {
}

void UMeshTrackerComponent::ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
}

void UMeshTrackerComponent::ConnectBlockSelector(TScriptInterface<IMagicLeapMeshBlockSelectorInterface> Selector) {
}


