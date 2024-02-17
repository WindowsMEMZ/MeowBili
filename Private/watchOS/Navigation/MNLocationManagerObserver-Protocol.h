//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNLocationManagerObserver_Protocol_h
#define MNLocationManagerObserver_Protocol_h
@import Foundation;

@protocol MNLocationManagerObserver <NSObject>
/* instance methods */
- (void)locationManagerUpdatedLocation:(id)location;
- (void)locationManagerFailedToUpdateLocation:(id)location withError:(id)error;
- (void)locationManagerDidReset:(id)reset;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)updates;
- (void)locationManagerDidPauseLocationUpdates:(id)updates;
- (void)locationManagerDidResumeLocationUpdates:(id)updates;
- (void)locationManager:(id)manager didUpdateVehicleSpeed:(double)speed timestamp:(id)timestamp;
- (void)locationManager:(id)manager didUpdateVehicleHeading:(double)heading timestamp:(id)timestamp;
@optional
/* instance methods */
- (void)locationManager:(id)manager didEnterRegion:(id)region;
- (void)locationManager:(id)manager didExitRegion:(id)region;
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)region withError:(id)error;
@end

#endif /* MNLocationManagerObserver_Protocol_h */