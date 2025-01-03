#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x0218 (size: 0x8)

}; // Size: 0x220

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0400 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0401 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x0408 (size: 0x28)
    FName AttachEndToSocketName;                                                      // 0x0430 (size: 0x8)
    FVector EndLocation;                                                              // 0x0438 (size: 0xC)
    float CableLength;                                                                // 0x0444 (size: 0x4)
    int32 NumSegments;                                                                // 0x0448 (size: 0x4)
    float SubstepTime;                                                                // 0x044C (size: 0x4)
    int32 SolverIterations;                                                           // 0x0450 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x0454 (size: 0x1)
    bool bEnableCollision;                                                            // 0x0455 (size: 0x1)
    float CollisionFriction;                                                          // 0x0458 (size: 0x4)
    FVector CableForce;                                                               // 0x045C (size: 0xC)
    float CableGravityScale;                                                          // 0x0468 (size: 0x4)
    float CableWidth;                                                                 // 0x046C (size: 0x4)
    int32 NumSides;                                                                   // 0x0470 (size: 0x4)
    float TileMaterial;                                                               // 0x0474 (size: 0x4)

    void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);
    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x490

#endif
