//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBPhotosKnowledgeGraphEnrichmentEvent_h
#define BMPBPhotosKnowledgeGraphEnrichmentEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface BMPBPhotosKnowledgeGraphEnrichmentEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 absoluteTimestamp; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (retain, nonatomic) NSMutableArray *topics;
@property (retain, nonatomic) NSMutableArray *entities;
@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) BOOL hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

/* class methods */
+ (Class)topicsType;
+ (Class)entitiesType;
+ (Class)locationsType;

/* instance methods */
- (void)clearTopics;
- (void)addTopics:(id)topics;
- (unsigned long long)topicsCount;
- (id)topicsAtIndex:(unsigned long long)index;
- (void)clearEntities;
- (void)addEntities:(id)entities;
- (unsigned long long)entitiesCount;
- (id)entitiesAtIndex:(unsigned long long)index;
- (void)clearLocations;
- (void)addLocations:(id)locations;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)index;
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

#endif /* BMPBPhotosKnowledgeGraphEnrichmentEvent_h */