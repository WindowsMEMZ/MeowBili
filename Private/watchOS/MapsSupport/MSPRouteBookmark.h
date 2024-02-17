//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPRouteBookmark_h
#define MSPRouteBookmark_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPRouteBookmark : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasRouteRequestStorage;
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* instance methods */
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

#endif /* MSPRouteBookmark_h */