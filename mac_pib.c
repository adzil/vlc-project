#include "mac_pib.h"

/* Memory allocation for MAC PIB */
uint16_t macAckWaitDuration; // Review
uint8_t macAssociatedVPANCoord;
uint8_t macAssociationPermit;
uint8_t macAutoRequest;
uint8_t * macBeaconPayload;
uint16_t macBeaconPayloadLength;
uint8_t macBeaconOrder;
uint32_t macBeaconTxTime;
uint8_t macBSN; // Rand() required
uint64_t macCoordExtendedAddress;
uint16_t macCoordShortAddres;
uint8_t macDSN; // Rand() required
uint8_t macGTSPermit;
uint8_t macMaxBE;
uint8_t macMaxCSMABackoffs;
uint16_t macMaxFrameTotalWaitTime; // Review
uint8_t macMaxFrameRetries;
uint8_t macMinBE;
uint16_t macMinLIFSPeriod; // Review
uint16_t macMinSIFSPeriod; // Review
uint16_t macVPANId;
uint8_t macResponseWaitTime;
uint8_t macRxOnWhenIdle;
uint8_t macSecurityEnabled;
uint16_t macShortAddress;
uint8_t macSuperframeOrder;
uint8_t macTimestampSupported; // Implementation Specific
uint16_t macTransactionPersistenceTime;
uint16_t macDim;
uint8_t macNumAcks;
uint8_t macLinkTimeOut;
uint8_t macDimOverrideRequest;
uint8_t macDimPWMOverrideRequest;
uint8_t macDimDataFailureIndication;
uint8_t macDuringASSOCColor;
uint8_t macDuringDISASSOCColor;
uint8_t macDuringSCANColor;
uint8_t macColorReceived;
uint8_t macColorNotReceived;
uint8_t macCQIColorLFER;
uint8_t macCQIColorMFER;
uint8_t macCQIColorHFER;
uint8_t macCFAppColor;
uint8_t macColorStabilization;
uint32_t macColorStabilizationTimer;
uint8_t macUseDimmedOOKmode;
uint8_t macTimeStampOffset;
uint8_t macUseBlinkingNotification;
uint8_t macBlinkingNotificationFrequency;

void macPib_reset (void) {
    macAckWaitDuration = 0; // Review
    macAssociatedVPANCoord = 0;
    macAssociationPermit = 0;
    macAutoRequest = 1;
    macBeaconPayload = NULL;
    macBeaconPayloadLength = 0;
    macBeaconOrder = 15;
    macBeaconTxTime = 0;
    macBSN = 0; // Rand() required
    macCoordExtendedAddress = 0;
    macCoordShortAddres = 0xffff;
    macDSN = 0; // Rand() required
    macGTSPermit = 1;
    macMaxBE = 5;
    macMaxCSMABackoffs = 4;
    macMaxFrameTotalWaitTime = 0; // Review
    macMaxFrameRetries = 3;
    macMinBE = 3;
    macMinLIFSPeriod; // Review
    macMinSIFSPeriod; // Review
    macVPANId = 0xffff;
    macResponseWaitTime = 32;
    macRxOnWhenIdle = 0;
    macSecurityEnabled = 1;
    macShortAddress = 0xffff;
    macSuperframeOrder = 15;
    macTimestampSupported = 0; // Implementation Specific
    macTransactionPersistenceTime = 0x1f4;
    macDim = 0;
    macNumAcks = 3;
    macLinkTimeOut = 63;
    macDimOverrideRequest = 0;
    macDimPWMOverrideRequest = 0;
    macDimDataFailureIndication = 0;
    macDuringASSOCColor = 0;
    macDuringDISASSOCColor = 0;
    macDuringSCANColor = 0;
    macColorReceived = 0;
    macColorNotReceived = 0;
    macCQIColorLFER = 0;
    macCQIColorMFER = 0;
    macCQIColorHFER = 0;
    macCFAppColor = 0;
    macColorStabilization = 0;
    macColorStabilizationTimer = 0x400000;
    macUseDimmedOOKmode = 0;
    macTimeStampOffset = 0;
    macUseBlinkingNotification = 1;
    macBlinkingNotificationFrequency = 0;
}
