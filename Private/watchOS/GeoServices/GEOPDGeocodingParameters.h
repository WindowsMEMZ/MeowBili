//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDGeocodingParameters_h
#define GEOPDGeocodingParameters_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDViewportInfo.h"
#include "GEOStructuredAddress.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDGeocodingParameters : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  NSString *_queryString;
  GEOStructuredAddress *_structuredAddress;
  GEOPDViewportInfo *_viewportInfo;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  unsigned int _maxResults;
  struct { unsigned int x :1 has_maxResults; unsigned int x :1 read_unknownFields; unsigned int x :1 read_queryString; unsigned int x :1 read_structuredAddress; unsigned int x :1 read_viewportInfo; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
- (id)initWithForwardGeocodeAddress:(id)address addressString:(id)string maxResults:(unsigned int)results traits:(id)traits;
- (id)initWithForwardGeocodeAddress:(id)address maxResults:(unsigned int)results traits:(id)traits;
- (id)initWithForwardGeocodeAddressString:(id)string maxResults:(unsigned int)results traits:(id)traits;
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

#endif /* GEOPDGeocodingParameters_h */