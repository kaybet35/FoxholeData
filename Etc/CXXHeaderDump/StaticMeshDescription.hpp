#ifndef UE4SS_SDK_StaticMeshDescription_HPP
#define UE4SS_SDK_StaticMeshDescription_HPP

class UStaticMeshDescription : public UMeshDescriptionBase
{

    void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32 UVIndex);
    void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, const FName& SlotName);
    FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32 UVIndex);
    void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ);
}; // Size: 0x390

#endif
