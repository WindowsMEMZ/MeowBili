//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDAmenityValue_h
#define GEOPDAmenityValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAmenityValue : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_amenityType; unsigned int x :1 has_amenityPresent; unsigned int x :1 read_unknownFields; unsigned int x :1 read_amenityId; unsigned int x :1 read_names; unsigned int x :1 read_symbolImageName; unsigned int x :1 read_vendorId; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasAmenityType;
@property (nonatomic) int amenityType;
@property (nonatomic) BOOL hasAmenityPresent;
@property (nonatomic) BOOL amenityPresent;
@property (readonly, nonatomic) BOOL hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) BOOL hasAmenityId;
@property (retain, nonatomic) NSString *amenityId;
@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) BOOL hasSymbolImageName;
@property (retain, nonatomic) NSString *symbolImageName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)nameType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)displayTitle;
- (id)init;
- (id)initWithData:(id)data;
- (id)amenityTypeAsString:(int)string;
- (int)StringAsAmenityType:(id)type;
- (void)clearNames;
- (void)addName:(id)name;
- (unsigned long long)namesCount;
- (id)nameAtIndex:(unsigned long long)index;
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

#endif /* GEOPDAmenityValue_h */