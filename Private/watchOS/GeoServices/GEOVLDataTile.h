//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOVLDataTile_h
#define GEOVLDataTile_h
@import Foundation;

#include "PBCodable.h"
#include "GEOTileCoordinate.h"
#include "NSCopying-Protocol.h"

@class PBDataReader;

@interface GEOVLDataTile : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_buildIndexs; unsigned int x :1 read_precisionIndexs; unsigned int x :1 read_purposeDenylists; unsigned int x :1 read_coord; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasCoord;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (readonly, nonatomic) unsigned long long buildIndexsCount;
@property (readonly, nonatomic) unsigned int * buildIndexs;
@property (readonly, nonatomic) unsigned long long precisionIndexsCount;
@property (readonly, nonatomic) unsigned int * precisionIndexs;
@property (readonly, nonatomic) unsigned long long purposeDenylistsCount;
@property (readonly, nonatomic) int * purposeDenylists;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearBuildIndexs;
- (void)addBuildIndex:(unsigned int)index;
- (unsigned int)buildIndexAtIndex:(unsigned long long)index;
- (void)setBuildIndexs:(unsigned int *)indexs count:(unsigned long long)count;
- (void)clearPrecisionIndexs;
- (void)addPrecisionIndex:(unsigned int)index;
- (unsigned int)precisionIndexAtIndex:(unsigned long long)index;
- (void)setPrecisionIndexs:(unsigned int *)indexs count:(unsigned long long)count;
- (void)clearPurposeDenylists;
- (void)addPurposeDenylist:(int)denylist;
- (int)purposeDenylistAtIndex:(unsigned long long)index;
- (void)setPurposeDenylists:(int *)denylists count:(unsigned long long)count;
- (id)purposeDenylistsAsString:(int)string;
- (int)StringAsPurposeDenylists:(id)denylists;
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

#endif /* GEOVLDataTile_h */