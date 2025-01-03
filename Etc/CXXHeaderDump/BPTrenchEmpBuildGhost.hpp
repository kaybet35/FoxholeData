#ifndef UE4SS_SDK_BPTrenchEmpBuildGhost_HPP
#define UE4SS_SDK_BPTrenchEmpBuildGhost_HPP

class ABPTrenchEmpBuildGhost_C : public ABuildGhost
{
    class UStaticMeshComponent* FrontLeft;                                            // 0x0580 (size: 0x8)
    class UStaticMeshComponent* BackLeft;                                             // 0x0588 (size: 0x8)
    class UStaticMeshComponent* FrontRight;                                           // 0x0590 (size: 0x8)
    class UStaticMeshComponent* BackRight;                                            // 0x0598 (size: 0x8)
    class UStaticMeshComponent* Left;                                                 // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* Back;                                                 // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* Front;                                                // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* Right;                                                // 0x05B8 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x05C0 (size: 0x8)
    class UBuildSocketComponent* BackRightSocket;                                     // 0x05C8 (size: 0x8)
    class UBuildSocketComponent* FrontRightSocket;                                    // 0x05D0 (size: 0x8)
    class UBuildSocketComponent* FrontLeftSocket;                                     // 0x05D8 (size: 0x8)
    class UBuildSocketComponent* BackLeftSocket;                                      // 0x05E0 (size: 0x8)
    class UBuildSocketComponent* RightSocket;                                         // 0x05E8 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x05F0 (size: 0x8)
    class UBuildSocketComponent* LeftSocket;                                          // 0x05F8 (size: 0x8)

}; // Size: 0x600

#endif
