//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableRoutinePredictedLocation_h
#define HDCodableRoutinePredictedLocation_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableRoutineLocation.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface HDCodableRoutinePredictedLocation : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 confidence; unsigned int x :1 nextEntryTime; unsigned int x :1 modeOfTransportation; unsigned int x :1 sourceType; } _has;
}

@property (readonly, nonatomic) BOOL hasLocationOfInterest;
@property (retain, nonatomic) HDCodableRoutineLocation *locationOfInterest;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasNextEntryTime;
@property (nonatomic) double nextEntryTime;
@property (nonatomic) BOOL hasModeOfTransportation;
@property (nonatomic) int modeOfTransportation;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) int sourceType;
@property (readonly, nonatomic) BOOL hasGeoData;
@property (retain, nonatomic) NSData *geoData;

/* instance methods */
- (id)modeOfTransportationAsString:(int)string;
- (int)StringAsModeOfTransportation:(id)transportation;
- (id)sourceTypeAsString:(int)string;
- (int)StringAsSourceType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* HDCodableRoutinePredictedLocation_h */