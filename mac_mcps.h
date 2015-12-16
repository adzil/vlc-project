#ifndef __MAC_MCPS__
#define __MAC_MCPS__

#include "mac.h"

typedef enum {
    SUCCESS,
    TRANSACTION_OVERFLOW,
    TRANSACTION_EXPIRED,
    CHANNEL_ACCESS_FAILURE,
    INVALID_ADDRESS,
    INVALID_GTS, NO_ACK,
    COUNTER_ERROR,
    FRAME_TOO_LONG,
    UNAVAILABLE_KEY,
    UNSUPPORTED_SECURITY,
    INVALID_PARAMETER
} MCPS_DATA_confirm_status;

typedef enum {
    SUCCESS,
    INVALID_HANDLE
} MCPS_PURGE_confirm_status;

typedef struct {
    uint8_t SrcAddrMode;
    uint8_t DstAddrMode;
    uint16_t DstVPANId;
    DeviceAddr_t DstAddr;
    uint16_t MsduLength;
    uint8_t * Msdu;
    uint8_t MsduHandle;
    uint8_t TxOptions;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    KeySource_t KeySource;
    uint8_t KeyIndex;
    uint8_t DataRate;
    uint8_t BurstMode;
    uint8_t ColorReceived;
    uint8_t ColorNotReceived;
} MCPS_DATA_request_t;

typedef struct {
    uint8_t MsduHandle;
    MCPS_DATA_confirm_status status;
#ifdef TIMESTAMP_ENABLE
    uint32_t Timestamp;
#endif
} MCPS_DATA_confirm_t;

typedef struct {
    uint8_t SrcAddrMode;
    uint16_t SrcVPANId;
    DeviceAddr_t SrcAddr;
    uint8_t DstAddrMode;
    uint16_t DstVPANId;
    DeviceAddr_t DstAddr;
    uint16_t MsduLength;
    uint8_t * Msdu;
    uint8_t MpduLinkQuality;
    uint8_t DSN;
#ifdef TIMESTAMP_ENABLE
    uint32_t Timestamp;
#endif
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    KeySource_t KeySource;
    uint8_t KeyIndex;
    uint8_t DataRate;
    uint8_t BurstMode;
    uint8_t ColorReceived;
    uint8_t ColorNotReceived;
} MCPS_DATA_indication_t

typedef struct {
    uint8_t MsduHandle;
} MCPS_PURGE_request_t;

typedef struct {
    uint8_t MsduHandle;
    MCPS_PURGE_confirm_status status;
} MCPS_PURGE_confirm_t;

#endif
