//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOABSecondPartyPlaceRequestClientMetaData_h
#define GEOABSecondPartyPlaceRequestClientMetaData_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDABClientDatasetMetadata.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_clientConfigs; unsigned int x :1 read_clientDatasetMetadata; unsigned int x :1 read_serverAbAssignments; unsigned int x :1 wrote_anyField; } _flags;
}

@property (retain, nonatomic) NSMutableArray *serverAbAssignments;
@property (retain, nonatomic) NSMutableArray *clientConfigs;
@property (readonly, nonatomic) BOOL hasClientDatasetMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *clientDatasetMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)serverAbAssignmentType;
+ (Class)clientConfigType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearServerAbAssignments;
- (void)addServerAbAssignment:(id)assignment;
- (unsigned long long)serverAbAssignmentsCount;
- (id)serverAbAssignmentAtIndex:(unsigned long long)index;
- (void)clearClientConfigs;
- (void)addClientConfig:(id)config;
- (unsigned long long)clientConfigsCount;
- (id)clientConfigAtIndex:(unsigned long long)index;
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

#endif /* GEOABSecondPartyPlaceRequestClientMetaData_h */