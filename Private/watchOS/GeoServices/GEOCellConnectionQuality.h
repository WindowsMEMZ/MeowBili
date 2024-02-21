//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOCellConnectionQuality_h
#define GEOCellConnectionQuality_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLocation.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOCellConnectionQuality : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_bytesDlTotal; unsigned int x :1 has_bytesUlTotal; unsigned int x :1 has_timeOfDay; unsigned int x :1 has_wifiRssi; unsigned int x :1 has_wifiSNR; unsigned int x :1 has_cellArfcn; unsigned int x :1 has_cellBand; unsigned int x :1 has_cellBssLoad; unsigned int x :1 has_cellDataLQM; unsigned int x :1 has_cellEstimatedBW; unsigned int x :1 has_cellLteRSRP; unsigned int x :1 has_cellLteRSRQ; unsigned int x :1 has_cellLteSNR; unsigned int x :1 has_cellMaxDlCaNumConf; unsigned int x :1 has_cellMaxUlCaNumConf; unsigned int x :1 has_cellNpn; unsigned int x :1 has_cellNrRSRP; unsigned int x :1 has_cellNrRSRQ; unsigned int x :1 has_cellNrSNR; unsigned int x :1 has_cellNsaFR1; unsigned int x :1 has_cellNsaFR2; unsigned int x :1 has_cellPMax; unsigned int x :1 has_cellRrcState; unsigned int x :1 has_cellTotalDlBW; unsigned int x :1 has_cellTotalUlBW; unsigned int x :1 has_cellVoiceLQM; unsigned int x :1 has_connectionDuration; unsigned int x :1 has_connectionType; unsigned int x :1 has_dlMedThroughput; unsigned int x :1 has_dlPeakThroughput; unsigned int x :1 has_environment; unsigned int x :1 has_ftCounter; unsigned int x :1 has_ftFacetimeAction; unsigned int x :1 has_ftFacetimePacketLoss; unsigned int x :1 has_ftFacetimeTimeDelay; unsigned int x :1 has_latency; unsigned int x :1 has_messageTrigger; unsigned int x :1 has_messageType; unsigned int x :1 has_motionState; unsigned int x :1 has_ulMedThroughput; unsigned int x :1 has_ulPeakThroughput; unsigned int x :1 has_wifiBand; unsigned int x :1 has_wifiCca; unsigned int x :1 has_wifiChannelWidth; unsigned int x :1 has_wifiChannel; unsigned int x :1 has_wifiEstimatedBW; unsigned int x :1 has_wifiPhyMode; unsigned int x :1 has_wifiQbssLoad; unsigned int x :1 has_wifiRxPhyRate; unsigned int x :1 has_wifiRxRetry; unsigned int x :1 has_wifiStationCount; unsigned int x :1 has_wifiTxPER; unsigned int x :1 has_wifiTxPhyRate; unsigned int x :1 has_wrmAudioErasure; unsigned int x :1 has_wrmVideoErasure; unsigned int x :1 has_cellIsLimitedService; unsigned int x :1 has_cellIsNoService; unsigned int x :1 has_cellIsRoaming; unsigned int x :1 has_cellNpnStatus; unsigned int x :1 has_isCallFailed; unsigned int x :1 has_isEmergency; unsigned int x :1 has_lowInternetDL; unsigned int x :1 has_lowInternetUL; unsigned int x :1 has_wifiCaptiveNetworks; unsigned int x :1 has_wrmAlertedMode; unsigned int x :1 has_wrmIsPCDetected; unsigned int x :1 has_wrmIsStallDetected; unsigned int x :1 read_callID; unsigned int x :1 read_cellGCI; unsigned int x :1 read_cellHomePLMN2; unsigned int x :1 read_cellHomePLMN; unsigned int x :1 read_cellRatType; unsigned int x :1 read_cellServiceProvider2; unsigned int x :1 read_cellServiceProvider; unsigned int x :1 read_ftIRATRecommendationReason; unsigned int x :1 read_ftIRATRecommendation; unsigned int x :1 read_location; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasMotionState;
@property (nonatomic) int motionState;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasMessageTrigger;
@property (nonatomic) int messageTrigger;
@property (nonatomic) BOOL hasEnvironment;
@property (nonatomic) int environment;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) unsigned int connectionDuration;
@property (nonatomic) BOOL hasIsEmergency;
@property (nonatomic) BOOL isEmergency;
@property (nonatomic) BOOL hasBytesDlTotal;
@property (nonatomic) unsigned long long bytesDlTotal;
@property (nonatomic) BOOL hasBytesUlTotal;
@property (nonatomic) unsigned long long bytesUlTotal;
@property (readonly, nonatomic) BOOL hasCallID;
@property (retain, nonatomic) NSString *callID;
@property (nonatomic) BOOL hasIsCallFailed;
@property (nonatomic) BOOL isCallFailed;
@property (nonatomic) BOOL hasDlPeakThroughput;
@property (nonatomic) float dlPeakThroughput;
@property (nonatomic) BOOL hasUlPeakThroughput;
@property (nonatomic) float ulPeakThroughput;
@property (nonatomic) BOOL hasDlMedThroughput;
@property (nonatomic) float dlMedThroughput;
@property (nonatomic) BOOL hasUlMedThroughput;
@property (nonatomic) float ulMedThroughput;
@property (nonatomic) BOOL hasLowInternetUL;
@property (nonatomic) BOOL lowInternetUL;
@property (nonatomic) BOOL hasLowInternetDL;
@property (nonatomic) BOOL lowInternetDL;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) unsigned int latency;
@property (nonatomic) BOOL hasWifiRssi;
@property (nonatomic) long long wifiRssi;
@property (nonatomic) BOOL hasWifiTxPER;
@property (nonatomic) unsigned int wifiTxPER;
@property (nonatomic) BOOL hasWifiSNR;
@property (nonatomic) long long wifiSNR;
@property (nonatomic) BOOL hasWifiCaptiveNetworks;
@property (nonatomic) BOOL wifiCaptiveNetworks;
@property (nonatomic) BOOL hasWifiRxRetry;
@property (nonatomic) unsigned int wifiRxRetry;
@property (nonatomic) BOOL hasWifiEstimatedBW;
@property (nonatomic) unsigned int wifiEstimatedBW;
@property (nonatomic) BOOL hasWifiTxPhyRate;
@property (nonatomic) unsigned int wifiTxPhyRate;
@property (nonatomic) BOOL hasWifiRxPhyRate;
@property (nonatomic) unsigned int wifiRxPhyRate;
@property (nonatomic) BOOL hasWifiQbssLoad;
@property (nonatomic) unsigned int wifiQbssLoad;
@property (nonatomic) BOOL hasWifiCca;
@property (nonatomic) unsigned int wifiCca;
@property (nonatomic) BOOL hasWifiStationCount;
@property (nonatomic) unsigned int wifiStationCount;
@property (nonatomic) BOOL hasWifiBand;
@property (nonatomic) unsigned int wifiBand;
@property (nonatomic) BOOL hasWifiChannel;
@property (nonatomic) unsigned int wifiChannel;
@property (nonatomic) BOOL hasWifiChannelWidth;
@property (nonatomic) unsigned int wifiChannelWidth;
@property (nonatomic) BOOL hasWifiPhyMode;
@property (nonatomic) unsigned int wifiPhyMode;
@property (readonly, nonatomic) BOOL hasCellGCI;
@property (retain, nonatomic) NSString *cellGCI;
@property (readonly, nonatomic) BOOL hasCellHomePLMN;
@property (retain, nonatomic) NSString *cellHomePLMN;
@property (readonly, nonatomic) BOOL hasCellHomePLMN2;
@property (retain, nonatomic) NSString *cellHomePLMN2;
@property (readonly, nonatomic) BOOL hasCellServiceProvider;
@property (retain, nonatomic) NSString *cellServiceProvider;
@property (readonly, nonatomic) BOOL hasCellServiceProvider2;
@property (retain, nonatomic) NSString *cellServiceProvider2;
@property (nonatomic) BOOL hasCellVoiceLQM;
@property (nonatomic) unsigned int cellVoiceLQM;
@property (nonatomic) BOOL hasCellNpnStatus;
@property (nonatomic) BOOL cellNpnStatus;
@property (nonatomic) BOOL hasCellNpn;
@property (nonatomic) unsigned int cellNpn;
@property (nonatomic) BOOL hasCellArfcn;
@property (nonatomic) unsigned int cellArfcn;
@property (nonatomic) BOOL hasCellBand;
@property (nonatomic) unsigned int cellBand;
@property (readonly, nonatomic) BOOL hasCellRatType;
@property (retain, nonatomic) NSString *cellRatType;
@property (nonatomic) BOOL hasCellLteRSRP;
@property (nonatomic) int cellLteRSRP;
@property (nonatomic) BOOL hasCellLteSNR;
@property (nonatomic) int cellLteSNR;
@property (nonatomic) BOOL hasCellLteRSRQ;
@property (nonatomic) int cellLteRSRQ;
@property (nonatomic) BOOL hasCellNrRSRP;
@property (nonatomic) int cellNrRSRP;
@property (nonatomic) BOOL hasCellNrRSRQ;
@property (nonatomic) int cellNrRSRQ;
@property (nonatomic) BOOL hasCellNrSNR;
@property (nonatomic) int cellNrSNR;
@property (nonatomic) BOOL hasCellDataLQM;
@property (nonatomic) unsigned int cellDataLQM;
@property (nonatomic) BOOL hasCellRrcState;
@property (nonatomic) unsigned int cellRrcState;
@property (nonatomic) BOOL hasCellNsaFR1;
@property (nonatomic) unsigned int cellNsaFR1;
@property (nonatomic) BOOL hasCellNsaFR2;
@property (nonatomic) unsigned int cellNsaFR2;
@property (nonatomic) BOOL hasCellTotalDlBW;
@property (nonatomic) unsigned int cellTotalDlBW;
@property (nonatomic) BOOL hasCellTotalUlBW;
@property (nonatomic) unsigned int cellTotalUlBW;
@property (nonatomic) BOOL hasCellBssLoad;
@property (nonatomic) unsigned int cellBssLoad;
@property (nonatomic) BOOL hasCellMaxDlCaNumConf;
@property (nonatomic) unsigned int cellMaxDlCaNumConf;
@property (nonatomic) BOOL hasCellMaxUlCaNumConf;
@property (nonatomic) unsigned int cellMaxUlCaNumConf;
@property (nonatomic) BOOL hasCellEstimatedBW;
@property (nonatomic) unsigned int cellEstimatedBW;
@property (nonatomic) BOOL hasCellPMax;
@property (nonatomic) unsigned int cellPMax;
@property (nonatomic) BOOL hasCellIsRoaming;
@property (nonatomic) BOOL cellIsRoaming;
@property (nonatomic) BOOL hasCellIsNoService;
@property (nonatomic) BOOL cellIsNoService;
@property (nonatomic) BOOL hasCellIsLimitedService;
@property (nonatomic) BOOL cellIsLimitedService;
@property (readonly, nonatomic) BOOL hasFtIRATRecommendation;
@property (retain, nonatomic) NSString *ftIRATRecommendation;
@property (readonly, nonatomic) BOOL hasFtIRATRecommendationReason;
@property (retain, nonatomic) NSString *ftIRATRecommendationReason;
@property (nonatomic) BOOL hasFtFacetimePacketLoss;
@property (nonatomic) unsigned int ftFacetimePacketLoss;
@property (nonatomic) BOOL hasFtFacetimeAction;
@property (nonatomic) unsigned int ftFacetimeAction;
@property (nonatomic) BOOL hasFtFacetimeTimeDelay;
@property (nonatomic) unsigned int ftFacetimeTimeDelay;
@property (nonatomic) BOOL hasFtCounter;
@property (nonatomic) unsigned int ftCounter;
@property (nonatomic) BOOL hasWrmAlertedMode;
@property (nonatomic) BOOL wrmAlertedMode;
@property (nonatomic) BOOL hasWrmIsStallDetected;
@property (nonatomic) BOOL wrmIsStallDetected;
@property (nonatomic) BOOL hasWrmIsPCDetected;
@property (nonatomic) BOOL wrmIsPCDetected;
@property (nonatomic) BOOL hasWrmVideoErasure;
@property (nonatomic) unsigned int wrmVideoErasure;
@property (nonatomic) BOOL hasWrmAudioErasure;
@property (nonatomic) unsigned int wrmAudioErasure;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)motionStateAsString:(int)string;
- (int)StringAsMotionState:(id)state;
- (id)messageTypeAsString:(int)string;
- (int)StringAsMessageType:(id)type;
- (id)connectionTypeAsString:(int)string;
- (int)StringAsConnectionType:(id)type;
- (id)messageTriggerAsString:(int)string;
- (int)StringAsMessageTrigger:(id)trigger;
- (id)environmentAsString:(int)string;
- (int)StringAsEnvironment:(id)environment;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOCellConnectionQuality_h */