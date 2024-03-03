//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLAWDHealthKitExperimentalConditionEvent_h
#define NLAWDHealthKitExperimentalConditionEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NLAWDHealthKitExperimentalCondition.h"
#include "NSCopying-Protocol.h"

@interface NLAWDHealthKitExperimentalConditionEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasExperimentalCondition;
@property (retain, nonatomic) NLAWDHealthKitExperimentalCondition *experimentalCondition;

/* instance methods */
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

#endif /* NLAWDHealthKitExperimentalConditionEvent_h */