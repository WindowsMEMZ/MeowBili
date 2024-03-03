//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDResultRefinementMetadata_h
#define GEOPDResultRefinementMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDResultRefinementMetadataDefault.h"
#include "GEOPDResultRefinementMetadataSort.h"
#include "NSCopying-Protocol.h"

@class PBDataReader, PBUnknownFields;

@interface GEOPDResultRefinementMetadata : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_metadataType; unsigned int x :1 read_unknownFields; unsigned int x :1 read_metadataDefault; unsigned int x :1 read_metadataSort; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasMetadataType;
@property (nonatomic) int metadataType;
@property (readonly, nonatomic) BOOL hasMetadataDefault;
@property (retain, nonatomic) GEOPDResultRefinementMetadataDefault *metadataDefault;
@property (readonly, nonatomic) BOOL hasMetadataSort;
@property (retain, nonatomic) GEOPDResultRefinementMetadataSort *metadataSort;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)metadataTypeAsString:(int)string;
- (int)StringAsMetadataType:(id)type;
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
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPDResultRefinementMetadata_h */