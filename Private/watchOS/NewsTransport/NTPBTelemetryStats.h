//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBTelemetryStats_h
#define NTPBTelemetryStats_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NTPBTelemetryStats : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 count; unsigned int x :1 max; unsigned int x :1 mean; unsigned int x :1 median; unsigned int x :1 min; unsigned int x :1 percentile95; } _has;
}

@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) long long min;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) long long max;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) long long mean;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) long long median;
@property (nonatomic) BOOL hasPercentile95;
@property (nonatomic) long long percentile95;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBTelemetryStats_h */