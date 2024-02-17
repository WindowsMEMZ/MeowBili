//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryAudiogramValue_h
#define HKCodableSummaryAudiogramValue_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodableQuantity.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface HKCodableSummaryAudiogramValue : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryAudiogramValue_1 { unsigned int x :1 diagnostic; unsigned int x :1 timestampData; } _has;
}

@property (nonatomic) BOOL hasDiagnostic;
@property (nonatomic) long long diagnostic;
@property (readonly, nonatomic) BOOL hasAverageLeftEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *averageLeftEarSensitivity;
@property (readonly, nonatomic) BOOL hasAverageRightEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *averageRightEarSensitivity;
@property (readonly, nonatomic) BOOL hasMinimumSensitivity;
@property (retain, nonatomic) HKCodableQuantity *minimumSensitivity;
@property (readonly, nonatomic) BOOL hasMaximumSensitivity;
@property (retain, nonatomic) HKCodableQuantity *maximumSensitivity;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;
@property (retain, nonatomic) NSMutableArray *sensitivityPoints;

/* class methods */
+ (Class)sensitivityPointsType;

/* instance methods */
- (void)clearSensitivityPoints;
- (void)addSensitivityPoints:(id)points;
- (unsigned long long)sensitivityPointsCount;
- (id)sensitivityPointsAtIndex:(unsigned long long)index;
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

#endif /* HKCodableSummaryAudiogramValue_h */