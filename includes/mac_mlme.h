#ifndef __MAC_MLME__
#define __MAC_MLME__

#include "mac.h"

typedef enum {
    SUCCESS,
    COUNTER_ERROR,
    IMPROPER_KEY_TYPE,
    IMPROPER_SECURITY_LEVEL,
    SECURITY_ERROR,
    UNAVAILABLE_KEY,
    UNSUPPORTED_LEGACY,
    UNSUPPORTED_SECURITY
} SecurityFailure_t;

typedef struct {
    uint8_t CoordAddrMode;
    uint16_t CoordVPANId;
    DeviceAddr_t CoordAddress;
    uint8_t LogicalChannel;
    uint16_t SuperframeSpec;
    uint8_t GTSPermit;
    uint8_t LinkQuality;
    uint32_t TimeStamp;
    SecurityFailure_t SecurityFailure;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} VPANDescriptor_t;

typedef enum {
    ASSOCIATION_SUCCESSFUL = 0x00,
    VPAN_AT_CAPACITY = 0x01,
    VPAN_ACCESS_DENIED = 0x02
} MLME_ASSOCIATE_response_status;

typedef enum {
    SUCCESS,
    CHANNEL_ACCESS_FAILURE,
    NO_ACK,
    NO_DATA,
    COUNTER_ERROR,
    FRAME_TOO_LONG,
    IMPROPER_KEY_TYPE,
    IMPROPER_SECURITY_LEVEL,
    SECURITY_ERROR,
    UNAVAILABLE_KEY,
    UNSUPPORTED_LEGACY,
    UNSUPPORTED_SECURITY,
    INVALID_PARAMETER
} MLME_ASSOCIATE_confirm_status;

typedef enum {
    SUCCESS,
    TRANSACTION_OVERFLOW,
    TRANSACTION_EXPIRED,
    NO_ACK,
    CHANNEL_ACCESS_FAILURE,
    COUNTER_ERROR,
    FRAME_TOO_LONG,
    UNAVAILABLE_KEY,
    UNSUPPORTED_SECURITY,
    INVALID_PARAMETER
} MLME_DISASSOCIATE_confirm_status;

typedef enum {
    SUCCESS,
    UNSUPPORTED_ATTRIBUTE,
    INVALID_INDEX
} MLME_GET_confirm_status;

typedef enum {
    SUCCESS,
    DENIED,
    NO_SHORT_ADDRESS,
    CHANNEL_ACCESS_FAILURE,
    NO_ACK,
    NO_DATA,
    COUNTER_ERROR,
    FRAME_TOO_LONG,
    UNAVAILABLE_KEY,
    UNSUPPORTED_SECURITY,
    INVALID_PARAMETER
} MLME_GTS_confirm_status;

typedef enum {
    SUCCESS
} MLME_RESET_confirm_status;

typedef enum {
    SUCCESS,
    PAST_TIME,
    ON_TIME_TOO_LONG,
    INVALID_PARAMETER
} MLME_RX_ENABLE_confirm_status;

typedef enum {
    SUCCESS,
    LIMIT_REACHED,
    NO_BEACON,
    SCAN_IN_PROGRESS,
    COUNTER_ERROR,
    FRAME_TOO_LONG,
    UNAVAILABLE_KEY,
    UNSUPPORTED_SECURITY,
    INVALID_PARAMETER
} MLME_SCAN_confirm_status;

typedef enum {
    SUCCESS,
    TRANSACTION_OVERFLOW,
    TRANSACTION_EXPIRED,
    CHANNEL_ACCESS_FAILURE,
    NO_ACK, COUNTER_ERROR,
    FRAME_TOO_LONG,
    IMPROPER_KEY_TYPE,
    IMPROPER_SECURITY_LEVEL,
    SECURITY_ERROR,
    UNAVAILABLE_KEY,
    UNSUPPORTED_LEGACY,
    UNSUPPORTED_SECURITY,
    INVALID_PARAMETER
} MLME_COMM_STATUS_indication_status;

typedef enum {
    SUCCESS,
    READ_ONLY,
    UNSUPPORTED_ATTRIBUTE,
    INVALID_INDEX,
    INVALID_PARAMETER
} MLME_SET_confirm_status;

typedef enum {
    SUCCESS,
    NO_SHORT_ADDRESS,
    SUPERFRAME_OVERLAP,
    TRACKING_OFF,
    INVALID_PARAMETER,
    COUNTER_ERROR,
    FRAME_TOO_LONG,
    UNAVAILABLE_KEY,
    UNSUPPORTED_SECURITY,
    CHANNEL_ACCESS_FAILURE
} MLME_START_confirm_status;

typedef enum {
    VPAN_ID_CONFLICT,
    REALIGNMENT,
    BEACON_LOST
} MLME_SYNC_LOSS_indication_reason;

typedef enum {
    SUCCESS,
    CHANNEL_ACCESS_FAILURE,
    NO_ACK, NO_DATA,
    COUNTER_ERROR,
    FRAME_TOO_LONG,
    UNAVAILABLE_KEY,
    UNSUPPORTED_SECURITY,
    INVALID_PARAMETER
} MLME_POLL_confirm_status;

typedef struct {
    uint8_t LogicalChannel;
    uint8_t CoordAddrMode;
    uint16_t CoordVPANId;
    DeviceAddr_t CoordAddress;
    uint64_t CapabilityInformation;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
    uint8_t ColorAssoc;
} MLME_ASSOCIATE_request_t;

