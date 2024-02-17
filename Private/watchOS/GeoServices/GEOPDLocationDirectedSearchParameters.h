//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDLocationDirectedSearchParameters_h
#define GEOPDLocationDirectedSearchParameters_h
@import Foundation;

#include "PBCodable.h"
#include "GEOLatLng.h"
#include "GEOPDNearestTransitParameters.h"
#include "GEOPDViewportInfo.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDLocationDirectedSearchParameters : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  GEOPDNearestTransitParameters *_nearestTransitParameters;
  GEOLatLng *_searchLocation;
  NSString *_searchString;
  GEOPDViewportInfo *_viewportInfo;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  unsigned int _maxResults;
  int _searchType;
  int _sortOrder;
  struct { unsigned int x :1 has_maxResults; unsigned int x :1 has_searchType; unsigned int x :1 has_sortOrder; unsigned int x :1 read_unknownFields; unsigned int x :1 read_nearestTransitParameters; unsigned int x :1 read_searchLocation; unsigned int x :1 read_searchString; unsigned int x :1 read_viewportInfo; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)initWithSearchURLQuery:(id)urlquery coordinate:(struct { double x0; double x1; })coordinate maxResults:(unsigned int)results traits:(id)traits;
- (id)init;
- (id)initWithData:(id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GEOPDLocationDirectedSearchParameters_h */