#ifndef __MAC_CONSTANTS__
#define __MAC_CONSTANTS__

#include "phy_constants.h"

#define aBaseSlotDuration 60
#define aNumSuperframeSlots 16
#define aExtendedAddress 0xffaaffaaffaaffaa // Change me!
#define aGTSDescPersistenceTime 4
#define aMaxBeaconOverhead 75
#define aMaxLostBeacons 4
#define aMaxMPDUUnsecuredOverhead 25
#define aMaxSIFSFrameSize 18
#define aMaxSIFSFrameSize 440
#define aMinMPDUOverhead 9
#define aNumSuperframeSlots 16
#define aUnitBackoffPeriod 20
#define aBaseSuperframeDuration aBaseSlotDuration * aNumSuperframeSlots
#define aMaxBeaconPayloadLength aMaxPHYFrameSize - aMaxBeaconOverhead
#define aMaxMACSafePayloadSize aMaxPHYFrameSize - aMaxMPDUUnsecuredOverhead
#define aMaxMACPayloadSize aMaxPHYFrameSize - aMinMPDUOverhead

#endif
