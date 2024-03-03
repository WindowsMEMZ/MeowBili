//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitTripStop_Protocol_h
#define GEOTransitTripStop_Protocol_h
@import Foundation;

@protocol GEOTransitTripStop <NSObject>

@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) NSObject<GEOTransitDeparture> *departure;
@property (readonly, nonatomic) unsigned long long stationIdentifier;
@property (readonly, nonatomic) GEOLatLng *location;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) BOOL hidden;

/* instance methods */
- (BOOL)isHidden;
@end

#endif /* GEOTransitTripStop_Protocol_h */