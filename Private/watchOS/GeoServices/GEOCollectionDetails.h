//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOCollectionDetails_h
#define GEOCollectionDetails_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOCollectionDetails : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_targetId; unsigned int x :1 has_currentlySaved; unsigned int x :1 read_collectionIds; unsigned int x :1 read_collectionCategory; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) unsigned long long collectionIdsCount;
@property (readonly, nonatomic) unsigned long long * collectionIds;
@property (readonly, nonatomic) BOOL hasCollectionCategory;
@property (retain, nonatomic) NSString *collectionCategory;
@property (nonatomic) BOOL hasTargetId;
@property (nonatomic) unsigned long long targetId;
@property (nonatomic) BOOL hasCurrentlySaved;
@property (nonatomic) BOOL currentlySaved;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearCollectionIds;
- (void)addCollectionId:(unsigned long long)id;
- (unsigned long long)collectionIdAtIndex:(unsigned long long)index;
- (void)setCollectionIds:(unsigned long long *)ids count:(unsigned long long)count;
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

#endif /* GEOCollectionDetails_h */