typedef struct {
    uint64_t DeviceAddress;
    uint64_t CapabilityInformation;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_ASSOCIATE_indication_t;

typedef struct {
    uint64_t DeviceAddress;
    uint16_t AssocShortAddress;
    MLME_ASSOCIATE_response_status status;
    uint8_t CapabilityNegotiationResponse;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_ASSOCIATE_response_t;

typedef struct {
    uint16_t AssocShortAddress;
    MLME_ASSOCIATE_confirm_status status;
    uint8_t CapabilityNegotiationResponse;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_ASSOCIATE_confirm_t;

typedef struct {
    uint8_t DeviceAddrMode;
    uint16_t DeviceVPANId;
    DeviceAddr_t DeviceAddress;
    uint8_t DisassociateReason;
    uint8_t TxIndirect;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
    uint8_t ColorDisAssoc;
} MLME_DISASSOCIATE_request_t;

typedef struct {
    uint64_t DeviceAddress;
    uint8_t DisassociateReason;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_DISASSOCIATE_indication_t;

typedef struct {
    MLME_DISASSOCIATE_confirm_status status;
    uint8_t DeviceAddrMode;
    uint16_t DeviceVPANId;
    DeviceAddr_t DeviceAddress;
} MLME_DISASSOCIATE_confirm_t;

typedef struct {
    uint8_t BSN;
    VPANDescriptor_t VPANDescriptor;
    uint8_t PendAddrSpec;
    DeviceAddr_t * AddrList;
    uint16_t sduLength;
    uint8_t * sdu;
} MLME_BEACON_NOTIFY_indication_t;

typedef struct {
    uint8_t PIBAttribute;
    uint8_t PIBAttributeIndex;
} MLME_GET_request_t;

typedef struct {
    MLME_GET_confirm_status status;
    uint8_t PIBAttribute;
    uint8_t PIBAttributeIndex;
    void * PIBAttributeValue;
} MLME_GET_confirm_t;

typedef struct {
    uint8_t GTSCharacteristics;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_GTS_request_t;

typedef struct {
    uint16_t DeviceAddress;
    uint8_t GTSCharacteristics;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_GTS_indication_t;

typedef struct {
    uint8_t GTSCharacteristics;
    MLME_GTS_confirm_status status;
} MLME_GTS_confirm_t;

typedef struct {
    uint8_t SetDefaultPIB;
} MLME_RESET_request_t;

typedef struct {
    MLME_RESET_confirm_status status;
} MLME_RESET_confirm_t;

typedef struct {
    uint8_t DeferPermit;
    uint32_t RxOnTime;
    uint32_t RxOnDuration;
} MLME_RX_ENABLE_request_t;

typedef struct {
    MLME_RX_ENABLE_confirm_status status;
} MLME_RX_ENABLE_confirm_t;

typedef struct {
    uint8_t ScanType;
    uint8_t ScanChannels;
    uint8_t ScanDuration;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
    uint8_t ColorScan;
} MLME_SCAN_request_t;

typedef struct {
    MLME_SCAN_confirm_status status;
    uint8_t ScanType;
    uint8_t UnscannedChannels;
    uint8_t ResultListSize;
    VPANDescriptor_t * VPANDescriptorList;
} MLME_SCAN_confirm_t;

typedef struct {
    uint16_t VPANId;
    uint8_t SrcAddrMode;
    DeviceAddr_t SrcAddr;
    uint8_t DstAddrMode;
    DeviceAddr_t DstAddr;
    MLME_COMM_STATUS_indication_status status;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_COMM_STATUS_indication_t;

typedef struct {
    uint8_t PIBAttribute;
    uint8_t PIBAttributeIndex;
    void * PIBAttributeValue;
} MLME_SET_request_t;

typedef struct {
    MLME_SET_confirm_status status;
    uint8_t PIBAttribute;
    uint8_t PIBAttributeIndex;
} MLME_SET_confirm_t;

typedef struct {
    uint16_t VPANId;
    uint8_t LogicalChannel;
    uint32_t StartTime;
    uint8_t BeaconOrder;
    uint8_t SuperframeOrder;
    uint8_t VPANCoordinator;
    uint8_t CoordRealignment;
    uint8_t CoordRealignSecurityLevel;
    uint8_t CoordRealignKeyIdMode;
    uint8_t * CoordRealignKeySource;
    uint8_t CoordRealignKeyIndex;
    uint8_t BeaconSecurityLevel;
    uint8_t BeaconKeyIdMode;
    uint8_t * BeaconKeySource;
    uint8_t BeaconKeyIndex;
} MLME_START_request_t;

typedef struct {
    MLME_START_confirm_status status;
} MLME_START_confirm_t;

typedef struct {
    uint8_t LogicalChannel;
    uint8_t TrackBeacon;
} MLME_SYNC_request_t;

typedef struct {
    MLME_SYNC_LOSS_indication_reason LossReason;
    uint16_t VPANId;
    uint8_t LogicalChannel;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_SYNC_LOSS_indication_t;

typedef struct {
    uint8_t CoordAddrMode;
    uint16_t CoordVPANId;
    DeviceAddr_t CoordAddress;
    uint8_t SecurityLevel;
    uint8_t KeyIdMode;
    uint8_t * KeySource;
    uint8_t KeyIndex;
} MLME_POLL_request_t;

typedef struct {
    MLME_POLL_confirm_status status;
} MLME_POLL_confirm_t;

#endif
