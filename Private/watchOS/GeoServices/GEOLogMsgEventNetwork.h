//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgEventNetwork_h
#define GEOLogMsgEventNetwork_h
@import Foundation;

#include "PBCodable.h"
#include "GEONetworkSessionTaskTransactionMetrics.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOLogMsgEventNetwork : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_requestEnd; unsigned int x :1 has_requestErrorCode; unsigned int x :1 has_requestStart; unsigned int x :1 has_decodeTime; unsigned int x :1 has_httpResponseCode; unsigned int x :1 has_mptcpServiceType; unsigned int x :1 has_networkService; unsigned int x :1 has_queuedTime; unsigned int x :1 has_redirectCount; unsigned int x :1 has_requestDataSize; unsigned int x :1 has_responseDataSize; unsigned int x :1 has_samplingRate; unsigned int x :1 has_tilesetId; unsigned int x :1 has_totalTime; unsigned int x :1 has_mptcpNegotiated; unsigned int x :1 has_rnfTriggered; unsigned int x :1 has_wasBackground; unsigned int x :1 read_manifestEnv; unsigned int x :1 read_requestAppIdMajorVer; unsigned int x :1 read_requestAppIdMinorVer; unsigned int x :1 read_requestAppIdentifier; unsigned int x :1 read_requestErrorDescription; unsigned int x :1 read_requestErrorDomain; unsigned int x :1 read_serviceIpAddress; unsigned int x :1 read_taskMetrics; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasNetworkService;
@property (nonatomic) int networkService;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) int requestDataSize;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) int responseDataSize;
@property (readonly, nonatomic) BOOL hasRequestErrorDomain;
@property (retain, nonatomic) NSString *requestErrorDomain;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (nonatomic) long long requestErrorCode;
@property (readonly, nonatomic) BOOL hasRequestErrorDescription;
@property (retain, nonatomic) NSString *requestErrorDescription;
@property (readonly, nonatomic) BOOL hasRequestAppIdentifier;
@property (retain, nonatomic) NSString *requestAppIdentifier;
@property (nonatomic) BOOL hasQueuedTime;
@property (nonatomic) int queuedTime;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) int totalTime;
@property (nonatomic) BOOL hasHttpResponseCode;
@property (nonatomic) int httpResponseCode;
@property (nonatomic) BOOL hasDecodeTime;
@property (nonatomic) int decodeTime;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) double requestStart;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) double requestEnd;
@property (nonatomic) BOOL hasRedirectCount;
@property (nonatomic) int redirectCount;
@property (readonly, nonatomic) BOOL hasManifestEnv;
@property (retain, nonatomic) NSString *manifestEnv;
@property (nonatomic) BOOL hasTilesetId;
@property (nonatomic) unsigned int tilesetId;
@property (nonatomic) BOOL hasMptcpServiceType;
@property (nonatomic) int mptcpServiceType;
@property (nonatomic) BOOL hasMptcpNegotiated;
@property (nonatomic) BOOL mptcpNegotiated;
@property (nonatomic) BOOL hasWasBackground;
@property (nonatomic) BOOL wasBackground;
@property (readonly, nonatomic) BOOL hasServiceIpAddress;
@property (retain, nonatomic) NSString *serviceIpAddress;
@property (nonatomic) BOOL hasRnfTriggered;
@property (nonatomic) BOOL rnfTriggered;
@property (readonly, nonatomic) BOOL hasRequestAppIdMajorVer;
@property (retain, nonatomic) NSString *requestAppIdMajorVer;
@property (readonly, nonatomic) BOOL hasRequestAppIdMinorVer;
@property (retain, nonatomic) NSString *requestAppIdMinorVer;
@property (nonatomic) BOOL hasSamplingRate;
@property (nonatomic) unsigned int samplingRate;
@property (readonly, nonatomic) BOOL hasTaskMetrics;
@property (retain, nonatomic) GEONetworkSessionTaskTransactionMetrics *taskMetrics;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)networkServiceAsString:(int)string;
- (int)StringAsNetworkService:(id)service;
- (id)mptcpServiceTypeAsString:(int)string;
- (int)StringAsMptcpServiceType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLogMsgEventNetwork_h */