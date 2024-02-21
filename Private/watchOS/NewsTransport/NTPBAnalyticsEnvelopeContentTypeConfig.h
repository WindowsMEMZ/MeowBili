//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBAnalyticsEnvelopeContentTypeConfig_h
#define NTPBAnalyticsEnvelopeContentTypeConfig_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 groupingTag; unsigned int x :1 seedTime; unsigned int x :1 samplingCeiling; unsigned int x :1 samplingFloor; } _has;
}

@property (readonly, nonatomic) BOOL hasEndpointURLString;
@property (retain, nonatomic) NSString *endpointURLString;
@property (nonatomic) BOOL hasSeedTime;
@property (nonatomic) unsigned long long seedTime;
@property (readonly, nonatomic) BOOL hasContentHeaderName;
@property (retain, nonatomic) NSString *contentHeaderName;
@property (readonly, nonatomic) BOOL hasContentHeaderValue;
@property (retain, nonatomic) NSString *contentHeaderValue;
@property (nonatomic) BOOL hasSamplingFloor;
@property (nonatomic) unsigned int samplingFloor;
@property (nonatomic) BOOL hasSamplingCeiling;
@property (nonatomic) unsigned int samplingCeiling;
@property (nonatomic) BOOL hasGroupingTag;
@property (nonatomic) unsigned long long groupingTag;

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBAnalyticsEnvelopeContentTypeConfig_h */