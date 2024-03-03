//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitSiriSync_h
#define AWDHomeKitSiriSync_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface AWDHomeKitSiriSync : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; unsigned int x :1 currentConfigurationVersion; unsigned int x :1 duration; unsigned int x :1 lastSyncedConfigurationVersion; unsigned int x :1 serverConfigurationVersion; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSMutableArray *reasons;
@property (nonatomic) BOOL hasCurrentConfigurationVersion;
@property (nonatomic) unsigned int currentConfigurationVersion;
@property (nonatomic) BOOL hasLastSyncedConfigurationVersion;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion;
@property (nonatomic) BOOL hasServerConfigurationVersion;
@property (nonatomic) unsigned int serverConfigurationVersion;

/* class methods */
+ (Class)reasonsType;

/* instance methods */
- (void)clearReasons;
- (void)addReasons:(id)reasons;
- (unsigned long long)reasonsCount;
- (id)reasonsAtIndex:(unsigned long long)index;
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

#endif /* AWDHomeKitSiriSync_h */