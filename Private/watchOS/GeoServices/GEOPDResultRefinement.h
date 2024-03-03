//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDResultRefinement_h
#define GEOPDResultRefinement_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDResultRefinementGuidesHome.h"
#include "GEOPDResultRefinementMultiSelect.h"
#include "GEOPDResultRefinementRange.h"
#include "GEOPDResultRefinementSort.h"
#include "GEOPDResultRefinementToggle.h"
#include "NSCopying-Protocol.h"

@class PBDataReader, PBUnknownFields;

@interface GEOPDResultRefinement : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  PBUnknownFields *_unknownFields;
  GEOPDResultRefinementGuidesHome *_guidesHome;
  GEOPDResultRefinementMultiSelect *_multiSelect;
  GEOPDResultRefinementRange *_range;
  GEOPDResultRefinementSort *_sort;
  GEOPDResultRefinementToggle *_toggle;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  int _resultRefinementType;
  struct { unsigned int x :1 has_resultRefinementType; unsigned int x :1 read_unknownFields; unsigned int x :1 read_guidesHome; unsigned int x :1 read_multiSelect; unsigned int x :1 read_range; unsigned int x :1 read_sort; unsigned int x :1 read_toggle; unsigned int x :1 wrote_anyField; } _flags;
}

/* instance methods */
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

#endif /* GEOPDResultRefinement_h */