//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOTransitNearbySchedule_h
#define _GEOTransitNearbySchedule_h
@import Foundation;

#include "GEOTransitNearbySchedule-Protocol.h"

@class NSArray, NSString;

@interface _GEOTransitNearbySchedule : NSObject<GEOTransitNearbySchedule>

@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)nearbyScheduleCategoriesFromSchedule:(id)schedule departureSequenceContainers:(id)containers scheduledDepartureSequences:(id)sequences incidents:(id)incidents;

/* instance methods */
- (id)initWithNearbySchedule:(id)schedule departureSequenceContainers:(id)containers scheduledDepartureSequences:(id)sequences incidents:(id)incidents stopInfo:(id)info;
@end

#endif /* _GEOTransitNearbySchedule_h */