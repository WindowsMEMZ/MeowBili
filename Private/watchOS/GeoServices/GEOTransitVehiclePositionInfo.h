//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitVehiclePositionInfo_h
#define GEOTransitVehiclePositionInfo_h
@import Foundation;

#include "PBCodable.h"
#include "GEOTransitVehicleEntries-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, NSString, PBUnknownFields;

@interface GEOTransitVehiclePositionInfo : PBCodable<GEOTransitVehicleEntries, NSCopying>

@property (readonly, nonatomic) unsigned long long firstTripID;
@property (readonly, nonatomic) unsigned long long tripIDForNextUpcomingDeparture;
@property (readonly, copy, nonatomic) NSArray *tripIDs;
@property (readonly, copy, nonatomic) NSArray *upcomingTripIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *departureEntrys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)departureEntryType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)clearDepartureEntrys;
- (void)addDepartureEntry:(id)entry;
- (unsigned long long)departureEntrysCount;
- (id)departureEntryAtIndex:(unsigned long long)index;
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
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOTransitVehiclePositionInfo_h */