#ifndef __MAC_PIB__
#define __MAC_PIB__

/* PIB variable prototypes */
extern uint16_t macAckWaitDuration; // Review
extern uint8_t macAssociatedVPANCoord;
extern uint8_t macAssociationPermit;
extern uint8_t macAutoRequest;
extern uint8_t * macBeaconPayload;
extern uint16_t macBeaconPayloadLength;
extern uint8_t macBeaconOrder;
extern uint32_t macBeaconTxTime;
extern uint8_t macBSN; // Rand() required
extern uint64_t macCoordExtendedAddress;
extern uint16_t macCoordShortAddres;
extern uint8_t macDSN; // Rand() required
extern uint8_t macGTSPermit;
extern uint8_t macMaxBE;
extern uint8_t macMaxCSMABackoffs;
extern uint16_t macMaxFrameTotalWaitTime; // Review
extern uint8_t macMaxFrameRetries;
extern uint8_t macMinBE;
extern uint16_t macMinLIFSPeriod; // Review
extern uint16_t macMinSIFSPeriod; // Review
extern uint16_t macVPANId;
extern uint8_t macResponseWaitTime;
extern uint8_t macRxOnWhenIdle;
extern uint8_t macSecurityEnabled;
extern uint16_t macShortAddress;
extern uint8_t macSuperframeOrder;
extern uint8_t macTimestampSupported; // Implementation Specific
extern uint16_t macTransactionPersistenceTime;
extern uint16_t macDim;
extern uint8_t macNumAcks;
extern uint8_t macLinkTimeOut;
extern uint8_t macDimOverrideRequest;
extern uint8_t macDimPWMOverrideRequest;
extern uint8_t macDimDataFailureIndication;
extern uint8_t macDuringASSOCColor;
extern uint8_t macDuringDISASSOCColor;
extern uint8_t macDuringSCANColor;
extern uint8_t macColorReceived;
extern uint8_t macColorNotReceived;
extern uint8_t macCQIColorLFER;
extern uint8_t macCQIColorMFER;
extern uint8_t macCQIColorHFER;
extern uint8_t macCFAppColor;
extern uint8_t macColorStabilization;
extern uint32_t macColorStabilizationTimer;
extern uint8_t macUseDimmedOOKmode;
extern uint8_t macTimeStampOffset;
extern uint8_t macUseBlinkingNotification;
extern uint8_t macBlinkingNotificationFrequency;

/* Function prototypes */
void macPib_reset (void);

#endif
