//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCGoalCompletionProtobuf_h
#define FCCGoalCompletionProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FCCGoalCompletionProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 activitySummaryIndex; } _has;
}

@property (nonatomic) BOOL hasActivitySummaryIndex;
@property (nonatomic) long long activitySummaryIndex;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long completedGoalTypesCount;
@property (readonly, nonatomic) int * completedGoalTypes;

/* instance methods */
- (void)dealloc;
- (void)clearCompletedGoalTypes;
- (void)addCompletedGoalTypes:(int)types;
- (int)completedGoalTypesAtIndex:(unsigned long long)index;
- (void)setCompletedGoalTypes:(int *)types count:(unsigned long long)count;
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

#endif /* FCCGoalCompletionProtobuf_h */