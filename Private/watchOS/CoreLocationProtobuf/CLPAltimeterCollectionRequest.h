//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPAltimeterCollectionRequest_h
#define CLPAltimeterCollectionRequest_h
@import Foundation;

#include "PBRequest.h"
#include "CLPContext.h"
#include "CLPLocation.h"
#include "CLPMeta.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CLPAltimeterCollectionRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 startTimestamp; unsigned int x :1 stopTimestamp; unsigned int x :1 collectionType; } _has;
}

@property (readonly, nonatomic) BOOL hasMeta;
@property (retain, nonatomic) CLPMeta *meta;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) BOOL hasStopTimestamp;
@property (nonatomic) double stopTimestamp;
@property (nonatomic) BOOL hasCollectionType;
@property (nonatomic) int collectionType;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) CLPContext *context;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (retain, nonatomic) NSMutableArray *pressures;
@property (retain, nonatomic) NSMutableArray *wifiScans;
@property (retain, nonatomic) NSMutableArray *locations;

/* class methods */
+ (Class)pressureType;
+ (Class)wifiScanType;
+ (Class)locationsType;

/* instance methods */
- (id)collectionTypeAsString:(int)string;
- (int)StringAsCollectionType:(id)type;
- (void)clearPressures;
- (void)addPressure:(id)pressure;
- (unsigned long long)pressuresCount;
- (id)pressureAtIndex:(unsigned long long)index;
- (void)clearWifiScans;
- (void)addWifiScan:(id)scan;
- (unsigned long long)wifiScansCount;
- (id)wifiScanAtIndex:(unsigned long long)index;
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

#endif /* CLPAltimeterCollectionRequest_h */