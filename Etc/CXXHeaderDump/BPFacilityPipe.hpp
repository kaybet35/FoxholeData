#ifndef UE4SS_SDK_BPFacilityPipe_HPP
#define UE4SS_SDK_BPFacilityPipe_HPP

class ABPFacilityPipe_C : public APipeline
{
    class USplineConnectorComponent* SplineConnector1;                                // 0x0840 (size: 0x8)
    class UBoxComponent* UseAreaBox1;                                                 // 0x0848 (size: 0x8)
    class UStaticMeshComponent* FrontTrim;                                            // 0x0850 (size: 0x8)
    class UStaticMeshComponent* BackTrim;                                             // 0x0858 (size: 0x8)

}; // Size: 0x860

#endif
