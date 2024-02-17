//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOETARequest_h
#define GEOETARequest_h
@import Foundation;

#include "PBRequest.h"
#include "GEOAdditionalEnabledMarkets.h"
#include "GEOAutomobileOptions.h"
#include "GEOClientCapabilities.h"
#include "GEOCommonOptions.h"
#include "GEOCyclingOptions.h"
#include "GEOLocation.h"
#include "GEOOriginalWaypointRoute.h"
#include "GEOPDABClientDatasetMetadata.h"
#include "GEOPathComputationOptions.h"
#include "GEOPrivacyMetadata.h"
#include "GEORecentLocationHistory.h"
#include "GEOTransitOptions.h"
#include "GEOWalkingOptions.h"
#include "GEOWaypoint.h"
#include "GEOWaypointTyped.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOETARequest : PBRequest<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_timepoint; unsigned int x :1 has_sessionID; unsigned int x :1 has_sessionRelativeTimestamp; unsigned int x :1 has_transportType; unsigned int x :1 has_walkingLimitMeters; unsigned int x :1 has_allowPartialResults; unsigned int x :1 has_includeDistance; unsigned int x :1 has_includeHistoricTravelTime; unsigned int x :1 has_includeEtaRouteIncidents; unsigned int x :1 has_includeRouteTrafficDetail; unsigned int x :1 has_includeShortTrafficSummary; unsigned int x :1 has_isFromAPI; unsigned int x :1 read_unknownFields; unsigned int x :1 read_abClientMetadata; unsigned int x :1 read_additionalEnabledMarkets; unsigned int x :1 read_automobileOptions; unsigned int x :1 read_clientCapabilities; unsigned int x :1 read_commonOptions; unsigned int x :1 read_cyclingOptions; unsigned int x :1 read_destinationWaypointTypeds; unsigned int x :1 read_destinations; unsigned int x :1 read_deviceHistoricalLocations; unsigned int x :1 read_intermediateWaypointTypeds; unsigned int x :1 read_lastKnownRoadLocation; unsigned int x :1 read_originWaypointTyped; unsigned int x :1 read_originalRouteID; unsigned int x :1 read_originalRouteZilchPoints; unsigned int x :1 read_originalWaypointRoute; unsigned int x :1 read_origin; unsigned int x :1 read_pathComputationOptions; unsigned int x :1 read_phoneticLocaleIdentifier; unsigned int x :1 read_privacyMetadata; unsigned int x :1 read_recentLocationHistory; unsigned int x :1 read_requestingAppId; unsigned int x :1 read_serviceTags; unsigned int x :1 read_sessionState; unsigned int x :1 read_trafficApiResponses; unsigned int x :1 read_trafficSnapshotIds; unsigned int x :1 read_transitOptions; unsigned int x :1 read_walkingOptions; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasTimepoint;
@property (nonatomic) struct GEOTimepoint { double x0; double x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } timepoint;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) GEOWaypoint *origin;
@property (retain, nonatomic) NSMutableArray *destinations;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (nonatomic) BOOL hasAllowPartialResults;
@property (nonatomic) BOOL allowPartialResults;
@property (nonatomic) BOOL hasIncludeDistance;
@property (nonatomic) BOOL includeDistance;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) BOOL hasWalkingLimitMeters;
@property (nonatomic) unsigned int walkingLimitMeters;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasOriginWaypointTyped;
@property (retain, nonatomic) GEOWaypointTyped *originWaypointTyped;
@property (retain, nonatomic) NSMutableArray *destinationWaypointTypeds;
@property (retain, nonatomic) NSMutableArray *intermediateWaypointTypeds;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL isFromAPI;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (retain, nonatomic) NSData *originalRouteID;
@property (retain, nonatomic) NSMutableArray *originalRouteZilchPoints;
@property (readonly, nonatomic) BOOL hasOriginalWaypointRoute;
@property (retain, nonatomic) GEOOriginalWaypointRoute *originalWaypointRoute;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (nonatomic) BOOL hasIncludeRouteTrafficDetail;
@property (nonatomic) BOOL includeRouteTrafficDetail;
@property (nonatomic) BOOL hasIncludeShortTrafficSummary;
@property (nonatomic) BOOL includeShortTrafficSummary;
@property (readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property (retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
@property (nonatomic) BOOL hasIncludeEtaRouteIncidents;
@property (nonatomic) BOOL includeEtaRouteIncidents;
@property (readonly, nonatomic) BOOL hasRecentLocationHistory;
@property (retain, nonatomic) GEORecentLocationHistory *recentLocationHistory;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (readonly, nonatomic) BOOL hasPathComputationOptions;
@property (retain, nonatomic) GEOPathComputationOptions *pathComputationOptions;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)destinationType;
+ (Class)destinationWaypointTypedType;
+ (Class)intermediateWaypointTypedType;
+ (Class)originalRouteZilchPointsType;
+ (Class)deviceHistoricalLocationType;
+ (Class)serviceTagType;
+ (Class)trafficApiResponsesType;
+ (Class)trafficSnapshotIdsType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)initWithQuickETARequest:(id)etarequest;
- (id)init;
- (id)initWithData:(id)data;
- (id)transportTypeAsString:(int)string;
- (int)StringAsTransportType:(id)type;
- (void)clearDestinations;
- (void)addDestination:(id)destination;
- (unsigned long long)destinationsCount;
- (id)destinationAtIndex:(unsigned long long)index;
- (void)clearDestinationWaypointTypeds;
- (void)addDestinationWaypointTyped:(id)typed;
- (unsigned long long)destinationWaypointTypedsCount;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)index;
- (void)clearIntermediateWaypointTypeds;
- (void)addIntermediateWaypointTyped:(id)typed;
- (unsigned long long)intermediateWaypointTypedsCount;
- (id)intermediateWaypointTypedAtIndex:(unsigned long long)index;
- (void)clearOriginalRouteZilchPoints;
- (void)addOriginalRouteZilchPoints:(id)points;
- (unsigned long long)originalRouteZilchPointsCount;
- (id)originalRouteZilchPointsAtIndex:(unsigned long long)index;
- (void)clearDeviceHistoricalLocations;
- (void)addDeviceHistoricalLocation:(id)location;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)index;
- (void)clearServiceTags;
- (void)addServiceTag:(id)tag;
- (unsigned long long)serviceTagsCount;
- (id)serviceTagAtIndex:(unsigned long long)index;
- (void)clearTrafficApiResponses;
- (void)addTrafficApiResponses:(id)responses;
- (unsigned long long)trafficApiResponsesCount;
- (id)trafficApiResponsesAtIndex:(unsigned long long)index;
- (void)clearTrafficSnapshotIds;
- (void)addTrafficSnapshotIds:(id)ids;
- (unsigned long long)trafficSnapshotIdsCount;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOETARequest_h */